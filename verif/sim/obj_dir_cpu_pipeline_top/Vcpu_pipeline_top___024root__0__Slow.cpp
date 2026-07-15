// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_pipeline_top.h for the primary calling header

#include "Vcpu_pipeline_top__pch.h"

VL_ATTR_COLD void Vcpu_pipeline_top___024root___eval_static(Vcpu_pipeline_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root___eval_static\n"); );
    Vcpu_pipeline_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vcpu_pipeline_top___024root___eval_initial(Vcpu_pipeline_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root___eval_initial\n"); );
    Vcpu_pipeline_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        VL_READMEM_N(true, 32, 1024, 0, "data_mem_init.hex"s
                     ,  &(vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__dmem)
                     , 0, ~0ULL);
        VL_READMEM_N(true, 32, 1024, 0, "instr_mem.hex"s
                     ,  &(vlSelfRef.cpu_pipeline_top__DOT__instr_mem_i__DOT__mem)
                     , 0, ~0ULL);
    }
    {
        // Inlined CFunc: __Vm_traceActivitySetAll
        vlSelfRef.__Vm_traceActivity[0U] = 1U;
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_ATTR_COLD void Vcpu_pipeline_top___024root___eval_final(Vcpu_pipeline_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root___eval_final\n"); );
    Vcpu_pipeline_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_pipeline_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcpu_pipeline_top___024root___eval_phase__stl(Vcpu_pipeline_top___024root* vlSelf);

VL_ATTR_COLD void Vcpu_pipeline_top___024root___eval_settle(Vcpu_pipeline_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root___eval_settle\n"); );
    Vcpu_pipeline_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vcpu_pipeline_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("design/cpu_pipeline_top.sv", 25, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vcpu_pipeline_top___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vcpu_pipeline_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_pipeline_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vcpu_pipeline_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vcpu_pipeline_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vcpu_pipeline_top___024root___stl_sequent__TOP__0(Vcpu_pipeline_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root___stl_sequent__TOP__0\n"); );
    Vcpu_pipeline_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_3;
    __VdfgRegularize_h6e95ff9d_0_3 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_12;
    __VdfgRegularize_h6e95ff9d_0_12 = 0;
    // Body
    vlSelfRef.pc_out = vlSelfRef.cpu_pipeline_top__DOT__pc_q;
    vlSelfRef.rvfi_insn = ((vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[3U] 
                            << 0x00000018U) | (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[2U] 
                                               >> 8U));
    vlSelfRef.rvfi_pc_rdata = ((vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[8U] 
                                << 0x00000013U) | (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[7U] 
                                                   >> 0x0000000dU));
    vlSelfRef.rvfi_pc_wdata = ((vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                << 0x00000018U) | (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[3U] 
                                                   >> 8U));
    vlSelfRef.rvfi_mem_addr = ((vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[2U] 
                                << 0x00000018U) | (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[1U] 
                                                   >> 8U));
    vlSelfRef.rvfi_mem_rmask = (0x0000000fU & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[1U] 
                                               >> 4U));
    vlSelfRef.rvfi_mem_wmask = (0x0000000fU & vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[1U]);
    vlSelfRef.rvfi_mem_wdata = vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[0U];
    vlSelfRef.instr_out = vlSelfRef.cpu_pipeline_top__DOT__instr_mem_i__DOT__mem
        [(0x000003ffU & (vlSelfRef.cpu_pipeline_top__DOT__pc_q 
                         >> 2U))];
    vlSelfRef.rvfi_valid = (1U & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[9U] 
                                  >> 6U));
    vlSelfRef.cpu_pipeline_top__DOT__id_ctrl = 0U;
    vlSelfRef.cpu_pipeline_top__DOT__id_ctrl = (1U 
                                                | vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
    __VdfgRegularize_h6e95ff9d_0_3 = ((((- (IData)(
                                                   (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                    >> 0x0000001fU))) 
                                        << 0x0000000cU) 
                                       | (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                          >> 0x00000014U)) 
                                      & (- (IData)(
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])))));
    __VdfgRegularize_h6e95ff9d_0_12 = (0xfffff000U 
                                       & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                          & (- (IData)(
                                                       (3U 
                                                        == 
                                                        (3U 
                                                         & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U]))))));
    if ((0x00000040U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
        if ((0x00000020U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
            if ((0x00000010U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
                if ((1U & (~ (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
                            if ((1U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
                                if ((0U == (7U & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                  >> 0x0000000cU)))) {
                                    vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                                        = (2U | (0x01fffffcU 
                                                 & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl));
                                }
                            }
                        }
                    }
                }
            } else if ((8U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
                if ((4U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
                    if ((2U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
                        if ((1U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
                            vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                                = (0x01fffffeU & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                            vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                                = (0x01000000U | vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                            vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                                = (0x00000200U | (0x01fffcffU 
                                                  & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl));
                            vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                                = (8U | vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                        }
                    }
                }
            } else if ((4U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
                if ((2U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
                    if ((1U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
                        if ((0U == (7U & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                          >> 0x0000000cU)))) {
                            vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                                = (0x01fffffeU & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                            vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                                = (0x01000000U | vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                            vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                                = (0x00000200U | (0x01fffcffU 
                                                  & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl));
                            vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                                = (0x0000000cU | vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                            vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                                = (0x00000800U | vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                        }
                    }
                }
            } else if ((2U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
                if ((1U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
                    vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                        = ((0x01ffff8fU & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl) 
                           | (0x00000070U & ((0x00b1a008U 
                                              >> ((IData)(3U) 
                                                  * 
                                                  (7U 
                                                   & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                      >> 0x0000000cU)))) 
                                             << 4U)));
                    if ((0x00004000U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
                        vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                            = (0x01fffffeU & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                        vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                            = (0x00000080U | vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                        vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                            = (0x00000c00U | vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                    } else if ((1U & (~ (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                         >> 0x0000000dU)))) {
                        vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                            = (0x01fffffeU & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                        vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                            = (0x00000080U | vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                        vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                            = (0x00000c00U | vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                    }
                }
            }
        }
        vlSelfRef.cpu_pipeline_top__DOT__imm_gen_i__DOT__imm 
            = ((- (IData)((1U & (~ (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                    >> 4U))))) & ((
                                                   (8U 
                                                    & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])
                                                    ? 
                                                   (((((0x00000ffeU 
                                                        & ((- (IData)(
                                                                      (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                                       >> 0x0000001fU))) 
                                                           << 1U)) 
                                                       | (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                          >> 0x0000001fU)) 
                                                      << 0x00000014U) 
                                                     | ((((0x000001feU 
                                                           & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                              >> 0x0000000bU)) 
                                                          | (1U 
                                                             & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                                >> 0x00000014U))) 
                                                         << 0x0000000bU) 
                                                        | (0x000007feU 
                                                           & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                              >> 0x00000014U)))) 
                                                    & (- (IData)(
                                                                 (7U 
                                                                  == 
                                                                  (7U 
                                                                   & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])))))
                                                    : 
                                                   ((4U 
                                                     & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])
                                                     ? __VdfgRegularize_h6e95ff9d_0_3
                                                     : 
                                                    ((((- (IData)(
                                                                  (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                                   >> 0x0000001fU))) 
                                                       << 0x0000000dU) 
                                                      | ((((2U 
                                                            & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                               >> 0x0000001eU)) 
                                                           | (1U 
                                                              & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                                 >> 7U))) 
                                                          << 0x0000000bU) 
                                                         | ((0x000007e0U 
                                                             & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                                >> 0x00000014U)) 
                                                            | (0x0000001eU 
                                                               & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                                  >> 7U))))) 
                                                     & (- (IData)(
                                                                  (3U 
                                                                   == 
                                                                   (3U 
                                                                    & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U]))))))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                                   >> 5U))))));
    } else if ((0x00000020U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
        if ((0x00000010U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
            if ((1U & (~ (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                          >> 3U)))) {
                if ((4U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
                    if ((2U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
                        if ((1U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
                            vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                                = (0x01fffffeU & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                            vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                                = (0x01000000U | vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                            vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                                = (0x00005000U | (0x01f80fffU 
                                                  & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl));
                            vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                                = (0x01fffcffU & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                        }
                    }
                } else if ((2U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
                    if ((1U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
                        vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                            = (0x01fffffeU & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                        vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                            = (0x01000000U | vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                        vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                            = (0x00000c00U | (0x01ff80ffU 
                                              & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl));
                        vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                            = ((0x01f87fffU & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl) 
                               | (((0x00004000U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])
                                    ? ((0x00002000U 
                                        & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])
                                        ? ((0x00001000U 
                                            & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])
                                            ? 9U : 8U)
                                        : ((0x00001000U 
                                            & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])
                                            ? ((0x40000000U 
                                                & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])
                                                ? 7U
                                                : 6U)
                                            : 5U)) : 
                                   ((0x00002000U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])
                                     ? ((0x00001000U 
                                         & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])
                                         ? 4U : 3U)
                                     : ((0x00001000U 
                                         & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])
                                         ? 2U : ((0x40000000U 
                                                  & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])
                                                  ? 1U
                                                  : 0U)))) 
                                  << 0x0000000fU));
                    }
                }
            }
            vlSelfRef.cpu_pipeline_top__DOT__imm_gen_i__DOT__imm 
                = ((- (IData)((IData)((4U == (0x0000000cU 
                                              & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U]))))) 
                   & __VdfgRegularize_h6e95ff9d_0_12);
        } else {
            if ((1U & (~ (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                          >> 3U)))) {
                if ((1U & (~ (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
                        if ((1U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
                            if ((((0U == (7U & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                >> 0x0000000cU))) 
                                  || (1U == (7U & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                   >> 0x0000000cU)))) 
                                 || (2U == (7U & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                  >> 0x0000000cU))))) {
                                vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                                    = (0x01fffffeU 
                                       & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                                vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                                    = ((0x01807fffU 
                                        & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl) 
                                       | (0x00400000U 
                                          | (0x00380000U 
                                             & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                << 7U))));
                                vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                                    = (0x00001c00U 
                                       | (0x01ff83ffU 
                                          & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl));
                            }
                        }
                    }
                }
            }
            vlSelfRef.cpu_pipeline_top__DOT__imm_gen_i__DOT__imm 
                = ((((- (IData)((vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                 >> 0x0000001fU))) 
                     << 0x0000000cU) | ((0x00000fe0U 
                                         & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                            >> 0x00000014U)) 
                                        | (0x0000001fU 
                                           & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                              >> 7U)))) 
                   & (- (IData)((IData)((3U == (0x0000000fU 
                                                & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U]))))));
        }
    } else if ((0x00000010U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
        if ((1U & (~ (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                      >> 3U)))) {
            if ((4U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
                if ((2U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
                    if ((1U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
                        vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                            = (0x01fffffeU & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                        vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                            = (0x01000000U | vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                        vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                            = (0x00003000U | (0x01f80fffU 
                                              & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl));
                        vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                            = (0x01fffcffU & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                    }
                }
            } else if ((2U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
                if ((1U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
                    vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                        = (0x01fffffeU & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                    vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                        = (0x01000000U | vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                    vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                        = (0x00001000U | (0x01ff8fffU 
                                          & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl));
                    vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                        = (0x01fffcffU & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                    vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                        = (0x00000800U | vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                    vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                        = ((0x01f87fffU & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl) 
                           | (((0x00004000U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])
                                ? ((0x00002000U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])
                                    ? ((0x00001000U 
                                        & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])
                                        ? 9U : 8U) : 
                                   ((0x00001000U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])
                                     ? ((0x40000000U 
                                         & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])
                                         ? 7U : 6U)
                                     : 5U)) : ((0x00002000U 
                                                & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])
                                                ? (
                                                   (0x00001000U 
                                                    & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])
                                                    ? 4U
                                                    : 3U)
                                                : (
                                                   (0x00001000U 
                                                    & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])
                                                    ? 2U
                                                    : 0U))) 
                              << 0x0000000fU));
                }
            }
        }
        vlSelfRef.cpu_pipeline_top__DOT__imm_gen_i__DOT__imm 
            = (((4U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])
                 ? __VdfgRegularize_h6e95ff9d_0_12 : __VdfgRegularize_h6e95ff9d_0_3) 
               & (- (IData)((1U & (~ (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                      >> 3U))))));
    } else {
        if ((8U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
            if ((4U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
                if ((2U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
                    if ((1U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
                        vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                            = (0x01fffffeU & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                             >> 2U)))) {
            if ((2U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
                if ((1U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
                    if ((0x00004000U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
                        if ((1U & (~ (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                      >> 0x0000000dU)))) {
                            vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                                = (0x01fffffeU & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                            vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                                = (0x01800000U | vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                            vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                                = ((0x01c00fffU & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl) 
                                   | (0x00001000U | 
                                      (0x00380000U 
                                       & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                          << 7U))));
                            vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                                = (0x00000100U | (0x01fffcffU 
                                                  & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl));
                            vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                                = (0x00000800U | vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                        }
                    } else if ((0x00002000U & vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U])) {
                        if ((1U & (~ (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                      >> 0x0000000cU)))) {
                            vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                                = (0x01fffffeU & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                            vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                                = (0x01800000U | vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                            vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                                = ((0x01c00fffU & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl) 
                                   | (0x00001000U | 
                                      (0x00380000U 
                                       & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                          << 7U))));
                            vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                                = (0x00000100U | (0x01fffcffU 
                                                  & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl));
                            vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                                = (0x00000800U | vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                        }
                    } else {
                        vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                            = (0x01fffffeU & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                        vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                            = (0x01800000U | vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                        vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                            = ((0x01c00fffU & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl) 
                               | (0x00001000U | (0x00380000U 
                                                 & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                    << 7U))));
                        vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                            = (0x00000100U | (0x01fffcffU 
                                              & vlSelfRef.cpu_pipeline_top__DOT__id_ctrl));
                        vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                            = (0x00000800U | vlSelfRef.cpu_pipeline_top__DOT__id_ctrl);
                    }
                }
            }
        }
        vlSelfRef.cpu_pipeline_top__DOT__imm_gen_i__DOT__imm 
            = (__VdfgRegularize_h6e95ff9d_0_3 & ((- (IData)(
                                                            (1U 
                                                             & (~ 
                                                                (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                                 >> 3U))))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (~ 
                                                                  (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                                   >> 2U)))))));
    }
    vlSelfRef.cpu_pipeline_top__DOT__rvfi_rd_written 
        = (IData)(((0x60U == (0x60U & vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[9U])) 
                   & (0U != (0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                            >> 8U)))));
    vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__mem_read 
        = (IData)((0x50000000U == (0x50000000U & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])));
    vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__mem_write 
        = (IData)((0x48000000U == (0x48000000U & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = (0x0000000fU 
                                                & ((0x01000000U 
                                                    & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])
                                                    ? 
                                                   ((IData)(3U) 
                                                    << 
                                                    (3U 
                                                     & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                                        >> 5U)))
                                                    : 
                                                   ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                                        >> 5U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = (0x0000ffffU 
                                                & (vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__dmem
                                                   [
                                                   (0x000003ffU 
                                                    & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                                       >> 7U))] 
                                                   >> 
                                                   (0x00000018U 
                                                    & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                                       >> 2U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = (0x000000ffU 
                                                & (vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__dmem
                                                   [
                                                   (0x000003ffU 
                                                    & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                                       >> 7U))] 
                                                   >> 
                                                   (0x00000018U 
                                                    & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                                       >> 2U))));
    vlSelfRef.rvfi_mem_rdata = ((vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[5U] 
                                 << 0x00000013U) | 
                                (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                 >> 0x0000000dU));
    vlSelfRef.halt = ((IData)(vlSelfRef.rvfi_valid) 
                      & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[8U] 
                         >> 0x0000000eU));
    vlSelfRef.perf_stall = (IData)(((0x0140U == (0x0140U 
                                                 & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])) 
                                    & ((0U != (0x0000001fU 
                                               & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[1U])) 
                                       & (((vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                                            >> 0x0000000bU) 
                                           & ((0x0000001fU 
                                               & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[1U]) 
                                              == (0x0000001fU 
                                                  & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                     >> 0x0000000fU)))) 
                                          | ((vlSelfRef.cpu_pipeline_top__DOT__id_ctrl 
                                              >> 0x0000000aU) 
                                             & ((0x0000001fU 
                                                 & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[1U]) 
                                                == 
                                                (0x0000001fU 
                                                 & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                    >> 0x00000014U))))))));
    vlSelfRef.rvfi_rd_addr = (0x0000001fU & (((vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                               << 0x00000018U) 
                                              | (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                                 >> 8U)) 
                                             & (- (IData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__rvfi_rd_written)))));
    vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[0U] = 
        (((vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
           << 0x0000001bU) | (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[2U] 
                              >> 5U)) << (0x00000018U 
                                          & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                             >> 2U)));
    vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[1U] = 
        ((0xfffffc00U & vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[1U]) 
         | ((0x000000f0U & ((((0x04000000U & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])
                               ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                                  & (- (IData)((1U 
                                                & (~ 
                                                   (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                                                    >> 0x00000019U))))))
                               : ((0x02000000U & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])
                                   ? (- (IData)((1U 
                                                 & (~ 
                                                    (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                                                     >> 0x00000018U)))))
                                   : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6))) 
                             & (- (IData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__mem_read)))) 
                            << 4U)) | (0x0000000fU 
                                       & (((0U == (7U 
                                                   & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                                                      >> 0x00000018U)))
                                            ? ((IData)(1U) 
                                               << (3U 
                                                   & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                                      >> 5U)))
                                            : ((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                                                    >> 0x00000018U)))
                                                ? ((IData)(3U) 
                                                   << 
                                                   (3U 
                                                    & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                                       >> 5U)))
                                                : (- (IData)(
                                                             (2U 
                                                              == 
                                                              (7U 
                                                               & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                                                                  >> 0x00000018U))))))) 
                                          & (- (IData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__mem_write)))))));
    vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[1U] = 
        ((0x000003ffU & vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[1U]) 
         | (0xfffffc00U & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                           << 3U)));
    vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[2U] = 
        (((0x00000300U & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[0U] 
                          << 8U)) | (0x000000ffU & 
                                     ((0x000003f8U 
                                       & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[4U] 
                                          << 3U)) | 
                                      (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                       >> 0x0000001dU)))) 
         | (0xfffffc00U & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[0U] 
                           << 8U)));
    vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[3U] = 
        (((vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[0U] 
           >> 0x00000018U) | (0x00000300U & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[1U] 
                                             << 8U))) 
         | (0xfffffc00U & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[1U] 
                           << 8U)));
    vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[4U] = 
        ((0xffffe000U & vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[4U]) 
         | (((vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[1U] 
              >> 0x00000018U) | (0x00000300U & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[2U] 
                                                << 8U))) 
            | (0x00001c00U & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[2U] 
                              << 8U))));
    vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[4U] = 
        ((0x00001fffU & vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[4U]) 
         | ((((0x04000000U & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])
               ? ((- (IData)((1U & (~ (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                                       >> 0x00000019U))))) 
                  & ((0x01000000U & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])
                      ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)
                      : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)))
               : ((0x02000000U & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])
                   ? (vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__dmem
                      [(0x000003ffU & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                       >> 7U))] & (- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                                                                  >> 0x00000018U))))))
                   : ((0x01000000U & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])
                       ? (((- (IData)((1U & (vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__dmem
                                             [(0x000003ffU 
                                               & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                                  >> 7U))] 
                                             >> (0x0000001fU 
                                                 & ((IData)(0x0fU) 
                                                    + 
                                                    (0x00000018U 
                                                     & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                                        >> 2U)))))))) 
                           << 0x00000010U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7))
                       : (((- (IData)((1U & (vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__dmem
                                             [(0x000003ffU 
                                               & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                                  >> 7U))] 
                                             >> (0x0000001fU 
                                                 & ((IData)(7U) 
                                                    + 
                                                    (0x00000018U 
                                                     & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                                        >> 2U)))))))) 
                           << 8U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8))))) 
             & (- (IData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__mem_read)))) 
            << 0x0000000dU));
    vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[5U] = 
        ((0xffffe000U & vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[5U]) 
         | ((((0x04000000U & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])
               ? ((- (IData)((1U & (~ (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                                       >> 0x00000019U))))) 
                  & ((0x01000000U & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])
                      ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)
                      : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)))
               : ((0x02000000U & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])
                   ? (vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__dmem
                      [(0x000003ffU & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                       >> 7U))] & (- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                                                                  >> 0x00000018U))))))
                   : ((0x01000000U & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])
                       ? (((- (IData)((1U & (vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__dmem
                                             [(0x000003ffU 
                                               & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                                  >> 7U))] 
                                             >> (0x0000001fU 
                                                 & ((IData)(0x0fU) 
                                                    + 
                                                    (0x00000018U 
                                                     & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                                        >> 2U)))))))) 
                           << 0x00000010U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7))
                       : (((- (IData)((1U & (vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__dmem
                                             [(0x000003ffU 
                                               & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                                  >> 7U))] 
                                             >> (0x0000001fU 
                                                 & ((IData)(7U) 
                                                    + 
                                                    (0x00000018U 
                                                     & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                                        >> 2U)))))))) 
                           << 8U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8))))) 
             & (- (IData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__mem_read)))) 
            >> 0x00000013U));
    vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[5U] = 
        ((0x00001fffU & vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[5U]) 
         | (0xffffe000U & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                           << 8U)));
    vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[6U] = 
        (((0x00001f00U & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[4U] 
                          << 8U)) | (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                     >> 0x00000018U)) 
         | (0xffffe000U & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[4U] 
                           << 8U)));
    vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[7U] = 
        (((0x00001f00U & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[5U] 
                          << 8U)) | (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[4U] 
                                     >> 0x00000018U)) 
         | (0xffffe000U & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[5U] 
                           << 8U)));
    vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[8U] = 
        (((0x00001f00U & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                          << 8U)) | (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[5U] 
                                     >> 0x00000018U)) 
         | (0xffffe000U & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                           << 8U)));
    vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[9U] = 
        (0x0000007fU & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                        >> 0x00000018U));
    vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__wr_data 
        = ((0U == (3U & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[8U] 
                         >> 0x00000015U))) ? ((vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[6U] 
                                               << 0x00000013U) 
                                              | (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[5U] 
                                                 >> 0x0000000dU))
            : ((1U == (3U & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[8U] 
                             >> 0x00000015U))) ? vlSelfRef.rvfi_mem_rdata
                : (((vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[7U] 
                     << 0x00000013U) | (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[6U] 
                                        >> 0x0000000dU)) 
                   & (- (IData)((2U == (3U & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[8U] 
                                              >> 0x00000015U))))))));
    vlSelfRef.rvfi_rd_wdata = (vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__wr_data 
                               & (- (IData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__rvfi_rd_written))));
    vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2 
        = ((((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
              >> 0x00000019U) & (0x60000000U == (0x60000000U 
                                                 & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U]))) 
            & ((0U != (0x0000001fU & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[2U])) 
               & ((0x0000001fU & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[2U]) 
                  == (0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[1U] 
                                     >> 5U))))) ? (
                                                   (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[4U] 
                                                    << 0x0000001bU) 
                                                   | (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                                      >> 5U))
            : ((((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                  >> 0x00000019U) & (0x60U == (0x60U 
                                               & vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[9U]))) 
                & ((0U != (0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                          >> 8U))) 
                   & ((0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                      >> 8U)) == (0x0000001fU 
                                                  & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[1U] 
                                                     >> 5U)))))
                ? vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__wr_data
                : ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[2U] 
                    << 0x00000011U) | (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[1U] 
                                       >> 0x0000000fU))));
    vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
        = ((((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
              >> 0x0000001aU) & (0x60000000U == (0x60000000U 
                                                 & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U]))) 
            & (((0x0000001fU & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[2U]) 
                == (0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[1U] 
                                   >> 0x0000000aU))) 
               & (0U != (0x0000001fU & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[2U]))))
            ? ((vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[4U] 
                << 0x0000001bU) | (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                   >> 5U)) : ((((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                                                 >> 0x0000001aU) 
                                                & (0x60U 
                                                   == 
                                                   (0x60U 
                                                    & vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[9U]))) 
                                               & (((0x0000001fU 
                                                    & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                                       >> 8U)) 
                                                   == 
                                                   (0x0000001fU 
                                                    & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[1U] 
                                                       >> 0x0000000aU))) 
                                                  & (0U 
                                                     != 
                                                     (0x0000001fU 
                                                      & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                                         >> 8U)))))
                                               ? vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__wr_data
                                               : ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[3U] 
                                                   << 0x00000011U) 
                                                  | (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[2U] 
                                                     >> 0x0000000fU))));
    vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b 
        = ((0x08000000U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
            ? ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[4U] 
                << 0x00000011U) | (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[3U] 
                                   >> 0x0000000fU))
            : vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2);
    vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
        = ((0U == (3U & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                         >> 0x0000001cU))) ? vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1
            : (((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                 << 0x00000011U) | (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[5U] 
                                    >> 0x0000000fU)) 
               & (- (IData)((1U == (3U & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                                          >> 0x0000001cU)))))));
    vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__target_raw 
        = (((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[4U] 
             << 0x00000011U) | (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[3U] 
                                >> 0x0000000fU)) + 
           ((0x00020000U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
             ? vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1
             : ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                 << 0x00000011U) | (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[5U] 
                                    >> 0x0000000fU))));
    vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__take_redirect 
        = (1U & ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                  >> 0x00000012U) | ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                                      >> 0x00000016U) 
                                     & ((0x00200000U 
                                         & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
                                         ? ((~ (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                                                >> 0x00000014U)) 
                                            & ((0x00080000U 
                                                & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
                                                ? (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                                   >= vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)
                                                : (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                                   < vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)))
                                         : ((0x00100000U 
                                             & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
                                             ? ((0x00080000U 
                                                 & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
                                                 ? 
                                                VL_GTES_III(32, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)
                                                 : 
                                                VL_LTS_III(32, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2))
                                             : ((0x00080000U 
                                                 & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
                                                 ? 
                                                (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                                 != vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)
                                                 : 
                                                (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                                 == vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)))))));
    if (vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__take_redirect) {
        vlSelfRef.perf_flush = (1U & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                      >> 8U));
        vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__pc_next 
            = ((0xfffffffeU & vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__target_raw) 
               | (1U & ((~ (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                            >> 0x00000011U)) & vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__target_raw)));
    } else {
        vlSelfRef.perf_flush = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__pc_next 
            = ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[5U] 
                << 0x00000011U) | (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[4U] 
                                   >> 0x0000000fU));
    }
    vlSelfRef.cpu_pipeline_top__DOT__pc_d = ((IData)(vlSelfRef.perf_flush)
                                              ? vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__pc_next
                                              : ((IData)(4U) 
                                                 + vlSelfRef.cpu_pipeline_top__DOT__pc_q));
    vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d[0U] = (IData)(
                                                            (((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__pc_next)) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[0U]))));
    vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d[1U] = (IData)(
                                                            ((((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__pc_next)) 
                                                               << 0x00000020U) 
                                                              | (QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[0U]))) 
                                                             >> 0x00000020U));
    vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d[2U] = 
        ((0xffffffe0U & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d[2U]) 
         | (0x0000001fU & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[1U]));
    vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d[2U] = 
        ((0x0000001fU & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d[2U]) 
         | (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2 
            << 5U));
    vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d[3U] = 
        ((0xffffffe0U & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d[3U]) 
         | (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2 
            >> 0x0000001bU));
    vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d[3U] = 
        ((0x0000001fU & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d[3U]) 
         | (((2U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
              ? ((- (IData)((1U & (~ (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                                      >> 0x0000001fU))))) 
                 & (((0x40000000U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
                      ? (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                         & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)
                      : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                         | vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)) 
                    & (- (IData)((1U & (~ vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U]))))))
              : ((1U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                  ? ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                      >> 0x0000001fU) ? ((0x40000000U 
                                          & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
                                          ? VL_SHIFTRS_III(32,32,5, vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a, 
                                                           (0x0000001fU 
                                                            & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b))
                                          : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                             >> (0x0000001fU 
                                                 & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)))
                      : ((0x40000000U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
                          ? (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                             ^ vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)
                          : (1U & (- (IData)((vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                              < vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b))))))
                  : ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                      >> 0x0000001fU) ? ((0x40000000U 
                                          & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
                                          ? (1U & (- (IData)(
                                                             VL_LTS_III(32, vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a, vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b))))
                                          : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                             << (0x0000001fU 
                                                 & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)))
                      : ((0x40000000U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
                          ? (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                             - vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)
                          : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                             + vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b))))) 
            << 5U));
    vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d[4U] = 
        ((0xffffffe0U & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d[4U]) 
         | (((2U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
              ? ((- (IData)((1U & (~ (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                                      >> 0x0000001fU))))) 
                 & (((0x40000000U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
                      ? (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                         & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)
                      : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                         | vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)) 
                    & (- (IData)((1U & (~ vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U]))))))
              : ((1U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                  ? ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                      >> 0x0000001fU) ? ((0x40000000U 
                                          & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
                                          ? VL_SHIFTRS_III(32,32,5, vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a, 
                                                           (0x0000001fU 
                                                            & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b))
                                          : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                             >> (0x0000001fU 
                                                 & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)))
                      : ((0x40000000U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
                          ? (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                             ^ vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)
                          : (1U & (- (IData)((vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                              < vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b))))))
                  : ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                      >> 0x0000001fU) ? ((0x40000000U 
                                          & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
                                          ? (1U & (- (IData)(
                                                             VL_LTS_III(32, vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a, vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b))))
                                          : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                             << (0x0000001fU 
                                                 & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)))
                      : ((0x40000000U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])
                          ? (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                             - vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)
                          : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                             + vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b))))) 
            >> 0x0000001bU));
    vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d[4U] = 
        ((0x0000001fU & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d[4U]) 
         | ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[5U] 
             << 0x00000016U) | (0x003fffe0U & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[4U] 
                                               >> 0x0000000aU))));
    vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d[5U] = 
        ((0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[5U] 
                         >> 0x0000000aU)) | ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                                              << 0x00000016U) 
                                             | (0x003fffe0U 
                                                & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[5U] 
                                                   >> 0x0000000aU))));
    vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d[6U] = 
        (0x7fffffffU & ((0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                                        >> 0x0000000aU)) 
                        | (0x7fffffe0U & ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                           << 0x00000016U) 
                                          | (0x003fffe0U 
                                             & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                                                >> 0x0000000aU))))));
}

