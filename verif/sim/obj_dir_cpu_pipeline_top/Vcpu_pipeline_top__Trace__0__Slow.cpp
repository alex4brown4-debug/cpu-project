// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vcpu_pipeline_top__Syms.h"


VL_ATTR_COLD void Vcpu_pipeline_top___024root__trace_init_dtype____0(Vcpu_pipeline_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vcpu_pipeline_top___024root__trace_init_sub__TOP__riscv_pkg__0(Vcpu_pipeline_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcpu_pipeline_top___024root__trace_init_sub__TOP__0(Vcpu_pipeline_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root__trace_init_sub__TOP__0\n"); );
    Vcpu_pipeline_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "$rootio", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+87,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+88,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"instr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+90,0,"halt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+91,0,"rvfi_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+92,0,"rvfi_insn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+93,0,"rvfi_pc_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+94,0,"rvfi_pc_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+95,0,"rvfi_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"rvfi_rd_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+97,0,"rvfi_mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"rvfi_mem_rmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+99,0,"rvfi_mem_wmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+100,0,"rvfi_mem_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+101,0,"rvfi_mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+102,0,"perf_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+103,0,"perf_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "cpu_pipeline_top", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+87,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+88,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"instr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+90,0,"halt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+91,0,"rvfi_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+92,0,"rvfi_insn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+93,0,"rvfi_pc_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+94,0,"rvfi_pc_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+95,0,"rvfi_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"rvfi_rd_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+97,0,"rvfi_mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"rvfi_mem_rmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+99,0,"rvfi_mem_wmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+100,0,"rvfi_mem_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+101,0,"rvfi_mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+102,0,"perf_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+103,0,"perf_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+104,0,"if_id_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 96,0);
    VL_TRACE_DECL_WIDE(tracep,c+1,0,"if_id_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 96,0);
    VL_TRACE_DECL_WIDE(tracep,c+108,0,"id_ex_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 232,0);
    VL_TRACE_DECL_WIDE(tracep,c+5,0,"id_ex_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 232,0);
    VL_TRACE_DECL_WIDE(tracep,c+13,0,"ex_mem_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 222,0);
    VL_TRACE_DECL_WIDE(tracep,c+20,0,"ex_mem_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 222,0);
    VL_TRACE_DECL_WIDE(tracep,c+27,0,"mem_wb_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 294,0);
    VL_TRACE_DECL_WIDE(tracep,c+37,0,"mem_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 294,0);
    VL_TRACE_DECL_BIT(tracep,c+102,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"pc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+116,0,"pc_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+47,0,"pc_plus4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"if_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+103,0,"flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+103,0,"ex_redirect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"ex_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"id_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"id_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+117,0,"id_rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+118,0,"id_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"wb_rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+52,0,"wb_reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+53,0,"ex_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+54,0,"ex_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+55,0,"alu_input_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"alu_input_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"ex_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+58,0,"ex_branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"ex_next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+60,0,"mem_read_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+61,0,"mem_write_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"mem_rmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"mem_wmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+64,0,"rvfi_rd_written",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "alu_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+55,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+65,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "branch_cmp_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+53,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+54,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+66,0,"branch_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+67,0,"branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+58,0,"branch_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+68,0,"take_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "data_mem_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+151,0,"DMEM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+87,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+88,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+60,0,"mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+61,0,"mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+71,0,"memsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"addr_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+73,0,"addr_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "decoder_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"ctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "imm_gen_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "instr_mem_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+151,0,"IMEM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+152,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "next_pc_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+75,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"pc_plus4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+53,0,"rs1_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+77,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+78,0,"jalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+79,0,"jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+58,0,"branch_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"pc_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+80,0,"target_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+81,0,"target_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+83,0,"take_redirect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "reg_file_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+153,0,"P_ENABLE_BYPASS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+87,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+88,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+84,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+85,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"wr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+52,0,"reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+117,0,"rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+118,0,"rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);

    Vcpu_pipeline_top___024root__trace_init_dtype____0(vlSelf, tracep, "regs", 0, c+119, VerilatedTraceSigDirection::NONE);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "riscv_pkg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vcpu_pipeline_top___024root__trace_init_sub__TOP__riscv_pkg__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vcpu_pipeline_top___024root__trace_init_dtype_sub____0(Vcpu_pipeline_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vcpu_pipeline_top___024root__trace_init_dtype____0(Vcpu_pipeline_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root__trace_init_dtype____0\n"); );
    Vcpu_pipeline_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcpu_pipeline_top___024root__trace_init_dtype_sub____0(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vcpu_pipeline_top___024root__trace_init_dtype_sub____0(Vcpu_pipeline_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root__trace_init_dtype_sub____0\n"); );
    Vcpu_pipeline_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 31);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vcpu_pipeline_top___024root__trace_init_sub__TOP__riscv_pkg__0(Vcpu_pipeline_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root__trace_init_sub__TOP__riscv_pkg__0\n"); );
    Vcpu_pipeline_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+154,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+154,0,"INSTR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+154,0,"REG_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+155,0,"REG_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+156,0,"RESET_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+157,0,"OPC_LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+158,0,"OPC_MISC_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+159,0,"OPC_OP_IMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+160,0,"OPC_AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+161,0,"OPC_STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"OPC_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+163,0,"OPC_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+164,0,"OPC_BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+165,0,"OPC_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+166,0,"OPC_JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+167,0,"OPC_SYSTEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+168,0,"F3_ADD_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+169,0,"F3_SLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+170,0,"F3_SLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+171,0,"F3_SLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+172,0,"F3_XOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"F3_SR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+174,0,"F3_OR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+175,0,"F3_AND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+176,0,"F7_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"F7_ALT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+168,0,"F3_BEQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+169,0,"F3_BNE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+172,0,"F3_BLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"F3_BGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+174,0,"F3_BLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+175,0,"F3_BGEU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+168,0,"F3_LB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+169,0,"F3_LH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+170,0,"F3_LW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+172,0,"F3_LBU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"F3_LHU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+168,0,"F3_SB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+169,0,"F3_SH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+170,0,"F3_SW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+168,0,"F3_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+168,0,"F3_PRIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+178,0,"SYS_ECALL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+179,0,"SYS_EBREAK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 11,0);
}

VL_ATTR_COLD void Vcpu_pipeline_top___024root__trace_init_top(Vcpu_pipeline_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root__trace_init_top\n"); );
    Vcpu_pipeline_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcpu_pipeline_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcpu_pipeline_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vcpu_pipeline_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu_pipeline_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu_pipeline_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcpu_pipeline_top___024root__trace_register(Vcpu_pipeline_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root__trace_register\n"); );
    Vcpu_pipeline_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vcpu_pipeline_top___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vcpu_pipeline_top___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vcpu_pipeline_top___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vcpu_pipeline_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcpu_pipeline_top___024root__trace_const_0_sub_0(Vcpu_pipeline_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu_pipeline_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root__trace_const_0\n"); );
    // Body
    Vcpu_pipeline_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_pipeline_top___024root*>(voidSelf);
    Vcpu_pipeline_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vcpu_pipeline_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu_pipeline_top___024root__trace_const_0_sub_0(Vcpu_pipeline_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root__trace_const_0_sub_0\n"); );
    Vcpu_pipeline_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+151,(0x00000400U),32);
    bufp->fullIData(oldp+152,(0x0000000aU),32);
    bufp->fullIData(oldp+153,(1U),32);
    bufp->fullIData(oldp+154,(0x00000020U),32);
    bufp->fullIData(oldp+155,(5U),32);
    bufp->fullIData(oldp+156,(0U),32);
    bufp->fullCData(oldp+157,(3U),7);
    bufp->fullCData(oldp+158,(0x0fU),7);
    bufp->fullCData(oldp+159,(0x13U),7);
    bufp->fullCData(oldp+160,(0x17U),7);
    bufp->fullCData(oldp+161,(0x23U),7);
    bufp->fullCData(oldp+162,(0x33U),7);
    bufp->fullCData(oldp+163,(0x37U),7);
    bufp->fullCData(oldp+164,(0x63U),7);
    bufp->fullCData(oldp+165,(0x67U),7);
    bufp->fullCData(oldp+166,(0x6fU),7);
    bufp->fullCData(oldp+167,(0x73U),7);
    bufp->fullCData(oldp+168,(0U),3);
    bufp->fullCData(oldp+169,(1U),3);
    bufp->fullCData(oldp+170,(2U),3);
    bufp->fullCData(oldp+171,(3U),3);
    bufp->fullCData(oldp+172,(4U),3);
    bufp->fullCData(oldp+173,(5U),3);
    bufp->fullCData(oldp+174,(6U),3);
    bufp->fullCData(oldp+175,(7U),3);
    bufp->fullCData(oldp+176,(0U),7);
    bufp->fullCData(oldp+177,(0x20U),7);
    bufp->fullSData(oldp+178,(0U),12);
    bufp->fullSData(oldp+179,(1U),12);
}

VL_ATTR_COLD void Vcpu_pipeline_top___024root__trace_full_0_sub_0(Vcpu_pipeline_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu_pipeline_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root__trace_full_0\n"); );
    // Body
    Vcpu_pipeline_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_pipeline_top___024root*>(voidSelf);
    Vcpu_pipeline_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vcpu_pipeline_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu_pipeline_top___024root__trace_full_dtype____0(Vcpu_pipeline_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar);

VL_ATTR_COLD void Vcpu_pipeline_top___024root__trace_full_0_sub_0(Vcpu_pipeline_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root__trace_full_0_sub_0\n"); );
    Vcpu_pipeline_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_5;
    VlWide<8>/*255:0*/ __Vtemp_6;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+0,(vlSelfRef.cpu_pipeline_top__DOT__pc_q),32);
    bufp->fullWData(oldp+1,(vlSelfRef.cpu_pipeline_top__DOT__if_id_q),97);
    bufp->fullWData(oldp+5,(vlSelfRef.cpu_pipeline_top__DOT__id_ex_q),233);
    bufp->fullWData(oldp+13,(vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d),223);
    bufp->fullWData(oldp+20,(vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q),223);
    bufp->fullWData(oldp+27,(vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d),295);
    bufp->fullWData(oldp+37,(vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q),295);
    bufp->fullIData(oldp+47,(((IData)(4U) + vlSelfRef.cpu_pipeline_top__DOT__pc_q)),32);
    bufp->fullIData(oldp+48,(vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__pc_next),32);
    bufp->fullIData(oldp+49,(vlSelfRef.cpu_pipeline_top__DOT__id_ctrl),25);
    bufp->fullIData(oldp+50,(vlSelfRef.cpu_pipeline_top__DOT__imm_gen_i__DOT__imm),32);
    bufp->fullIData(oldp+51,(vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__wr_data),32);
    bufp->fullBit(oldp+52,((3U == (3U & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[9U] 
                                         >> 5U)))));
    bufp->fullIData(oldp+53,(vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1),32);
    bufp->fullIData(oldp+54,(vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2),32);
    bufp->fullIData(oldp+55,(vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a),32);
    bufp->fullIData(oldp+56,(vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b),32);
    bufp->fullIData(oldp+57,(((2U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                               ? ((- (IData)((1U & 
                                              (~ (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                                                  >> 0x0000001fU))))) 
                                  & (((0x40000000U 
                                       & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
                                       ? (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                          & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)
                                       : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                          | vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)) 
                                     & (- (IData)((1U 
                                                   & (~ vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U]))))))
                               : ((1U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                                   ? ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                                       >> 0x0000001fU)
                                       ? ((0x40000000U 
                                           & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
                                           ? VL_SHIFTRS_III(32,32,5, vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a, 
                                                            (0x0000001fU 
                                                             & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b))
                                           : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                              >> (0x0000001fU 
                                                  & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)))
                                       : ((0x40000000U 
                                           & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
                                           ? (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                              ^ vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)
                                           : (1U & 
                                              (- (IData)(
                                                         (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                                          < vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b))))))
                                   : ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                                       >> 0x0000001fU)
                                       ? ((0x40000000U 
                                           & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
                                           ? (1U & 
                                              (- (IData)(
                                                         VL_LTS_III(32, vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a, vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b))))
                                           : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                              << (0x0000001fU 
                                                  & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)))
                                       : ((0x40000000U 
                                           & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
                                           ? (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                              - vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)
                                           : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                              + vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)))))),32);
    bufp->fullBit(oldp+58,(((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                             >> 0x00000016U) & ((0x00200000U 
                                                 & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
                                                 ? 
                                                ((~ 
                                                  (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                                                   >> 0x00000014U)) 
                                                 & ((0x00080000U 
                                                     & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
                                                     ? 
                                                    (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                                     >= vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)
                                                     : 
                                                    (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                                     < vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)))
                                                 : 
                                                ((0x00100000U 
                                                  & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
                                                  ? 
                                                 ((0x00080000U 
                                                   & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
                                                   ? 
                                                  VL_GTES_III(32, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)
                                                   : 
                                                  VL_LTS_III(32, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2))
                                                  : 
                                                 ((0x00080000U 
                                                   & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
                                                   ? 
                                                  (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                                   != vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)
                                                   : 
                                                  (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                                   == vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)))))));
    bufp->fullIData(oldp+59,((((0x04000000U & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])
                                ? ((- (IData)((1U & 
                                               (~ (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                                                   >> 0x00000019U))))) 
                                   & ((0x01000000U 
                                       & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])
                                       ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)
                                       : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)))
                                : ((0x02000000U & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])
                                    ? (vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__dmem
                                       [(0x000003ffU 
                                         & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                            >> 7U))] 
                                       & (- (IData)(
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                                                         >> 0x00000018U))))))
                                    : ((0x01000000U 
                                        & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__dmem
                                                           [
                                                           (0x000003ffU 
                                                            & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                                               >> 7U))] 
                                                           >> 
                                                           (0x0000001fU 
                                                            & ((IData)(0x0fU) 
                                                               + 
                                                               (0x00000018U 
                                                                & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                                                   >> 2U)))))))) 
                                            << 0x00000010U) 
                                           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7))
                                        : (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__dmem
                                                           [
                                                           (0x000003ffU 
                                                            & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                                               >> 7U))] 
                                                           >> 
                                                           (0x0000001fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               (0x00000018U 
                                                                & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                                                   >> 2U)))))))) 
                                            << 8U) 
                                           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8))))) 
                              & (- (IData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__mem_read))))),32);
    bufp->fullBit(oldp+60,(vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__mem_read));
    bufp->fullBit(oldp+61,(vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__mem_write));
    bufp->fullCData(oldp+62,((0x0000000fU & (((0x04000000U 
                                               & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])
                                               ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (~ 
                                                                   (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                                                                    >> 0x00000019U))))))
                                               : ((0x02000000U 
                                                   & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])
                                                   ? 
                                                  (- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                                                                  >> 0x00000018U)))))
                                                   : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6))) 
                                             & (- (IData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__mem_read)))))),4);
    bufp->fullCData(oldp+63,((0x0000000fU & (((0U == 
                                               (7U 
                                                & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                                                   >> 0x00000018U)))
                                               ? ((IData)(1U) 
                                                  << 
                                                  (3U 
                                                   & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                                      >> 5U)))
                                               : ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                                                       >> 0x00000018U)))
                                                   ? 
                                                  ((IData)(3U) 
                                                   << 
                                                   (3U 
                                                    & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                                       >> 5U)))
                                                   : 
                                                  (- (IData)(
                                                             (2U 
                                                              == 
                                                              (7U 
                                                               & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                                                                  >> 0x00000018U))))))) 
                                             & (- (IData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__mem_write)))))),4);
    bufp->fullBit(oldp+64,(vlSelfRef.cpu_pipeline_top__DOT__rvfi_rd_written));
    bufp->fullCData(oldp+65,((0x0000000fU & ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                              << 2U) 
                                             | (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                                                >> 0x0000001eU)))),4);
    bufp->fullCData(oldp+66,((7U & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                                    >> 0x00000013U))),3);
    bufp->fullBit(oldp+67,((1U & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                                  >> 0x00000016U))));
    bufp->fullBit(oldp+68,(((0x00200000U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
                             ? ((~ (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                                    >> 0x00000014U)) 
                                & ((0x00080000U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
                                    ? (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                       >= vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)
                                    : (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                       < vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)))
                             : ((0x00100000U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
                                 ? ((0x00080000U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
                                     ? VL_GTES_III(32, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)
                                     : VL_LTS_III(32, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2))
                                 : ((0x00080000U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
                                     ? (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                        != vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)
                                     : (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                        == vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2))))));
    bufp->fullIData(oldp+69,(((vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[4U] 
                               << 0x0000001bU) | (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                                  >> 5U))),32);
    bufp->fullIData(oldp+70,(((vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                               << 0x0000001bU) | (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[2U] 
                                                  >> 5U))),32);
    bufp->fullCData(oldp+71,((7U & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                                    >> 0x00000018U))),3);
    bufp->fullSData(oldp+72,((0x000003ffU & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                             >> 7U))),10);
    bufp->fullCData(oldp+73,((3U & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                    >> 5U))),2);
    bufp->fullIData(oldp+74,(vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U]),32);
    bufp->fullIData(oldp+75,(((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                               << 0x00000011U) | (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[5U] 
                                                  >> 0x0000000fU))),32);
    bufp->fullIData(oldp+76,(((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[5U] 
                               << 0x00000011U) | (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[4U] 
                                                  >> 0x0000000fU))),32);
    bufp->fullIData(oldp+77,(((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[4U] 
                               << 0x00000011U) | (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[3U] 
                                                  >> 0x0000000fU))),32);
    bufp->fullBit(oldp+78,((1U & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                                  >> 0x00000011U))));
    bufp->fullBit(oldp+79,((1U & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                                  >> 0x00000012U))));
    bufp->fullIData(oldp+80,(((0x00020000U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
                               ? vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1
                               : ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                                   << 0x00000011U) 
                                  | (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[5U] 
                                     >> 0x0000000fU)))),32);
    bufp->fullIData(oldp+81,(vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__target_raw),32);
    bufp->fullIData(oldp+82,(((0xfffffffeU & vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__target_raw) 
                              | (1U & ((~ (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                                           >> 0x00000011U)) 
                                       & vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__target_raw)))),32);
    bufp->fullBit(oldp+83,(vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__take_redirect));
    bufp->fullCData(oldp+84,((0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                             >> 0x0000000fU))),5);
    bufp->fullCData(oldp+85,((0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                             >> 0x00000014U))),5);
    bufp->fullCData(oldp+86,((0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                             >> 8U))),5);
    bufp->fullBit(oldp+87,(vlSelfRef.clk));
    bufp->fullBit(oldp+88,(vlSelfRef.rst_n));
    bufp->fullIData(oldp+89,(vlSelfRef.instr_out),32);
    bufp->fullBit(oldp+90,(vlSelfRef.halt));
    bufp->fullBit(oldp+91,(vlSelfRef.rvfi_valid));
    bufp->fullIData(oldp+92,(vlSelfRef.rvfi_insn),32);
    bufp->fullIData(oldp+93,(vlSelfRef.rvfi_pc_rdata),32);
    bufp->fullIData(oldp+94,(vlSelfRef.rvfi_pc_wdata),32);
    bufp->fullCData(oldp+95,(vlSelfRef.rvfi_rd_addr),5);
    bufp->fullIData(oldp+96,(vlSelfRef.rvfi_rd_wdata),32);
    bufp->fullIData(oldp+97,(vlSelfRef.rvfi_mem_addr),32);
    bufp->fullCData(oldp+98,(vlSelfRef.rvfi_mem_rmask),4);
    bufp->fullCData(oldp+99,(vlSelfRef.rvfi_mem_wmask),4);
    bufp->fullIData(oldp+100,(vlSelfRef.rvfi_mem_rdata),32);
    bufp->fullIData(oldp+101,(vlSelfRef.rvfi_mem_wdata),32);
    bufp->fullBit(oldp+102,(vlSelfRef.perf_stall));
    bufp->fullBit(oldp+103,(vlSelfRef.perf_flush));
    __Vtemp_1[0U] = (IData)((((QData)((IData)(((IData)(4U) 
                                               + vlSelfRef.cpu_pipeline_top__DOT__pc_q))) 
                              << 0x00000020U) | (QData)((IData)(vlSelfRef.instr_out))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)(((IData)(4U) 
                                                + vlSelfRef.cpu_pipeline_top__DOT__pc_q))) 
                               << 0x00000020U) | (QData)((IData)(vlSelfRef.instr_out))) 
                             >> 0x00000020U));
    __Vtemp_1[2U] = (IData)((0x0000000100000000ULL 
                             | (QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__pc_q))));
    __Vtemp_1[3U] = (IData)(((0x0000000100000000ULL 
                              | (QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__pc_q))) 
                             >> 0x00000020U));
    bufp->fullWData(oldp+104,(__Vtemp_1),97);
    __Vtemp_5[3U] = (((IData)((((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__imm_gen_i__DOT__imm)) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  ((((0x0000001fU 
                                                                      & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                                         >> 0x0000000fU)) 
                                                                     == 
                                                                     (0x0000001fU 
                                                                      & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                                                         >> 8U))) 
                                                                    & (IData)(vlSelfRef.cpu_pipeline_top__DOT__rvfi_rd_written))
                                                                    ? vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__wr_data
                                                                    : vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs
                                                                   [
                                                                   (0x0000001fU 
                                                                    & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                                       >> 0x0000000fU))]))))) 
                      >> 0x00000011U) | ((IData)(((
                                                   ((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__imm_gen_i__DOT__imm)) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     ((((0x0000001fU 
                                                                         & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                                            >> 0x0000000fU)) 
                                                                        == 
                                                                        (0x0000001fU 
                                                                         & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                                                            >> 8U))) 
                                                                       & (IData)(vlSelfRef.cpu_pipeline_top__DOT__rvfi_rd_written))
                                                                       ? vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__wr_data
                                                                       : vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs
                                                                      [
                                                                      (0x0000001fU 
                                                                       & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                                          >> 0x0000000fU))])))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000fU));
    __Vtemp_6[0U] = (IData)((((QData)((IData)((0x0000001fU 
                                               & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                  >> 0x0000000fU)))) 
                              << 0x0000002aU) | (((QData)((IData)(
                                                                  (0x0000001fU 
                                                                   & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                                      >> 0x00000014U)))) 
                                                  << 0x00000025U) 
                                                 | (((QData)((IData)(
                                                                     (0x0000001fU 
                                                                      & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                                         >> 7U)))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U]))))));
    __Vtemp_6[1U] = ((((((0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                         >> 0x00000014U)) 
                         == (0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                            >> 8U))) 
                        & (IData)(vlSelfRef.cpu_pipeline_top__DOT__rvfi_rd_written))
                        ? vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__wr_data
                        : vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs
                       [(0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                        >> 0x00000014U))]) 
                      << 0x0000000fU) | (IData)(((((QData)((IData)(
                                                                   (0x0000001fU 
                                                                    & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                                       >> 0x0000000fU)))) 
                                                   << 0x0000002aU) 
                                                  | (((QData)((IData)(
                                                                      (0x0000001fU 
                                                                       & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                                          >> 0x00000014U)))) 
                                                      << 0x00000025U) 
                                                     | (((QData)((IData)(
                                                                         (0x0000001fU 
                                                                          & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                                             >> 7U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U]))))) 
                                                 >> 0x00000020U)));
    __Vtemp_6[2U] = ((((((0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                         >> 0x00000014U)) 
                         == (0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                            >> 8U))) 
                        & (IData)(vlSelfRef.cpu_pipeline_top__DOT__rvfi_rd_written))
                        ? vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__wr_data
                        : vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs
                       [(0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                        >> 0x00000014U))]) 
                      >> 0x00000011U) | ((IData)((((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__imm_gen_i__DOT__imm)) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(
                                                                    ((((0x0000001fU 
                                                                        & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                                           >> 0x0000000fU)) 
                                                                       == 
                                                                       (0x0000001fU 
                                                                        & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                                                           >> 8U))) 
                                                                      & (IData)(vlSelfRef.cpu_pipeline_top__DOT__rvfi_rd_written))
                                                                      ? vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__wr_data
                                                                      : vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs
                                                                     [
                                                                     (0x0000001fU 
                                                                      & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                                         >> 0x0000000fU))]))))) 
                                         << 0x0000000fU));
    __Vtemp_6[3U] = __Vtemp_5[3U];
    __Vtemp_6[4U] = (((IData)((((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__if_id_q[2U])) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__if_id_q[1U])))) 
                      << 0x0000000fU) | ((IData)(((
                                                   ((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__imm_gen_i__DOT__imm)) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     ((((0x0000001fU 
                                                                         & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                                            >> 0x0000000fU)) 
                                                                        == 
                                                                        (0x0000001fU 
                                                                         & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                                                            >> 8U))) 
                                                                       & (IData)(vlSelfRef.cpu_pipeline_top__DOT__rvfi_rd_written))
                                                                       ? vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__wr_data
                                                                       : vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs
                                                                      [
                                                                      (0x0000001fU 
                                                                       & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                                          >> 0x0000000fU))])))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000011U));
    __Vtemp_6[5U] = (((IData)((((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__if_id_q[2U])) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__if_id_q[1U])))) 
                      >> 0x00000011U) | ((IData)(((
                                                   ((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__if_id_q[2U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__if_id_q[1U]))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000fU));
    __Vtemp_6[6U] = (((IData)(((((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__if_id_q[2U])) 
                                 << 0x00000020U) | (QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__if_id_q[1U]))) 
                               >> 0x00000020U)) >> 0x00000011U) 
                     | (((0x02000000U & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[3U] 
                                         << 0x00000019U)) 
                         | vlSelfRef.cpu_pipeline_top__DOT__id_ctrl) 
                        << 0x0000000fU));
    __Vtemp_6[7U] = (((0x02000000U & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[3U] 
                                      << 0x00000019U)) 
                      | vlSelfRef.cpu_pipeline_top__DOT__id_ctrl) 
                     >> 0x00000011U);
    bufp->fullWData(oldp+108,(__Vtemp_6),233);
    bufp->fullIData(oldp+116,(((IData)(vlSelfRef.perf_flush)
                                ? vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__pc_next
                                : ((IData)(4U) + vlSelfRef.cpu_pipeline_top__DOT__pc_q))),32);
    bufp->fullIData(oldp+117,(((((0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                 >> 0x0000000fU)) 
                                 == (0x0000001fU & 
                                     (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                      >> 8U))) & (IData)(vlSelfRef.cpu_pipeline_top__DOT__rvfi_rd_written))
                                ? vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__wr_data
                                : vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs
                               [(0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                >> 0x0000000fU))])),32);
    bufp->fullIData(oldp+118,(((((0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                 >> 0x00000014U)) 
                                 == (0x0000001fU & 
                                     (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                      >> 8U))) & (IData)(vlSelfRef.cpu_pipeline_top__DOT__rvfi_rd_written))
                                ? vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__wr_data
                                : vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs
                               [(0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                >> 0x00000014U))])),32);
    Vcpu_pipeline_top___024root__trace_full_dtype____0(vlSelf, bufp, 119, vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs);
}

VL_ATTR_COLD void Vcpu_pipeline_top___024root__trace_full_dtype____0(Vcpu_pipeline_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root__trace_full_dtype____0\n"); );
    Vcpu_pipeline_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
