# RISC-V CPU Project Plan

**Goal:** Build a pipelined RV32I core with progressively deeper features. Each phase is a self-contained, resume-worthy milestone. Verification stays lightweight (directed tests + Spike co-simulation), with a parallel UVM track for targeted learning.

**One repo. Git tag per phase. README with block diagram and results table.**

---

## Phase 0 — Prep (~5-8 hrs)

**Learn:**
- RV32I unprivileged spec (the ~40 base instructions, R/I/S/B/U/J encodings)
- Immediate encoding for B/J types (bit scrambling — trace it by hand once)
- Single-cycle datapath on paper (Harris & Harris Ch. 6-7 or P&H Ch. 4)

**Set up:**
- Verilator (or Icarus) + GTKWave
- RISC-V GCC toolchain (`riscv64-unknown-elf-gcc -march=rv32i -mabi=ilp32`)
- Spike (reference simulator) — your source of truth
- Clone `riscv-tests` repo

**Done when:** you can hand-decode a few instructions from hex and predict what Spike does with them.

---

## Phase 1 — Single-Cycle RV32I Core (~15-25 hrs)

Everything in one long cycle. No pipelining, no hazards. This is scaffolding — its job is to make you learn the ISA cold. Don't polish it.

**Build order:**
1. ALU + immediate generator (combinational, test standalone)
2. Register file — 2R/1W, x0 hardwired to zero
3. Decoder / control unit (instruction → control signal table)
4. Datapath: PC, instruction ROM (`$readmemh`), data memory, wire together
5. Branches + jumps last (JAL, JALR, branch compares)

```
        +--------+     +--------+     +-----+     +--------+
  PC -->| I-MEM  |---->| DECODE |---->| ALU |---->| D-MEM  |--> WB
        +--------+     |  +RF   |     +-----+     +--------+
                       +--------+
              (all in one cycle)
```

**Testing:**
- Per-module directed testbenches for ALU, regfile, imm-gen
- riscv-tests ISA suite (rv32ui) — pass all of them
- One small C program (e.g., Fibonacci, result written to a known memory address; testbench checks the value)

**Milestone / resume line:** *Single-cycle RV32I core passing the official RISC-V ISA test suite.*

---

## Phase 2 — 5-Stage Pipeline (~30-50 hrs) — THE ANCHOR

Convert to IF / ID / EX / MEM / WB.

```
  +----+   +----+   +----+   +-----+   +----+
  | IF |-->| ID |-->| EX |-->| MEM |-->| WB |
  +----+   +----+   +----+   +-----+   +----+
              |        ^  ^      |
              |        |  +------+   forwarding paths
              |        +---------+
              v
        hazard unit (stall / flush / forward select)
```

**Build order:**
1. Insert pipeline registers, ignore hazards, watch it break in waveforms (instructive on purpose)
2. Forwarding unit: EX/MEM→EX and MEM/WB→EX, newer-producer-wins priority, never forward x0
3. Hazard detection: load-use stall (one bubble)
4. Control hazards: flush on taken branch first, then add a 2-bit saturating counter predictor + small BTB

**Testing:**
- riscv-tests again (now they stress hazards)
- Hand-written hazard corner tests: back-to-back RAW, load-use, branch-after-load, forwarding into store data
- **Spike co-simulation (start here, keep forever):** testbench runs Spike in lockstep via DPI-C or log-diff; compare PC + register writes at every retired instruction. This is how industry verifies cores and catches bugs waveform-staring never will.
- Run CoreMark or Dhrystone; record CPI

**Milestone / resume line:** *5-stage pipelined RV32I core with forwarding, hazard detection, and dynamic branch prediction; lockstep-verified against Spike; CPI of X on CoreMark.*

---

## Phase 3 — Depth Projects (independent, pick order freely)

Each is self-contained and adds a resume bullet. Recommended order: 3A → 3C → 3B → others.

### 3A. Caches (~25-40 hrs) — highest value
- Direct-mapped I-cache + D-cache in front of a fixed-latency memory model (simulated "DRAM," e.g., 20 cycles)
- Pipeline stalls on miss; cache controller FSM (IDLE → MISS → FILL → WRITEBACK)
- Upgrade D-cache: 2-way set-associative, write-back, LRU

```
  CPU <--> [ I$ ]                +--------------+
  CPU <--> [ D$ ]  <---miss--->  | memory model |
            tag|data|V|D  FSM    | (20-cyc lat) |
                                 +--------------+
```

**Test:** array-sum program with working set > cache size; verify correctness via Spike cosim; report hit rate and CPI change.

### 3B. AXI4-Lite Memory Interface (~10-20 hrs)
- Wrap I/D memory ports in AXI4-Lite masters
- Simple interconnect + one peripheral (memory-mapped UART or timer)
- Reframes the core from "toy" to "SoC-ready IP"

**Test:** program prints "hello" over UART; directed testbench checks AXI handshakes (also the UVM target — see UVM track).

