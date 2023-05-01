// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbsg_activation__Syms.h"


void Vbsg_activation___024root__trace_chg_sub_0(Vbsg_activation___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vbsg_activation___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_activation___024root__trace_chg_top_0\n"); );
    // Init
    Vbsg_activation___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbsg_activation___024root*>(voidSelf);
    Vbsg_activation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vbsg_activation___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vbsg_activation___024root__trace_chg_sub_0(Vbsg_activation___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_activation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_activation___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<5>/*159:0*/ __Vtemp_h7e2db42b__0;
    VlWide<4>/*127:0*/ __Vtemp_h3a2403cf__0;
    VlWide<4>/*127:0*/ __Vtemp_he2f3ca2d__0;
    VlWide<5>/*159:0*/ __Vtemp_he6125479__0;
    VlWide<5>/*159:0*/ __Vtemp_h2b177d0e__0;
    VlWide<5>/*159:0*/ __Vtemp_hd87aee4a__0;
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->bsg_activation__DOT__data_n),32);
        bufp->chgQData(oldp+1,(vlSelf->bsg_activation__DOT__dividend_li),48);
        bufp->chgQData(oldp+3,(vlSelf->bsg_activation__DOT__divisor_li),48);
        bufp->chgBit(oldp+5,(((~ (IData)(vlSelf->bsg_activation__DOT__bypass)) 
                              & (1U == (IData)(vlSelf->bsg_activation__DOT__state_r)))));
        bufp->chgBit(oldp+6,(vlSelf->bsg_activation__DOT__divider_v_i));
        bufp->chgBit(oldp+7,(vlSelf->bsg_activation__DOT__bypass));
        bufp->chgBit(oldp+8,(vlSelf->bsg_activation__DOT__load_ang));
        bufp->chgBit(oldp+9,(vlSelf->bsg_activation__DOT__divider_sel));
        bufp->chgCData(oldp+10,(vlSelf->bsg_activation__DOT__state_n),2);
        bufp->chgBit(oldp+11,((1U & (IData)((vlSelf->bsg_activation__DOT__divisor_li 
                                             >> 0x2fU)))));
        bufp->chgBit(oldp+12,(vlSelf->bsg_activation__DOT__divider__DOT__latch_signed_div_lo));
        bufp->chgCData(oldp+13,(vlSelf->bsg_activation__DOT__divider__DOT__opA_sel_lo),2);
        bufp->chgQData(oldp+14,(vlSelf->bsg_activation__DOT__divider__DOT__opA_mux),49);
        bufp->chgQData(oldp+16,(vlSelf->bsg_activation__DOT__divider__DOT__opC_mux),49);
        bufp->chgCData(oldp+18,(vlSelf->bsg_activation__DOT__divider__DOT__opC_sel_lo),3);
        bufp->chgBit(oldp+19,(vlSelf->bsg_activation__DOT__divider__DOT__opA_ld_lo));
        bufp->chgBit(oldp+20,(vlSelf->bsg_activation__DOT__divider__DOT__opC_ld_lo));
        bufp->chgCData(oldp+21,(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__next_state),6);
        __Vtemp_h7e2db42b__0[0U] = (IData)(vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0);
        __Vtemp_h7e2db42b__0[1U] = (((IData)(vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0) 
                                     << 0x11U) | (IData)(
                                                         (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                          >> 0x20U)));
        __Vtemp_h7e2db42b__0[2U] = (((IData)(vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0) 
                                     >> 0xfU) | ((IData)(
                                                         (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                          >> 0x20U)) 
                                                 << 0x11U));
        __Vtemp_h7e2db42b__0[3U] = (((IData)(vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0) 
                                     << 2U) | ((IData)(
                                                       (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                        >> 0x20U)) 
                                               >> 0xfU));
        __Vtemp_h7e2db42b__0[4U] = (((IData)(vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0) 
                                     >> 0x1eU) | ((IData)(
                                                          (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                           >> 0x20U)) 
                                                  << 2U));
        bufp->chgWData(oldp+22,(__Vtemp_h7e2db42b__0),147);
        bufp->chgCData(oldp+27,(((4U & ((IData)(vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0))))),3);
        bufp->chgCData(oldp+28,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0xaU)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0xaU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0xaU)))))),3);
        bufp->chgCData(oldp+29,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0xbU)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0xbU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0xbU)))))),3);
        bufp->chgCData(oldp+30,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0xcU)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0xcU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0xcU)))))),3);
        bufp->chgCData(oldp+31,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0xdU)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0xdU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0xdU)))))),3);
        bufp->chgCData(oldp+32,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0xeU)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0xeU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0xeU)))))),3);
        bufp->chgCData(oldp+33,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0xfU)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0xfU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0xfU)))))),3);
        bufp->chgCData(oldp+34,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x10U)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x10U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x10U)))))),3);
        bufp->chgCData(oldp+35,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x11U)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x11U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x11U)))))),3);
        bufp->chgCData(oldp+36,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x12U)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x12U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x12U)))))),3);
        bufp->chgCData(oldp+37,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x13U)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x13U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x13U)))))),3);
        bufp->chgCData(oldp+38,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 1U)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 1U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 1U)))))),3);
        bufp->chgCData(oldp+39,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x14U)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x14U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x14U)))))),3);
        bufp->chgCData(oldp+40,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x15U)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x15U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x15U)))))),3);
        bufp->chgCData(oldp+41,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x16U)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x16U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x16U)))))),3);
        bufp->chgCData(oldp+42,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x17U)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x17U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x17U)))))),3);
        bufp->chgCData(oldp+43,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x18U)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x18U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x18U)))))),3);
        bufp->chgCData(oldp+44,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x19U)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x19U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x19U)))))),3);
        bufp->chgCData(oldp+45,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x1aU)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x1aU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x1aU)))))),3);
        bufp->chgCData(oldp+46,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x1bU)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x1bU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x1bU)))))),3);
        bufp->chgCData(oldp+47,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x1cU)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x1cU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x1cU)))))),3);
        bufp->chgCData(oldp+48,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x1dU)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x1dU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x1dU)))))),3);
        bufp->chgCData(oldp+49,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 2U)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 2U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 2U)))))),3);
        bufp->chgCData(oldp+50,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x1eU)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x1eU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x1eU)))))),3);
        bufp->chgCData(oldp+51,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x1fU)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x1fU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x1fU)))))),3);
        bufp->chgCData(oldp+52,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x20U)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x20U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x20U)))))),3);
        bufp->chgCData(oldp+53,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x21U)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x21U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x21U)))))),3);
        bufp->chgCData(oldp+54,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x22U)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x22U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x22U)))))),3);
        bufp->chgCData(oldp+55,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x23U)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x23U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x23U)))))),3);
        bufp->chgCData(oldp+56,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x24U)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x24U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x24U)))))),3);
        bufp->chgCData(oldp+57,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x25U)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x25U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x25U)))))),3);
        bufp->chgCData(oldp+58,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x26U)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x26U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x26U)))))),3);
        bufp->chgCData(oldp+59,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x27U)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x27U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x27U)))))),3);
        bufp->chgCData(oldp+60,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 3U)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 3U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 3U)))))),3);
        bufp->chgCData(oldp+61,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x28U)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x28U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x28U)))))),3);
        bufp->chgCData(oldp+62,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x29U)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x29U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x29U)))))),3);
        bufp->chgCData(oldp+63,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x2aU)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x2aU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x2aU)))))),3);
        bufp->chgCData(oldp+64,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x2bU)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x2bU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x2bU)))))),3);
        bufp->chgCData(oldp+65,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x2cU)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x2cU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x2cU)))))),3);
        bufp->chgCData(oldp+66,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x2dU)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x2dU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x2dU)))))),3);
        bufp->chgCData(oldp+67,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x2eU)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x2eU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x2eU)))))),3);
        bufp->chgCData(oldp+68,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x2fU)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x2fU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x2fU)))))),3);
        bufp->chgCData(oldp+69,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 0x30U)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 0x30U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 0x30U)))))),3);
        bufp->chgCData(oldp+70,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 4U)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 4U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 4U)))))),3);
        bufp->chgCData(oldp+71,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 5U)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 5U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 5U)))))),3);
        bufp->chgCData(oldp+72,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 6U)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 6U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 6U)))))),3);
        bufp->chgCData(oldp+73,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 7U)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 7U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 7U)))))),3);
        bufp->chgCData(oldp+74,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 8U)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 8U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 8U)))))),3);
        bufp->chgCData(oldp+75,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                 >> 9U)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                                >> 9U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                                 >> 9U)))))),3);
        __Vtemp_h3a2403cf__0[0U] = (IData)(vlSelf->bsg_activation__DOT__divider__DOT__add1_out);
        __Vtemp_h3a2403cf__0[1U] = (((IData)(vlSelf->bsg_activation__DOT__divisor_li) 
                                     << 0x11U) | (IData)(
                                                         (vlSelf->bsg_activation__DOT__divider__DOT__add1_out 
                                                          >> 0x20U)));
        __Vtemp_h3a2403cf__0[2U] = (((IData)(vlSelf->bsg_activation__DOT__divisor_li) 
                                     >> 0xfU) | ((IData)(
                                                         (vlSelf->bsg_activation__DOT__divisor_li 
                                                          >> 0x20U)) 
                                                 << 0x11U));
        __Vtemp_h3a2403cf__0[3U] = ((2U & ((IData)(
                                                   (vlSelf->bsg_activation__DOT__divisor_li 
                                                    >> 0x2fU)) 
                                           << 1U)) 
                                    | ((IData)((vlSelf->bsg_activation__DOT__divisor_li 
                                                >> 0x20U)) 
                                       >> 0xfU));
        bufp->chgWData(oldp+76,(__Vtemp_h3a2403cf__0),98);
        __Vtemp_he2f3ca2d__0[0U] = (IData)(vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0);
        __Vtemp_he2f3ca2d__0[1U] = (((IData)(vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0) 
                                     << 0x11U) | (IData)(
                                                         (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                          >> 0x20U)));
        __Vtemp_he2f3ca2d__0[2U] = (((IData)(vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0) 
                                     >> 0xfU) | ((IData)(
                                                         (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                          >> 0x20U)) 
                                                 << 0x11U));
        __Vtemp_he2f3ca2d__0[3U] = ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                             >> 0x20U)) 
                                    >> 0xfU);
        bufp->chgWData(oldp+80,(__Vtemp_he2f3ca2d__0),98);
        bufp->chgCData(oldp+84,(((2U & ((IData)(vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0)))),2);
        bufp->chgCData(oldp+85,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                 >> 0xaU)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0xaU))))),2);
        bufp->chgCData(oldp+86,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                 >> 0xbU)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0xbU))))),2);
        bufp->chgCData(oldp+87,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                 >> 0xcU)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0xcU))))),2);
        bufp->chgCData(oldp+88,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                 >> 0xdU)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0xdU))))),2);
        bufp->chgCData(oldp+89,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                 >> 0xeU)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0xeU))))),2);
        bufp->chgCData(oldp+90,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                 >> 0xfU)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0xfU))))),2);
        bufp->chgCData(oldp+91,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                 >> 0x10U)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x10U))))),2);
        bufp->chgCData(oldp+92,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                 >> 0x11U)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x11U))))),2);
        bufp->chgCData(oldp+93,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                 >> 0x12U)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x12U))))),2);
        bufp->chgCData(oldp+94,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                 >> 0x13U)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x13U))))),2);
        bufp->chgCData(oldp+95,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                 >> 1U)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 1U))))),2);
        bufp->chgCData(oldp+96,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                 >> 0x14U)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x14U))))),2);
        bufp->chgCData(oldp+97,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                 >> 0x15U)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x15U))))),2);
        bufp->chgCData(oldp+98,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                 >> 0x16U)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x16U))))),2);
        bufp->chgCData(oldp+99,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                 >> 0x17U)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x17U))))),2);
        bufp->chgCData(oldp+100,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 0x18U)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 0x18U))))),2);
        bufp->chgCData(oldp+101,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 0x19U)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 0x19U))))),2);
        bufp->chgCData(oldp+102,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 0x1aU)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 0x1aU))))),2);
        bufp->chgCData(oldp+103,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 0x1bU)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 0x1bU))))),2);
        bufp->chgCData(oldp+104,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 0x1cU)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 0x1cU))))),2);
        bufp->chgCData(oldp+105,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 0x1dU)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 0x1dU))))),2);
        bufp->chgCData(oldp+106,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 2U)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 2U))))),2);
        bufp->chgCData(oldp+107,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 0x1eU)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 0x1eU))))),2);
        bufp->chgCData(oldp+108,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 0x1fU)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 0x1fU))))),2);
        bufp->chgCData(oldp+109,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 0x20U)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 0x20U))))),2);
        bufp->chgCData(oldp+110,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 0x21U)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 0x21U))))),2);
        bufp->chgCData(oldp+111,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 0x22U)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 0x22U))))),2);
        bufp->chgCData(oldp+112,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 0x23U)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 0x23U))))),2);
        bufp->chgCData(oldp+113,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 0x24U)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 0x24U))))),2);
        bufp->chgCData(oldp+114,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 0x25U)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 0x25U))))),2);
        bufp->chgCData(oldp+115,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 0x26U)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 0x26U))))),2);
        bufp->chgCData(oldp+116,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 0x27U)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 0x27U))))),2);
        bufp->chgCData(oldp+117,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 3U)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 3U))))),2);
        bufp->chgCData(oldp+118,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 0x28U)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 0x28U))))),2);
        bufp->chgCData(oldp+119,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 0x29U)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 0x29U))))),2);
        bufp->chgCData(oldp+120,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 0x2aU)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 0x2aU))))),2);
        bufp->chgCData(oldp+121,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 0x2bU)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 0x2bU))))),2);
        bufp->chgCData(oldp+122,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 0x2cU)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 0x2cU))))),2);
        bufp->chgCData(oldp+123,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 0x2dU)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 0x2dU))))),2);
        bufp->chgCData(oldp+124,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 0x2eU)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 0x2eU))))),2);
        bufp->chgCData(oldp+125,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 0x2fU)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 0x2fU))))),2);
        bufp->chgCData(oldp+126,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 0x30U)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 0x30U))))),2);
        bufp->chgCData(oldp+127,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 4U)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 4U))))),2);
        bufp->chgCData(oldp+128,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 5U)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 5U))))),2);
        bufp->chgCData(oldp+129,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 6U)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 6U))))),2);
        bufp->chgCData(oldp+130,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 7U)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 7U))))),2);
        bufp->chgCData(oldp+131,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 8U)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 8U))))),2);
        bufp->chgCData(oldp+132,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                  >> 9U)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                 >> 9U))))),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+133,(vlSelf->bsg_activation__DOT__ang_r),21);
        bufp->chgIData(oldp+134,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x14U]),32);
        bufp->chgIData(oldp+135,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x14U]),32);
        bufp->chgIData(oldp+136,(vlSelf->bsg_activation__DOT__negExp),32);
        bufp->chgIData(oldp+137,(vlSelf->bsg_activation__DOT__data_r),32);
        bufp->chgQData(oldp+138,((0xffffffffffffULL 
                                  & vlSelf->bsg_activation__DOT__divider__DOT__opA_reg__DOT__data_r)),48);
        bufp->chgQData(oldp+140,((0xffffffffffffULL 
                                  & vlSelf->bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r)),48);
        bufp->chgBit(oldp+142,((1U & (~ (IData)(vlSelf->bsg_activation__DOT__sinhcosh__DOT__stall_pipe)))));
        bufp->chgBit(oldp+143,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                      >> 0x14U))));
        bufp->chgBit(oldp+144,((0U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))));
        bufp->chgBit(oldp+145,((8U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))));
        bufp->chgCData(oldp+146,(vlSelf->bsg_activation__DOT__state_r),2);
        bufp->chgQData(oldp+147,(vlSelf->bsg_activation__DOT__divider__DOT__opA_reg__DOT__data_r),49);
        bufp->chgQData(oldp+149,(vlSelf->bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r),49);
        bufp->chgBit(oldp+151,(vlSelf->bsg_activation__DOT__divider__DOT__req_reg__DOT__data_r));
        bufp->chgBit(oldp+152,((1U & (~ (IData)((0U 
                                                 != vlSelf->bsg_activation__DOT__divider__DOT__opA_reg__DOT__data_r))))));
        bufp->chgQData(oldp+153,(vlSelf->bsg_activation__DOT__divider__DOT__add1_out),49);
        bufp->chgQData(oldp+155,(vlSelf->bsg_activation__DOT__divider__DOT__opB_mux),49);
        bufp->chgCData(oldp+157,(vlSelf->bsg_activation__DOT__divider__DOT__opB_sel_lo),3);
        bufp->chgBit(oldp+158,(vlSelf->bsg_activation__DOT__divider__DOT__opB_ld_lo));
        bufp->chgQData(oldp+159,(vlSelf->bsg_activation__DOT__divider__DOT__opB_reg__DOT__data_r),49);
        bufp->chgBit(oldp+161,(vlSelf->bsg_activation__DOT__divider__DOT__opA_inv_lo));
        bufp->chgBit(oldp+162,(vlSelf->bsg_activation__DOT__divider__DOT__opB_inv_lo));
        bufp->chgBit(oldp+163,(vlSelf->bsg_activation__DOT__divider__DOT__opA_clr_lo));
        bufp->chgBit(oldp+164,(vlSelf->bsg_activation__DOT__divider__DOT__opB_clr_lo));
        bufp->chgQData(oldp+165,((0x1ffffffffffffULL 
                                  & ((vlSelf->bsg_activation__DOT__divider__DOT__opA_reg__DOT__data_r 
                                      ^ (- (QData)((IData)(vlSelf->bsg_activation__DOT__divider__DOT__opA_inv_lo)))) 
                                     & (- (QData)((IData)(vlSelf->bsg_activation__DOT__divider__DOT__opA_clr_lo)))))),49);
        bufp->chgQData(oldp+167,((0x1ffffffffffffULL 
                                  & ((vlSelf->bsg_activation__DOT__divider__DOT__opB_reg__DOT__data_r 
                                      ^ (- (QData)((IData)(vlSelf->bsg_activation__DOT__divider__DOT__opB_inv_lo)))) 
                                     & (- (QData)((IData)(vlSelf->bsg_activation__DOT__divider__DOT__opB_clr_lo)))))),49);
        bufp->chgBit(oldp+169,(vlSelf->bsg_activation__DOT__divider__DOT__adder1_cin_lo));
        bufp->chgBit(oldp+170,((1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__add1_out 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+171,((1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__opA_reg__DOT__data_r 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+172,((1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+173,(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__q_neg_r));
        bufp->chgBit(oldp+174,(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__r_neg_r));
        bufp->chgBit(oldp+175,(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__neg_ld));
        bufp->chgBit(oldp+176,(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__add1_neg_last_r));
        bufp->chgBit(oldp+177,(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__add2_neg_last_r));
        bufp->chgCData(oldp+178,(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state),6);
        bufp->chgCData(oldp+179,(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__calc_cnt),6);
        bufp->chgBit(oldp+180,(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__calc_up_li));
        bufp->chgBit(oldp+181,((0x30U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__calc_cnt))));
        __Vtemp_he6125479__0[0U] = (IData)(((0x1fffffffffffeULL 
                                             & (vlSelf->bsg_activation__DOT__divider__DOT__add1_out 
                                                << 1U)) 
                                            | (QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r 
                                                                          >> 0x30U)))))));
        __Vtemp_he6125479__0[1U] = (((IData)(vlSelf->bsg_activation__DOT__divider__DOT__add1_out) 
                                     << 0x11U) | (IData)(
                                                         (((0x1fffffffffffeULL 
                                                            & (vlSelf->bsg_activation__DOT__divider__DOT__add1_out 
                                                               << 1U)) 
                                                           | (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r 
                                                                                >> 0x30U)))))) 
                                                          >> 0x20U)));
        __Vtemp_he6125479__0[2U] = (((IData)(vlSelf->bsg_activation__DOT__divider__DOT__add1_out) 
                                     >> 0xfU) | ((IData)(
                                                         (vlSelf->bsg_activation__DOT__divider__DOT__add1_out 
                                                          >> 0x20U)) 
                                                 << 0x11U));
        __Vtemp_he6125479__0[3U] = (((IData)(vlSelf->bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r) 
                                     << 2U) | ((IData)(
                                                       (vlSelf->bsg_activation__DOT__divider__DOT__add1_out 
                                                        >> 0x20U)) 
                                               >> 0xfU));
        __Vtemp_he6125479__0[4U] = (((IData)(vlSelf->bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r) 
                                     >> 0x1eU) | ((IData)(
                                                          (vlSelf->bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r 
                                                           >> 0x20U)) 
                                                  << 2U));
        bufp->chgWData(oldp+182,(__Vtemp_he6125479__0),147);
        __Vtemp_h2b177d0e__0[0U] = (IData)(vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0);
        __Vtemp_h2b177d0e__0[1U] = (((IData)(vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0) 
                                     << 0x11U) | (IData)(
                                                         (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                          >> 0x20U)));
        __Vtemp_h2b177d0e__0[2U] = (((IData)(vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0) 
                                     >> 0xfU) | ((IData)(
                                                         (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                          >> 0x20U)) 
                                                 << 0x11U));
        __Vtemp_h2b177d0e__0[3U] = (((IData)(vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0) 
                                     << 2U) | ((IData)(
                                                       (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                        >> 0x20U)) 
                                               >> 0xfU));
        __Vtemp_h2b177d0e__0[4U] = (((IData)(vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0) 
                                     >> 0x1eU) | ((IData)(
                                                          (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                           >> 0x20U)) 
                                                  << 2U));
        bufp->chgWData(oldp+187,(__Vtemp_h2b177d0e__0),147);
        bufp->chgCData(oldp+192,(((4U & ((IData)(vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0) 
                                         << 2U)) | 
                                  ((2U & ((IData)(vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0))))),3);
        bufp->chgCData(oldp+193,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0xaU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0xaU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0xaU)))))),3);
        bufp->chgCData(oldp+194,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0xbU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0xbU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0xbU)))))),3);
        bufp->chgCData(oldp+195,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0xcU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0xcU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0xcU)))))),3);
        bufp->chgCData(oldp+196,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0xdU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0xdU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0xdU)))))),3);
        bufp->chgCData(oldp+197,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0xeU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0xeU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0xeU)))))),3);
        bufp->chgCData(oldp+198,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0xfU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0xfU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0xfU)))))),3);
        bufp->chgCData(oldp+199,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x10U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x10U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x10U)))))),3);
        bufp->chgCData(oldp+200,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x11U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x11U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x11U)))))),3);
        bufp->chgCData(oldp+201,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x12U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x12U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x12U)))))),3);
        bufp->chgCData(oldp+202,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x13U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x13U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x13U)))))),3);
        bufp->chgCData(oldp+203,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 1U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 1U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 1U)))))),3);
        bufp->chgCData(oldp+204,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x14U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x14U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x14U)))))),3);
        bufp->chgCData(oldp+205,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x15U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x15U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x15U)))))),3);
        bufp->chgCData(oldp+206,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x16U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x16U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x16U)))))),3);
        bufp->chgCData(oldp+207,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x17U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x17U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x17U)))))),3);
        bufp->chgCData(oldp+208,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x18U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x18U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x18U)))))),3);
        bufp->chgCData(oldp+209,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x19U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x19U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x19U)))))),3);
        bufp->chgCData(oldp+210,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x1aU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x1aU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x1aU)))))),3);
        bufp->chgCData(oldp+211,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x1bU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x1bU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x1bU)))))),3);
        bufp->chgCData(oldp+212,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x1cU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x1cU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x1cU)))))),3);
        bufp->chgCData(oldp+213,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x1dU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x1dU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x1dU)))))),3);
        bufp->chgCData(oldp+214,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 2U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 2U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 2U)))))),3);
        bufp->chgCData(oldp+215,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x1eU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x1eU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x1eU)))))),3);
        bufp->chgCData(oldp+216,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x1fU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x1fU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x1fU)))))),3);
        bufp->chgCData(oldp+217,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x20U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x20U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x20U)))))),3);
        bufp->chgCData(oldp+218,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x21U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x21U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x21U)))))),3);
        bufp->chgCData(oldp+219,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x22U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x22U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x22U)))))),3);
        bufp->chgCData(oldp+220,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x23U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x23U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x23U)))))),3);
        bufp->chgCData(oldp+221,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x24U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x24U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x24U)))))),3);
        bufp->chgCData(oldp+222,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x25U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x25U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x25U)))))),3);
        bufp->chgCData(oldp+223,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x26U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x26U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x26U)))))),3);
        bufp->chgCData(oldp+224,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x27U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x27U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x27U)))))),3);
        bufp->chgCData(oldp+225,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 3U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 3U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 3U)))))),3);
        bufp->chgCData(oldp+226,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x28U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x28U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x28U)))))),3);
        bufp->chgCData(oldp+227,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x29U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x29U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x29U)))))),3);
        bufp->chgCData(oldp+228,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x2aU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x2aU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x2aU)))))),3);
        bufp->chgCData(oldp+229,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x2bU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x2bU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x2bU)))))),3);
        bufp->chgCData(oldp+230,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x2cU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x2cU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x2cU)))))),3);
        bufp->chgCData(oldp+231,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x2dU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x2dU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x2dU)))))),3);
        bufp->chgCData(oldp+232,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x2eU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x2eU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x2eU)))))),3);
        bufp->chgCData(oldp+233,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x2fU)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x2fU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x2fU)))))),3);
        bufp->chgCData(oldp+234,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 0x30U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 0x30U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 0x30U)))))),3);
        bufp->chgCData(oldp+235,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 4U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 4U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 4U)))))),3);
        bufp->chgCData(oldp+236,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 5U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 5U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 5U)))))),3);
        bufp->chgCData(oldp+237,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 6U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 6U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 6U)))))),3);
        bufp->chgCData(oldp+238,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 7U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 7U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 7U)))))),3);
        bufp->chgCData(oldp+239,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 8U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 8U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 8U)))))),3);
        bufp->chgCData(oldp+240,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                  >> 9U)) 
                                         << 2U)) | 
                                  ((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                   >> 9U)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                  >> 9U)))))),3);
        bufp->chgWData(oldp+241,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x),672);
        bufp->chgWData(oldp+262,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y),672);
        bufp->chgWData(oldp+283,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang),441);
        bufp->chgIData(oldp+297,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__val),21);
        bufp->chgWData(oldp+298,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans),640);
        bufp->chgWData(oldp+318,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans),640);
        bufp->chgWData(oldp+338,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans),420);
        bufp->chgIData(oldp+352,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__val_ans),20);
        bufp->chgBit(oldp+353,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__stall_pipe));
        bufp->chgIData(oldp+354,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0U]),32);
        bufp->chgIData(oldp+355,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0U]),32);
        bufp->chgIData(oldp+356,((0x1fffffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U])),21);
        bufp->chgBit(oldp+357,((1U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__val)));
        bufp->chgIData(oldp+358,(((0x100000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U])
                                   ? ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0U] 
                                       - vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0U]) 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0U], 8U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__stage_neg__BRA__0__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0U], 8U)))),32);
        bufp->chgIData(oldp+359,(((0x100000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U])
                                   ? ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0U] 
                                       - vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0U]) 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0U], 8U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__stage_neg__BRA__0__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0U], 8U)))),32);
        bufp->chgIData(oldp+360,((0x1fffffU & ((0x100000U 
                                                & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U])
                                                ? ((IData)(0x31e41U) 
                                                   + 
                                                   vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U])
                                                : (
                                                   vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U] 
                                                   - (IData)(0x31e41U))))),21);
        bufp->chgIData(oldp+361,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0U], 8U)),32);
        bufp->chgIData(oldp+362,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0U], 8U)),32);
        bufp->chgBit(oldp+363,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U] 
                                      >> 0x14U))));
        bufp->chgIData(oldp+364,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[1U]),32);
        bufp->chgIData(oldp+365,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[1U]),32);
        bufp->chgIData(oldp+366,((0x1fffffU & ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
                                                << 0xbU) 
                                               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U] 
                                                  >> 0x15U)))),21);
        bufp->chgBit(oldp+367,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                      >> 1U))));
        bufp->chgIData(oldp+368,(((0x200U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U])
                                   ? ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[1U] 
                                       - vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[1U]) 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[1U], 7U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__stage_neg__BRA__1__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[1U], 7U)))),32);
        bufp->chgIData(oldp+369,(((0x200U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U])
                                   ? ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[1U] 
                                       - vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[1U]) 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[1U], 7U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__stage_neg__BRA__1__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[1U], 7U)))),32);
        bufp->chgIData(oldp+370,((0x1fffffU & ((0x200U 
                                                & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U])
                                                ? ((IData)(0x2c548U) 
                                                   + 
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
                                                     << 0xbU) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U] 
                                                       >> 0x15U)))
                                                : (
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
                                                     << 0xbU) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U] 
                                                       >> 0x15U)) 
                                                   - (IData)(0x2c548U))))),21);
        bufp->chgIData(oldp+371,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[1U], 7U)),32);
        bufp->chgIData(oldp+372,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[1U], 7U)),32);
        bufp->chgBit(oldp+373,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
                                      >> 9U))));
        bufp->chgIData(oldp+374,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[2U]),32);
        bufp->chgIData(oldp+375,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[2U]),32);
        bufp->chgIData(oldp+376,((0x1fffffU & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
                                               >> 0xaU))),21);
        bufp->chgBit(oldp+377,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                      >> 2U))));
        bufp->chgIData(oldp+378,(((0x40000000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U])
                                   ? ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[2U] 
                                       - vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[2U]) 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[2U], 6U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__stage_neg__BRA__2__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[2U], 6U)))),32);
        bufp->chgIData(oldp+379,(((0x40000000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U])
                                   ? ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[2U] 
                                       - vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[2U]) 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[2U], 6U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__stage_neg__BRA__2__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[2U], 6U)))),32);
        bufp->chgIData(oldp+380,((0x1fffffU & ((0x40000000U 
                                                & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U])
                                                ? ((IData)(0x26c0eU) 
                                                   + 
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
                                                     << 0x16U) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
                                                       >> 0xaU)))
                                                : (
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
                                                     << 0x16U) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
                                                       >> 0xaU)) 
                                                   - (IData)(0x26c0eU))))),21);
        bufp->chgIData(oldp+381,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[2U], 6U)),32);
        bufp->chgIData(oldp+382,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[2U], 6U)),32);
        bufp->chgBit(oldp+383,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
                                      >> 0x1eU))));
        bufp->chgIData(oldp+384,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[3U]),32);
        bufp->chgIData(oldp+385,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[3U]),32);
        bufp->chgIData(oldp+386,((0x1fffffU & ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U] 
                                                << 1U) 
                                               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
                                                  >> 0x1fU)))),21);
        bufp->chgBit(oldp+387,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                      >> 3U))));
        bufp->chgIData(oldp+388,(((0x80000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U])
                                   ? ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[3U] 
                                       - vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[3U]) 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[3U], 5U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__stage_neg__BRA__3__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[3U], 5U)))),32);
        bufp->chgIData(oldp+389,(((0x80000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U])
                                   ? ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[3U] 
                                       - vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[3U]) 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[3U], 5U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__stage_neg__BRA__3__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[3U], 5U)))),32);
        bufp->chgIData(oldp+390,((0x1fffffU & ((0x80000U 
                                                & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U])
                                                ? ((IData)(0x21252U) 
                                                   + 
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U] 
                                                     << 1U) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
                                                       >> 0x1fU)))
                                                : (
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U] 
                                                     << 1U) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
                                                       >> 0x1fU)) 
                                                   - (IData)(0x21252U))))),21);
        bufp->chgIData(oldp+391,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[3U], 5U)),32);
        bufp->chgIData(oldp+392,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[3U], 5U)),32);
        bufp->chgBit(oldp+393,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U] 
                                      >> 0x13U))));
        bufp->chgIData(oldp+394,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[4U]),32);
        bufp->chgIData(oldp+395,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[4U]),32);
        bufp->chgIData(oldp+396,((0x1fffffU & ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
                                                << 0xcU) 
                                               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U] 
                                                  >> 0x14U)))),21);
        bufp->chgBit(oldp+397,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                      >> 4U))));
        bufp->chgIData(oldp+398,(((0x100U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U])
                                   ? ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[4U] 
                                       - vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[4U]) 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[4U], 4U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__stage_neg__BRA__4__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[4U], 4U)))),32);
        bufp->chgIData(oldp+399,(((0x100U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U])
                                   ? ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[4U] 
                                       - vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[4U]) 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[4U], 4U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__stage_neg__BRA__4__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[4U], 4U)))),32);
        bufp->chgIData(oldp+400,((0x1fffffU & ((0x100U 
                                                & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U])
                                                ? ((IData)(0x1b78cU) 
                                                   + 
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
                                                     << 0xcU) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U] 
                                                       >> 0x14U)))
                                                : (
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
                                                     << 0xcU) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U] 
                                                       >> 0x14U)) 
                                                   - (IData)(0x1b78cU))))),21);
        bufp->chgIData(oldp+401,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[4U], 4U)),32);
        bufp->chgIData(oldp+402,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[4U], 4U)),32);
        bufp->chgBit(oldp+403,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
                                      >> 8U))));
        bufp->chgIData(oldp+404,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[5U]),32);
        bufp->chgIData(oldp+405,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[5U]),32);
        bufp->chgIData(oldp+406,((0x1fffffU & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
                                               >> 9U))),21);
        bufp->chgBit(oldp+407,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                      >> 5U))));
        bufp->chgIData(oldp+408,(((0x20000000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U])
                                   ? ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[5U] 
                                       - vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[5U]) 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[5U], 3U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__stage_neg__BRA__5__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[5U], 3U)))),32);
        bufp->chgIData(oldp+409,(((0x20000000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U])
                                   ? ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[5U] 
                                       - vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[5U]) 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[5U], 3U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__stage_neg__BRA__5__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[5U], 3U)))),32);
        bufp->chgIData(oldp+410,((0x1fffffU & ((0x20000000U 
                                                & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U])
                                                ? ((IData)(0x15aa1U) 
                                                   + 
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
                                                     << 0x17U) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
                                                       >> 9U)))
                                                : (
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
                                                     << 0x17U) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
                                                       >> 9U)) 
                                                   - (IData)(0x15aa1U))))),21);
        bufp->chgIData(oldp+411,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[5U], 3U)),32);
        bufp->chgIData(oldp+412,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[5U], 3U)),32);
        bufp->chgBit(oldp+413,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
                                      >> 0x1dU))));
        bufp->chgIData(oldp+414,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[6U]),32);
        bufp->chgIData(oldp+415,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[6U]),32);
        bufp->chgIData(oldp+416,((0x1fffffU & ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U] 
                                                << 2U) 
                                               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
                                                  >> 0x1eU)))),21);
        bufp->chgBit(oldp+417,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                      >> 6U))));
        bufp->chgIData(oldp+418,(((0x40000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U])
                                   ? ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[6U] 
                                       - vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[6U]) 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[6U], 2U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__stage_neg__BRA__6__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[6U], 2U)))),32);
        bufp->chgIData(oldp+419,(((0x40000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U])
                                   ? ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[6U] 
                                       - vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[6U]) 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[6U], 2U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__stage_neg__BRA__6__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[6U], 2U)))),32);
        bufp->chgIData(oldp+420,((0x1fffffU & ((0x40000U 
                                                & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U])
                                                ? ((IData)(0xf913U) 
                                                   + 
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U] 
                                                     << 2U) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
                                                       >> 0x1eU)))
                                                : (
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U] 
                                                     << 2U) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
                                                       >> 0x1eU)) 
                                                   - (IData)(0xf913U))))),21);
        bufp->chgIData(oldp+421,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[6U], 2U)),32);
        bufp->chgIData(oldp+422,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[6U], 2U)),32);
        bufp->chgBit(oldp+423,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U] 
                                      >> 0x12U))));
        bufp->chgIData(oldp+424,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xaU]),32);
        bufp->chgIData(oldp+425,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xaU]),32);
        bufp->chgIData(oldp+426,((0x1fffffU & ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
                                                << 0xeU) 
                                               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U] 
                                                  >> 0x12U)))),21);
        bufp->chgBit(oldp+427,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                      >> 0xaU))));
        bufp->chgIData(oldp+428,(((0x40U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U])
                                   ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xaU] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xaU], 4U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xaU] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xaU], 4U)))),32);
        bufp->chgIData(oldp+429,(((0x40U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U])
                                   ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xaU] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xaU], 4U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xaU] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xaU], 4U)))),32);
        bufp->chgIData(oldp+430,((0x1fffffU & ((0x40U 
                                                & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U])
                                                ? ((IData)(0x1005U) 
                                                   + 
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
                                                     << 0xeU) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U] 
                                                       >> 0x12U)))
                                                : (
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
                                                     << 0xeU) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U] 
                                                       >> 0x12U)) 
                                                   - (IData)(0x1005U))))),21);
        bufp->chgIData(oldp+431,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xaU], 4U)),32);
        bufp->chgIData(oldp+432,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xaU], 4U)),32);
        bufp->chgBit(oldp+433,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
                                      >> 6U))));
        bufp->chgIData(oldp+434,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xbU]),32);
        bufp->chgIData(oldp+435,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xbU]),32);
        bufp->chgIData(oldp+436,((0x1fffffU & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
                                               >> 7U))),21);
        bufp->chgBit(oldp+437,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                      >> 0xbU))));
        bufp->chgIData(oldp+438,(((0x8000000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U])
                                   ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xbU] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xbU], 4U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xbU] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xbU], 4U)))),32);
        bufp->chgIData(oldp+439,(((0x8000000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U])
                                   ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xbU] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xbU], 4U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xbU] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xbU], 4U)))),32);
        bufp->chgIData(oldp+440,((0x1fffffU & ((0x8000000U 
                                                & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U])
                                                ? ((IData)(0x1005U) 
                                                   + 
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
                                                     << 0x19U) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
                                                       >> 7U)))
                                                : (
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
                                                     << 0x19U) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
                                                       >> 7U)) 
                                                   - (IData)(0x1005U))))),21);
        bufp->chgIData(oldp+441,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xbU], 4U)),32);
        bufp->chgIData(oldp+442,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xbU], 4U)),32);
        bufp->chgBit(oldp+443,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
                                      >> 0x1bU))));
        bufp->chgIData(oldp+444,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xcU]),32);
        bufp->chgIData(oldp+445,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xcU]),32);
        bufp->chgIData(oldp+446,((0x1fffffU & ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[8U] 
                                                << 4U) 
                                               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
                                                  >> 0x1cU)))),21);
        bufp->chgBit(oldp+447,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                      >> 0xcU))));
        bufp->chgIData(oldp+448,(((0x10000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[8U])
                                   ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xcU] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xcU], 5U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xcU] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xcU], 5U)))),32);
        bufp->chgIData(oldp+449,(((0x10000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[8U])
                                   ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xcU] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xcU], 5U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xcU] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xcU], 5U)))),32);
        bufp->chgIData(oldp+450,((0x1fffffU & ((0x10000U 
                                                & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[8U])
                                                ? ((IData)(0x800U) 
                                                   + 
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[8U] 
                                                     << 4U) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
                                                       >> 0x1cU)))
                                                : (
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[8U] 
                                                     << 4U) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
                                                       >> 0x1cU)) 
                                                   - (IData)(0x800U))))),21);
        bufp->chgIData(oldp+451,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xcU], 5U)),32);
        bufp->chgIData(oldp+452,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xcU], 5U)),32);
        bufp->chgBit(oldp+453,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[8U] 
                                      >> 0x10U))));
        bufp->chgIData(oldp+454,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xdU]),32);
        bufp->chgIData(oldp+455,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xdU]),32);
        bufp->chgIData(oldp+456,((0x1fffffU & ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U] 
                                                << 0xfU) 
                                               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[8U] 
                                                  >> 0x11U)))),21);
        bufp->chgBit(oldp+457,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                      >> 0xdU))));
        bufp->chgIData(oldp+458,(((0x20U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U])
                                   ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xdU] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xdU], 6U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xdU] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xdU], 6U)))),32);
        bufp->chgIData(oldp+459,(((0x20U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U])
                                   ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xdU] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xdU], 6U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xdU] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xdU], 6U)))),32);
        bufp->chgIData(oldp+460,((0x1fffffU & ((0x20U 
                                                & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U])
                                                ? ((IData)(0x400U) 
                                                   + 
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U] 
                                                     << 0xfU) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[8U] 
                                                       >> 0x11U)))
                                                : (
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U] 
                                                     << 0xfU) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[8U] 
                                                       >> 0x11U)) 
                                                   - (IData)(0x400U))))),21);
        bufp->chgIData(oldp+461,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xdU], 6U)),32);
        bufp->chgIData(oldp+462,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xdU], 6U)),32);
        bufp->chgBit(oldp+463,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U] 
                                      >> 5U))));
        bufp->chgIData(oldp+464,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xeU]),32);
        bufp->chgIData(oldp+465,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xeU]),32);
        bufp->chgIData(oldp+466,((0x1fffffU & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U] 
                                               >> 6U))),21);
        bufp->chgBit(oldp+467,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                      >> 0xeU))));
        bufp->chgIData(oldp+468,(((0x4000000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U])
                                   ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xeU] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xeU], 7U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xeU] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xeU], 7U)))),32);
        bufp->chgIData(oldp+469,(((0x4000000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U])
                                   ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xeU] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xeU], 7U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xeU] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xeU], 7U)))),32);
        bufp->chgIData(oldp+470,((0x1fffffU & ((0x4000000U 
                                                & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U])
                                                ? ((IData)(0x200U) 
                                                   + 
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U] 
                                                     << 0x1aU) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U] 
                                                       >> 6U)))
                                                : (
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U] 
                                                     << 0x1aU) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U] 
                                                       >> 6U)) 
                                                   - (IData)(0x200U))))),21);
        bufp->chgIData(oldp+471,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xeU], 7U)),32);
        bufp->chgIData(oldp+472,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xeU], 7U)),32);
        bufp->chgBit(oldp+473,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U] 
                                      >> 0x1aU))));
        bufp->chgIData(oldp+474,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xfU]),32);
        bufp->chgIData(oldp+475,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xfU]),32);
        bufp->chgIData(oldp+476,((0x1fffffU & ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xaU] 
                                                << 5U) 
                                               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U] 
                                                  >> 0x1bU)))),21);
        bufp->chgBit(oldp+477,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                      >> 0xfU))));
        bufp->chgIData(oldp+478,(((0x8000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xaU])
                                   ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xfU] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xfU], 8U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xfU] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xfU], 8U)))),32);
        bufp->chgIData(oldp+479,(((0x8000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xaU])
                                   ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xfU] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xfU], 8U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xfU] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xfU], 8U)))),32);
        bufp->chgIData(oldp+480,((0x1fffffU & ((0x8000U 
                                                & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xaU])
                                                ? ((IData)(0x100U) 
                                                   + 
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xaU] 
                                                     << 5U) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U] 
                                                       >> 0x1bU)))
                                                : (
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xaU] 
                                                     << 5U) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U] 
                                                       >> 0x1bU)) 
                                                   - (IData)(0x100U))))),21);
        bufp->chgIData(oldp+481,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xfU], 8U)),32);
        bufp->chgIData(oldp+482,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xfU], 8U)),32);
        bufp->chgBit(oldp+483,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xaU] 
                                      >> 0xfU))));
        bufp->chgIData(oldp+484,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x10U]),32);
        bufp->chgIData(oldp+485,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x10U]),32);
        bufp->chgIData(oldp+486,((0x1fffffU & ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU] 
                                                << 0x10U) 
                                               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xaU] 
                                                  >> 0x10U)))),21);
        bufp->chgBit(oldp+487,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                      >> 0x10U))));
        bufp->chgIData(oldp+488,(((0x10U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU])
                                   ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x10U] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x10U], 9U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x10U] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x10U], 9U)))),32);
        bufp->chgIData(oldp+489,(((0x10U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU])
                                   ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x10U] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x10U], 9U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x10U] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x10U], 9U)))),32);
        bufp->chgIData(oldp+490,((0x1fffffU & ((0x10U 
                                                & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU])
                                                ? ((IData)(0x80U) 
                                                   + 
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU] 
                                                     << 0x10U) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xaU] 
                                                       >> 0x10U)))
                                                : (
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU] 
                                                     << 0x10U) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xaU] 
                                                       >> 0x10U)) 
                                                   - (IData)(0x80U))))),21);
        bufp->chgIData(oldp+491,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x10U], 9U)),32);
        bufp->chgIData(oldp+492,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x10U], 9U)),32);
        bufp->chgBit(oldp+493,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU] 
                                      >> 4U))));
        bufp->chgIData(oldp+494,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x11U]),32);
        bufp->chgIData(oldp+495,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x11U]),32);
        bufp->chgIData(oldp+496,((0x1fffffU & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU] 
                                               >> 5U))),21);
        bufp->chgBit(oldp+497,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                      >> 0x11U))));
        bufp->chgIData(oldp+498,(((0x2000000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU])
                                   ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x11U] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x11U], 0xaU))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x11U] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x11U], 0xaU)))),32);
        bufp->chgIData(oldp+499,(((0x2000000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU])
                                   ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x11U] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x11U], 0xaU))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x11U] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x11U], 0xaU)))),32);
        bufp->chgIData(oldp+500,((0x1fffffU & ((0x2000000U 
                                                & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU])
                                                ? ((IData)(0x40U) 
                                                   + 
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU] 
                                                       >> 5U)))
                                                : (
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU] 
                                                       >> 5U)) 
                                                   - (IData)(0x40U))))),21);
        bufp->chgIData(oldp+501,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x11U], 0xaU)),32);
        bufp->chgIData(oldp+502,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x11U], 0xaU)),32);
        bufp->chgBit(oldp+503,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU] 
                                      >> 0x19U))));
        bufp->chgIData(oldp+504,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x12U]),32);
        bufp->chgIData(oldp+505,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x12U]),32);
        bufp->chgIData(oldp+506,((0x1fffffU & ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xcU] 
                                                << 6U) 
                                               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU] 
                                                  >> 0x1aU)))),21);
        bufp->chgBit(oldp+507,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                      >> 0x12U))));
        bufp->chgIData(oldp+508,(((0x4000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xcU])
                                   ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x12U] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x12U], 0xbU))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x12U] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x12U], 0xbU)))),32);
        bufp->chgIData(oldp+509,(((0x4000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xcU])
                                   ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x12U] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x12U], 0xbU))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x12U] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x12U], 0xbU)))),32);
        bufp->chgIData(oldp+510,((0x1fffffU & ((0x4000U 
                                                & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xcU])
                                                ? ((IData)(0x20U) 
                                                   + 
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xcU] 
                                                     << 6U) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU] 
                                                       >> 0x1aU)))
                                                : (
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xcU] 
                                                     << 6U) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU] 
                                                       >> 0x1aU)) 
                                                   - (IData)(0x20U))))),21);
        bufp->chgIData(oldp+511,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x12U], 0xbU)),32);
        bufp->chgIData(oldp+512,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x12U], 0xbU)),32);
        bufp->chgBit(oldp+513,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xcU] 
                                      >> 0xeU))));
        bufp->chgIData(oldp+514,(((0x4000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xcU])
                                   ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x12U] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x12U], 0xcU))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x12U] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x12U], 0xcU)))),32);
        bufp->chgIData(oldp+515,(((0x4000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xcU])
                                   ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x12U] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x12U], 0xcU))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x12U] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x12U], 0xcU)))),32);
        bufp->chgIData(oldp+516,((0x1fffffU & ((0x4000U 
                                                & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xcU])
                                                ? ((IData)(0x10U) 
                                                   + 
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xcU] 
                                                     << 6U) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU] 
                                                       >> 0x1aU)))
                                                : (
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xcU] 
                                                     << 6U) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU] 
                                                       >> 0x1aU)) 
                                                   - (IData)(0x10U))))),21);
        bufp->chgIData(oldp+517,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x12U], 0xcU)),32);
        bufp->chgIData(oldp+518,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x12U], 0xcU)),32);
        bufp->chgIData(oldp+519,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x13U]),32);
        bufp->chgIData(oldp+520,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x13U]),32);
        bufp->chgIData(oldp+521,((0x1fffffU & ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xdU] 
                                                << 0x11U) 
                                               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xcU] 
                                                  >> 0xfU)))),21);
        bufp->chgBit(oldp+522,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                      >> 0x13U))));
        bufp->chgIData(oldp+523,(((8U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xdU])
                                   ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x13U] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x13U], 0xcU))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x13U] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x13U], 0xcU)))),32);
        bufp->chgIData(oldp+524,(((8U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xdU])
                                   ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x13U] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x13U], 0xcU))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x13U] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x13U], 0xcU)))),32);
        bufp->chgIData(oldp+525,((0x1fffffU & ((8U 
                                                & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xdU])
                                                ? ((IData)(0x10U) 
                                                   + 
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xdU] 
                                                     << 0x11U) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xcU] 
                                                       >> 0xfU)))
                                                : (
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xdU] 
                                                     << 0x11U) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xcU] 
                                                       >> 0xfU)) 
                                                   - (IData)(0x10U))))),21);
        bufp->chgIData(oldp+526,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x13U], 0xcU)),32);
        bufp->chgIData(oldp+527,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x13U], 0xcU)),32);
        bufp->chgBit(oldp+528,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xdU] 
                                      >> 3U))));
        bufp->chgIData(oldp+529,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[7U]),32);
        bufp->chgIData(oldp+530,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[7U]),32);
        bufp->chgIData(oldp+531,((0x1fffffU & ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
                                                << 0xdU) 
                                               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U] 
                                                  >> 0x13U)))),21);
        bufp->chgBit(oldp+532,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                      >> 7U))));
        bufp->chgIData(oldp+533,(((0x80U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U])
                                   ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[7U] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[7U], 1U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[7U] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[7U], 1U)))),32);
        bufp->chgIData(oldp+534,(((0x80U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U])
                                   ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[7U] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[7U], 1U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[7U] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[7U], 1U)))),32);
        bufp->chgIData(oldp+535,((0x1fffffU & ((0x80U 
                                                & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U])
                                                ? ((IData)(0x8c9fU) 
                                                   + 
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
                                                     << 0xdU) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U] 
                                                       >> 0x13U)))
                                                : (
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
                                                     << 0xdU) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U] 
                                                       >> 0x13U)) 
                                                   - (IData)(0x8c9fU))))),21);
        bufp->chgIData(oldp+536,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[7U], 1U)),32);
        bufp->chgIData(oldp+537,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[7U], 1U)),32);
        bufp->chgBit(oldp+538,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
                                      >> 7U))));
        bufp->chgIData(oldp+539,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[8U]),32);
        bufp->chgIData(oldp+540,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[8U]),32);
        bufp->chgIData(oldp+541,((0x1fffffU & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
                                               >> 8U))),21);
        bufp->chgBit(oldp+542,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                      >> 8U))));
        bufp->chgIData(oldp+543,(((0x10000000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U])
                                   ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[8U] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[8U], 2U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[8U] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[8U], 2U)))),32);
        bufp->chgIData(oldp+544,(((0x10000000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U])
                                   ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[8U] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[8U], 2U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[8U] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[8U], 2U)))),32);
        bufp->chgIData(oldp+545,((0x1fffffU & ((0x10000000U 
                                                & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U])
                                                ? ((IData)(0x4162U) 
                                                   + 
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
                                                     << 0x18U) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
                                                       >> 8U)))
                                                : (
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
                                                     << 0x18U) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
                                                       >> 8U)) 
                                                   - (IData)(0x4162U))))),21);
        bufp->chgIData(oldp+546,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[8U], 2U)),32);
        bufp->chgIData(oldp+547,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[8U], 2U)),32);
        bufp->chgBit(oldp+548,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
                                      >> 0x1cU))));
        bufp->chgIData(oldp+549,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[9U]),32);
        bufp->chgIData(oldp+550,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[9U]),32);
        bufp->chgIData(oldp+551,((0x1fffffU & ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U] 
                                                << 3U) 
                                               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
                                                  >> 0x1dU)))),21);
        bufp->chgBit(oldp+552,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                      >> 9U))));
        bufp->chgIData(oldp+553,(((0x20000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U])
                                   ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[9U] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[9U], 3U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[9U] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[9U], 3U)))),32);
        bufp->chgIData(oldp+554,(((0x20000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U])
                                   ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[9U] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[9U], 3U))
                                   : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[9U] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[9U], 3U)))),32);
        bufp->chgIData(oldp+555,((0x1fffffU & ((0x20000U 
                                                & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U])
                                                ? ((IData)(0x202bU) 
                                                   + 
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U] 
                                                     << 3U) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
                                                       >> 0x1dU)))
                                                : (
                                                   ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U] 
                                                     << 3U) 
                                                    | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
                                                       >> 0x1dU)) 
                                                   - (IData)(0x202bU))))),21);
        bufp->chgIData(oldp+556,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[9U], 3U)),32);
        bufp->chgIData(oldp+557,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[9U], 3U)),32);
        bufp->chgBit(oldp+558,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U] 
                                      >> 0x11U))));
    }
    bufp->chgBit(oldp+559,(vlSelf->clk_i));
    bufp->chgIData(oldp+560,(vlSelf->ang_i),21);
    bufp->chgBit(oldp+561,(vlSelf->ready_i));
    bufp->chgBit(oldp+562,(vlSelf->val_i));
    bufp->chgBit(oldp+563,(vlSelf->reset_i));
    bufp->chgBit(oldp+564,(vlSelf->tanh_sel_i));
    bufp->chgIData(oldp+565,(vlSelf->data_o),32);
    bufp->chgBit(oldp+566,(vlSelf->ready_o));
    bufp->chgBit(oldp+567,(vlSelf->val_o));
    bufp->chgIData(oldp+568,(vlSelf->bsg_activation__DOT__ang_n),21);
    bufp->chgBit(oldp+569,(((IData)(vlSelf->tanh_sel_i) 
                            & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x14U] 
                               >> 0x1fU))));
    __Vtemp_hd87aee4a__0[0U] = (IData)(((0x1fffffffffffeULL 
                                         & (vlSelf->bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r 
                                            << 1U)) 
                                        | (QData)((IData)(
                                                          (1U 
                                                           & (~ (IData)(
                                                                        (vlSelf->bsg_activation__DOT__divider__DOT__add1_out 
                                                                         >> 0x30U))))))));
    __Vtemp_hd87aee4a__0[1U] = (((IData)(vlSelf->bsg_activation__DOT__divider__DOT__add1_out) 
                                 << 0x11U) | (IData)(
                                                     (((0x1fffffffffffeULL 
                                                        & (vlSelf->bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r 
                                                           << 1U)) 
                                                       | (QData)((IData)(
                                                                         (1U 
                                                                          & (~ (IData)(
                                                                                (vlSelf->bsg_activation__DOT__divider__DOT__add1_out 
                                                                                >> 0x30U))))))) 
                                                      >> 0x20U)));
    __Vtemp_hd87aee4a__0[2U] = (((IData)(vlSelf->bsg_activation__DOT__divider__DOT__add1_out) 
                                 >> 0xfU) | ((IData)(
                                                     (vlSelf->bsg_activation__DOT__divider__DOT__add1_out 
                                                      >> 0x20U)) 
                                             << 0x11U));
    __Vtemp_hd87aee4a__0[3U] = (((IData)(vlSelf->bsg_activation__DOT__dividend_li) 
                                 << 2U) | ((IData)(
                                                   (vlSelf->bsg_activation__DOT__divider__DOT__add1_out 
                                                    >> 0x20U)) 
                                           >> 0xfU));
    __Vtemp_hd87aee4a__0[4U] = ((0x40000U & (((IData)(vlSelf->tanh_sel_i) 
                                              << 0x12U) 
                                             & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x14U] 
                                                >> 0xdU))) 
                                | (((IData)(vlSelf->bsg_activation__DOT__dividend_li) 
                                    >> 0x1eU) | ((IData)(
                                                         (vlSelf->bsg_activation__DOT__dividend_li 
                                                          >> 0x20U)) 
                                                 << 2U)));
    bufp->chgWData(oldp+570,(__Vtemp_hd87aee4a__0),147);
}

void Vbsg_activation___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_activation___024root__trace_cleanup\n"); );
    // Init
    Vbsg_activation___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbsg_activation___024root*>(voidSelf);
    Vbsg_activation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
