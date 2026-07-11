# Phase 1 — Single-Cycle RV32I: Module-by-Module Breakdown

**Purpose of this phase:** an integration checkpoint, *not* a polished core. Everything except the top-level wiring carries forward unchanged into the Phase 2 pipeline. Build the functional units well (you keep them); treat the single-cycle top as throwaway (you delete/freeze it after Phase 2).

**Target: full RV32I base integer ISA (~40 instructions).** The complete instruction reference is in the next section — read it first so you know the whole target, then build the modules against it. Even aiming for the full ISA, build *incrementally*: get `addi lw sw beq jal add` integrating end-to-end as a first smoke test (proves the datapath wiring is sound), then fill in the remaining instructions, which are almost all just additional decoder cases plus a few datapath muxes. The order below reflects that — scaffolding first, then breadth.

**Two rules that hold for every module below:**
- Functional units are **combinational** and **standalone-testable**. The only sequential state in Phase 1 is the PC, the register file, and memory.
- Everything references `riscv_pkg` for encodings. No hardcoded opcodes scattered across files.

---

# Full RV32I Instruction Set — Complete Reference

RV32I base integer is ~40 instructions across **6 encoding formats** and **11 opcodes**. Everything below must decode and execute for the rv32ui test suite to pass. This section is the "what," the module sections after it are the "how."

## The 6 instruction formats

The genius of RISC-V encoding: rs1, rs2, and rd sit in **the same bit positions in every format that uses them**, and the immediate's sign bit is **always instruction bit 31**. That means your register file and immediate sign-extension don't need to know the format — the wiring is fixed, only the immediate *assembly* differs.

```
       31        25 24   20 19   15 14  12 11    7 6      0
R-type [  funct7   ][ rs2 ][ rs1 ][fun3][   rd   ][opcode]   reg-reg ALU
I-type [   imm[11:0]      ][ rs1 ][fun3][   rd   ][opcode]   ALU-imm, loads, JALR
S-type [ imm[11:5] ][ rs2 ][ rs1 ][fun3][imm[4:0]][opcode]   stores
B-type [imm[12|10:5]][rs2 ][ rs1 ][fun3][imm[4:1|11]][opcode] branches
U-type [        imm[31:12]              ][   rd   ][opcode]   LUI, AUIPC
J-type [   imm[20|10:1|11|19:12]        ][   rd   ][opcode]   JAL
```

**B and J scramble their immediate bits** (non-contiguous, LSB implicit and always 0 for 2-byte-aligned targets). This is the imm_gen bug hotspot — trace both by hand once.

## Opcode map (the 11 opcodes)

| opcode | mnemonic group | format | instructions |
|---|---|---|---|
| `0110011` | OP | R | ADD SUB SLL SLT SLTU XOR SRL SRA OR AND |
| `0010011` | OP-IMM | I | ADDI SLTI SLTIU XORI ORI ANDI SLLI SRLI SRAI |
| `0000011` | LOAD | I | LB LH LW LBU LHU |
| `0100011` | STORE | S | SB SH SW |
| `1100011` | BRANCH | B | BEQ BNE BLT BGE BLTU BGEU |
| `1101111` | JAL | J | JAL |
| `1100111` | JALR | I | JALR |
| `0110111` | LUI | U | LUI |
| `0010111` | AUIPC | U | AUIPC |
| `0001111` | MISC-MEM | I | FENCE |
| `1110011` | SYSTEM | I | ECALL EBREAK |

## Complete instruction semantics

### Register-register ALU (OP, R-type) — funct3 + funct7 select the op

| instr | funct3 | funct7 | operation |
|---|---|---|---|
| ADD | 000 | 0000000 | rd = rs1 + rs2 |
| SUB | 000 | 0100000 | rd = rs1 − rs2 |
| SLL | 001 | 0000000 | rd = rs1 << rs2[4:0] |
| SLT | 010 | 0000000 | rd = (signed rs1 < rs2) ? 1 : 0 |
| SLTU | 011 | 0000000 | rd = (unsigned rs1 < rs2) ? 1 : 0 |
| XOR | 100 | 0000000 | rd = rs1 ^ rs2 |
| SRL | 101 | 0000000 | rd = rs1 >> rs2[4:0] (logical) |
| SRA | 101 | 0100000 | rd = rs1 >>> rs2[4:0] (arithmetic) |
| OR | 110 | 0000000 | rd = rs1 \| rs2 |
| AND | 111 | 0000000 | rd = rs1 & rs2 |

