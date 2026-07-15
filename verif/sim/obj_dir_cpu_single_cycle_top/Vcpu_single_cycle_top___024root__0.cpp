// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_single_cycle_top.h for the primary calling header

#include "Vcpu_single_cycle_top__pch.h"

bool Vcpu_single_cycle_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_single_cycle_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vcpu_single_cycle_top___024root___eval_phase__ico(Vcpu_single_cycle_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root___eval_phase__ico\n"); );
    Vcpu_single_cycle_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                        ((((IData)(vlSelfRef.rst_n) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0)) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.clk) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
            vlSelfRef.__VicoDidInit = 1U;
            vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcpu_single_cycle_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vcpu_single_cycle_top___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_ico
            if ((2ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_sequent__TOP__0
                    vlSelfRef.rvfi_valid = vlSelfRef.rst_n;
                }
            }
        }
    }
    return (__VicoExecute);
}

bool Vcpu_single_cycle_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vcpu_single_cycle_top___024root___nba_sequent__TOP__0(Vcpu_single_cycle_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root___nba_sequent__TOP__0\n"); );
    Vcpu_single_cycle_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_3;
    __VdfgRegularize_h6e95ff9d_0_3 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_6;
    __VdfgRegularize_h6e95ff9d_0_6 = 0;
    SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_7;
    __VdfgRegularize_h6e95ff9d_0_7 = 0;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_8;
    __VdfgRegularize_h6e95ff9d_0_8 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_12;
    __VdfgRegularize_h6e95ff9d_0_12 = 0;
    CData/*7:0*/ __VdlyVal__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v0;
    __VdlyVal__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v0 = 0;
    CData/*4:0*/ __VdlyLsb__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v0;
    __VdlyLsb__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v0;
    __VdlyDim0__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v0;
    __VdlySet__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v0 = 0;
    SData/*15:0*/ __VdlyVal__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v1;
    __VdlyVal__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v1 = 0;
    CData/*4:0*/ __VdlyLsb__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v1;
    __VdlyLsb__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v1 = 0;
    SData/*9:0*/ __VdlyDim0__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v1;
    __VdlyDim0__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v1 = 0;
    CData/*0:0*/ __VdlySet__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v1;
    __VdlySet__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v1 = 0;
    IData/*31:0*/ __VdlyVal__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v2;
    __VdlyVal__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v2 = 0;
    SData/*9:0*/ __VdlyDim0__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v2;
    __VdlyDim0__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v2 = 0;
    CData/*0:0*/ __VdlySet__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v2;
    __VdlySet__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v2 = 0;
    CData/*4:0*/ __VdlyDim0__cpu_single_cycle_top__DOT__reg_file_i__DOT__regs__v0;
    __VdlyDim0__cpu_single_cycle_top__DOT__reg_file_i__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_single_cycle_top__DOT__reg_file_i__DOT__regs__v0;
    __VdlySet__cpu_single_cycle_top__DOT__reg_file_i__DOT__regs__v0 = 0;
    IData/*31:0*/ __VdlyVal__cpu_single_cycle_top__DOT__reg_file_i__DOT__regs__v1;
    __VdlyVal__cpu_single_cycle_top__DOT__reg_file_i__DOT__regs__v1 = 0;
    CData/*4:0*/ __VdlyDim0__cpu_single_cycle_top__DOT__reg_file_i__DOT__regs__v1;
    __VdlyDim0__cpu_single_cycle_top__DOT__reg_file_i__DOT__regs__v1 = 0;
    CData/*0:0*/ __VdlySet__cpu_single_cycle_top__DOT__reg_file_i__DOT__regs__v1;
    __VdlySet__cpu_single_cycle_top__DOT__reg_file_i__DOT__regs__v1 = 0;
    CData/*0:0*/ __VdlySet__cpu_single_cycle_top__DOT__reg_file_i__DOT__regs__v2;
    __VdlySet__cpu_single_cycle_top__DOT__reg_file_i__DOT__regs__v2 = 0;
    // Body
    __VdlySet__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v0 = 0U;
    __VdlySet__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v1 = 0U;
    __VdlySet__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v2 = 0U;
    __VdlySet__cpu_single_cycle_top__DOT__reg_file_i__DOT__regs__v0 = 0U;
    __VdlySet__cpu_single_cycle_top__DOT__reg_file_i__DOT__regs__v1 = 0U;
    __VdlySet__cpu_single_cycle_top__DOT__reg_file_i__DOT__regs__v2 = 0U;
    if ((0x00100000U & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)) {
        if ((0U == (7U & (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                          >> 0x00000011U)))) {
            __VdlyVal__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v0 
                = (0x000000ffU & vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                   [(0x0000001fU & (vlSelfRef.instr_out 
                                    >> 0x00000014U))]);
            __VdlyLsb__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v0 
                = (0x00000018U & (vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__result 
                                  << 3U));
            __VdlyDim0__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v0 
                = (0x000003ffU & (vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__result 
                                  >> 2U));
            __VdlySet__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v0 = 1U;
        } else if ((1U == (7U & (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                 >> 0x00000011U)))) {
            __VdlyVal__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v1 
                = (0x0000ffffU & vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                   [(0x0000001fU & (vlSelfRef.instr_out 
                                    >> 0x00000014U))]);
            __VdlyLsb__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v1 
                = (0x00000018U & (vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__result 
                                  << 3U));
            __VdlyDim0__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v1 
                = (0x000003ffU & (vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__result 
                                  >> 2U));
            __VdlySet__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v1 = 1U;
        } else if ((2U == (7U & (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                 >> 0x00000011U)))) {
            __VdlyVal__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v2 
                = vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                [(0x0000001fU & (vlSelfRef.instr_out 
                                 >> 0x00000014U))];
            __VdlyDim0__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v2 
                = (0x000003ffU & (vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__result 
                                  >> 2U));
            __VdlySet__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v2 = 1U;
        }
    }
    if (vlSelfRef.rst_n) {
        if ((IData)(((vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                      >> 0x00000016U) & (0U == (0x00000f80U 
                                                & vlSelfRef.instr_out))))) {
            __VdlyDim0__cpu_single_cycle_top__DOT__reg_file_i__DOT__regs__v0 
                = (0x0000001fU & (vlSelfRef.instr_out 
                                  >> 7U));
            __VdlySet__cpu_single_cycle_top__DOT__reg_file_i__DOT__regs__v0 = 1U;
        } else if (((vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                     >> 0x00000016U) & (0U != (0x0000001fU 
                                               & (vlSelfRef.instr_out 
                                                  >> 7U))))) {
            __VdlyVal__cpu_single_cycle_top__DOT__reg_file_i__DOT__regs__v1 
                = vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__wr_data;
            __VdlyDim0__cpu_single_cycle_top__DOT__reg_file_i__DOT__regs__v1 
                = (0x0000001fU & (vlSelfRef.instr_out 
                                  >> 7U));
            __VdlySet__cpu_single_cycle_top__DOT__reg_file_i__DOT__regs__v1 = 1U;
        }
        vlSelfRef.cpu_single_cycle_top__DOT__pc = vlSelfRef.rvfi_pc_wdata;
    } else {
        __VdlySet__cpu_single_cycle_top__DOT__reg_file_i__DOT__regs__v2 = 1U;
        vlSelfRef.cpu_single_cycle_top__DOT__pc = 0U;
    }
    if (__VdlySet__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v0) {
        vlSelfRef.cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem[__VdlyDim0__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v0] 
            = (((~ ((IData)(0x000000ffU) << (IData)(__VdlyLsb__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v0))) 
                & vlSelfRef.cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem
                [__VdlyDim0__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v0]) 
               | (0x00000000ffffffffULL & ((IData)(__VdlyVal__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v0) 
                                           << (IData)(__VdlyLsb__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v0))));
    }
    if (__VdlySet__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v1) {
        vlSelfRef.cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem[__VdlyDim0__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v1] 
            = (((~ ((IData)(0x0000ffffU) << (IData)(__VdlyLsb__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v1))) 
                & vlSelfRef.cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem
                [__VdlyDim0__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v1]) 
               | (0x00000000ffffffffULL & ((IData)(__VdlyVal__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v1) 
                                           << (IData)(__VdlyLsb__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v1))));
    }
    if (__VdlySet__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v2) {
        vlSelfRef.cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem[__VdlyDim0__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v2] 
            = __VdlyVal__cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem__v2;
    }
    if (__VdlySet__cpu_single_cycle_top__DOT__reg_file_i__DOT__regs__v0) {
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[__VdlyDim0__cpu_single_cycle_top__DOT__reg_file_i__DOT__regs__v0] = 0U;
    }
    if (__VdlySet__cpu_single_cycle_top__DOT__reg_file_i__DOT__regs__v1) {
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[__VdlyDim0__cpu_single_cycle_top__DOT__reg_file_i__DOT__regs__v1] 
            = __VdlyVal__cpu_single_cycle_top__DOT__reg_file_i__DOT__regs__v1;
    }
    if (__VdlySet__cpu_single_cycle_top__DOT__reg_file_i__DOT__regs__v2) {
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[0U] = 0U;
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[1U] = 0U;
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[2U] = 0U;
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[3U] = 0U;
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[4U] = 0U;
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[5U] = 0U;
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[6U] = 0U;
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[7U] = 0U;
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[8U] = 0U;
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[9U] = 0U;
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[10U] = 0U;
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[11U] = 0U;
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[12U] = 0U;
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[13U] = 0U;
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[14U] = 0U;
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[15U] = 0U;
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[16U] = 0U;
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[17U] = 0U;
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[18U] = 0U;
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[19U] = 0U;
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[20U] = 0U;
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[21U] = 0U;
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[22U] = 0U;
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[23U] = 0U;
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[24U] = 0U;
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[25U] = 0U;
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[26U] = 0U;
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[27U] = 0U;
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[28U] = 0U;
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[29U] = 0U;
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[30U] = 0U;
        vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[31U] = 0U;
    }
    vlSelfRef.pc_out = vlSelfRef.cpu_single_cycle_top__DOT__pc;
    vlSelfRef.rvfi_pc_rdata = vlSelfRef.cpu_single_cycle_top__DOT__pc;
    vlSelfRef.instr_out = ((0x0400U >= (0x000007ffU 
                                        & (vlSelfRef.cpu_single_cycle_top__DOT__pc 
                                           >> 2U)))
                            ? vlSelfRef.cpu_single_cycle_top__DOT__instr_mem_i__DOT__mem
                           [(0x000007ffU & (vlSelfRef.cpu_single_cycle_top__DOT__pc 
                                            >> 2U))]
                            : vlSelfRef.cpu_single_cycle_top__DOT__instr_mem_i__DOT____Vxrand___0);
    vlSelfRef.rvfi_insn = vlSelfRef.instr_out;
    __VdfgRegularize_h6e95ff9d_0_3 = ((((- (IData)(
                                                   (vlSelfRef.instr_out 
                                                    >> 0x0000001fU))) 
                                        << 0x0000000cU) 
                                       | (vlSelfRef.instr_out 
                                          >> 0x00000014U)) 
                                      & (- (IData)(
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.instr_out)))));
    __VdfgRegularize_h6e95ff9d_0_12 = (0xfffff000U 
                                       & (vlSelfRef.instr_out 
                                          & (- (IData)(
                                                       (3U 
                                                        == 
                                                        (3U 
                                                         & vlSelfRef.instr_out))))));
    vlSelfRef.cpu_single_cycle_top__DOT__ctrl = 0U;
    vlSelfRef.cpu_single_cycle_top__DOT__ctrl = (1U 
                                                 | vlSelfRef.cpu_single_cycle_top__DOT__ctrl);
    if ((0x00000040U & vlSelfRef.instr_out)) {
        if ((0x00000020U & vlSelfRef.instr_out)) {
            if ((0x00000010U & vlSelfRef.instr_out)) {
                if ((1U & (~ (vlSelfRef.instr_out >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.instr_out 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.instr_out)) {
                            if ((1U & vlSelfRef.instr_out)) {
                                if ((0U == (7U & (vlSelfRef.instr_out 
                                                  >> 0x0cU)))) {
                                    vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                        = (2U | (0x007ffffcU 
                                                 & vlSelfRef.cpu_single_cycle_top__DOT__ctrl));
                                }
                            }
                        }
                    }
                }
            } else if ((8U & vlSelfRef.instr_out)) {
                if ((4U & vlSelfRef.instr_out)) {
                    if ((2U & vlSelfRef.instr_out)) {
                        if ((1U & vlSelfRef.instr_out)) {
                            vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                = (0x007ffffeU & vlSelfRef.cpu_single_cycle_top__DOT__ctrl);
                            vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                = (0x00400000U | vlSelfRef.cpu_single_cycle_top__DOT__ctrl);
                            vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                = (0x00000200U | (0x007ffcffU 
                                                  & vlSelfRef.cpu_single_cycle_top__DOT__ctrl));
                            vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                = (8U | vlSelfRef.cpu_single_cycle_top__DOT__ctrl);
                        }
                    }
                }
            } else if ((4U & vlSelfRef.instr_out)) {
                if ((2U & vlSelfRef.instr_out)) {
                    if ((1U & vlSelfRef.instr_out)) {
                        if ((0U == (7U & (vlSelfRef.instr_out 
                                          >> 0x0cU)))) {
                            vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                = (0x007ffffeU & vlSelfRef.cpu_single_cycle_top__DOT__ctrl);
                            vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                = (0x00400000U | vlSelfRef.cpu_single_cycle_top__DOT__ctrl);
                            vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                = (0x00000200U | (0x007ffcffU 
                                                  & vlSelfRef.cpu_single_cycle_top__DOT__ctrl));
                            vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                = (0x0000000cU | vlSelfRef.cpu_single_cycle_top__DOT__ctrl);
                        }
                    }
                }
            } else if ((2U & vlSelfRef.instr_out)) {
                if ((1U & vlSelfRef.instr_out)) {
                    vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                        = ((0x007fff8fU & vlSelfRef.cpu_single_cycle_top__DOT__ctrl) 
                           | (0x00000070U & ((0x00b1a008U 
                                              >> ((IData)(3U) 
                                                  * 
                                                  (7U 
                                                   & (vlSelfRef.instr_out 
                                                      >> 0x0cU)))) 
                                             << 4U)));
                    if ((0x00004000U & vlSelfRef.instr_out)) {
                        vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                            = (0x007ffffeU & vlSelfRef.cpu_single_cycle_top__DOT__ctrl);
                        vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                            = (0x00000080U | vlSelfRef.cpu_single_cycle_top__DOT__ctrl);
                    } else if ((1U & (~ (vlSelfRef.instr_out 
                                         >> 0x0000000dU)))) {
                        vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                            = (0x007ffffeU & vlSelfRef.cpu_single_cycle_top__DOT__ctrl);
                        vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                            = (0x00000080U | vlSelfRef.cpu_single_cycle_top__DOT__ctrl);
                    }
                }
            }
        }
        vlSelfRef.cpu_single_cycle_top__DOT__imm_gen_i__DOT__imm 
            = ((- (IData)((1U & (~ (vlSelfRef.instr_out 
                                    >> 4U))))) & ((
                                                   (8U 
                                                    & vlSelfRef.instr_out)
                                                    ? 
                                                   (((((0x00000ffeU 
                                                        & ((- (IData)(
                                                                      (vlSelfRef.instr_out 
                                                                       >> 0x0000001fU))) 
                                                           << 1U)) 
                                                       | (vlSelfRef.instr_out 
                                                          >> 0x0000001fU)) 
                                                      << 0x00000014U) 
                                                     | ((((0x000001feU 
                                                           & (vlSelfRef.instr_out 
                                                              >> 0x0000000bU)) 
                                                          | (1U 
                                                             & (vlSelfRef.instr_out 
                                                                >> 0x00000014U))) 
                                                         << 0x0000000bU) 
                                                        | (0x000007feU 
                                                           & (vlSelfRef.instr_out 
                                                              >> 0x00000014U)))) 
                                                    & (- (IData)(
                                                                 (7U 
                                                                  == 
                                                                  (7U 
                                                                   & vlSelfRef.instr_out)))))
                                                    : 
                                                   ((4U 
                                                     & vlSelfRef.instr_out)
                                                     ? __VdfgRegularize_h6e95ff9d_0_3
                                                     : 
                                                    ((((- (IData)(
                                                                  (vlSelfRef.instr_out 
                                                                   >> 0x0000001fU))) 
                                                       << 0x0000000dU) 
                                                      | ((((2U 
                                                            & (vlSelfRef.instr_out 
                                                               >> 0x0000001eU)) 
                                                           | (1U 
                                                              & (vlSelfRef.instr_out 
                                                                 >> 7U))) 
                                                          << 0x0000000bU) 
                                                         | ((0x000007e0U 
                                                             & (vlSelfRef.instr_out 
                                                                >> 0x00000014U)) 
                                                            | (0x0000001eU 
                                                               & (vlSelfRef.instr_out 
                                                                  >> 7U))))) 
                                                     & (- (IData)(
                                                                  (3U 
                                                                   == 
                                                                   (3U 
                                                                    & vlSelfRef.instr_out))))))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.instr_out 
                                                                   >> 5U))))));
    } else if ((0x00000020U & vlSelfRef.instr_out)) {
        if ((0x00000010U & vlSelfRef.instr_out)) {
            if ((1U & (~ (vlSelfRef.instr_out >> 3U)))) {
                if ((4U & vlSelfRef.instr_out)) {
                    if ((2U & vlSelfRef.instr_out)) {
                        if ((1U & vlSelfRef.instr_out)) {
                            vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                = (0x007ffffeU & vlSelfRef.cpu_single_cycle_top__DOT__ctrl);
                            vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                = (0x00400000U | vlSelfRef.cpu_single_cycle_top__DOT__ctrl);
                            vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                = (0x00001400U | (0x007e00ffU 
                                                  & vlSelfRef.cpu_single_cycle_top__DOT__ctrl));
                        }
                    }
                } else if ((2U & vlSelfRef.instr_out)) {
                    if ((1U & vlSelfRef.instr_out)) {
                        vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                            = (0x007ffffeU & vlSelfRef.cpu_single_cycle_top__DOT__ctrl);
                        vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                            = (0x00400000U | vlSelfRef.cpu_single_cycle_top__DOT__ctrl);
                        vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                            = (0x007fe0ffU & vlSelfRef.cpu_single_cycle_top__DOT__ctrl);
                        vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                            = ((0x007e1fffU & vlSelfRef.cpu_single_cycle_top__DOT__ctrl) 
                               | (((0x00004000U & vlSelfRef.instr_out)
                                    ? ((0x00002000U 
                                        & vlSelfRef.instr_out)
                                        ? ((0x00001000U 
                                            & vlSelfRef.instr_out)
                                            ? 9U : 8U)
                                        : ((0x00001000U 
                                            & vlSelfRef.instr_out)
                                            ? ((0x40000000U 
                                                & vlSelfRef.instr_out)
                                                ? 7U
                                                : 6U)
                                            : 5U)) : 
                                   ((0x00002000U & vlSelfRef.instr_out)
                                     ? ((0x00001000U 
                                         & vlSelfRef.instr_out)
                                         ? 4U : 3U)
                                     : ((0x00001000U 
                                         & vlSelfRef.instr_out)
                                         ? 2U : ((0x40000000U 
                                                  & vlSelfRef.instr_out)
                                                  ? 1U
                                                  : 0U)))) 
                                  << 0x0000000dU));
                    }
                }
            }
            vlSelfRef.cpu_single_cycle_top__DOT__imm_gen_i__DOT__imm 
                = ((- (IData)((IData)((4U == (0x0000000cU 
                                              & vlSelfRef.instr_out))))) 
                   & __VdfgRegularize_h6e95ff9d_0_12);
        } else {
            if ((1U & (~ (vlSelfRef.instr_out >> 3U)))) {
                if ((1U & (~ (vlSelfRef.instr_out >> 2U)))) {
                    if ((2U & vlSelfRef.instr_out)) {
                        if ((1U & vlSelfRef.instr_out)) {
                            if ((((0U == (7U & (vlSelfRef.instr_out 
                                                >> 0x0cU))) 
                                  || (1U == (7U & (vlSelfRef.instr_out 
                                                   >> 0x0cU)))) 
                                 || (2U == (7U & (vlSelfRef.instr_out 
                                                  >> 0x0cU))))) {
                                vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                    = (0x007ffffeU 
                                       & vlSelfRef.cpu_single_cycle_top__DOT__ctrl);
                                vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                    = ((0x00601fffU 
                                        & vlSelfRef.cpu_single_cycle_top__DOT__ctrl) 
                                       | (0x00100000U 
                                          | (0x000e0000U 
                                             & (vlSelfRef.instr_out 
                                                << 5U))));
                                vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                    = (0x00000400U 
                                       | (0x007fe3ffU 
                                          & vlSelfRef.cpu_single_cycle_top__DOT__ctrl));
                            }
                        }
                    }
                }
            }
            vlSelfRef.cpu_single_cycle_top__DOT__imm_gen_i__DOT__imm 
                = ((((- (IData)((vlSelfRef.instr_out 
                                 >> 0x0000001fU))) 
                     << 0x0000000cU) | ((0x00000fe0U 
                                         & (vlSelfRef.instr_out 
                                            >> 0x00000014U)) 
                                        | (0x0000001fU 
                                           & (vlSelfRef.instr_out 
                                              >> 7U)))) 
                   & (- (IData)((IData)((3U == (0x0000000fU 
                                                & vlSelfRef.instr_out))))));
        }
    } else if ((0x00000010U & vlSelfRef.instr_out)) {
        if ((1U & (~ (vlSelfRef.instr_out >> 3U)))) {
            if ((4U & vlSelfRef.instr_out)) {
                if ((2U & vlSelfRef.instr_out)) {
                    if ((1U & vlSelfRef.instr_out)) {
                        vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                            = (0x007ffffeU & vlSelfRef.cpu_single_cycle_top__DOT__ctrl);
                        vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                            = (0x00400000U | vlSelfRef.cpu_single_cycle_top__DOT__ctrl);
                        vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                            = (0x00000c00U | (0x007e00ffU 
                                              & vlSelfRef.cpu_single_cycle_top__DOT__ctrl));
                    }
                }
            } else if ((2U & vlSelfRef.instr_out)) {
                if ((1U & vlSelfRef.instr_out)) {
                    vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                        = (0x007ffffeU & vlSelfRef.cpu_single_cycle_top__DOT__ctrl);
                    vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                        = (0x00400000U | vlSelfRef.cpu_single_cycle_top__DOT__ctrl);
                    vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                        = (0x00000400U | (0x007fe0ffU 
                                          & vlSelfRef.cpu_single_cycle_top__DOT__ctrl));
                    vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                        = ((0x007e1fffU & vlSelfRef.cpu_single_cycle_top__DOT__ctrl) 
                           | (((0x00004000U & vlSelfRef.instr_out)
                                ? ((0x00002000U & vlSelfRef.instr_out)
                                    ? ((0x00001000U 
                                        & vlSelfRef.instr_out)
                                        ? 9U : 8U) : 
                                   ((0x00001000U & vlSelfRef.instr_out)
                                     ? ((0x40000000U 
                                         & vlSelfRef.instr_out)
                                         ? 7U : 6U)
                                     : 5U)) : ((0x00002000U 
                                                & vlSelfRef.instr_out)
                                                ? (
                                                   (0x00001000U 
                                                    & vlSelfRef.instr_out)
                                                    ? 4U
                                                    : 3U)
                                                : (
                                                   (0x00001000U 
                                                    & vlSelfRef.instr_out)
                                                    ? 2U
                                                    : 0U))) 
                              << 0x0000000dU));
                }
            }
        }
        vlSelfRef.cpu_single_cycle_top__DOT__imm_gen_i__DOT__imm 
            = (((4U & vlSelfRef.instr_out) ? __VdfgRegularize_h6e95ff9d_0_12
                 : __VdfgRegularize_h6e95ff9d_0_3) 
               & (- (IData)((1U & (~ (vlSelfRef.instr_out 
                                      >> 3U))))));
    } else {
        if ((8U & vlSelfRef.instr_out)) {
            if ((4U & vlSelfRef.instr_out)) {
                if ((2U & vlSelfRef.instr_out)) {
                    if ((1U & vlSelfRef.instr_out)) {
                        vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                            = (0x007ffffeU & vlSelfRef.cpu_single_cycle_top__DOT__ctrl);
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.instr_out >> 2U)))) {
            if ((2U & vlSelfRef.instr_out)) {
                if ((1U & vlSelfRef.instr_out)) {
                    if ((0x00004000U & vlSelfRef.instr_out)) {
                        if ((1U & (~ (vlSelfRef.instr_out 
                                      >> 0x0000000dU)))) {
                            vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                = (0x007ffffeU & vlSelfRef.cpu_single_cycle_top__DOT__ctrl);
                            vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                = (0x00600000U | vlSelfRef.cpu_single_cycle_top__DOT__ctrl);
                            vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                = ((0x007000ffU & vlSelfRef.cpu_single_cycle_top__DOT__ctrl) 
                                   | (0x00000500U | 
                                      (0x000e0000U 
                                       & (vlSelfRef.instr_out 
                                          << 5U))));
                        }
                    } else if ((0x00002000U & vlSelfRef.instr_out)) {
                        if ((1U & (~ (vlSelfRef.instr_out 
                                      >> 0x0000000cU)))) {
                            vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                = (0x007ffffeU & vlSelfRef.cpu_single_cycle_top__DOT__ctrl);
                            vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                = (0x00600000U | vlSelfRef.cpu_single_cycle_top__DOT__ctrl);
                            vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                = ((0x007000ffU & vlSelfRef.cpu_single_cycle_top__DOT__ctrl) 
                                   | (0x00000500U | 
                                      (0x000e0000U 
                                       & (vlSelfRef.instr_out 
                                          << 5U))));
                        }
                    } else {
                        vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                            = (0x007ffffeU & vlSelfRef.cpu_single_cycle_top__DOT__ctrl);
                        vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                            = (0x00600000U | vlSelfRef.cpu_single_cycle_top__DOT__ctrl);
                        vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                            = ((0x007000ffU & vlSelfRef.cpu_single_cycle_top__DOT__ctrl) 
                               | (0x00000500U | (0x000e0000U 
                                                 & (vlSelfRef.instr_out 
                                                    << 5U))));
                    }
                }
            }
        }
        vlSelfRef.cpu_single_cycle_top__DOT__imm_gen_i__DOT__imm 
            = (__VdfgRegularize_h6e95ff9d_0_3 & ((- (IData)(
                                                            (1U 
                                                             & (~ 
                                                                (vlSelfRef.instr_out 
                                                                 >> 3U))))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (~ 
                                                                  (vlSelfRef.instr_out 
                                                                   >> 2U)))))));
    }
    vlSelfRef.halt = (1U & (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                            >> 1U));
    vlSelfRef.cpu_single_cycle_top__DOT__rvfi_rd_written 
        = ((vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
            >> 0x00000016U) & (0U != (0x0000001fU & 
                                      (vlSelfRef.instr_out 
                                       >> 7U))));
    vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__a 
        = ((0U == (3U & (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                         >> 0x0000000bU))) ? vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
           [(0x0000001fU & (vlSelfRef.instr_out >> 0x0000000fU))]
            : (vlSelfRef.cpu_single_cycle_top__DOT__pc 
               & (- (IData)((1U == (3U & (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                          >> 0x0000000bU)))))));
    vlSelfRef.cpu_single_cycle_top__DOT__next_pc_i__DOT__target_raw 
        = (vlSelfRef.cpu_single_cycle_top__DOT__imm_gen_i__DOT__imm 
           + ((4U & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
               ? vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
              [(0x0000001fU & (vlSelfRef.instr_out 
                               >> 0x0000000fU))] : vlSelfRef.cpu_single_cycle_top__DOT__pc));
    vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__b 
        = ((0x00000400U & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
            ? vlSelfRef.cpu_single_cycle_top__DOT__imm_gen_i__DOT__imm
            : vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
           [(0x0000001fU & (vlSelfRef.instr_out >> 0x00000014U))]);
    vlSelfRef.rvfi_rd_addr = (0x0000001fU & ((vlSelfRef.instr_out 
                                              >> 7U) 
                                             & (- (IData)((IData)(vlSelfRef.cpu_single_cycle_top__DOT__rvfi_rd_written)))));
    vlSelfRef.rvfi_pc_wdata = ((1U & ((vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
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
                                                           >> 0x00000014U))])))))))
                                ? ((0xfffffffeU & vlSelfRef.cpu_single_cycle_top__DOT__next_pc_i__DOT__target_raw) 
                                   | (1U & ((~ (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                                >> 2U)) 
                                            & vlSelfRef.cpu_single_cycle_top__DOT__next_pc_i__DOT__target_raw)))
                                : ((IData)(4U) + vlSelfRef.cpu_single_cycle_top__DOT__pc));
    vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__result 
        = ((0x00010000U & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
            ? ((- (IData)((1U & (~ (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                    >> 0x0000000eU))))) 
               & (((0x00002000U & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                    ? (vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__a 
                       & vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__b)
                    : (vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__a 
                       | vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__b)) 
                  & (- (IData)((1U & (~ (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                         >> 0x0000000fU)))))))
            : ((0x00008000U & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                ? ((0x00004000U & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                    ? ((0x00002000U & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                        ? VL_SHIFTRS_III(32,32,5, vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__a, 
                                         (0x0000001fU 
                                          & vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__b))
                        : (vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__a 
                           >> (0x0000001fU & vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__b)))
                    : ((0x00002000U & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                        ? (vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__a 
                           ^ vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__b)
                        : (1U & (- (IData)((vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__a 
                                            < vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__b))))))
                : ((0x00004000U & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                    ? ((0x00002000U & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                        ? (1U & (- (IData)(VL_LTS_III(32, vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__a, vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__b))))
                        : (vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__a 
                           << (0x0000001fU & vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__b)))
                    : ((0x00002000U & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                        ? (vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__a 
                           - vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__b)
                        : (vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__a 
                           + vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__b)))));
    vlSelfRef.rvfi_mem_addr = (0xfffffffcU & vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__result);
    vlSelfRef.rvfi_mem_wmask = (0x0000000fU & (((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                                     >> 0x00000011U)))
                                                 ? 
                                                ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__result))
                                                 : 
                                                ((1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                                      >> 0x00000011U)))
                                                  ? 
                                                 ((IData)(3U) 
                                                  << 
                                                  (3U 
                                                   & vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__result))
                                                  : 
                                                 (- (IData)(
                                                            (2U 
                                                             == 
                                                             (7U 
                                                              & (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                                                 >> 0x00000011U))))))) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                                                >> 0x00000014U))))));
    vlSelfRef.rvfi_mem_wdata = (vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                [(0x0000001fU & (vlSelfRef.instr_out 
                                                 >> 0x00000014U))] 
                                << (0x00000018U & (vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__result 
                                                   << 3U)));
    __VdfgRegularize_h6e95ff9d_0_6 = (0x0000000fU & 
                                      ((0x00020000U 
                                        & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                                        ? ((IData)(3U) 
                                           << (3U & vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__result))
                                        : ((IData)(1U) 
                                           << (3U & vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__result))));
    __VdfgRegularize_h6e95ff9d_0_7 = (0x0000ffffU & 
                                      (vlSelfRef.cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem
                                       [(0x000003ffU 
                                         & (vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__result 
                                            >> 2U))] 
                                       >> (0x00000018U 
                                           & (vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__result 
                                              << 3U))));
    __VdfgRegularize_h6e95ff9d_0_8 = (0x000000ffU & 
                                      (vlSelfRef.cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem
                                       [(0x000003ffU 
                                         & (vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__result 
                                            >> 2U))] 
                                       >> (0x00000018U 
                                           & (vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__result 
                                              << 3U))));
    vlSelfRef.rvfi_mem_rmask = (0x0000000fU & (((0x00080000U 
                                                 & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                                                 ? 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_6) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (~ 
                                                                  (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                                                   >> 0x00000012U))))))
                                                 : 
                                                ((0x00040000U 
                                                  & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                                                  ? 
                                                 (- (IData)(
                                                            (1U 
                                                             & (~ 
                                                                (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                                                 >> 0x00000011U)))))
                                                  : (IData)(__VdfgRegularize_h6e95ff9d_0_6))) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                                                >> 0x00000015U))))));
    vlSelfRef.rvfi_mem_rdata = (((0x00080000U & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                                  ? ((- (IData)((1U 
                                                 & (~ 
                                                    (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                                     >> 0x00000012U))))) 
                                     & ((0x00020000U 
                                         & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                                         ? (IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_8)))
                                  : ((0x00040000U & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                                      ? (vlSelfRef.cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem
                                         [(0x000003ffU 
                                           & (vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__result 
                                              >> 2U))] 
                                         & (- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                                           >> 0x00000011U))))))
                                      : ((0x00020000U 
                                          & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem
                                                             [
                                                             (0x000003ffU 
                                                              & (vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__result 
                                                                 >> 2U))] 
                                                             >> 
                                                             (0x0000001fU 
                                                              & ((IData)(0x0fU) 
                                                                 + 
                                                                 (0x00000018U 
                                                                  & (vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__result 
                                                                     << 3U)))))))) 
                                              << 0x00000010U) 
                                             | (IData)(__VdfgRegularize_h6e95ff9d_0_7))
                                          : (((- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem
                                                             [
                                                             (0x000003ffU 
                                                              & (vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__result 
                                                                 >> 2U))] 
                                                             >> 
                                                             (0x0000001fU 
                                                              & ((IData)(7U) 
                                                                 + 
                                                                 (0x00000018U 
                                                                  & (vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__result 
                                                                     << 3U)))))))) 
                                              << 8U) 
                                             | (IData)(__VdfgRegularize_h6e95ff9d_0_8))))) 
                                & (- (IData)((1U & 
                                              (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                               >> 0x00000015U)))));
    vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__wr_data 
        = ((0U == (3U & (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                         >> 8U))) ? vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__result
            : ((1U == (3U & (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                             >> 8U))) ? vlSelfRef.rvfi_mem_rdata
                : (((IData)(4U) + vlSelfRef.cpu_single_cycle_top__DOT__pc) 
                   & (- (IData)((2U == (3U & (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                              >> 8U))))))));
    vlSelfRef.rvfi_rd_wdata = (vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__wr_data 
                               & (- (IData)((IData)(vlSelfRef.cpu_single_cycle_top__DOT__rvfi_rd_written))));
}

