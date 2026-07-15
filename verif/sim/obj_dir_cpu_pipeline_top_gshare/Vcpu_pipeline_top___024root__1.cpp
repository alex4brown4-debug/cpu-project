// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_pipeline_top.h for the primary calling header

#include "Vcpu_pipeline_top__pch.h"

void Vcpu_pipeline_top___024root___nba_sequent__TOP__1(Vcpu_pipeline_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root___nba_sequent__TOP__1\n"); );
    Vcpu_pipeline_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__pc_next 
        = ((IData)(vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__take_redirect)
            ? ((0xfffffffeU & vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__target_raw) 
               | (1U & ((~ (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                            >> 0x00000018U)) & vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__target_raw)))
            : ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[5U] 
                << 0x00000011U) | (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[4U] 
                                   >> 0x0000000fU)));
    vlSelfRef.cpu_pipeline_top__DOT__predict_target 
        = (vlSelfRef.cpu_pipeline_top__DOT__pc_q + vlSelfRef.cpu_pipeline_top__DOT__predictor_i__DOT__pred_imm_gen__DOT__imm);
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
         | (((0x00000100U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
              ? ((- (IData)((1U & (~ (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U] 
                                      >> 6U))))) & 
                 (((0x00000020U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                    ? (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                       & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)
                    : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                       | vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)) 
                  & (- (IData)((1U & (~ (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U] 
                                         >> 7U)))))))
              : ((0x00000080U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                  ? ((0x00000040U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                      ? ((0x00000020U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                          ? VL_SHIFTRS_III(32,32,5, vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a, 
                                           (0x0000001fU 
                                            & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b))
                          : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                             >> (0x0000001fU & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)))
                      : ((0x00000020U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                          ? (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                             ^ vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)
                          : (1U & (- (IData)((vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                              < vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b))))))
                  : ((0x00000040U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                      ? ((0x00000020U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                          ? (1U & (- (IData)(VL_LTS_III(32, vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a, vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b))))
                          : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                             << (0x0000001fU & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)))
                      : ((0x00000020U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                          ? (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                             - vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)
                          : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                             + vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b))))) 
            << 5U));
    vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d[4U] = 
        ((0xffffffe0U & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d[4U]) 
         | (((0x00000100U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
              ? ((- (IData)((1U & (~ (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U] 
                                      >> 6U))))) & 
                 (((0x00000020U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                    ? (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                       & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)
                    : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                       | vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)) 
                  & (- (IData)((1U & (~ (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U] 
                                         >> 7U)))))))
              : ((0x00000080U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                  ? ((0x00000040U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                      ? ((0x00000020U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                          ? VL_SHIFTRS_III(32,32,5, vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a, 
                                           (0x0000001fU 
                                            & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b))
                          : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                             >> (0x0000001fU & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)))
                      : ((0x00000020U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                          ? (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                             ^ vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)
                          : (1U & (- (IData)((vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                              < vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b))))))
                  : ((0x00000040U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                      ? ((0x00000020U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                          ? (1U & (- (IData)(VL_LTS_III(32, vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a, vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b))))
                          : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                             << (0x0000001fU & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)))
                      : ((0x00000020U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                          ? (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                             - vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)
                          : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                             + vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b))))) 
            >> 0x0000001bU));
    vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d[4U] = 
        ((0x0000001fU & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d[4U]) 
         | ((IData)((((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])) 
                      << 0x00000031U) | (((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[5U])) 
                                          << 0x00000011U) 
                                         | ((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[4U])) 
                                            >> 0x0000000fU)))) 
            << 5U));
    vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d[5U] = 
        (((IData)((((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])) 
                    << 0x00000031U) | (((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[5U])) 
                                        << 0x00000011U) 
                                       | ((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[4U])) 
                                          >> 0x0000000fU)))) 
          >> 0x0000001bU) | ((IData)(((((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[5U])) 
                                           << 0x00000011U) 
                                          | ((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[4U])) 
                                             >> 0x0000000fU))) 
                                      >> 0x00000020U)) 
                             << 5U));
    vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d[6U] = 
        (0x7fffffffU & (((IData)(((((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U])) 
                                    << 0x00000031U) 
                                   | (((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[5U])) 
                                       << 0x00000011U) 
                                      | ((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[4U])) 
                                         >> 0x0000000fU))) 
                                  >> 0x00000020U)) 
                         >> 0x0000001bU) | (0x7fffffe0U 
                                            & ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U] 
                                                << 0x0000000fU) 
                                               | (0x00007fe0U 
                                                  & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                                     >> 0x00000011U))))));
    vlSelfRef.perf_flush = ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U] 
                             >> 0x0000000fU) & (((IData)(vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__take_redirect) 
                                                 & (((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                                      << 0x0000000bU) 
                                                     | (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                                                        >> 0x00000015U)) 
                                                    != vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__pc_next)) 
                                                | ((1U 
                                                    & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                                       >> 0x00000015U)) 
                                                   != (IData)(vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__take_redirect))));
    vlSelfRef.cpu_pipeline_top__DOT__pc_d = ((IData)(vlSelfRef.perf_flush)
                                              ? vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__pc_next
                                              : ((IData)(vlSelfRef.cpu_pipeline_top__DOT__predict_taken)
                                                  ? vlSelfRef.cpu_pipeline_top__DOT__predict_target
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelfRef.cpu_pipeline_top__DOT__pc_q)));
}

void Vcpu_pipeline_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vcpu_pipeline_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vcpu_pipeline_top___024root___eval_phase__act(Vcpu_pipeline_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root___eval_phase__act\n"); );
    Vcpu_pipeline_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((~ (IData)(vlSelfRef.rst_n)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0)) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcpu_pipeline_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vcpu_pipeline_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vcpu_pipeline_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vcpu_pipeline_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vcpu_pipeline_top___024root___nba_sequent__TOP__0(Vcpu_pipeline_top___024root* vlSelf);

bool Vcpu_pipeline_top___024root___eval_phase__nba(Vcpu_pipeline_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root___eval_phase__nba\n"); );
    Vcpu_pipeline_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vcpu_pipeline_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vcpu_pipeline_top___024root___nba_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[1U] = 1U;
                Vcpu_pipeline_top___024root___nba_sequent__TOP__1(vlSelf);
            }
        }
        Vcpu_pipeline_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vcpu_pipeline_top___024root___eval(Vcpu_pipeline_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root___eval\n"); );
    Vcpu_pipeline_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcpu_pipeline_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("design/cpu_pipeline_top.sv", 4, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcpu_pipeline_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("design/cpu_pipeline_top.sv", 4, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vcpu_pipeline_top___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vcpu_pipeline_top___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vcpu_pipeline_top___024root___eval_debug_assertions(Vcpu_pipeline_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root___eval_debug_assertions\n"); );
    Vcpu_pipeline_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