**funct7 bit 30 is the discriminator** for two pairs only: ADD/SUB and SRL/SRA. Everywhere else funct7 is `0000000`. Your decoder keys the op off funct3, then checks bit 30 for those two cases.

### Register-immediate ALU (OP-IMM, I-type)

| instr | funct3 | notes |
|---|---|---|
| ADDI | 000 | rd = rs1 + sext(imm) |
| SLTI | 010 | signed set-less-than vs. sext(imm) |
| SLTIU | 011 | **imm is sign-extended, then compared unsigned** (see gotcha) |
| XORI | 100 | rd = rs1 ^ sext(imm) |
| ORI | 110 | rd = rs1 \| sext(imm) |
| ANDI | 111 | rd = rs1 & sext(imm) |
| SLLI | 001 | rd = rs1 << shamt; shamt = imm[4:0]; upper bits must be `0000000` |
| SRLI | 101 | logical; shamt = imm[4:0]; instr[30]=0 |
| SRAI | 101 | arithmetic; shamt = imm[4:0]; instr[30]=1 |

**Shift-immediate encoding gotcha:** SLLI/SRLI/SRAI are *nominally* I-type, but the immediate is not a 12-bit value — only the low 5 bits (`imm[4:0]`, instruction bits [24:20]) are the shift amount, and bit 30 selects logical vs. arithmetic (mirroring the R-type shifts). Treat the shift-immediates as a special decode case, not a generic I-type immediate. For RV32, shamt > 31 is illegal; instruction bits [31:25] must be `0000000` (or `0100000` for SRAI).

**SLTIU sign-then-unsigned gotcha:** the 12-bit immediate is **sign-extended to 32 bits first**, then the comparison is unsigned. So `SLTIU rd, rs1, -1` compares rs1 against `0xFFFFFFFF` (the largest unsigned value) — it's `rd = (rs1 != 0xFFFFFFFF)` effectively. This trips people who assume "unsigned immediate" means zero-extend. It does not.

### Upper-immediate (U-type) — the two that need a datapath addition

| instr | operation |
|---|---|
| LUI | rd = imm[31:12] << 12  (lower 12 bits zero) |
| AUIPC | rd = PC + (imm[31:12] << 12) |

The U-type imm_gen output already places the 20 bits in [31:12] with zeros below, so no extra shift in hardware — imm_gen hands you the final value.

- **LUI** writes the immediate straight to rd. Implement as ALU `ADD` with **operand A = 0**, operand B = imm.
- **AUIPC** adds the upper immediate to the *current PC*. Implement as ALU `ADD` with **operand A = PC**, operand B = imm.

Both require an **operand-A source mux** on the ALU (select among rs1 / PC / zero) that you didn't need for the basic instructions. This is the one real datapath addition the full ISA forces beyond the narrow set — see the ctrl bundle update below.

### Jumps

| instr | format | target | link value written to rd |
|---|---|---|---|
| JAL | J | PC + sext(imm) | PC + 4 |
| JALR | I | (rs1 + sext(imm)) **& ~1** | PC + 4 |

- **JAL** target is PC-relative. **JALR** target is register-relative (base = rs1, not PC).
- **JALR clears the low bit** of the computed target (`& 0xFFFFFFFE`) — a spec requirement. Miss it and indirect jumps/returns land one byte off.
- Both write the return address (PC+4) to rd. `jal x0, ...` / `jalr x0, ...` discard the link (x0 write is dropped by the regfile) — this is how a plain unconditional jump / `ret` is encoded.

### Branches (B-type) — condition from funct3

| instr | funct3 | taken when |
|---|---|---|
| BEQ | 000 | rs1 == rs2 |
| BNE | 001 | rs1 != rs2 |
| BLT | 100 | signed rs1 < rs2 |
| BGE | 101 | signed rs1 >= rs2 |
| BLTU | 110 | unsigned rs1 < rs2 |
| BGEU | 111 | unsigned rs1 >= rs2 |

Target = PC + sext(imm) when taken, else PC + 4. Signed/unsigned split again (BLT/BGE signed, BLTU/BGEU unsigned) — same trap as ALU SLT/SLTU.

### Loads (I-type) and Stores (S-type) — full sub-word access required

