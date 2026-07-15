// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_pipeline_top.h for the primary calling header

#include "Vcpu_pipeline_top__pch.h"

void Vcpu_pipeline_top___024root___nba_sequent__TOP__1(Vcpu_pipeline_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root___nba_sequent__TOP__1\n"); );
    Vcpu_pipeline_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_6;
    __VdfgRegularize_h6e95ff9d_0_6 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_21;
    __VdfgRegularize_h6e95ff9d_0_21 = 0;
    // Body
    vlSelfRef.perf_stall = (IData)(((0x0280U == (0x0280U 
                                                 & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])) 
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
    vlSelfRef.halt = ((IData)(vlSelfRef.rvfi_valid) 
                      & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[8U] 
                         >> 0x0000000eU));
    vlSelfRef.rvfi_rd_addr = (0x0000001fU & (((vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                               << 0x00000018U) 
                                              | (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                                 >> 8U)) 
                                             & (- (IData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__rvfi_rd_written)))));
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
    vlSelfRef.pc_out = vlSelfRef.cpu_pipeline_top__DOT__pc_q;
    vlSelfRef.instr_out = vlSelfRef.cpu_pipeline_top__DOT__instr_mem_i__DOT__mem
        [(0x000003ffU & (vlSelfRef.cpu_pipeline_top__DOT__pc_q 
                         >> 2U))];
    vlSelfRef.rvfi_rd_wdata = (vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__wr_data 
                               & (- (IData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__rvfi_rd_written))));
    vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2 
        = ((((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
              >> 0x0000001aU) & (0x60000000U == (0x60000000U 
                                                 & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U]))) 
            & ((0U != (0x0000001fU & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[2U])) 
               & ((0x0000001fU & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[2U]) 
                  == (0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[1U] 
                                     >> 5U))))) ? vlSelfRef.cpu_pipeline_top__DOT__mem_alu_result
            : ((((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                  >> 0x0000001aU) & (0x60U == (0x60U 
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
        = ((((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
              >> 0x0000001bU) & (0x60000000U == (0x60000000U 
                                                 & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U]))) 
            & (((0x0000001fU & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[2U]) 
                == (0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[1U] 
                                   >> 0x0000000aU))) 
               & (0U != (0x0000001fU & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[2U]))))
            ? vlSelfRef.cpu_pipeline_top__DOT__mem_alu_result
            : ((((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                  >> 0x0000001bU) & (0x60U == (0x60U 
                                               & vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[9U]))) 
                & (((0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                    >> 8U)) == (0x0000001fU 
                                                & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[1U] 
                                                   >> 0x0000000aU))) 
                   & (0U != (0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                            >> 8U)))))
                ? vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__wr_data
                : ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[3U] 
                    << 0x00000011U) | (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[2U] 
                                       >> 0x0000000fU))));
    vlSelfRef.cpu_pipeline_top__DOT__predict_taken 
        = (((0x63U == (0x0000007fU & vlSelfRef.instr_out)) 
            | (0x6fU == (0x0000007fU & vlSelfRef.instr_out))) 
           & ((2U == vlSelfRef.cpu_pipeline_top__DOT__predictor_i__DOT__predictor_state
               [(0x000000ffU & (vlSelfRef.cpu_pipeline_top__DOT__pc_q 
                                >> 2U))]) | (3U == vlSelfRef.cpu_pipeline_top__DOT__predictor_i__DOT__predictor_state
                                             [(0x000000ffU 
                                               & (vlSelfRef.cpu_pipeline_top__DOT__pc_q 
                                                  >> 2U))])));
    __VdfgRegularize_h6e95ff9d_0_6 = ((((- (IData)(
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
    __VdfgRegularize_h6e95ff9d_0_21 = (0xfffff000U 
                                       & (vlSelfRef.instr_out 
                                          & (- (IData)(
                                                       (3U 
                                                        == 
                                                        (3U 
                                                         & vlSelfRef.instr_out))))));
    vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b 
        = ((0x10000000U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
            ? ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[4U] 
                << 0x00000011U) | (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[3U] 
                                   >> 0x0000000fU))
            : vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2);
    vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
        = ((0U == (3U & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                         >> 0x0000001dU))) ? vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1
            : (((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                 << 0x00000011U) | (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[5U] 
                                    >> 0x0000000fU)) 
               & (- (IData)((1U == (3U & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                          >> 0x0000001dU)))))));
    vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__target_raw 
        = (((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[4U] 
             << 0x00000011U) | (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[3U] 
                                >> 0x0000000fU)) + 
           ((0x00040000U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
             ? vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1
             : ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                 << 0x00000011U) | (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[5U] 
                                    >> 0x0000000fU))));
    vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__take_redirect 
        = (1U & ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                  >> 0x00000013U) | ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                      >> 0x00000017U) 
                                     & ((0x00400000U 
                                         & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                                         ? ((~ (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                                >> 0x00000015U)) 
                                            & ((0x00100000U 
                                                & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                                                ? (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                                   >= vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)
                                                : (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                                   < vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)))
                                         : ((0x00200000U 
                                             & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                                             ? ((0x00100000U 
                                                 & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                                                 ? 
                                                VL_GTES_III(32, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)
                                                 : 
                                                VL_LTS_III(32, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2))
                                             : ((0x00100000U 
                                                 & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                                                 ? 
                                                (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                                 != vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)
                                                 : 
                                                (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                                 == vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)))))));
    vlSelfRef.cpu_pipeline_top__DOT__predictor_i__DOT__pred_imm_gen__DOT__imm 
        = ((0x00000040U & vlSelfRef.instr_out) ? ((- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 (vlSelfRef.instr_out 
                                                                  >> 4U))))) 
                                                  & (((8U 
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
                                                        ? __VdfgRegularize_h6e95ff9d_0_6
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
                                                                      >> 5U))))))
            : ((0x00000020U & vlSelfRef.instr_out) ? 
               ((0x00000010U & vlSelfRef.instr_out)
                 ? ((- (IData)((IData)((4U == (0x0000000cU 
                                               & vlSelfRef.instr_out))))) 
                    & __VdfgRegularize_h6e95ff9d_0_21)
                 : ((((- (IData)((vlSelfRef.instr_out 
                                  >> 0x0000001fU))) 
                      << 0x0000000cU) | ((0x00000fe0U 
                                          & (vlSelfRef.instr_out 
                                             >> 0x00000014U)) 
                                         | (0x0000001fU 
                                            & (vlSelfRef.instr_out 
                                               >> 7U)))) 
                    & (- (IData)((IData)((3U == (0x0000000fU 
                                                 & vlSelfRef.instr_out)))))))
                : ((0x00000010U & vlSelfRef.instr_out)
                    ? (((4U & vlSelfRef.instr_out) ? __VdfgRegularize_h6e95ff9d_0_21
                         : __VdfgRegularize_h6e95ff9d_0_6) 
                       & (- (IData)((1U & (~ (vlSelfRef.instr_out 
                                              >> 3U))))))
                    : (__VdfgRegularize_h6e95ff9d_0_6 
                       & ((- (IData)((1U & (~ (vlSelfRef.instr_out 
                                               >> 3U))))) 
                          & (- (IData)((1U & (~ (vlSelfRef.instr_out 
                                                 >> 2U))))))))));
    vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__pc_next 
        = ((IData)(vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__take_redirect)
            ? ((0xfffffffeU & vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__target_raw) 
               | (1U & ((~ (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                            >> 0x00000012U)) & vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__target_raw)))
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
         | (((4U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
              ? ((- (IData)((1U & (~ vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])))) 
                 & (((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                      >> 0x0000001fU) ? (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                         & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)
                      : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                         | vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)) 
                    & (- (IData)((1U & (~ (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U] 
                                           >> 1U)))))))
              : ((2U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                  ? ((1U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                      ? ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                          >> 0x0000001fU) ? VL_SHIFTRS_III(32,32,5, vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a, 
                                                           (0x0000001fU 
                                                            & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b))
                          : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                             >> (0x0000001fU & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)))
                      : ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                          >> 0x0000001fU) ? (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                             ^ vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)
                          : (1U & (- (IData)((vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                              < vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b))))))
                  : ((1U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                      ? ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                          >> 0x0000001fU) ? (1U & (- (IData)(
                                                             VL_LTS_III(32, vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a, vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b))))
                          : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                             << (0x0000001fU & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)))
                      : ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                          >> 0x0000001fU) ? (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                             - vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)
                          : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                             + vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b))))) 
            << 5U));
    vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d[4U] = 
        ((0xffffffe0U & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d[4U]) 
         | (((4U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
              ? ((- (IData)((1U & (~ vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])))) 
                 & (((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                      >> 0x0000001fU) ? (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                         & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)
                      : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                         | vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)) 
                    & (- (IData)((1U & (~ (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U] 
                                           >> 1U)))))))
              : ((2U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                  ? ((1U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                      ? ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                          >> 0x0000001fU) ? VL_SHIFTRS_III(32,32,5, vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a, 
                                                           (0x0000001fU 
                                                            & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b))
                          : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                             >> (0x0000001fU & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)))
                      : ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                          >> 0x0000001fU) ? (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                             ^ vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)
                          : (1U & (- (IData)((vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                              < vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b))))))
                  : ((1U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                      ? ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                          >> 0x0000001fU) ? (1U & (- (IData)(
                                                             VL_LTS_III(32, vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a, vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b))))
                          : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                             << (0x0000001fU & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)))
                      : ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                          >> 0x0000001fU) ? (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
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
                                                << 0x00000015U) 
                                               | (0x001fffe0U 
                                                  & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                                     >> 0x0000000bU))))));
    vlSelfRef.perf_flush = ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U] 
                             >> 9U) & (((IData)(vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__take_redirect) 
                                        & (((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                             << 0x00000011U) 
                                            | (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                                               >> 0x0000000fU)) 
                                           != vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__pc_next)) 
                                       | ((1U & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                                 >> 0x0000000fU)) 
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