void Vcpu_single_cycle_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_single_cycle_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vcpu_single_cycle_top___024root___eval_phase__act(Vcpu_single_cycle_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root___eval_phase__act\n"); );
    Vcpu_single_cycle_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((~ (IData)(vlSelfRef.rst_n)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__1)) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__1))))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__rst_n__1 = vlSelfRef.rst_n;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcpu_single_cycle_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vcpu_single_cycle_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vcpu_single_cycle_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vcpu_single_cycle_top___024root___eval_phase__nba(Vcpu_single_cycle_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root___eval_phase__nba\n"); );
    Vcpu_single_cycle_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vcpu_single_cycle_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vcpu_single_cycle_top___024root___nba_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[1U] = 1U;
            }
        }
        Vcpu_single_cycle_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vcpu_single_cycle_top___024root___eval(Vcpu_single_cycle_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root___eval\n"); );
    Vcpu_single_cycle_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vcpu_single_cycle_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("design/cpu_single_cycle_top.sv", 4, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vcpu_single_cycle_top___024root___eval_phase__ico(vlSelf);
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcpu_single_cycle_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("design/cpu_single_cycle_top.sv", 4, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcpu_single_cycle_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("design/cpu_single_cycle_top.sv", 4, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vcpu_single_cycle_top___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vcpu_single_cycle_top___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vcpu_single_cycle_top___024root___eval_debug_assertions(Vcpu_single_cycle_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root___eval_debug_assertions\n"); );
    Vcpu_single_cycle_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
}
#endif  // VL_DEBUG