| load | funct3 | result | store | funct3 | writes |
|---|---|---|---|---|---|
| LB | 000 | sign-extended byte | SB | 000 | low byte |
| LH | 001 | sign-extended half | SH | 001 | low half |
| LW | 010 | full word | SW | 010 | full word |
| LBU | 100 | zero-extended byte | | | |
| LHU | 101 | zero-extended half | | | |

Address = rs1 + sext(imm) for both. **funct3 encodes both size and signedness for loads.** LB/LH sign-extend; LBU/LHU zero-extend; LW is the full word. Stores need **byte-lane write enables** so SB/SH only modify the addressed bytes without disturbing neighbors (read-modify-write, or a byte-writable memory). This is real work — see the dmem module.

### FENCE (MISC-MEM) — a NOP on this core

| instr | funct3 | behavior on a single-hart in-order core |
|---|---|---|
| FENCE | 000 | treat as NOP |

FENCE orders memory operations across harts / against devices. Your Phase 1 core is single-hart, in-order, single memory with no reordering, so there is nothing to order — **decode it and do nothing** (advance PC+4, no register or memory effect). You still must *decode* it (not trap on it), because compiled programs and the ISA tests emit FENCEs. Full memory-ordering semantics only matter once you have caches/AXI and multiple requestors.

### ECALL / EBREAK (SYSTEM) — needed for the test harness

| instr | imm[11:0] | purpose |
|---|---|---|
| ECALL | 000000000000 | request to the environment (syscall) |
| EBREAK | 000000000001 | breakpoint / debugger trap |

Both share opcode `1110011` and funct3 `000`; the immediate field distinguishes them. **You must handle ECALL minimally in Phase 1** because the riscv-tests use it to signal test completion: the standard convention writes a pass/fail code to a register (`a0`/`gp`) and executes ECALL to halt. So your Phase 1 handling is: **detect ECALL and stop the simulation** (assert a `halt`/`done` signal the testbench watches), then check the result register. You do *not* need real trap handling, CSRs, or mtvec here — that is Phase 3E. EBREAK can be treated the same (halt) or as a NOP for now.

## What the full ISA adds to the datapath (vs. the basic subset)

Building the full ISA rather than a handful of instructions forces exactly these additions, and nothing more:

1. **Operand-A source mux** (rs1 / PC / zero) — for AUIPC (PC) and LUI (zero). The basic set only ever needed rs1.
2. **Shift-amount special-casing** in decode — SLLI/SRLI/SRAI take shamt from imm[4:0], and instr[30] selects arithmetic shifts (both immediate and register forms).
3. **funct7 bit-30 discrimination** — ADD/SUB and SRL/SRA share funct3; bit 30 picks.
4. **Full sub-word memory** — byte/half loads with sign/zero extension, byte-lane store enables.
5. **A `halt`/`done` output** — driven by ECALL, watched by the testbench to end the run and read the result.
6. **FENCE decoded as NOP** — present in the decode table, no datapath effect.

Everything else (branches, jumps, the logical/arithmetic ALU ops) is just more decoder cases feeding hardware you already have.

---

## 0. `riscv_pkg` (package) — build this first

The single source of truth for encodings. Everything imports it. It never changes across phases, so nail it once.

