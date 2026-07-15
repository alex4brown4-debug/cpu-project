// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vcpu_pipeline_top__Syms.h"


void Vcpu_pipeline_top___024root__trace_chg_0_sub_0(Vcpu_pipeline_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcpu_pipeline_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root__trace_chg_0\n"); );
    // Body
    Vcpu_pipeline_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_pipeline_top___024root*>(voidSelf);
    Vcpu_pipeline_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vcpu_pipeline_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcpu_pipeline_top___024root__trace_chg_dtype____0(Vcpu_pipeline_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar);

void Vcpu_pipeline_top___024root__trace_chg_0_sub_0(Vcpu_pipeline_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root__trace_chg_0_sub_0\n"); );
    Vcpu_pipeline_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    VlWide<5>/*159:0*/ __Vtemp_7;
    VlWide<9>/*287:0*/ __Vtemp_9;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.cpu_pipeline_top__DOT__pc_q),32);
        bufp->chgWData(oldp+1,(vlSelfRef.cpu_pipeline_top__DOT__if_id_q),136);
        bufp->chgWData(oldp+6,(vlSelfRef.cpu_pipeline_top__DOT__id_ex_q),272);
        bufp->chgWData(oldp+15,(vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d),223);
        bufp->chgWData(oldp+22,(vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q),223);
        bufp->chgWData(oldp+29,(vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d),295);
        bufp->chgWData(oldp+39,(vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q),295);
        bufp->chgBit(oldp+49,(vlSelfRef.cpu_pipeline_top__DOT__update_valid));
        bufp->chgIData(oldp+50,(((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                                  << 0x00000011U) | 
                                 (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[5U] 
                                  >> 0x0000000fU))),32);
        bufp->chgBit(oldp+51,(vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__take_redirect));
        bufp->chgIData(oldp+52,(vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__pc_next),32);
        bufp->chgIData(oldp+53,(((IData)(4U) + vlSelfRef.cpu_pipeline_top__DOT__pc_q)),32);
        bufp->chgBit(oldp+54,(vlSelfRef.cpu_pipeline_top__DOT__predict_taken));
        bufp->chgIData(oldp+55,(vlSelfRef.cpu_pipeline_top__DOT__predict_target),32);
        bufp->chgCData(oldp+56,(vlSelfRef.cpu_pipeline_top__DOT__predictor_i__DOT__ghr),6);
        bufp->chgIData(oldp+57,(vlSelfRef.cpu_pipeline_top__DOT__id_ctrl),25);
        bufp->chgIData(oldp+58,(vlSelfRef.cpu_pipeline_top__DOT__imm_gen_i__DOT__imm),32);
        bufp->chgIData(oldp+59,(vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__wr_data),32);
        bufp->chgBit(oldp+60,((3U == (3U & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[9U] 
                                            >> 5U)))));
        bufp->chgIData(oldp+61,(vlSelfRef.cpu_pipeline_top__DOT__mem_alu_result),32);
        bufp->chgIData(oldp+62,(vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1),32);
        bufp->chgIData(oldp+63,(vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2),32);
        bufp->chgIData(oldp+64,(vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a),32);
        bufp->chgIData(oldp+65,(vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b),32);
        bufp->chgIData(oldp+66,(((0x00000100U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                                  ? ((- (IData)((1U 
                                                 & (~ 
                                                    (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U] 
                                                     >> 6U))))) 
                                     & (((0x00000020U 
                                          & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                                          ? (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                             & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)
                                          : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                             | vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)) 
                                        & (- (IData)(
                                                     (1U 
                                                      & (~ 
                                                         (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U] 
                                                          >> 7U)))))))
                                  : ((0x00000080U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                                      ? ((0x00000040U 
                                          & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                                          ? ((0x00000020U 
                                              & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                                              ? VL_SHIFTRS_III(32,32,5, vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a, 
                                                               (0x0000001fU 
                                                                & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b))
                                              : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                                 >> 
                                                 (0x0000001fU 
                                                  & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)))
                                          : ((0x00000020U 
                                              & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                                              ? (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                                 ^ vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)
                                              : (1U 
                                                 & (- (IData)(
                                                              (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                                               < vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b))))))
                                      : ((0x00000040U 
                                          & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                                          ? ((0x00000020U 
                                              & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                                              ? (1U 
                                                 & (- (IData)(
                                                              VL_LTS_III(32, vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a, vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b))))
                                              : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                                 << 
                                                 (0x0000001fU 
                                                  & vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)))
                                          : ((0x00000020U 
                                              & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
                                              ? (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                                 - vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)
                                              : (vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
                                                 + vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__b)))))),32);
        bufp->chgBit(oldp+67,(((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                >> 0x0000001dU) & (
                                                   (0x10000000U 
                                                    & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                                                    ? 
                                                   ((~ 
                                                     (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                                      >> 0x0000001bU)) 
                                                    & ((0x04000000U 
                                                        & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                                                        ? 
                                                       (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                                        >= vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)
                                                        : 
                                                       (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                                        < vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)))
                                                    : 
                                                   ((0x08000000U 
                                                     & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                                                     ? 
                                                    ((0x04000000U 
                                                      & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                                                      ? 
                                                     VL_GTES_III(32, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)
                                                      : 
                                                     VL_LTS_III(32, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2))
                                                     : 
                                                    ((0x04000000U 
                                                      & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                                                      ? 
                                                     (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                                      != vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)
                                                      : 
                                                     (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                                      == vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)))))));
        bufp->chgIData(oldp+68,((((0x04000000U & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])
                                   ? ((- (IData)((1U 
                                                  & (~ 
                                                     (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                                                      >> 0x00000019U))))) 
                                      & ((0x01000000U 
                                          & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])
                                          ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12)
                                          : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13)))
                                   : ((0x02000000U 
                                       & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])
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
        bufp->chgBit(oldp+69,(vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__mem_read));
        bufp->chgBit(oldp+70,(vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__mem_write));
        bufp->chgCData(oldp+71,((0x0000000fU & (((0x04000000U 
                                                  & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (~ 
                                                                   (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                                                                    >> 0x00000019U))))))
                                                  : 
                                                 ((0x02000000U 
                                                   & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])
                                                   ? 
                                                  (- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                                                                  >> 0x00000018U)))))
                                                   : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9))) 
                                                & (- (IData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__mem_read)))))),4);
        bufp->chgCData(oldp+72,((0x0000000fU & (((0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                                                      >> 0x00000018U)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  << 
                                                  (3U 
                                                   & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                                      >> 5U)))
                                                  : 
                                                 ((1U 
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
        bufp->chgBit(oldp+73,(vlSelfRef.cpu_pipeline_top__DOT__rvfi_rd_written));
        bufp->chgCData(oldp+74,((0x0000000fU & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U] 
                                                >> 5U))),4);
        bufp->chgCData(oldp+75,((7U & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                       >> 0x0000001aU))),3);
        bufp->chgBit(oldp+76,((1U & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                     >> 0x0000001dU))));
        bufp->chgBit(oldp+77,(((0x10000000U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                                ? ((~ (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                       >> 0x0000001bU)) 
                                   & ((0x04000000U 
                                       & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                                       ? (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                          >= vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)
                                       : (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                          < vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)))
                                : ((0x08000000U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                                    ? ((0x04000000U 
                                        & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                                        ? VL_GTES_III(32, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)
                                        : VL_LTS_III(32, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2))
                                    : ((0x04000000U 
                                        & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                                        ? (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                           != vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)
                                        : (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                           == vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2))))));
        bufp->chgIData(oldp+78,(((vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[4U] 
                                  << 0x0000001bU) | 
                                 (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                  >> 5U))),32);
        bufp->chgIData(oldp+79,(((vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                  << 0x0000001bU) | 
                                 (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[2U] 
                                  >> 5U))),32);
        bufp->chgCData(oldp+80,((7U & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                                       >> 0x00000018U))),3);
        bufp->chgSData(oldp+81,((0x000003ffU & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                                >> 7U))),10);
        bufp->chgCData(oldp+82,((3U & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                       >> 5U))),2);
        bufp->chgIData(oldp+83,(vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U]),32);
        bufp->chgIData(oldp+84,(((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[5U] 
                                  << 0x00000011U) | 
                                 (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[4U] 
                                  >> 0x0000000fU))),32);
        bufp->chgIData(oldp+85,(((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[4U] 
                                  << 0x00000011U) | 
                                 (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[3U] 
                                  >> 0x0000000fU))),32);
        bufp->chgBit(oldp+86,((1U & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                     >> 0x00000018U))));
        bufp->chgBit(oldp+87,((1U & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                     >> 0x00000019U))));
        bufp->chgIData(oldp+88,(((0x01000000U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                                  ? vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1
                                  : ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                                      << 0x00000011U) 
                                     | (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[5U] 
                                        >> 0x0000000fU)))),32);
        bufp->chgIData(oldp+89,(vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__target_raw),32);
        bufp->chgIData(oldp+90,(((0xfffffffeU & vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__target_raw) 
                                 | (1U & ((~ (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                              >> 0x00000018U)) 
                                          & vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__target_raw)))),32);
        bufp->chgCData(oldp+91,((0x0000003fU & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                                                >> 0x0000000fU))),6);
        bufp->chgCData(oldp+92,(vlSelfRef.cpu_pipeline_top__DOT__predictor_i__DOT__index),8);
        bufp->chgCData(oldp+93,(vlSelfRef.cpu_pipeline_top__DOT__predictor_i__DOT__upd_index),8);
        bufp->chgIData(oldp+94,(vlSelfRef.cpu_pipeline_top__DOT__predictor_i__DOT__pred_imm_gen__DOT__imm),32);
        bufp->chgCData(oldp+95,((0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                >> 0x0000000fU))),5);
        bufp->chgCData(oldp+96,((0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                >> 0x00000014U))),5);
        bufp->chgCData(oldp+97,((0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                                >> 8U))),5);
    }
    bufp->chgBit(oldp+98,(vlSelfRef.clk));
    bufp->chgBit(oldp+99,(vlSelfRef.rst_n));
    bufp->chgIData(oldp+100,(vlSelfRef.instr_out),32);
    bufp->chgBit(oldp+101,(vlSelfRef.halt));
    bufp->chgBit(oldp+102,(vlSelfRef.rvfi_valid));
    bufp->chgIData(oldp+103,(vlSelfRef.rvfi_insn),32);
    bufp->chgIData(oldp+104,(vlSelfRef.rvfi_pc_rdata),32);
    bufp->chgIData(oldp+105,(vlSelfRef.rvfi_pc_wdata),32);
    bufp->chgCData(oldp+106,(vlSelfRef.rvfi_rd_addr),5);
    bufp->chgIData(oldp+107,(vlSelfRef.rvfi_rd_wdata),32);
    bufp->chgIData(oldp+108,(vlSelfRef.rvfi_mem_addr),32);
    bufp->chgCData(oldp+109,(vlSelfRef.rvfi_mem_rmask),4);
    bufp->chgCData(oldp+110,(vlSelfRef.rvfi_mem_wmask),4);
    bufp->chgIData(oldp+111,(vlSelfRef.rvfi_mem_rdata),32);
    bufp->chgIData(oldp+112,(vlSelfRef.rvfi_mem_wdata),32);
    bufp->chgBit(oldp+113,(vlSelfRef.perf_stall));
    bufp->chgBit(oldp+114,(vlSelfRef.perf_flush));
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
    __Vtemp_2[3U] = (IData)((((QData)((IData)((2U | (IData)(vlSelfRef.cpu_pipeline_top__DOT__predict_taken)))) 
                              << 0x00000026U) | (((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__predict_target)) 
                                                  << 6U) 
                                                 | (QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__predictor_i__DOT__ghr)))));
    __Vtemp_2[4U] = (IData)(((((QData)((IData)((2U 
                                                | (IData)(vlSelfRef.cpu_pipeline_top__DOT__predict_taken)))) 
                               << 0x00000026U) | (((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__predict_target)) 
                                                   << 6U) 
                                                  | (QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__predictor_i__DOT__ghr)))) 
                             >> 0x00000020U));
    bufp->chgWData(oldp+115,(__Vtemp_2),136);
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
                                       << 0x00000012U)) 
                       | vlSelfRef.cpu_pipeline_top__DOT__id_ctrl) 
                      << 0x00000016U) | ((vlSelfRef.cpu_pipeline_top__DOT__if_id_q[3U] 
                                          >> 0x00000011U) 
                                         | (0x003f8000U 
                                            & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[4U] 
                                               << 0x0000000fU))));
    __Vtemp_9[8U] = (((0x02000000U & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[4U] 
                                      << 0x00000012U)) 
                      | vlSelfRef.cpu_pipeline_top__DOT__id_ctrl) 
                     >> 0x0000000aU);
    bufp->chgWData(oldp+120,(__Vtemp_9),272);
    bufp->chgIData(oldp+129,(((IData)(vlSelfRef.perf_flush)
                               ? vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__pc_next
                               : ((IData)(vlSelfRef.cpu_pipeline_top__DOT__predict_taken)
                                   ? vlSelfRef.cpu_pipeline_top__DOT__predict_target
                                   : ((IData)(4U) + vlSelfRef.cpu_pipeline_top__DOT__pc_q)))),32);
    bufp->chgIData(oldp+130,(((((0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                >> 0x0000000fU)) 
                                == (0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                                   >> 8U))) 
                               & (IData)(vlSelfRef.cpu_pipeline_top__DOT__rvfi_rd_written))
                               ? vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__wr_data
                               : vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs
                              [(0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                               >> 0x0000000fU))])),32);
    bufp->chgIData(oldp+131,(((((0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                                >> 0x00000014U)) 
                                == (0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                                   >> 8U))) 
                               & (IData)(vlSelfRef.cpu_pipeline_top__DOT__rvfi_rd_written))
                               ? vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__wr_data
                               : vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs
                              [(0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                                               >> 0x00000014U))])),32);
    bufp->chgCData(oldp+132,((0x0000007fU & vlSelfRef.instr_out)),7);
    bufp->chgBit(oldp+133,((0x63U == (0x0000007fU & vlSelfRef.instr_out))));
    bufp->chgBit(oldp+134,((0x6fU == (0x0000007fU & vlSelfRef.instr_out))));
    Vcpu_pipeline_top___024root__trace_chg_dtype____0(vlSelf, bufp, 135, vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs);
}

