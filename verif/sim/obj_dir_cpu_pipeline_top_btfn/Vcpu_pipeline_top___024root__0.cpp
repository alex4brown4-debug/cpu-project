// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_pipeline_top.h for the primary calling header

#include "Vcpu_pipeline_top__pch.h"

bool Vcpu_pipeline_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root___trigger_anySet__act\n"); );
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

extern const VlWide<9>/*287:0*/ Vcpu_pipeline_top__ConstPool__CONST_hc5471b50_0;
extern const VlWide<10>/*319:0*/ Vcpu_pipeline_top__ConstPool__CONST_h7e0a9f2c_0;

void Vcpu_pipeline_top___024root___nba_sequent__TOP__0(Vcpu_pipeline_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_pipeline_top___024root___nba_sequent__TOP__0\n"); );
    Vcpu_pipeline_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_3;
    __VdfgRegularize_h6e95ff9d_0_3 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_6;
    __VdfgRegularize_h6e95ff9d_0_6 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_18;
    __VdfgRegularize_h6e95ff9d_0_18 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_21;
    __VdfgRegularize_h6e95ff9d_0_21 = 0;
    CData/*7:0*/ __VdlyVal__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v0;
    __VdlyVal__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v0 = 0;
    CData/*4:0*/ __VdlyLsb__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v0;
    __VdlyLsb__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v0;
    __VdlyDim0__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v0;
    __VdlySet__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v0 = 0;
    SData/*15:0*/ __VdlyVal__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v1;
    __VdlyVal__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v1 = 0;
    CData/*4:0*/ __VdlyLsb__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v1;
    __VdlyLsb__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v1 = 0;
    SData/*9:0*/ __VdlyDim0__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v1;
    __VdlyDim0__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v1 = 0;
    CData/*0:0*/ __VdlySet__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v1;
    __VdlySet__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v1 = 0;
    IData/*31:0*/ __VdlyVal__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v2;
    __VdlyVal__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v2 = 0;
    SData/*9:0*/ __VdlyDim0__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v2;
    __VdlyDim0__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v2 = 0;
    CData/*0:0*/ __VdlySet__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v2;
    __VdlySet__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v2 = 0;
    CData/*4:0*/ __VdlyDim0__cpu_pipeline_top__DOT__reg_file_i__DOT__regs__v0;
    __VdlyDim0__cpu_pipeline_top__DOT__reg_file_i__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_pipeline_top__DOT__reg_file_i__DOT__regs__v0;
    __VdlySet__cpu_pipeline_top__DOT__reg_file_i__DOT__regs__v0 = 0;
    IData/*31:0*/ __VdlyVal__cpu_pipeline_top__DOT__reg_file_i__DOT__regs__v1;
    __VdlyVal__cpu_pipeline_top__DOT__reg_file_i__DOT__regs__v1 = 0;
    CData/*4:0*/ __VdlyDim0__cpu_pipeline_top__DOT__reg_file_i__DOT__regs__v1;
    __VdlyDim0__cpu_pipeline_top__DOT__reg_file_i__DOT__regs__v1 = 0;
    CData/*0:0*/ __VdlySet__cpu_pipeline_top__DOT__reg_file_i__DOT__regs__v1;
    __VdlySet__cpu_pipeline_top__DOT__reg_file_i__DOT__regs__v1 = 0;
    CData/*0:0*/ __VdlySet__cpu_pipeline_top__DOT__reg_file_i__DOT__regs__v2;
    __VdlySet__cpu_pipeline_top__DOT__reg_file_i__DOT__regs__v2 = 0;
    VlWide<5>/*159:0*/ __Vtemp_5;
    // Body
    __VdlySet__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v0 = 0U;
    __VdlySet__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v1 = 0U;
    __VdlySet__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v2 = 0U;
    __VdlySet__cpu_pipeline_top__DOT__reg_file_i__DOT__regs__v0 = 0U;
    __VdlySet__cpu_pipeline_top__DOT__reg_file_i__DOT__regs__v1 = 0U;
    __VdlySet__cpu_pipeline_top__DOT__reg_file_i__DOT__regs__v2 = 0U;
    if (vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__mem_write) {
        if ((0U == (7U & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                          >> 0x00000018U)))) {
            __VdlyVal__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v0 
                = (0x000000ffU & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[2U] 
                                  >> 5U));
            __VdlyLsb__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v0 
                = (0x00000018U & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                  >> 2U));
            __VdlyDim0__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v0 
                = (0x000003ffU & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                  >> 7U));
            __VdlySet__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v0 = 1U;
        } else if ((1U == (7U & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                                 >> 0x00000018U)))) {
            __VdlyVal__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v1 
                = (0x0000ffffU & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[2U] 
                                  >> 5U));
            __VdlyLsb__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v1 
                = (0x00000018U & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                  >> 2U));
            __VdlyDim0__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v1 
                = (0x000003ffU & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                  >> 7U));
            __VdlySet__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v1 = 1U;
        } else if ((2U == (7U & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                                 >> 0x00000018U)))) {
            __VdlyVal__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v2 
                = ((vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                    << 0x0000001bU) | (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[2U] 
                                       >> 5U));
            __VdlyDim0__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v2 
                = (0x000003ffU & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                  >> 7U));
            __VdlySet__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v2 = 1U;
        }
    }
    if (vlSelfRef.rst_n) {
        if ((IData)(((0U == (0x00001f00U & vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U])) 
                     & (0x60U == (0x60U & vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[9U]))))) {
            __VdlyDim0__cpu_pipeline_top__DOT__reg_file_i__DOT__regs__v0 
                = (0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                  >> 8U));
            __VdlySet__cpu_pipeline_top__DOT__reg_file_i__DOT__regs__v0 = 1U;
        } else if ((IData)(((0x60U == (0x60U & vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[9U])) 
                            & (0U != (0x0000001fU & 
                                      (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                       >> 8U)))))) {
            __VdlyVal__cpu_pipeline_top__DOT__reg_file_i__DOT__regs__v1 
                = vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__wr_data;
            __VdlyDim0__cpu_pipeline_top__DOT__reg_file_i__DOT__regs__v1 
                = (0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                  >> 8U));
            __VdlySet__cpu_pipeline_top__DOT__reg_file_i__DOT__regs__v1 = 1U;
        }
        if (((IData)(vlSelfRef.perf_flush) | (IData)(vlSelfRef.perf_stall))) {
            VL_ASSIGN_W(272, vlSelfRef.cpu_pipeline_top__DOT__id_ex_q, Vcpu_pipeline_top__ConstPool__CONST_hc5471b50_0);
        } else {
            __Vtemp_5[3U] = (((IData)((((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__imm_gen_i__DOT__imm)) 
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
                              >> 0x00000011U) | ((IData)(
                                                         ((((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__imm_gen_i__DOT__imm)) 
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
            vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[0U] 
                = (IData)((((QData)((IData)((0x0000001fU 
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
            vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[1U] 
                = ((((((0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
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
            vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[2U] 
                = ((((((0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
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
            vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[3U] 
                = __Vtemp_5[3U];
            vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[4U] 
                = ((vlSelfRef.cpu_pipeline_top__DOT__if_id_q[1U] 
                    << 0x0000000fU) | ((IData)(((((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__imm_gen_i__DOT__imm)) 
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
            vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[5U] 
                = ((vlSelfRef.cpu_pipeline_top__DOT__if_id_q[1U] 
                    >> 0x00000011U) | (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[2U] 
                                       << 0x0000000fU));
            vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                = ((vlSelfRef.cpu_pipeline_top__DOT__if_id_q[2U] 
                    >> 0x00000011U) | (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[3U] 
                                       << 0x0000000fU));
            vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                = ((((0x02000000U & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[4U] 
                                     << 0x00000012U)) 
                     | vlSelfRef.cpu_pipeline_top__DOT__id_ctrl) 
                    << 0x00000016U) | ((vlSelfRef.cpu_pipeline_top__DOT__if_id_q[3U] 
                                        >> 0x00000011U) 
                                       | (0x003f8000U 
                                          & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[4U] 
                                             << 0x0000000fU))));
            vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U] 
                = (((0x02000000U & (vlSelfRef.cpu_pipeline_top__DOT__if_id_q[4U] 
                                    << 0x00000012U)) 
                    | vlSelfRef.cpu_pipeline_top__DOT__id_ctrl) 
                   >> 0x0000000aU);
        }
        vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[0U] 
            = vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d[0U];
        vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[1U] 
            = vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d[1U];
        vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[2U] 
            = vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d[2U];
        vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
            = vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d[3U];
        vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[4U] 
            = vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d[4U];
        vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[5U] 
            = vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d[5U];
        vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
            = vlSelfRef.cpu_pipeline_top__DOT__ex_mem_d[6U];
        if (vlSelfRef.perf_flush) {
            vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] = 0U;
            vlSelfRef.cpu_pipeline_top__DOT__if_id_q[1U] = 0U;
            vlSelfRef.cpu_pipeline_top__DOT__if_id_q[2U] = 0U;
            vlSelfRef.cpu_pipeline_top__DOT__if_id_q[3U] = 0U;
            vlSelfRef.cpu_pipeline_top__DOT__if_id_q[4U] = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.perf_stall)))) {
            vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] 
                = vlSelfRef.instr_out;
            vlSelfRef.cpu_pipeline_top__DOT__if_id_q[1U] 
                = (IData)((((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__pc_q)) 
                            << 0x00000020U) | (QData)((IData)(
                                                              ((IData)(4U) 
                                                               + vlSelfRef.cpu_pipeline_top__DOT__pc_q)))));
            vlSelfRef.cpu_pipeline_top__DOT__if_id_q[2U] 
                = (IData)(((((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__pc_q)) 
                             << 0x00000020U) | (QData)((IData)(
                                                               ((IData)(4U) 
                                                                + vlSelfRef.cpu_pipeline_top__DOT__pc_q)))) 
                           >> 0x00000020U));
            vlSelfRef.cpu_pipeline_top__DOT__if_id_q[3U] 
                = (IData)((((QData)((IData)((2U | (IData)(vlSelfRef.cpu_pipeline_top__DOT__predict_taken)))) 
                            << 0x00000026U) | ((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__predict_target)) 
                                               << 6U)));
            vlSelfRef.cpu_pipeline_top__DOT__if_id_q[4U] 
                = (0x000000ffU & (IData)(((((QData)((IData)(
                                                            (2U 
                                                             | (IData)(vlSelfRef.cpu_pipeline_top__DOT__predict_taken)))) 
                                            << 0x00000026U) 
                                           | ((QData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__predict_target)) 
                                              << 6U)) 
                                          >> 0x00000020U)));
        }
        vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[0U] 
            = vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[0U];
        vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[1U] 
            = vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[1U];
        vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[2U] 
            = vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[2U];
        vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[3U] 
            = vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[3U];
        vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
            = vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[4U];
        vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[5U] 
            = vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[5U];
        vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[6U] 
            = vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[6U];
        vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[7U] 
            = vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[7U];
        vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[8U] 
            = vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[8U];
        vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[9U] 
            = vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[9U];
        if ((1U & (~ (IData)(vlSelfRef.perf_stall)))) {
            vlSelfRef.cpu_pipeline_top__DOT__pc_q = vlSelfRef.cpu_pipeline_top__DOT__pc_d;
        }
    } else {
        __VdlySet__cpu_pipeline_top__DOT__reg_file_i__DOT__regs__v2 = 1U;
        VL_ASSIGN_W(272, vlSelfRef.cpu_pipeline_top__DOT__id_ex_q, Vcpu_pipeline_top__ConstPool__CONST_hc5471b50_0);
        vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[0U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[1U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[2U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[4U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[5U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__if_id_q[0U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__if_id_q[1U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__if_id_q[2U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__if_id_q[3U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__if_id_q[4U] = 0U;
        VL_ASSIGN_W(295, vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q, Vcpu_pipeline_top__ConstPool__CONST_h7e0a9f2c_0);
        vlSelfRef.cpu_pipeline_top__DOT__pc_q = 0U;
    }
    if (__VdlySet__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v0) {
        vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__dmem[__VdlyDim0__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v0] 
            = (((~ ((IData)(0x000000ffU) << (IData)(__VdlyLsb__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v0))) 
                & vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__dmem
                [__VdlyDim0__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v0]) 
               | (0x00000000ffffffffULL & ((IData)(__VdlyVal__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v0) 
                                           << (IData)(__VdlyLsb__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v0))));
    }
    if (__VdlySet__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v1) {
        vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__dmem[__VdlyDim0__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v1] 
            = (((~ ((IData)(0x0000ffffU) << (IData)(__VdlyLsb__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v1))) 
                & vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__dmem
                [__VdlyDim0__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v1]) 
               | (0x00000000ffffffffULL & ((IData)(__VdlyVal__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v1) 
                                           << (IData)(__VdlyLsb__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v1))));
    }
    if (__VdlySet__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v2) {
        vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__dmem[__VdlyDim0__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v2] 
            = __VdlyVal__cpu_pipeline_top__DOT__data_mem_i__DOT__dmem__v2;
    }
    if (__VdlySet__cpu_pipeline_top__DOT__reg_file_i__DOT__regs__v0) {
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[__VdlyDim0__cpu_pipeline_top__DOT__reg_file_i__DOT__regs__v0] = 0U;
    }
    if (__VdlySet__cpu_pipeline_top__DOT__reg_file_i__DOT__regs__v1) {
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[__VdlyDim0__cpu_pipeline_top__DOT__reg_file_i__DOT__regs__v1] 
            = __VdlyVal__cpu_pipeline_top__DOT__reg_file_i__DOT__regs__v1;
    }
    if (__VdlySet__cpu_pipeline_top__DOT__reg_file_i__DOT__regs__v2) {
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[0U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[1U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[2U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[3U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[4U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[5U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[6U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[7U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[8U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[9U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[10U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[11U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[12U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[13U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[14U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[15U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[16U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[17U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[18U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[19U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[20U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[21U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[22U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[23U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[24U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[25U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[26U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[27U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[28U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[29U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[30U] = 0U;
        vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__regs[31U] = 0U;
    }
    vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__mem_read 
        = (IData)((0x50000000U == (0x50000000U & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])));
    vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__mem_write 
        = (IData)((0x48000000U == (0x48000000U & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9 = (0x0000000fU 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 = (0x0000ffffU 
                                                 & (vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__dmem
                                                    [
                                                    (0x000003ffU 
                                                     & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                                        >> 7U))] 
                                                    >> 
                                                    (0x00000018U 
                                                     & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                                        >> 2U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13 = (0x000000ffU 
                                                 & (vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__dmem
                                                    [
                                                    (0x000003ffU 
                                                     & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                                        >> 7U))] 
                                                    >> 
                                                    (0x00000018U 
                                                     & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                                        >> 2U))));
    vlSelfRef.cpu_pipeline_top__DOT__mem_alu_result 
        = ((2U == (3U & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                         >> 0x0000000dU))) ? ((vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[5U] 
                                               << 0x0000001bU) 
                                              | (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[4U] 
                                                 >> 5U))
            : ((vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[4U] 
                << 0x0000001bU) | (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                   >> 5U)));
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
    __VdfgRegularize_h6e95ff9d_0_18 = (0xfffff000U 
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
                   & __VdfgRegularize_h6e95ff9d_0_18);
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
                 ? __VdfgRegularize_h6e95ff9d_0_18 : __VdfgRegularize_h6e95ff9d_0_3) 
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
    vlSelfRef.rvfi_valid = (1U & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[9U] 
                                  >> 6U));
    vlSelfRef.cpu_pipeline_top__DOT__rvfi_rd_written 
        = (IData)(((0x60U == (0x60U & vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[9U])) 
                   & (0U != (0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                            >> 8U)))));
    vlSelfRef.rvfi_mem_rdata = ((vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[5U] 
                                 << 0x00000013U) | 
                                (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                 >> 0x0000000dU));
    vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[0U] = 
        (((vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
           << 0x0000001bU) | (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[2U] 
                              >> 5U)) << (0x00000018U 
                                          & (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[3U] 
                                             >> 2U)));
    vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[1U] = 
        ((0xfffffc00U & vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[1U]) 
         | ((0x000000f0U & ((((0x04000000U & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])
                               ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9) 
                                  & (- (IData)((1U 
                                                & (~ 
                                                   (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                                                    >> 0x00000019U))))))
                               : ((0x02000000U & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])
                                   ? (- (IData)((1U 
                                                 & (~ 
                                                    (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                                                     >> 0x00000018U)))))
                                   : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9))) 
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
                      ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12)
                      : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13)))
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
                           << 0x00000010U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12))
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
                           << 8U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13))))) 
             & (- (IData)((IData)(vlSelfRef.cpu_pipeline_top__DOT__data_mem_i__DOT__mem_read)))) 
            << 0x0000000dU));
    vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[5U] = 
        ((0xffffe000U & vlSelfRef.cpu_pipeline_top__DOT__mem_wb_d[5U]) 
         | ((((0x04000000U & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])
               ? ((- (IData)((1U & (~ (vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U] 
                                       >> 0x00000019U))))) 
                  & ((0x01000000U & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U])
                      ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12)
                      : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13)))
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
                           << 0x00000010U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12))
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
                           << 8U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13))))) 
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
    vlSelfRef.perf_stall = (IData)(((0xa000U == (0xa000U 
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
        = (((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U] 
             & (0x60000000U == (0x60000000U & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U]))) 
            & ((0U != (0x0000001fU & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[2U])) 
               & ((0x0000001fU & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[2U]) 
                  == (0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[1U] 
                                     >> 5U))))) ? vlSelfRef.cpu_pipeline_top__DOT__mem_alu_result
            : (((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U] 
                 & (0x60U == (0x60U & vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[9U]))) 
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
        = ((IData)((((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U] 
                      >> 1U) & (0x60000000U == (0x60000000U 
                                                & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[6U]))) 
                    & (((0x0000001fU & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[2U]) 
                        == (0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[1U] 
                                           >> 0x0000000aU))) 
                       & (0U != (0x0000001fU & vlSelfRef.cpu_pipeline_top__DOT__ex_mem_q[2U])))))
            ? vlSelfRef.cpu_pipeline_top__DOT__mem_alu_result
            : ((IData)((((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U] 
                          >> 1U) & (0x60U == (0x60U 
                                              & vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[9U]))) 
                        & (((0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                            >> 8U)) 
                            == (0x0000001fU & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[1U] 
                                               >> 0x0000000aU))) 
                           & (0U != (0x0000001fU & 
                                     (vlSelfRef.cpu_pipeline_top__DOT__mem_wb_q[4U] 
                                      >> 8U)))))) ? vlSelfRef.cpu_pipeline_top__DOT__reg_file_i__DOT__wr_data
                : ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[3U] 
                    << 0x00000011U) | (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[2U] 
                                       >> 0x0000000fU))));
    vlSelfRef.cpu_pipeline_top__DOT__predict_taken 
        = ((0x6fU == (0x0000007fU & vlSelfRef.instr_out)) 
           | (IData)((0x80000063U == (0x8000007fU & vlSelfRef.instr_out))));
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
        = ((4U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U])
            ? ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[4U] 
                << 0x00000011U) | (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[3U] 
                                   >> 0x0000000fU))
            : vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2);
    vlSelfRef.cpu_pipeline_top__DOT__alu_i__DOT__a 
        = ((0U == (3U & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U] 
                         >> 3U))) ? vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1
            : (((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                 << 0x00000011U) | (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[5U] 
                                    >> 0x0000000fU)) 
               & (- (IData)((1U == (3U & (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[8U] 
                                          >> 3U)))))));
    vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__target_raw 
        = (((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[4U] 
             << 0x00000011U) | (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[3U] 
                                >> 0x0000000fU)) + 
           ((0x01000000U & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
             ? vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1
             : ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[6U] 
                 << 0x00000011U) | (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[5U] 
                                    >> 0x0000000fU))));
    vlSelfRef.cpu_pipeline_top__DOT__next_pc_i__DOT__take_redirect 
        = (1U & ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                  >> 0x00000019U) | ((vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                      >> 0x0000001dU) 
                                     & ((0x10000000U 
                                         & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                                         ? ((~ (vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U] 
                                                >> 0x0000001bU)) 
                                            & ((0x04000000U 
                                                & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                                                ? (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                                   >= vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)
                                                : (vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1 
                                                   < vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)))
                                         : ((0x08000000U 
                                             & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                                             ? ((0x04000000U 
                                                 & vlSelfRef.cpu_pipeline_top__DOT__id_ex_q[7U])
                                                 ? 
                                                VL_GTES_III(32, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2)
                                                 : 
                                                VL_LTS_III(32, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs1, vlSelfRef.cpu_pipeline_top__DOT__branch_cmp_i__DOT__rs2))
                                             : ((0x04000000U 
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