**Contents:**
- `XLEN = 32` parameter (parameterize even though it's always 32 — documents intent, costs nothing)
- Opcode localparams: `LUI=7'b0110111`, `AUIPC=0010111`, `JAL=1101111`, `JALR=1100111`, `BRANCH=1100011`, `LOAD=0000011`, `STORE=0100011`, `OP_IMM=0010011`, `OP=0110011`
- funct3 / funct7 constants you'll match on in decode
- `alu_op_e` enum: `ALU_ADD, ALU_SUB, ALU_AND, ALU_OR, ALU_XOR, ALU_SLL, ALU_SRL, ALU_SRA, ALU_SLT, ALU_SLTU`
- Typedefs: `logic [4:0]` reg address, `logic [XLEN-1:0]` word

**Gotcha:** decide enum-encoded `alu_op_e` here, not ad-hoc bit patterns in the ALU. When you add the M extension (Phase 3D) you extend the enum, and every match statement stays readable.

---

## 1. `alu` (combinational)

The arithmetic/logic workhorse. Reused verbatim in Phase 2.

**Interface:**
```
input  logic [XLEN-1:0] a, b
input  alu_op_e         op
output logic [XLEN-1:0] result
```

**Operations:** ADD, SUB, AND, OR, XOR, SLL, SRL, SRA, SLT (signed), SLTU (unsigned). Shifts use `b[4:0]` as the shift amount (only low 5 bits for RV32).

**Gotchas:**
- SRA (arithmetic right shift) needs a signed cast on the operand, else you get a logical shift. In SystemVerilog: `$signed(a) >>> b[4:0]`.
- SUB and the SLT comparisons: you can compute SLT as the sign of `a - b`, but do it carefully for signed vs. unsigned. Cleanest is to just write `$signed(a) < $signed(b)` for SLT and `a < b` for SLTU and let synthesis share the subtractor if it wants.
- The ALU does **not** decide *which* op to run — that's the decoder's job. Keep it a pure function of `(a, b, op)`.

**Test (unit):** directed TB sweeping each op with edge operands (0, -1, `INT_MIN`, `INT_MAX`, max unsigned). SRA and the two SLTs are where bugs hide — hit them hard.

---

## 2. `imm_gen` (combinational)

Extracts and sign-extends the immediate from the instruction. This is where the "bit scrambling" from Phase 0 lives.

**Interface:**
```
input  logic [31:0]     instr
output logic [XLEN-1:0] imm
```

**Behavior:** select the immediate format by opcode (I / S / B / U / J), reassemble the scattered bits, sign-extend from the correct bit.

**Gotchas (this is the highest-bug-density combinational module):**
- **B-type and J-type scramble the bits.** The immediate bits are not contiguous in the instruction — trace the encoding by hand once (you did this in Phase 0) and mirror it exactly.
- B and J immediates encode a **bit-0 that is always 0** (2-byte aligned targets), so the LSB is implicit. Get the shift right or every branch target is off by 2×.
- Sign extension is from the instruction's bit 31 in every format — that bit is deliberately placed so the sign is always in the same spot. Use it.

**Test (unit):** hand-encode a handful of instructions of each format from the spec, feed the raw 32-bit word, check the exact immediate. Include negative immediates (verify sign extension) and a max-magnitude branch offset.

---

## 3. `reg_file` (sequential)

32× XLEN register array, 2 read / 1 write. Architectural state — survives every phase.

**Interface:**
```
input  logic            clk
input  logic [4:0]      rs1_addr, rs2_addr, rd_addr
input  logic [XLEN-1:0] rd_data
input  logic            reg_write
output logic [XLEN-1:0] rs1_data, rs2_data
```

**Behavior:** reads are **combinational** (address in → data out same cycle). Write happens on the clock edge when `reg_write` is high.

**Gotchas:**
- **x0 is hardwired to zero.** Reads of address 0 return 0 regardless of what's stored; writes to address 0 are silently dropped. Enforce this in the module, not in the caller.
- Reset behavior: you generally don't need to reset the register array (programs shouldn't read before writing), but for clean waveforms and reproducible cosim, consider zeroing it.
- **Phase 2 preview (don't build now, just don't design yourself out of it):** the pipeline will need "write in first half of cycle, read in second half" so a WB-stage write is visible to a same-cycle ID read. In single-cycle this never comes up. Just keep the write logic simple and edge-triggered; you'll adjust in Phase 2.

**Test (unit):** write then read back; verify x0 stays zero after an attempted write; verify simultaneous read of two different registers.

---

## 4. `decoder` / control unit (combinational)

Instruction → control bundle (`ctrl_t`). The brain that tells every other module what to do. In Phase 2 this bundle rides the pipeline registers unchanged, so define it well now.

**Interface:**
```
input  logic [31:0] instr        // really just opcode/funct3/funct7 bits
output ctrl_t       ctrl
```

**The control bundle (`ctrl_t`, define in a `ctrl_pkg` from the start):**
- `reg_write` — does this instruction write rd?
- `mem_read`, `mem_write` — load / store
- `alu_op` — which ALU operation
- `alu_src_b` — second ALU operand is register rs2 (0) or immediate (1)
- `alu_src_a` — first ALU operand is rs1 / PC / zero (needed for AUIPC=PC, LUI=zero)
- `result_sel` — what gets written back: ALU result / memory data / PC+4 (JAL/JALR link)
- `mem_size` (funct3) — byte / half / word + signedness for loads/stores
- `branch` — conditional branch (condition then comes from `branch_cmp` + funct3)
- `jump` — JAL/JALR (unconditional); `jalr` sub-flag if you need the rs1-base + LSB-clear path
- `is_system` / `halt` — set on ECALL (and EBREAK) so the top can stop the sim
- (`fence` needs no bit — decode it to an all-default/NOP bundle: everything inactive, PC advances)