void Vcpu_pipeline_top___024root__trace_chg_dtype____0(Vcpu_pipeline_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root__trace_chg_dtype____0\n"); );
    Vcpu_pipeline_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[13]),32);
    bufp->chgIData(oldp+14,(__VdtypeVar[14]),32);
    bufp->chgIData(oldp+15,(__VdtypeVar[15]),32);
    bufp->chgIData(oldp+16,(__VdtypeVar[16]),32);
    bufp->chgIData(oldp+17,(__VdtypeVar[17]),32);
    bufp->chgIData(oldp+18,(__VdtypeVar[18]),32);
    bufp->chgIData(oldp+19,(__VdtypeVar[19]),32);
    bufp->chgIData(oldp+20,(__VdtypeVar[20]),32);
    bufp->chgIData(oldp+21,(__VdtypeVar[21]),32);
    bufp->chgIData(oldp+22,(__VdtypeVar[22]),32);
    bufp->chgIData(oldp+23,(__VdtypeVar[23]),32);
    bufp->chgIData(oldp+24,(__VdtypeVar[24]),32);
    bufp->chgIData(oldp+25,(__VdtypeVar[25]),32);
    bufp->chgIData(oldp+26,(__VdtypeVar[26]),32);
    bufp->chgIData(oldp+27,(__VdtypeVar[27]),32);
    bufp->chgIData(oldp+28,(__VdtypeVar[28]),32);
    bufp->chgIData(oldp+29,(__VdtypeVar[29]),32);
    bufp->chgIData(oldp+30,(__VdtypeVar[30]),32);
    bufp->chgIData(oldp+31,(__VdtypeVar[31]),32);
}

void Vcpu_pipeline_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root__trace_cleanup\n"); );
    // Body
    Vcpu_pipeline_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_pipeline_top___024root*>(voidSelf);
    Vcpu_pipeline_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
