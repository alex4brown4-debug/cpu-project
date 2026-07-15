// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_single_cycle_top.h for the primary calling header

#include "Vcpu_single_cycle_top__pch.h"

VL_ATTR_COLD void Vcpu_single_cycle_top___024root___eval_static(Vcpu_single_cycle_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root___eval_static\n"); );
    Vcpu_single_cycle_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__1 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vcpu_single_cycle_top___024root___eval_initial(Vcpu_single_cycle_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root___eval_initial\n"); );
    Vcpu_single_cycle_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        VL_READMEM_N(true, 32, 1024, 0, "data_mem_init.hex"s
                     ,  &(vlSelfRef.cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem)
                     , 0, ~0ULL);
        VL_READMEM_N(true, 32, 1025, 0, "instr_mem.hex"s
                     ,  &(vlSelfRef.cpu_single_cycle_top__DOT__instr_mem_i__DOT__mem)
                     , 0, ~0ULL);
    }
}

VL_ATTR_COLD void Vcpu_single_cycle_top___024root___eval_final(Vcpu_single_cycle_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root___eval_final\n"); );
    Vcpu_single_cycle_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_single_cycle_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcpu_single_cycle_top___024root___eval_phase__stl(Vcpu_single_cycle_top___024root* vlSelf);

VL_ATTR_COLD void Vcpu_single_cycle_top___024root___eval_settle(Vcpu_single_cycle_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root___eval_settle\n"); );
    Vcpu_single_cycle_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vcpu_single_cycle_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("design/cpu_single_cycle_top.sv", 4, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vcpu_single_cycle_top___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vcpu_single_cycle_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_single_cycle_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vcpu_single_cycle_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vcpu_single_cycle_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vcpu_single_cycle_top___024root___stl_sequent__TOP__0(Vcpu_single_cycle_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root___stl_sequent__TOP__0\n"); );
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
    // Body
    vlSelfRef.rvfi_valid = vlSelfRef.rst_n;
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

VL_ATTR_COLD bool Vcpu_single_cycle_top___024root___eval_phase__stl(Vcpu_single_cycle_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root___eval_phase__stl\n"); );
    Vcpu_single_cycle_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcpu_single_cycle_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vcpu_single_cycle_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vcpu_single_cycle_top___024root___stl_sequent__TOP__0(vlSelf);
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                }
            }
        }
    }
    return (__VstlExecute);
}

bool Vcpu_single_cycle_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_single_cycle_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vcpu_single_cycle_top___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( rst_n)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vcpu_single_cycle_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_single_cycle_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vcpu_single_cycle_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcpu_single_cycle_top___024root___ctor_var_reset(Vcpu_single_cycle_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root___ctor_var_reset\n"); );
    Vcpu_single_cycle_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->pc_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4379395961601650806ull);
    vlSelf->instr_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1236131977791558662ull);
    vlSelf->halt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11049222807502041558ull);
    vlSelf->rvfi_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11567585934436963273ull);
    vlSelf->rvfi_insn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6220329832192124657ull);
    vlSelf->rvfi_pc_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 166339320296314353ull);
    vlSelf->rvfi_pc_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9985564527100831026ull);
    vlSelf->rvfi_rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7404223540078648407ull);
    vlSelf->rvfi_rd_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12563052908445307242ull);
    vlSelf->rvfi_mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4819164154746370970ull);
    vlSelf->rvfi_mem_rmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11848081616672831662ull);
    vlSelf->rvfi_mem_wmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16583986449816199447ull);
    vlSelf->rvfi_mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 165640419387587325ull);
    vlSelf->rvfi_mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9763064276365803955ull);
    vlSelf->cpu_single_cycle_top__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3736720239666997218ull);
    vlSelf->cpu_single_cycle_top__DOT__ctrl = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 830207386432273176ull);
    vlSelf->cpu_single_cycle_top__DOT__rvfi_rd_written = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10397123187012620013ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->cpu_single_cycle_top__DOT__data_mem_i__DOT__dmem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16473241561615064553ull);
    }
    vlSelf->cpu_single_cycle_top__DOT__alu_i__DOT__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10606504602816573745ull);
    vlSelf->cpu_single_cycle_top__DOT__alu_i__DOT__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1403398576248606474ull);
    vlSelf->cpu_single_cycle_top__DOT__alu_i__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12393006064788664462ull);
    vlSelf->cpu_single_cycle_top__DOT__imm_gen_i__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6863064300662507754ull);
    vlSelf->cpu_single_cycle_top__DOT__reg_file_i__DOT__wr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 375811371575573152ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->cpu_single_cycle_top__DOT__reg_file_i__DOT__regs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15251934944124928234ull);
    }
    vlSelf->cpu_single_cycle_top__DOT__instr_mem_i__DOT____Vxrand___0 = VL_SCOPED_RAND_RESET_ASSIGN_I(32, __VscopeHash, 14234505004952537650ull);
    for (int __Vi0 = 0; __Vi0 < 1025; ++__Vi0) {
        vlSelf->cpu_single_cycle_top__DOT__instr_mem_i__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15030983727145771499ull);
    }
    vlSelf->cpu_single_cycle_top__DOT__next_pc_i__DOT__target_raw = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7014650956812047114ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = 0;
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