**Full-ISA coverage checklist for the decode table** — every one of these must produce a correct bundle: the 10 R-type OPs, 9 OP-IMM (including the three shift-immediates with their funct7/bit-30 handling), 5 loads, 3 stores, 6 branches, JAL, JALR, LUI, AUIPC, FENCE (→NOP), ECALL/EBREAK (→halt). That's the whole ISA; if the bundle is right for all of them, the datapath just executes.

**Gotchas:**
- Decide now: one flat decoder, or a two-level "main decode → alu_control" split (main decoder emits a coarse ALUOp, a small `alu_control` maps funct3/funct7 to the precise `alu_op`). For RV32I, **folding it into one decoder is fine and simpler.** The two-level split is a MIPS-textbook artifact; RISC-V's clean encoding doesn't need it. Mentioning it so you recognize it when H&P shows it.
- Every unused-in-this-instruction control bit must still have a **defined default** (usually 0/inactive), or you get latches and X-propagation. Set a full default bundle at the top, then override per opcode.
- `reg_write` must be 0 for stores and branches, or you corrupt registers.

**Test (unit):** feed one instruction per opcode class, check the full control bundle. This TB doubles as living documentation of your control table.

---

## 5. `branch_cmp` (combinational) — optional to split

Decides whether a conditional branch is taken. You can fold this into the ALU (produce a zero flag + SLT results and derive), but a dedicated comparator is clearer and it's tiny.

**Interface:**
```
input  logic [XLEN-1:0] a, b        // rs1, rs2
input  logic [2:0]      funct3      // which branch
output logic            take        // branch condition met
```

**Behavior:** BEQ (`a==b`), BNE (`a!=b`), BLT (signed `<`), BGE (signed `>=`), BLTU (unsigned `<`), BGEU (unsigned `>=`).

**Gotcha:** signed vs. unsigned again — BLT/BGE are signed, BLTU/BGEU are unsigned. Same trap as the ALU's SLT/SLTU.

**Narrow-subset note:** if your smoke test only has BEQ, this is one comparator line. Broaden when you broaden the ISA.

---

## 6. `imem` — instruction memory (combinational read)

**Interface:**
```
input  logic [XLEN-1:0] addr        // PC
output logic [31:0]     instr
```

**Behavior:** loaded from a hex file via `$readmemh` at sim start. Combinational read: address in → instruction out same cycle (this is what makes it single-cycle).

**Gotchas:**
- Word-addressed vs. byte-addressed: the PC counts bytes, but your memory array is indexed by word. Index with `addr[N:2]` (drop the low 2 bits — instructions are 4-byte aligned in RV32I base).
- `$readmemh` needs the file in the right format and path. Get the toolchain to emit a `.hex` (objcopy → verilog hex, or a small script). This is a common first-integration snag.

**Test:** part of the top-level smoke test — load a tiny program, single-step, confirm the right instructions come out.

---

## 7. `dmem` — data memory (sequential write, combinational read)

**Interface:**
```
input  logic            clk
input  logic [XLEN-1:0] addr, wdata
input  logic            mem_read, mem_write
input  logic [2:0]      funct3       // size + signedness for loads
output logic [XLEN-1:0] rdata
```

**Behavior:** combinational read, edge-triggered write. `funct3` selects access size and sign.

**Gotchas (full ISA requires all of this):**
- **Sub-word access is the fiddly part and it's mandatory for the full ISA:** LB/LBU/LH/LHU/LW and SB/SH/SW. Byte/half loads mask the addressed bytes then sign-extend (LB/LH) or zero-extend (LBU/LHU) per funct3. Stores need **byte-lane write enables** so SB/SH modify only the addressed bytes: either a byte-writable memory array, or read-modify-write the containing word.
- **Address alignment:** LW/SW expect 4-byte alignment, LH/SH 2-byte. The base ISA technically requires alignment (misaligned access is an exception in Phase 3E); for Phase 1 you can assume the test programs are aligned and not bother trapping. Just be aware of it.
- Word-index the array with `addr[N:2]`, then use `addr[1:0]` to select the byte/half lane within the word.
- **Incremental tip (not a shortcut you keep):** it's fine to get LW/SW integrating *first* so the datapath comes up, then immediately add the byte/half lanes — but the full ISA endpoint needs all eight load/store instructions.

