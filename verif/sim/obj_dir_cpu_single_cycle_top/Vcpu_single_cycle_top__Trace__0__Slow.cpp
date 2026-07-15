// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vcpu_single_cycle_top__Syms.h"


VL_ATTR_COLD void Vcpu_single_cycle_top___024root__trace_init_dtype____0(Vcpu_single_cycle_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vcpu_single_cycle_top___024root__trace_init_sub__TOP__riscv_pkg__0(Vcpu_single_cycle_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcpu_single_cycle_top___024root__trace_init_sub__TOP__0(Vcpu_single_cycle_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root__trace_init_sub__TOP__0\n"); );
    Vcpu_single_cycle_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "$rootio", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+22,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+23,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"instr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+25,0,"halt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+23,0,"rvfi_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"rvfi_insn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"rvfi_pc_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"rvfi_pc_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+27,0,"rvfi_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+28,0,"rvfi_rd_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+29,0,"rvfi_mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"rvfi_mem_rmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"rvfi_mem_wmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"rvfi_mem_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+33,0,"rvfi_mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "cpu_single_cycle_top", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+22,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+23,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"instr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+25,0,"halt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+23,0,"rvfi_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"rvfi_insn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"rvfi_pc_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"rvfi_pc_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+27,0,"rvfi_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+28,0,"rvfi_rd_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+29,0,"rvfi_mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"rvfi_mem_rmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"rvfi_mem_wmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"rvfi_mem_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+33,0,"rvfi_mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"pc_plus4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+36,0,"branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 22,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"alu_input_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"alu_input_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"rvfi_rd_written",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "alu_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "branch_cmp_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"branch_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+36,0,"branch_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+37,0,"take_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "data_mem_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+75,0,"DMEM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+22,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+23,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+13,0,"mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+14,0,"memsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"addr_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+16,0,"addr_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "decoder_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"ctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 22,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "imm_gen_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "instr_mem_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"IMEM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+77,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "next_pc_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"pc_plus4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"rs1_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+17,0,"jalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+18,0,"jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+36,0,"branch_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"pc_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+38,0,"target_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"target_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+39,0,"take_redirect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "reg_file_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+78,0,"P_ENABLE_BYPASS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+22,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+23,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"wr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+21,0,"reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);

    Vcpu_single_cycle_top___024root__trace_init_dtype____0(vlSelf, tracep, "regs", 0, c+43, VerilatedTraceSigDirection::NONE);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "riscv_pkg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vcpu_single_cycle_top___024root__trace_init_sub__TOP__riscv_pkg__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vcpu_single_cycle_top___024root__trace_init_dtype_sub____0(Vcpu_single_cycle_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vcpu_single_cycle_top___024root__trace_init_dtype____0(Vcpu_single_cycle_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root__trace_init_dtype____0\n"); );
    Vcpu_single_cycle_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcpu_single_cycle_top___024root__trace_init_dtype_sub____0(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vcpu_single_cycle_top___024root__trace_init_dtype_sub____0(Vcpu_single_cycle_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root__trace_init_dtype_sub____0\n"); );
    Vcpu_single_cycle_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 31);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vcpu_single_cycle_top___024root__trace_init_sub__TOP__riscv_pkg__0(Vcpu_single_cycle_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root__trace_init_sub__TOP__riscv_pkg__0\n"); );
    Vcpu_single_cycle_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+79,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"INSTR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"REG_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+80,0,"REG_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+81,0,"RESET_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"OPC_LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+83,0,"OPC_MISC_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+84,0,"OPC_OP_IMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+85,0,"OPC_AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"OPC_STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+87,0,"OPC_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+88,0,"OPC_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"OPC_BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+90,0,"OPC_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+91,0,"OPC_JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+92,0,"OPC_SYSTEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+93,0,"F3_ADD_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+94,0,"F3_SLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+95,0,"F3_SLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"F3_SLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+97,0,"F3_XOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"F3_SR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+99,0,"F3_OR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+100,0,"F3_AND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+101,0,"F7_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+102,0,"F7_ALT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+93,0,"F3_BEQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+94,0,"F3_BNE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+97,0,"F3_BLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"F3_BGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+99,0,"F3_BLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+100,0,"F3_BGEU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+93,0,"F3_LB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+94,0,"F3_LH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+95,0,"F3_LW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+97,0,"F3_LBU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"F3_LHU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+93,0,"F3_SB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+94,0,"F3_SH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+95,0,"F3_SW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+93,0,"F3_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+93,0,"F3_PRIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+103,0,"SYS_ECALL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+104,0,"SYS_EBREAK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 11,0);
}

VL_ATTR_COLD void Vcpu_single_cycle_top___024root__trace_init_top(Vcpu_single_cycle_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root__trace_init_top\n"); );
    Vcpu_single_cycle_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcpu_single_cycle_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcpu_single_cycle_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vcpu_single_cycle_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu_single_cycle_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu_single_cycle_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcpu_single_cycle_top___024root__trace_register(Vcpu_single_cycle_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root__trace_register\n"); );
    Vcpu_single_cycle_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vcpu_single_cycle_top___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vcpu_single_cycle_top___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vcpu_single_cycle_top___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vcpu_single_cycle_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcpu_single_cycle_top___024root__trace_const_0_sub_0(Vcpu_single_cycle_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu_single_cycle_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root__trace_const_0\n"); );
    // Body
    Vcpu_single_cycle_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_single_cycle_top___024root*>(voidSelf);
    Vcpu_single_cycle_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vcpu_single_cycle_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu_single_cycle_top___024root__trace_const_0_sub_0(Vcpu_single_cycle_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root__trace_const_0_sub_0\n"); );
    Vcpu_single_cycle_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+75,(0x00000400U),32);
    bufp->fullIData(oldp+76,(0x00000401U),32);
    bufp->fullIData(oldp+77,(0x0000000bU),32);
    bufp->fullIData(oldp+78,(0U),32);
    bufp->fullIData(oldp+79,(0x00000020U),32);
    bufp->fullIData(oldp+80,(5U),32);
    bufp->fullIData(oldp+81,(0U),32);
    bufp->fullCData(oldp+82,(3U),7);
    bufp->fullCData(oldp+83,(0x0fU),7);
    bufp->fullCData(oldp+84,(0x13U),7);
    bufp->fullCData(oldp+85,(0x17U),7);
    bufp->fullCData(oldp+86,(0x23U),7);
    bufp->fullCData(oldp+87,(0x33U),7);
    bufp->fullCData(oldp+88,(0x37U),7);
    bufp->fullCData(oldp+89,(0x63U),7);
    bufp->fullCData(oldp+90,(0x67U),7);
    bufp->fullCData(oldp+91,(0x6fU),7);
    bufp->fullCData(oldp+92,(0x73U),7);
    bufp->fullCData(oldp+93,(0U),3);
    bufp->fullCData(oldp+94,(1U),3);
    bufp->fullCData(oldp+95,(2U),3);
    bufp->fullCData(oldp+96,(3U),3);
    bufp->fullCData(oldp+97,(4U),3);
    bufp->fullCData(oldp+98,(5U),3);
    bufp->fullCData(oldp+99,(6U),3);
    bufp->fullCData(oldp+100,(7U),3);
    bufp->fullCData(oldp+101,(0U),7);
    bufp->fullCData(oldp+102,(0x20U),7);
    bufp->fullSData(oldp+103,(0U),12);
    bufp->fullSData(oldp+104,(1U),12);
}

VL_ATTR_COLD void Vcpu_single_cycle_top___024root__trace_full_0_sub_0(Vcpu_single_cycle_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu_single_cycle_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root__trace_full_0\n"); );
    // Body
    Vcpu_single_cycle_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_single_cycle_top___024root*>(voidSelf);
    Vcpu_single_cycle_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vcpu_single_cycle_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu_single_cycle_top___024root__trace_full_dtype____0(Vcpu_single_cycle_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar);

VL_ATTR_COLD void Vcpu_single_cycle_top___024root__trace_full_0_sub_0(Vcpu_single_cycle_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root__trace_full_0_sub_0\n"); );
    Vcpu_single_cycle_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+0,(vlSelfRef.cpu_single_cycle_top__DOT__pc),32);
    bufp->fullIData(oldp+1,(((IData)(4U) + vlSelfRef.cpu_single_cycle_top__DOT__pc)),32);
    bufp->fullIData(oldp+2,(vlSelfRef.cpu_single_cycle_top__DOT__imm_gen_i__DOT__imm),32);
    bufp->fullIData(oldp+3,(vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__wr_data),32);
    bufp->fullIData(oldp+4,(vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__result),32);
    bufp->fullIData(oldp+5,(vlSelfRef.cpu_single_cycle_top__DOT__ctrl),23);
    bufp->fullIData(oldp+6,(vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__a),32);
    bufp->fullIData(oldp+7,(vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__b),32);
    bufp->fullBit(oldp+8,(vlSelfRef.cpu_single_cycle_top__DOT__rvfi_rd_written));
    bufp->fullCData(oldp+9,((0x0000000fU & (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                            >> 0x0000000dU))),4);
    bufp->fullCData(oldp+10,((7U & (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                    >> 4U))),3);
    bufp->fullBit(oldp+11,((1U & (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                  >> 7U))));
    bufp->fullBit(oldp+12,((1U & (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                  >> 0x00000015U))));
    bufp->fullBit(oldp+13,((1U & (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                  >> 0x00000014U))));
    bufp->fullCData(oldp+14,((7U & (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                    >> 0x00000011U))),3);
    bufp->fullSData(oldp+15,((0x000003ffU & (vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__result 
                                             >> 2U))),10);
    bufp->fullCData(oldp+16,((3U & vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__result)),2);
    bufp->fullBit(oldp+17,((1U & (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                  >> 2U))));
    bufp->fullBit(oldp+18,((1U & (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                  >> 3U))));
    bufp->fullIData(oldp+19,(vlSelfRef.cpu_single_cycle_top__DOT__next_pc_i__DOT__target_raw),32);
    bufp->fullIData(oldp+20,(((0xfffffffeU & vlSelfRef.cpu_single_cycle_top__DOT__next_pc_i__DOT__target_raw) 
                              | (1U & ((~ (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                           >> 2U)) 
                                       & vlSelfRef.cpu_single_cycle_top__DOT__next_pc_i__DOT__target_raw)))),32);
    bufp->fullBit(oldp+21,((1U & (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                  >> 0x00000016U))));
    bufp->fullBit(oldp+22,(vlSelfRef.clk));
    bufp->fullBit(oldp+23,(vlSelfRef.rst_n));
    bufp->fullIData(oldp+24,(vlSelfRef.instr_out),32);
    bufp->fullBit(oldp+25,(vlSelfRef.halt));
    bufp->fullIData(oldp+26,(vlSelfRef.rvfi_pc_wdata),32);
    bufp->fullCData(oldp+27,(vlSelfRef.rvfi_rd_addr),5);
    bufp->fullIData(oldp+28,(vlSelfRef.rvfi_rd_wdata),32);
    bufp->fullIData(oldp+29,(vlSelfRef.rvfi_mem_addr),32);
    bufp->fullCData(oldp+30,(vlSelfRef.rvfi_mem_rmask),4);
    bufp->fullCData(oldp+31,(vlSelfRef.rvfi_mem_wmask),4);
    bufp->fullIData(oldp+32,(vlSelfRef.rvfi_mem_rdata),32);
    bufp->fullIData(oldp+33,(vlSelfRef.rvfi_mem_wdata),32);
    bufp->fullIData(oldp+34,(vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                             [(0x0000001fU & (vlSelfRef.instr_out 
                                              >> 0x0000000fU))]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                             [(0x0000001fU & (vlSelfRef.instr_out 
                                              >> 0x00000014U))]),32);
    bufp->fullBit(oldp+36,(((vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                             >> 7U) & ((0x00000040U 
                                        & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                                        ? ((~ (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                               >> 5U)) 
                                           & ((0x00000010U 
                                               & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                                               ? (vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                  [
                                                  (0x0000001fU 
                                                   & (vlSelfRef.instr_out 
                                                      >> 0x0000000fU))] 
                                                  >= vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                  [
                                                  (0x0000001fU 
                                                   & (vlSelfRef.instr_out 
                                                      >> 0x00000014U))])
                                               : (vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                  [
                                                  (0x0000001fU 
                                                   & (vlSelfRef.instr_out 
                                                      >> 0x0000000fU))] 
                                                  < vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                  [
                                                  (0x0000001fU 
                                                   & (vlSelfRef.instr_out 
                                                      >> 0x00000014U))])))
                                        : ((0x00000020U 
                                            & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                                            ? ((0x00000010U 
                                                & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                                                ? VL_GTES_III(32, vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                              [
                                                              (0x0000001fU 
                                                               & (vlSelfRef.instr_out 
                                                                  >> 0x0000000fU))], vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                              [
                                                              (0x0000001fU 
                                                               & (vlSelfRef.instr_out 
                                                                  >> 0x00000014U))])
                                                : VL_LTS_III(32, vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                             [
                                                             (0x0000001fU 
                                                              & (vlSelfRef.instr_out 
                                                                 >> 0x0000000fU))], vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                             [
                                                             (0x0000001fU 
                                                              & (vlSelfRef.instr_out 
                                                                 >> 0x00000014U))]))
                                            : ((0x00000010U 
                                                & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                                                ? (vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                   [
                                                   (0x0000001fU 
                                                    & (vlSelfRef.instr_out 
                                                       >> 0x0000000fU))] 
                                                   != vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                   [
                                                   (0x0000001fU 
                                                    & (vlSelfRef.instr_out 
                                                       >> 0x00000014U))])
                                                : (vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                   [
                                                   (0x0000001fU 
                                                    & (vlSelfRef.instr_out 
                                                       >> 0x0000000fU))] 
                                                   == vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                   [
                                                   (0x0000001fU 
                                                    & (vlSelfRef.instr_out 
                                                       >> 0x00000014U))])))))));
    bufp->fullBit(oldp+37,(((0x00000040U & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                             ? ((~ (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                    >> 5U)) & ((0x00000010U 
                                                & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                                                ? (vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                   [
                                                   (0x0000001fU 
                                                    & (vlSelfRef.instr_out 
                                                       >> 0x0000000fU))] 
                                                   >= vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                   [
                                                   (0x0000001fU 
                                                    & (vlSelfRef.instr_out 
                                                       >> 0x00000014U))])
                                                : (vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                   [
                                                   (0x0000001fU 
                                                    & (vlSelfRef.instr_out 
                                                       >> 0x0000000fU))] 
                                                   < vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                   [
                                                   (0x0000001fU 
                                                    & (vlSelfRef.instr_out 
                                                       >> 0x00000014U))])))
                             : ((0x00000020U & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                                 ? ((0x00000010U & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                                     ? VL_GTES_III(32, vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                   [
                                                   (0x0000001fU 
                                                    & (vlSelfRef.instr_out 
                                                       >> 0x0000000fU))], vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                   [
                                                   (0x0000001fU 
                                                    & (vlSelfRef.instr_out 
                                                       >> 0x00000014U))])
                                     : VL_LTS_III(32, vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                  [
                                                  (0x0000001fU 
                                                   & (vlSelfRef.instr_out 
                                                      >> 0x0000000fU))], vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                  [
                                                  (0x0000001fU 
                                                   & (vlSelfRef.instr_out 
                                                      >> 0x00000014U))]))
                                 : ((0x00000010U & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                                     ? (vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                        [(0x0000001fU 
                                          & (vlSelfRef.instr_out 
                                             >> 0x0000000fU))] 
                                        != vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                        [(0x0000001fU 
                                          & (vlSelfRef.instr_out 
                                             >> 0x00000014U))])
                                     : (vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                        [(0x0000001fU 
                                          & (vlSelfRef.instr_out 
                                             >> 0x0000000fU))] 
                                        == vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                        [(0x0000001fU 
                                          & (vlSelfRef.instr_out 
                                             >> 0x00000014U))]))))));
    bufp->fullIData(oldp+38,(((4U & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                               ? vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                              [(0x0000001fU & (vlSelfRef.instr_out 
                                               >> 0x0000000fU))]
                               : vlSelfRef.cpu_single_cycle_top__DOT__pc)),32);
    bufp->fullBit(oldp+39,((1U & ((vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                   >> 3U) | ((vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                              >> 7U) 
                                             & ((0x00000040U 
                                                 & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                                                 ? 
                                                ((~ 
                                                  (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                                   >> 5U)) 
                                                 & ((0x00000010U 
                                                     & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                                                     ? 
                                                    (vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                     [
                                                     (0x0000001fU 
                                                      & (vlSelfRef.instr_out 
                                                         >> 0x0000000fU))] 
                                                     >= vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                     [
                                                     (0x0000001fU 
                                                      & (vlSelfRef.instr_out 
                                                         >> 0x00000014U))])
                                                     : 
                                                    (vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                     [
                                                     (0x0000001fU 
                                                      & (vlSelfRef.instr_out 
                                                         >> 0x0000000fU))] 
                                                     < vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                     [
                                                     (0x0000001fU 
                                                      & (vlSelfRef.instr_out 
                                                         >> 0x00000014U))])))
                                                 : 
                                                ((0x00000020U 
                                                  & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                                                  ? 
                                                 ((0x00000010U 
                                                   & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                                                   ? 
                                                  VL_GTES_III(32, vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                              [
                                                              (0x0000001fU 
                                                               & (vlSelfRef.instr_out 
                                                                  >> 0x0000000fU))], vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                              [
                                                              (0x0000001fU 
                                                               & (vlSelfRef.instr_out 
                                                                  >> 0x00000014U))])
                                                   : 
                                                  VL_LTS_III(32, vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                             [
                                                             (0x0000001fU 
                                                              & (vlSelfRef.instr_out 
                                                                 >> 0x0000000fU))], vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                             [
                                                             (0x0000001fU 
                                                              & (vlSelfRef.instr_out 
                                                                 >> 0x00000014U))]))
                                                  : 
                                                 ((0x00000010U 
                                                   & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                                                   ? 
                                                  (vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                   [
                                                   (0x0000001fU 
                                                    & (vlSelfRef.instr_out 
                                                       >> 0x0000000fU))] 
                                                   != vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                   [
                                                   (0x0000001fU 
                                                    & (vlSelfRef.instr_out 
                                                       >> 0x00000014U))])
                                                   : 
                                                  (vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                   [
                                                   (0x0000001fU 
                                                    & (vlSelfRef.instr_out 
                                                       >> 0x0000000fU))] 
                                                   == vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                   [
                                                   (0x0000001fU 
                                                    & (vlSelfRef.instr_out 
                                                       >> 0x00000014U))])))))))));
    bufp->fullCData(oldp+40,((0x0000001fU & (vlSelfRef.instr_out 
                                             >> 0x0000000fU))),5);
    bufp->fullCData(oldp+41,((0x0000001fU & (vlSelfRef.instr_out 
                                             >> 0x00000014U))),5);
    bufp->fullCData(oldp+42,((0x0000001fU & (vlSelfRef.instr_out 
                                             >> 7U))),5);
    Vcpu_single_cycle_top___024root__trace_full_dtype____0(vlSelf, bufp, 43, vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs);
}

VL_ATTR_COLD void Vcpu_single_cycle_top___024root__trace_full_dtype____0(Vcpu_single_cycle_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root__trace_full_dtype____0\n"); );
    Vcpu_single_cycle_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->fullIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->fullIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->fullIData(oldp+13,(__VdtypeVar[13]),32);
    bufp->fullIData(oldp+14,(__VdtypeVar[14]),32);
    bufp->fullIData(oldp+15,(__VdtypeVar[15]),32);
    bufp->fullIData(oldp+16,(__VdtypeVar[16]),32);
    bufp->fullIData(oldp+17,(__VdtypeVar[17]),32);
    bufp->fullIData(oldp+18,(__VdtypeVar[18]),32);
    bufp->fullIData(oldp+19,(__VdtypeVar[19]),32);
    bufp->fullIData(oldp+20,(__VdtypeVar[20]),32);
    bufp->fullIData(oldp+21,(__VdtypeVar[21]),32);
    bufp->fullIData(oldp+22,(__VdtypeVar[22]),32);
    bufp->fullIData(oldp+23,(__VdtypeVar[23]),32);
    bufp->fullIData(oldp+24,(__VdtypeVar[24]),32);
    bufp->fullIData(oldp+25,(__VdtypeVar[25]),32);
    bufp->fullIData(oldp+26,(__VdtypeVar[26]),32);
    bufp->fullIData(oldp+27,(__VdtypeVar[27]),32);
    bufp->fullIData(oldp+28,(__VdtypeVar[28]),32);
    bufp->fullIData(oldp+29,(__VdtypeVar[29]),32);
    bufp->fullIData(oldp+30,(__VdtypeVar[30]),32);
    bufp->fullIData(oldp+31,(__VdtypeVar[31]),32);
}
