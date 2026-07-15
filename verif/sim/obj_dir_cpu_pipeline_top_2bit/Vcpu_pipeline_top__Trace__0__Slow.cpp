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
    VL_TRACE_DECL_BIT(tracep,c+94,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+95,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"instr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+97,0,"halt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+98,0,"rvfi_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+99,0,"rvfi_insn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+100,0,"rvfi_pc_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+101,0,"rvfi_pc_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+102,0,"rvfi_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+103,0,"rvfi_rd_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+104,0,"rvfi_mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+105,0,"rvfi_mem_rmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+106,0,"rvfi_mem_wmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+107,0,"rvfi_mem_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+108,0,"rvfi_mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+109,0,"perf_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+110,0,"perf_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "cpu_pipeline_top", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+94,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+95,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"instr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+97,0,"halt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+98,0,"rvfi_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+99,0,"rvfi_insn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+100,0,"rvfi_pc_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+101,0,"rvfi_pc_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+102,0,"rvfi_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+103,0,"rvfi_rd_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+104,0,"rvfi_mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+105,0,"rvfi_mem_rmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+106,0,"rvfi_mem_wmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+107,0,"rvfi_mem_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+108,0,"rvfi_mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+109,0,"perf_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+110,0,"perf_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+111,0,"if_id_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 129,0);
    VL_TRACE_DECL_WIDE(tracep,c+1,0,"if_id_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 129,0);
    VL_TRACE_DECL_WIDE(tracep,c+116,0,"id_ex_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 265,0);
    VL_TRACE_DECL_WIDE(tracep,c+6,0,"id_ex_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 265,0);
    VL_TRACE_DECL_WIDE(tracep,c+15,0,"ex_mem_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 222,0);
    VL_TRACE_DECL_WIDE(tracep,c+22,0,"ex_mem_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 222,0);
    VL_TRACE_DECL_WIDE(tracep,c+29,0,"mem_wb_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 294,0);
    VL_TRACE_DECL_WIDE(tracep,c+39,0,"mem_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 294,0);
    VL_TRACE_DECL_BIT(tracep,c+49,0,"update_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"update_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+51,0,"update_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"update_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+110,0,"update_mispred",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+109,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"pc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+125,0,"pc_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+53,0,"pc_plus4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"if_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+110,0,"flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+54,0,"predict_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+55,0,"predict_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+110,0,"ex_redirect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"ex_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"id_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"id_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+126,0,"id_rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+127,0,"id_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+58,0,"wb_rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+59,0,"wb_reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+60,0,"mem_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+61,0,"ex_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"ex_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"alu_input_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+64,0,"alu_input_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+65,0,"ex_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+66,0,"ex_branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+51,0,"actual_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"ex_next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+67,0,"mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+68,0,"mem_read_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+69,0,"mem_write_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"mem_rmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+71,0,"mem_wmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+72,0,"rvfi_rd_written",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "alu_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+64,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+73,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+65,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "branch_cmp_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+61,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"branch_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+75,0,"branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+66,0,"branch_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+76,0,"take_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "data_mem_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+163,0,"DMEM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+94,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+95,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+77,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+78,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+68,0,"mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+69,0,"mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"memsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+67,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+80,0,"addr_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+81,0,"addr_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "decoder_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"ctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "imm_gen_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "instr_mem_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+163,0,"IMEM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+164,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "next_pc_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+83,0,"pc_plus4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+61,0,"rs1_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+84,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+85,0,"jalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+86,0,"jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+66,0,"branch_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"pc_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+87,0,"target_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+88,0,"target_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+51,0,"take_redirect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "predictor_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+94,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+95,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"predict_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"predict_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+54,0,"predict_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+55,0,"predict_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+49,0,"update_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"update_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+51,0,"update_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"update_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+110,0,"update_mispred",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+165,0,"PL_NUM_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+166,0,"PL_INDEX_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+128,0,"opccode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BIT(tracep,c+129,0,"is_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+130,0,"is_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+90,0,"pred_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "pred_imm_gen", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+90,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "reg_file_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+167,0,"P_ENABLE_BYPASS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+94,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+95,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+91,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+92,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+93,0,"wr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+58,0,"wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+59,0,"reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+126,0,"rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+127,0,"rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);

    Vcpu_pipeline_top___024root__trace_init_dtype____0(vlSelf, tracep, "regs", 0, c+131, VerilatedTraceSigDirection::NONE);
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
    VL_TRACE_DECL_BUS(tracep,c+168,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+168,0,"INSTR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+168,0,"REG_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+169,0,"REG_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+170,0,"RESET_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+171,0,"OPC_LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+172,0,"OPC_MISC_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"OPC_OP_IMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+174,0,"OPC_AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+175,0,"OPC_STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+176,0,"OPC_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"OPC_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+178,0,"OPC_BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+179,0,"OPC_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+180,0,"OPC_JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+181,0,"OPC_SYSTEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+182,0,"F3_ADD_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+183,0,"F3_SLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+184,0,"F3_SLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+185,0,"F3_SLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+186,0,"F3_XOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+187,0,"F3_SR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+188,0,"F3_OR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+189,0,"F3_AND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+190,0,"F7_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+191,0,"F7_ALT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+182,0,"F3_BEQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+183,0,"F3_BNE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+186,0,"F3_BLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+187,0,"F3_BGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+188,0,"F3_BLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+189,0,"F3_BGEU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+182,0,"F3_LB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+183,0,"F3_LH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+184,0,"F3_LW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+186,0,"F3_LBU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+187,0,"F3_LHU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+182,0,"F3_SB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+183,0,"F3_SH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+184,0,"F3_SW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+182,0,"F3_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+182,0,"F3_PRIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+192,0,"SYS_ECALL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+193,0,"SYS_EBREAK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 11,0);
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
    bufp->fullIData(oldp+163,(0x00000400U),32);
    bufp->fullIData(oldp+164,(0x0000000aU),32);
    bufp->fullIData(oldp+165,(0x00000100U),32);
    bufp->fullIData(oldp+166,(8U),32);
    bufp->fullIData(oldp+167,(1U),32);
    bufp->fullIData(oldp+168,(0x00000020U),32);
    bufp->fullIData(oldp+169,(5U),32);
    bufp->fullIData(oldp+170,(0U),32);
    bufp->fullCData(oldp+171,(3U),7);
    bufp->fullCData(oldp+172,(0x0fU),7);
    bufp->fullCData(oldp+173,(0x13U),7);
    bufp->fullCData(oldp+174,(0x17U),7);
    bufp->fullCData(oldp+175,(0x23U),7);
    bufp->fullCData(oldp+176,(0x33U),7);
    bufp->fullCData(oldp+177,(0x37U),7);
    bufp->fullCData(oldp+178,(0x63U),7);
    bufp->fullCData(oldp+179,(0x67U),7);
    bufp->fullCData(oldp+180,(0x6fU),7);
    bufp->fullCData(oldp+181,(0x73U),7);
    bufp->fullCData(oldp+182,(0U),3);
    bufp->fullCData(oldp+183,(1U),3);
    bufp->fullCData(oldp+184,(2U),3);
    bufp->fullCData(oldp+185,(3U),3);
    bufp->fullCData(oldp+186,(4U),3);
    bufp->fullCData(oldp+187,(5U),3);
    bufp->fullCData(oldp+188,(6U),3);
    bufp->fullCData(oldp+189,(7U),3);
    bufp->fullCData(oldp+190,(0U),7);
    bufp->fullCData(oldp+191,(0x20U),7);
    bufp->fullSData(oldp+192,(0U),12);
    bufp->fullSData(oldp+193,(1U),12);
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
    VlWide<5>/*159:0*/ __Vtemp_2;
    VlWide<5>/*159:0*/ __Vtemp_7;
    VlWide<9>/*287:0*/ __Vtemp_9;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+0,(vlSelfRef.cpu_pipeline_top__DOT__pc_q),32);
    bufp->fullWData(oldp+1,(vlSelfRef.cpu_pipeline_top__DOT__if_id_q),130);
    bufp->fullWData(oldp+6,(vlSelfRef.cpu_pipeline_top__DOT__id_ex_q),266);
    bufp->fullWData(oldp+15,(vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d),223);
    bufp->fullWData(oldp+22,(vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q),223);
    bufp->fullWData(oldp+29,(vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d),295);
    bufp->fullWData(oldp+39,(vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q),295);
    bufp->fullBit(oldp+49,(vlSelfRef.cpu_pipeline_top__DOT__update_valid));
    bufp->fullIData(oldp+50,(((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                               << 0x00000011U) | (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[5U] 
                                                  >> 0x0000000fU))),32);
    bufp->fullBit(oldp+51,(vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__take_redirect));
    bufp->fullIData(oldp+52,(vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__pc_next),32);
    bufp->fullIData(oldp+53,(((IData)(4U) + vlSelfRef.cpu_pipeline_top__DOT__pc_q)),32);
    bufp->fullBit(oldp+54,(vlSelfRef.cpu_pipeline_top__DOT__predict_taken));
    bufp->fullIData(oldp+55,(vlSelfRef.cpu_pipeline_top__DOT__predict_target),32);
    bufp->fullIData(oldp+56,(vlSelfRef.cpu_pipeline_top__DOT__id_ctrl),25);
    bufp->fullIData(oldp+57,(vlSelfRef.cpu_pipeline_top__DOT__imm_gen_i__DOT__imm),32);
    bufp->fullIData(oldp+58,(vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__wr_data),32);
    bufp->fullBit(oldp+59,((3U == (3U & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[9U] 
                                         >> 5U)))));
    bufp->fullIData(oldp+60,(vlSelfRef.cpu_pipeline_top__DOT__mem_alu_result),32);
    bufp->fullIData(oldp+61,(vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1),32);
    bufp->fullIData(oldp+62,(vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2),32);
    bufp->fullIData(oldp+63,(vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a),32);
    bufp->fullIData(oldp+64,(vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b),32);
    bufp->fullIData(oldp+65,(((4U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                               ? ((- (IData)((1U & 
                                              (~ vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])))) 
                                  & (((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                       >> 0x0000001fU)
                                       ? (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                          & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)
                                       : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                          | vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)) 
                                     & (- (IData)((1U 
                                                   & (~ 
                                                      (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U] 
                                                       >> 1U)))))))
                               : ((2U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                                   ? ((1U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                                       ? ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                           >> 0x0000001fU)
                                           ? VL_SHIFTRS_III(32,32,5, vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a, 
                                                            (0x0000001fU 
                                                             & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b))
                                           : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                              >> (0x0000001fU 
                                                  & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)))
                                       : ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                           >> 0x0000001fU)
                                           ? (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                              ^ vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)
                                           : (1U & 
                                              (- (IData)(
                                                         (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                                          < vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b))))))
                                   : ((1U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                                       ? ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                           >> 0x0000001fU)
                                           ? (1U & 
                                              (- (IData)(
                                                         VL_LTS_III(32, vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a, vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b))))
                                           : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                              << (0x0000001fU 
                                                  & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)))
                                       : ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                           >> 0x0000001fU)
                                           ? (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                              - vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)
                                           : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                              + vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)))))),32);
    bufp->fullBit(oldp+66,(((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                             >> 0x00000017U) & ((0x00400000U 
                                                 & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                                                 ? 
                                                ((~ 
                                                  (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                                   >> 0x00000015U)) 
                                                 & ((0x00100000U 
                                                     & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                                                     ? 
                                                    (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                                     >= vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)
                                                     : 
                                                    (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                                     < vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)))
                                                 : 
                                                ((0x00200000U 
                                                  & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                                                  ? 
                                                 ((0x00100000U 
                                                   & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                                                   ? 
                                                  VL_GTES_III(32, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)
                                                   : 
                                                  VL_LTS_III(32, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2))
                                                  : 
                                                 ((0x00100000U 
                                                   & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                                                   ? 
                                                  (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                                   != vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)
                                                   : 
                                                  (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                                   == vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)))))));
    bufp->fullIData(oldp+67,((((0x04000000U & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])
                                ? ((- (IData)((1U & 
                                               (~ (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                                                   >> 0x00000019U))))) 
                                   & ((0x01000000U 
                                       & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])
                                       ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12)
                                       : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13)))
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
                                           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12))
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
                                           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13))))) 
                              & (- (IData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__mem_read))))),32);
    bufp->fullBit(oldp+68,(vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__mem_read));
    bufp->fullBit(oldp+69,(vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__mem_write));
    bufp->fullCData(oldp+70,((0x0000000fU & (((0x04000000U 
                                               & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])
                                               ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9) 
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
                                                   : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9))) 
                                             & (- (IData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__mem_read)))))),4);
    bufp->fullCData(oldp+71,((0x0000000fU & (((0U == 
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
    bufp->fullBit(oldp+72,(vlSelfRef.cpu_pipeline_top__DOT__rvfi_rd_written));
    bufp->fullCData(oldp+73,((0x0000000fU & ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U] 
                                              << 1U) 
                                             | (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                                >> 0x0000001fU)))),4);
    bufp->fullCData(oldp+74,((7U & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                    >> 0x00000014U))),3);
    bufp->fullBit(oldp+75,((1U & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                  >> 0x00000017U))));
    bufp->fullBit(oldp+76,(((0x00400000U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                             ? ((~ (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                    >> 0x00000015U)) 
                                & ((0x00100000U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                                    ? (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                       >= vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)
                                    : (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                       < vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)))
                             : ((0x00200000U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                                 ? ((0x00100000U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                                     ? VL_GTES_III(32, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)
                                     : VL_LTS_III(32, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2))
                                 : ((0x00100000U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                                     ? (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                        != vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)
                                     : (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                        == vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2))))));
    bufp->fullIData(oldp+77,(((vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[4U] 
                               << 0x0000001bU) | (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                                  >> 5U))),32);
    bufp->fullIData(oldp+78,(((vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                               << 0x0000001bU) | (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[2U] 
                                                  >> 5U))),32);
    bufp->fullCData(oldp+79,((7U & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                                    >> 0x00000018U))),3);
    bufp->fullSData(oldp+80,((0x000003ffU & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                             >> 7U))),10);
    bufp->fullCData(oldp+81,((3U & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                    >> 5U))),2);
    bufp->fullIData(oldp+82,(vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U]),32);
    bufp->fullIData(oldp+83,(((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[5U] 
                               << 0x00000011U) | (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[4U] 
                                                  >> 0x0000000fU))),32);
    bufp->fullIData(oldp+84,(((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[4U] 
                               << 0x00000011U) | (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[3U] 
                                                  >> 0x0000000fU))),32);
    bufp->fullBit(oldp+85,((1U & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                  >> 0x00000012U))));
    bufp->fullBit(oldp+86,((1U & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                  >> 0x00000013U))));
    bufp->fullIData(oldp+87,(((0x00040000U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                               ? vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1
                               : ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                                   << 0x00000011U) 
                                  | (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[5U] 
                                     >> 0x0000000fU)))),32);
    bufp->fullIData(oldp+88,(vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__target_raw),32);
    bufp->fullIData(oldp+89,(((0xfffffffeU & vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__target_raw) 
                              | (1U & ((~ (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                           >> 0x00000012U)) 
                                       & vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__target_raw)))),32);
    bufp->fullIData(oldp+90,(vlSelfRef.cpu_pipeline_top__DOT__predictor_i__DOT__pred_imm_gen__DOT__imm),32);
    bufp->fullCData(oldp+91,((0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                             >> 0x0000000fU))),5);
    bufp->fullCData(oldp+92,((0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                             >> 0x00000014U))),5);
    bufp->fullCData(oldp+93,((0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                             >> 8U))),5);
    bufp->fullBit(oldp+94,(vlSelfRef.clk));
    bufp->fullBit(oldp+95,(vlSelfRef.rst_n));
    bufp->fullIData(oldp+96,(vlSelfRef.instr_out),32);
    bufp->fullBit(oldp+97,(vlSelfRef.halt));
    bufp->fullBit(oldp+98,(vlSelfRef.rvfi_valid));
    bufp->fullIData(oldp+99,(vlSelfRef.rvfi_insn),32);
    bufp->fullIData(oldp+100,(vlSelfRef.rvfi_pc_rdata),32);
    bufp->fullIData(oldp+101,(vlSelfRef.rvfi_pc_wdata),32);
    bufp->fullCData(oldp+102,(vlSelfRef.rvfi_rd_addr),5);
    bufp->fullIData(oldp+103,(vlSelfRef.rvfi_rd_wdata),32);
    bufp->fullIData(oldp+104,(vlSelfRef.rvfi_mem_addr),32);
    bufp->fullCData(oldp+105,(vlSelfRef.rvfi_mem_rmask),4);
    bufp->fullCData(oldp+106,(vlSelfRef.rvfi_mem_wmask),4);
    bufp->fullIData(oldp+107,(vlSelfRef.rvfi_mem_rdata),32);
    bufp->fullIData(oldp+108,(vlSelfRef.rvfi_mem_wdata),32);
    bufp->fullBit(oldp+109,(vlSelfRef.perf_stall));
    bufp->fullBit(oldp+110,(vlSelfRef.perf_flush));
    __Vtemp_2[0U] = vlSelfRef.instr_out;
    __Vtemp_2[1U] = (IData)((((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__pc_q)) 
                              << 0x00000020U) | (QData)((IData)(
                                                                ((IData)(4U) 
                                                                 + vlSelfRef.cpu_pipeline_top__DOT__pc_q)))));
    __Vtemp_2[2U] = (IData)(((((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__pc_q)) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 ((IData)(4U) 
                                                                  + vlSelfRef.cpu_pipeline_top__DOT__pc_q)))) 
                             >> 0x00000020U));
    __Vtemp_2[3U] = (IData)((0x0000000200000000ULL 
                             | (((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__predict_taken)) 
                                 << 0x00000020U) | (QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__predict_target)))));
    __Vtemp_2[4U] = (IData)(((0x0000000200000000ULL 
                              | (((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__predict_taken)) 
                                  << 0x00000020U) | (QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__predict_target)))) 
                             >> 0x00000020U));
    bufp->fullWData(oldp+111,(__Vtemp_2),130);
    __Vtemp_7[3U] = (((IData)((((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__imm_gen_i__DOT__imm)) 
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
    __Vtemp_9[0U] = (IData)((((QData)((IData)((0x0000001fU 
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
    __Vtemp_9[1U] = ((((((0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
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
    __Vtemp_9[2U] = ((((((0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
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
    __Vtemp_9[3U] = __Vtemp_7[3U];
    __Vtemp_9[4U] = ((vlSelfRef.cpu_pipeline_top__DOT__if_id_q[1U] 
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
    __Vtemp_9[5U] = ((vlSelfRef.cpu_pipeline_top__DOT__if_id_q[1U] 
                      >> 0x00000011U) | (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[2U] 
                                         << 0x0000000fU));
    __Vtemp_9[6U] = ((vlSelfRef.cpu_pipeline_top__DOT__if_id_q[2U] 
                      >> 0x00000011U) | (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[3U] 
                                         << 0x0000000fU));
    __Vtemp_9[7U] = ((((0x02000000U & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[4U] 
                                       << 0x00000018U)) 
                       | vlSelfRef.cpu_pipeline_top__DOT__id_ctrl) 
                      << 0x00000010U) | ((vlSelfRef.cpu_pipeline_top__DOT__if_id_q[3U] 
                                          >> 0x00000011U) 
                                         | (0x00008000U 
                                            & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[4U] 
                                               << 0x0000000fU))));
    __Vtemp_9[8U] = (((0x02000000U & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[4U] 
                                      << 0x00000018U)) 
                      | vlSelfRef.cpu_pipeline_top__DOT__id_ctrl) 
                     >> 0x00000010U);
    bufp->fullWData(oldp+116,(__Vtemp_9),266);
    bufp->fullIData(oldp+125,(((IData)(vlSelfRef.perf_flush)
                                ? vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__pc_next
                                : ((IData)(vlSelfRef.cpu_pipeline_top__DOT__predict_taken)
                                    ? vlSelfRef.cpu_pipeline_top__DOT__predict_target
                                    : ((IData)(4U) 
                                       + vlSelfRef.cpu_pipeline_top__DOT__pc_q)))),32);
    bufp->fullIData(oldp+126,(((((0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                 >> 0x0000000fU)) 
                                 == (0x0000001fU & 
                                     (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                      >> 8U))) & (IData)(vlSelfRef.cpu_pipeline_top__DOT__rvfi_rd_written))
                                ? vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__wr_data
                                : vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs
                               [(0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                >> 0x0000000fU))])),32);
    bufp->fullIData(oldp+127,(((((0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                 >> 0x00000014U)) 
                                 == (0x0000001fU & 
                                     (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                      >> 8U))) & (IData)(vlSelfRef.cpu_pipeline_top__DOT__rvfi_rd_written))
                                ? vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__wr_data
                                : vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs
                               [(0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                >> 0x00000014U))])),32);
    bufp->fullCData(oldp+128,((0x0000007fU & vlSelfRef.instr_out)),7);
    bufp->fullBit(oldp+129,((0x63U == (0x0000007fU 
                                       & vlSelfRef.instr_out))));
    bufp->fullBit(oldp+130,((0x6fU == (0x0000007fU 
                                       & vlSelfRef.instr_out))));
    Vcpu_pipeline_top___024root__trace_full_dtype____0(vlSelf, bufp, 131, vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs);
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