VL_ATTR_COLD bool Vcpu_pipeline_top___024root___eval_phase__stl(Vcpu_pipeline_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root___eval_phase__stl\n"); );
    Vcpu_pipeline_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vcpu_pipeline_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vcpu_pipeline_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vcpu_pipeline_top___024root___stl_sequent__TOP__0(vlSelf);
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

bool Vcpu_pipeline_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_pipeline_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vcpu_pipeline_top___024root___trigger_anySet__act(triggers))))) {
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

VL_ATTR_COLD void Vcpu_pipeline_top___024root___ctor_var_reset(Vcpu_pipeline_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root___ctor_var_reset\n"); );
    Vcpu_pipeline_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    vlSelf->perf_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1118442519097464610ull);
    vlSelf->perf_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7830748717199037916ull);
    VL_SCOPED_RAND_RESET_W(97, vlSelf->cpu_pipeline_top__DOT__if_id_q, __VscopeHash, 874433344047031342ull);
    VL_SCOPED_RAND_RESET_W(233, vlSelf->cpu_pipeline_top__DOT__id_ex_q, __VscopeHash, 9820769144018894394ull);
    VL_SCOPED_RAND_RESET_W(223, vlSelf->cpu_pipeline_top__DOT__ex_mem_d, __VscopeHash, 17006820376407702792ull);
    VL_SCOPED_RAND_RESET_W(223, vlSelf->cpu_pipeline_top__DOT__ex_mem_q, __VscopeHash, 1853644467744446074ull);
    VL_SCOPED_RAND_RESET_W(295, vlSelf->cpu_pipeline_top__DOT__mem_wb_d, __VscopeHash, 2241827979103124989ull);
    VL_SCOPED_RAND_RESET_W(295, vlSelf->cpu_pipeline_top__DOT__mem_wb_q, __VscopeHash, 278851928712922769ull);
    vlSelf->cpu_pipeline_top__DOT__pc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11594959652545352611ull);
    vlSelf->cpu_pipeline_top__DOT__pc_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17896070348475813621ull);
    vlSelf->cpu_pipeline_top__DOT__id_ctrl = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 11607900050905940352ull);
    vlSelf->cpu_pipeline_top__DOT__rvfi_rd_written = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12472070032686622758ull);
    vlSelf->cpu_pipeline_top__DOT__data_mem_i__DOT__mem_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3109908462039474551ull);
    vlSelf->cpu_pipeline_top__DOT__data_mem_i__DOT__mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 152369736696966624ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->cpu_pipeline_top__DOT__data_mem_i__DOT__dmem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6139834075025723204ull);
    }
    vlSelf->cpu_pipeline_top__DOT__next_pc_i__DOT__pc_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17915364000009526922ull);
    vlSelf->cpu_pipeline_top__DOT__next_pc_i__DOT__target_raw = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9019413508690946249ull);
    vlSelf->cpu_pipeline_top__DOT__next_pc_i__DOT__take_redirect = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8361220229973100078ull);
    vlSelf->cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9639688852705286896ull);
    vlSelf->cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6657944052274634682ull);
    vlSelf->cpu_pipeline_top__DOT__alu_i__DOT__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12670259490973029150ull);
    vlSelf->cpu_pipeline_top__DOT__alu_i__DOT__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15403082115421980051ull);
    vlSelf->cpu_pipeline_top__DOT__reg_file_i__DOT__wr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2953219670333801229ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->cpu_pipeline_top__DOT__reg_file_i__DOT__regs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10506767471672879448ull);
    }
    vlSelf->cpu_pipeline_top__DOT__imm_gen_i__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14817360901901612182ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->cpu_pipeline_top__DOT__instr_mem_i__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16388894735064600811ull);
    }
    vlSelf->__VdfgRegularize_h6e95ff9d_0_6 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_7 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_8 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
