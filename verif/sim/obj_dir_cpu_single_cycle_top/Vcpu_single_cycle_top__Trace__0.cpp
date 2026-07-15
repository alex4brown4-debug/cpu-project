// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vcpu_single_cycle_top__Syms.h"


void Vcpu_single_cycle_top___024root__trace_chg_0_sub_0(Vcpu_single_cycle_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcpu_single_cycle_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root__trace_chg_0\n"); );
    // Body
    Vcpu_single_cycle_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_single_cycle_top___024root*>(voidSelf);
    Vcpu_single_cycle_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vcpu_single_cycle_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcpu_single_cycle_top___024root__trace_chg_dtype____0(Vcpu_single_cycle_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar);

void Vcpu_single_cycle_top___024root__trace_chg_0_sub_0(Vcpu_single_cycle_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root__trace_chg_0_sub_0\n"); );
    Vcpu_single_cycle_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.cpu_single_cycle_top__DOT__pc),32);
        bufp->chgIData(oldp+1,(((IData)(4U) + vlSelfRef.cpu_single_cycle_top__DOT__pc)),32);
        bufp->chgIData(oldp+2,(vlSelfRef.cpu_single_cycle_top__DOT__imm_gen_i__DOT__imm),32);
        bufp->chgIData(oldp+3,(vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__wr_data),32);
        bufp->chgIData(oldp+4,(vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__result),32);
        bufp->chgIData(oldp+5,(vlSelfRef.cpu_single_cycle_top__DOT__ctrl),23);
        bufp->chgIData(oldp+6,(vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__a),32);
        bufp->chgIData(oldp+7,(vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__b),32);
        bufp->chgBit(oldp+8,(vlSelfRef.cpu_single_cycle_top__DOT__rvfi_rd_written));
        bufp->chgCData(oldp+9,((0x0000000fU & (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                               >> 0x0000000dU))),4);
        bufp->chgCData(oldp+10,((7U & (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                       >> 4U))),3);
        bufp->chgBit(oldp+11,((1U & (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                     >> 7U))));
        bufp->chgBit(oldp+12,((1U & (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                     >> 0x00000015U))));
        bufp->chgBit(oldp+13,((1U & (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                     >> 0x00000014U))));
        bufp->chgCData(oldp+14,((7U & (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                       >> 0x00000011U))),3);
        bufp->chgSData(oldp+15,((0x000003ffU & (vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__result 
                                                >> 2U))),10);
        bufp->chgCData(oldp+16,((3U & vlSelfRef.cpu_single_cycle_top__DOT__alu_i__DOT__result)),2);
        bufp->chgBit(oldp+17,((1U & (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                     >> 2U))));
        bufp->chgBit(oldp+18,((1U & (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                     >> 3U))));
        bufp->chgIData(oldp+19,(vlSelfRef.cpu_single_cycle_top__DOT__next_pc_i__DOT__target_raw),32);
        bufp->chgIData(oldp+20,(((0xfffffffeU & vlSelfRef.cpu_single_cycle_top__DOT__next_pc_i__DOT__target_raw) 
                                 | (1U & ((~ (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                              >> 2U)) 
                                          & vlSelfRef.cpu_single_cycle_top__DOT__next_pc_i__DOT__target_raw)))),32);
        bufp->chgBit(oldp+21,((1U & (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                     >> 0x00000016U))));
    }
    bufp->chgBit(oldp+22,(vlSelfRef.clk));
    bufp->chgBit(oldp+23,(vlSelfRef.rst_n));
    bufp->chgIData(oldp+24,(vlSelfRef.instr_out),32);
    bufp->chgBit(oldp+25,(vlSelfRef.halt));
    bufp->chgIData(oldp+26,(vlSelfRef.rvfi_pc_wdata),32);
    bufp->chgCData(oldp+27,(vlSelfRef.rvfi_rd_addr),5);
    bufp->chgIData(oldp+28,(vlSelfRef.rvfi_rd_wdata),32);
    bufp->chgIData(oldp+29,(vlSelfRef.rvfi_mem_addr),32);
    bufp->chgCData(oldp+30,(vlSelfRef.rvfi_mem_rmask),4);
    bufp->chgCData(oldp+31,(vlSelfRef.rvfi_mem_wmask),4);
    bufp->chgIData(oldp+32,(vlSelfRef.rvfi_mem_rdata),32);
    bufp->chgIData(oldp+33,(vlSelfRef.rvfi_mem_wdata),32);
    bufp->chgIData(oldp+34,(vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                            [(0x0000001fU & (vlSelfRef.instr_out 
                                             >> 0x0000000fU))]),32);
    bufp->chgIData(oldp+35,(vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                            [(0x0000001fU & (vlSelfRef.instr_out 
                                             >> 0x00000014U))]),32);
    bufp->chgBit(oldp+36,(((vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                            >> 7U) & ((0x00000040U 
                                       & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                                       ? ((~ (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                              >> 5U)) 
                                          & ((0x00000010U 
                                              & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                                              ? (vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                 [(0x0000001fU 
                                                   & (vlSelfRef.instr_out 
                                                      >> 0x0000000fU))] 
                                                 >= vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                 [(0x0000001fU 
                                                   & (vlSelfRef.instr_out 
                                                      >> 0x00000014U))])
                                              : (vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                 [(0x0000001fU 
                                                   & (vlSelfRef.instr_out 
                                                      >> 0x0000000fU))] 
                                                 < vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                 [(0x0000001fU 
                                                   & (vlSelfRef.instr_out 
                                                      >> 0x00000014U))])))
                                       : ((0x00000020U 
                                           & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                                           ? ((0x00000010U 
                                               & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                                               ? VL_GTES_III(32, vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                             [
                                                             (0x0000001fU 
                                                              & (vlSelfRef.instr_out 
                                                                 >> 0x0000000fU))], vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                             [
                                                             (0x0000001fU 
                                                              & (vlSelfRef.instr_out 
                                                                 >> 0x00000014U))])
                                               : VL_LTS_III(32, vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                            [
                                                            (0x0000001fU 
                                                             & (vlSelfRef.instr_out 
                                                                >> 0x0000000fU))], vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                            [
                                                            (0x0000001fU 
                                                             & (vlSelfRef.instr_out 
                                                                >> 0x00000014U))]))
                                           : ((0x00000010U 
                                               & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                                               ? (vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                  [
                                                  (0x0000001fU 
                                                   & (vlSelfRef.instr_out 
                                                      >> 0x0000000fU))] 
                                                  != vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                  [
                                                  (0x0000001fU 
                                                   & (vlSelfRef.instr_out 
                                                      >> 0x00000014U))])
                                               : (vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                  [
                                                  (0x0000001fU 
                                                   & (vlSelfRef.instr_out 
                                                      >> 0x0000000fU))] 
                                                  == vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                  [
                                                  (0x0000001fU 
                                                   & (vlSelfRef.instr_out 
                                                      >> 0x00000014U))])))))));
    bufp->chgBit(oldp+37,(((0x00000040U & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                            ? ((~ (vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                   >> 5U)) & ((0x00000010U 
                                               & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                                               ? (vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                  [
                                                  (0x0000001fU 
                                                   & (vlSelfRef.instr_out 
                                                      >> 0x0000000fU))] 
                                                  >= vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                  [
                                                  (0x0000001fU 
                                                   & (vlSelfRef.instr_out 
                                                      >> 0x00000014U))])
                                               : (vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                  [
                                                  (0x0000001fU 
                                                   & (vlSelfRef.instr_out 
                                                      >> 0x0000000fU))] 
                                                  < vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                  [
                                                  (0x0000001fU 
                                                   & (vlSelfRef.instr_out 
                                                      >> 0x00000014U))])))
                            : ((0x00000020U & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                                ? ((0x00000010U & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                                    ? VL_GTES_III(32, vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                  [
                                                  (0x0000001fU 
                                                   & (vlSelfRef.instr_out 
                                                      >> 0x0000000fU))], vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                  [
                                                  (0x0000001fU 
                                                   & (vlSelfRef.instr_out 
                                                      >> 0x00000014U))])
                                    : VL_LTS_III(32, vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                 [(0x0000001fU 
                                                   & (vlSelfRef.instr_out 
                                                      >> 0x0000000fU))], vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                                 [(0x0000001fU 
                                                   & (vlSelfRef.instr_out 
                                                      >> 0x00000014U))]))
                                : ((0x00000010U & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                                    ? (vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                       [(0x0000001fU 
                                         & (vlSelfRef.instr_out 
                                            >> 0x0000000fU))] 
                                       != vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                       [(0x0000001fU 
                                         & (vlSelfRef.instr_out 
                                            >> 0x00000014U))])
                                    : (vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                       [(0x0000001fU 
                                         & (vlSelfRef.instr_out 
                                            >> 0x0000000fU))] 
                                       == vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                                       [(0x0000001fU 
                                         & (vlSelfRef.instr_out 
                                            >> 0x00000014U))]))))));
    bufp->chgIData(oldp+38,(((4U & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                              ? vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs
                             [(0x0000001fU & (vlSelfRef.instr_out 
                                              >> 0x0000000fU))]
                              : vlSelfRef.cpu_single_cycle_top__DOT__pc)),32);
    bufp->chgBit(oldp+39,((1U & ((vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                  >> 3U) | ((vlSelfRef.cpu_single_cycle_top__DOT__ctrl 
                                             >> 7U) 
                                            & ((0x00000040U 
                                                & vlSelfRef.cpu_single_cycle_top__DOT__ctrl)
                                                ? (
                                                   (~ 
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
                                                : (
                                                   (0x00000020U 
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
                                                         >> 0x00000014U))])))))))));
    bufp->chgCData(oldp+40,((0x0000001fU & (vlSelfRef.instr_out 
                                            >> 0x0000000fU))),5);
    bufp->chgCData(oldp+41,((0x0000001fU & (vlSelfRef.instr_out 
                                            >> 0x00000014U))),5);
    bufp->chgCData(oldp+42,((0x0000001fU & (vlSelfRef.instr_out 
                                            >> 7U))),5);
    Vcpu_single_cycle_top___024root__trace_chg_dtype____0(vlSelf, bufp, 43, vlSelfRef.cpu_single_cycle_top__DOT__reg_file_i__DOT__regs);
}

void Vcpu_single_cycle_top___024root__trace_chg_dtype____0(Vcpu_single_cycle_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root__trace_chg_dtype____0\n"); );
    Vcpu_single_cycle_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vcpu_single_cycle_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_single_cycle_top___024root__trace_cleanup\n"); );
    // Body
    Vcpu_single_cycle_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_single_cycle_top___024root*>(voidSelf);
    Vcpu_single_cycle_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