**Test:** store/load a word; LB of a negative byte (sign extension); LBU (zero extension); LH/LHU at both half-word offsets; SB/SH that must *not* corrupt adjacent bytes in the same word (the byte-enable correctness test).

---

## 8. `core_top_singlecycle` — datapath wiring (the throwaway)

Wires all of the above into one long combinational path with the PC as the only new sequential element. This is the file you freeze after Phase 2. Don't over-invest.

**What lives here:**
- **PC register** — the sequential element. On each clock, PC ← next_PC.
- **PC+4 adder** — default next instruction.
- **Operand-A source mux** (full-ISA addition): feeds the ALU's first input with rs1 (normal), PC (AUIPC), or zero (LUI), selected by `alu_src_a`.
- **Operand-B source mux:** rs2 (register ops) or immediate (`alu_src_b`).
- **Branch/jump target logic:**
  - Branch target = `PC + imm` (B-type)
  - JAL target = `PC + imm` (J-type)
  - JALR target = `(rs1 + imm) & ~1` — **the low bit is cleared** (spec requirement); forget this and indirect jumps/returns land wrong.
- **Next-PC mux:** selects PC+4, branch target (if `branch && take`), or jump target (if `jump`).
- **LUI/AUIPC** need no new writeback path — they flow through the ALU (A=zero+imm, or A=PC+imm) and land in rd via the normal ALU-result route.
- The link value for JAL/JALR is **PC+4**, routed through `result_sel` to rd.
- **`halt` output** — asserted when the decoder flags ECALL/EBREAK; the testbench watches this to end the run and read the result register (`a0`/`gp` per riscv-tests convention).

**Wiring path (single cycle):**
```
PC → imem → decoder + regfile + imm_gen → ALU / branch_cmp → dmem → writeback mux → regfile
                                                    ↓
                                          next-PC mux → PC
```

**Gotchas:**
- JALR target uses `rs1`, not PC — different base than JAL. Easy to wire wrong.
- The writeback mux (`result_sel`) must route PC+4 for jumps, memory data for loads, ALU result otherwise.
- x0: already handled in regfile, but double-check a `jal x0, ...` (a plain jump, discarding the link) doesn't try to write x0.

---

## Build & test order (do it in this sequence)

1. `riscv_pkg` + `ctrl_pkg` — foundations (all encodings, the full `ctrl_t`)
2. `alu`, `imm_gen` — unit-test standalone (all 10 ALU ops incl. SRA/SLT/SLTU; all 5 imm formats incl. B/J scramble)
3. `reg_file` — unit-test (x0 behavior)
4. `decoder` — unit-test the **full** control table (all ~40 instructions → correct bundle)
5. `imem`, `dmem` — bring up LW/SW, then immediately add byte/half lanes + sign/zero extension
6. `core_top_singlecycle` — wire it (incl. operand-A mux, halt); run a first program (array-sum → known address)
7. Add `branch_cmp` + all 6 branches, then JAL/JALR **last** (target logic is the most error-prone)
8. Fill in the rest: LUI, AUIPC, all shift variants, remaining ALU-imm, FENCE (NOP), ECALL (halt)
9. Run `riscv-tests` rv32ui suite — pass **all** of them (this is the full-ISA bar)
10. One C program (Fibonacci or array-sum), result checked at a known memory address

**Milestone / resume line:** *Single-cycle RV32I core passing the official RISC-V ISA test suite.*

---

## What carries into Phase 2 (so you build it once)

| Module | Reused in Phase 2? |
|---|---|
| `riscv_pkg`, `ctrl_pkg` | Yes, unchanged |
| `alu`, `imm_gen`, `branch_cmp` | Yes, unchanged (combinational) |
| `reg_file` | Yes (minor write-first tweak for pipeline) |
| `decoder` → `ctrl_t` bundle | Yes — the bundle now rides pipeline registers |
| `imem`, `dmem` | Yes (add a `ready` handshake in Phase 2 even if tied high) |
| `core_top_singlecycle` | **No — throwaway.** Replaced by `core_top_pipeline` |

The only genuinely single-cycle-specific work is the top-level PC/next-PC wiring. Everything else is Phase 2 work you're doing early — which is exactly why compressing (not skipping) Phase 1 is the right call.
