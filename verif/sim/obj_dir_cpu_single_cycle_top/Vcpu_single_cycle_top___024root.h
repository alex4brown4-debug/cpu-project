// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_single_cycle_top.h for the primary calling header

#ifndef VERILATED_VCPU_SINGLE_CYCLE_TOP___024ROOT_H_
#define VERILATED_VCPU_SINGLE_CYCLE_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vcpu_single_cycle_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcpu_single_cycle_top___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_OUT8(halt,0,0);
    VL_OUT8(rvfi_valid,0,0);
    VL_OUT8(rvfi_rd_addr,4,0);
    VL_OUT8(rvfi_mem_rmask,3,0);
    VL_OUT8(rvfi_mem_wmask,3,0);
    CData/*0:0*/ cpu_single_cycle_top__DOT__rvfi_rd_written;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __VicoPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__1;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    VL_OUT(pc_out,31,0);
    VL_OUT(instr_out,31,0);
    VL_OUT(rvfi_insn,31,0);
    VL_OUT(rvfi_pc_rdata,31,0);
    VL_OUT(rvfi_pc_wdata,31,0);
    VL_OUT(rvfi_rd_wdata,31,0);
    VL_OUT(rvfi_mem_addr,31,0);
    VL_OUT(rvfi_mem_rdata,31,0);
    VL_OUT(rvfi_mem_wdata,31,0);
    IData/*31:0*/ cpu_single_cycle_top__DOT__pc;
    IData/*22:0*/ cpu_single_cycle_top__DOT__ctrl;
    IData/*31:0*/ cpu_single_cycle_top__DOT__alu_i__DOT__a;
    IData/*31:0*/ cpu_single_cycle_top__DOT__alu_i__DOT__b;
    IData/*31:0*/ cpu_single_cycle_top__DOT__alu_i__DOT__result;
    IData/*31:0*/ cpu_single_cycle_top__DOT__imm_gen_i__DOT__imm;
    IData/*31:0*/ cpu_single_cycle_top__DOT__reg_file_i__DOT__wr_data;
    IData/*31:0*/ cpu_single_cycle_top__DOT__instr_mem_i__DOT____Vxrand___0;
    IData/*31:0*/ cpu_single_cycle_top__DOT__next_pc_i__DOT__target_raw;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 1024> cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem;
    VlUnpacked<IData/*31:0*/, 32> cpu_single_cycle_top__DOT__reg_file_i__DOT__regs;
    VlUnpacked<IData/*31:0*/, 1025> cpu_single_cycle_top__DOT__instr_mem_i__DOT__mem;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vcpu_single_cycle_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcpu_single_cycle_top___024root(Vcpu_single_cycle_top__Syms* symsp, const char* namep);
    ~Vcpu_single_cycle_top___024root();
    VL_UNCOPYABLE(Vcpu_single_cycle_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