### 3C. Synthesis + FPGA Bring-Up (~10-20 hrs)
- Yosys, or Vivado targeting a cheap board (Arty A7)
- Fix synthesis warnings, close timing, find your critical path (likely forwarding muxes or branch resolution)
- Blink an LED / UART hello from the actual board

**Deliverable:** fmax, LUT/FF/BRAM counts in the README results table. Concrete numbers interviewers love.

### 3D. M Extension (~15-25 hrs)
- Single-cycle or 2-cycle multiplier; multi-cycle (iterative) divider
- Teaches variable-latency functional units + pipeline stall interaction (stepping stone to OoO thinking)

**Test:** rv32um test suite; C program with `*`, `/`, `%`.

### 3E. CSRs + Traps + Interrupts (~20-35 hrs)
- Machine-mode CSRs (mstatus, mtvec, mepc, mcause, mie, mip), ECALL/MRET, timer interrupt (mtime/mtimecmp)
- Separates "student core" from "core that could run an RTOS"

**Test:** rv32mi suite; program that takes a timer interrupt and returns cleanly.

### 3F. Better Branch Prediction (~10-15 hrs)
- Upgrade to gshare (global history XOR PC); add return address stack
- Measure misprediction rate before/after on CoreMark

**Test:** branch-heavy microbenchmark; report mispredict % and CPI delta.

### 3G. 2-Wide In-Order Superscalar (~40-70 hrs, ambitious)
- Dual fetch/decode/issue with scoreboard; structural hazard handling for shared units
- Far more tractable than full out-of-order, still teaches issue logic

**Test:** cosim still holds (in-order retire); measure IPC gain.

### 3H. Matmul Accelerator on the AXI Bus (~40-70 hrs, ambitious)
- Small systolic array or MAC unit as a memory-mapped AXI peripheral; CPU drives it via driver code
- "CPU + custom accelerator SoC" is a stronger story than a fancier CPU alone; directly relevant to AI-hardware roles

**Test:** compare accelerator matmul output vs. software matmul on the CPU; report speedup.

---

## Verification Strategy (non-UVM core flow)

| Layer | What | When |
|---|---|---|
| Unit directed TBs | ALU, regfile, imm-gen, cache FSM | Phase 1+ |
| ISA tests | riscv-tests (rv32ui/um/mi) | every phase |
| Spike co-simulation | lockstep PC + register-write compare | Phase 2 onward, permanent regression |
| Benchmarks | CoreMark / Dhrystone, CPI + fmax table | Phase 2 onward |

## Parallel UVM Track (separate learning project)

Don't UVM the whole CPU — industry doesn't verify cores that way, and it would stall your progress. Instead, once 3B exists:

1. Learn UVM basics (sequences, drivers, monitors, scoreboards, agents)
2. Build a **UVM agent for your AXI4-Lite interface**: driver + monitor + scoreboard, constrained-random read/write sequences against your bus + peripheral
3. Add functional coverage (address ranges, back-to-back transactions, response types)

This gives you a real, reusable UVM testbench on a real interface — its own resume line — while the CPU itself stays on the fast cosim flow.

---

## Repo Hygiene

Actual layout:

```
design/pkg/               riscv_pkg.sv, ctrl_pkg.sv — encodings and the ctrl_t bundle
design/src/               the functional units (alu, decoder, reg_file, ...)
design/                   cpu_single_cycle_top.sv   — the throwaway top

lint/                     cpu_rtl.f (filelist), waivers.vlt

verif/                    tb_cpu.cpp — the C++ harness
verif/sim/programs/       test program sources (.S)
verif/sim/runs/<name>/    per-run artifacts: .elf .hex, memory images, .vcd
verif/sim/obj_dir/        verilator build output

doc/                      plans, block diagrams, references
results/                  CPI / fmax / area numbers for the README table
Makefile                  make lint | lint-synth | sim | run | dump | clean
```

Program **sources** live in one place; every **artifact** a run produces lands in
that run's directory. So a run is reproducible and disposable — `make clean`
wipes `runs/` back to empty without touching a single source file.

Packages are `.sv`, not `.svh` — a `package` is a compilation unit, not an
include header, and tools that key off the extension will skip a `.svh`.

The filelist (`lint/cpu_rtl.f`) is the single source of truth for what the design
consists of; every tool (lint, sim, synth) is pointed at it rather than given
its own list. Paths in it are relative to the repo root, so tools run from there.

## Two build configurations

`RVFI` selects between them, and **both must lint clean**:

| target | `RVFI` | what it is |
|---|---|---|
| `make lint` | defined | the verification config — exposes the retirement interface |
| `make lint-synth` | undefined | what Phase 3C actually synthesizes; no RVFI hardware |

The RVFI ports exist only for verification. Guarding them means the FPGA build
never carries ~200 bits of flops that nothing on-chip reads.

- README: block diagram, feature list, results table (tests passed, CPI, fmax, area), build/run instructions
- Git tag per phase: `v1-single-cycle`, `v2-pipeline`, `v3a-caches`, ...
