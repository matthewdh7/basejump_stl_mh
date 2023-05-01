// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbsg_cordic_sine_cosine_hyperbolic__Syms.h"


void Vbsg_cordic_sine_cosine_hyperbolic___024root__trace_chg_sub_0(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf, VerilatedVcd* tracep);

void Vbsg_cordic_sine_cosine_hyperbolic___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_cordic_sine_cosine_hyperbolic___024root__trace_chg_top_0\n"); );
    // Init
    Vbsg_cordic_sine_cosine_hyperbolic___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbsg_cordic_sine_cosine_hyperbolic___024root*>(voidSelf);
    Vbsg_cordic_sine_cosine_hyperbolic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vbsg_cordic_sine_cosine_hyperbolic___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vbsg_cordic_sine_cosine_hyperbolic___024root__trace_chg_sub_0(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_cordic_sine_cosine_hyperbolic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_cordic_sine_cosine_hyperbolic___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgWData(oldp+0,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x),672);
        tracep->chgWData(oldp+21,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y),672);
        tracep->chgWData(oldp+42,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang),441);
        tracep->chgIData(oldp+56,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val),21);
        tracep->chgWData(oldp+57,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans),640);
        tracep->chgWData(oldp+77,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans),640);
        tracep->chgWData(oldp+97,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans),420);
        tracep->chgIData(oldp+111,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans),20);
        tracep->chgIData(oldp+112,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0U]),32);
        tracep->chgIData(oldp+113,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0U]),32);
        tracep->chgIData(oldp+114,((0x1fffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U])),21);
        tracep->chgBit(oldp+115,((1U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val)));
        tracep->chgIData(oldp+116,((((0x100000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U])
                                      ? 1U : 0U) ? 
                                    ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0U] 
                                      - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0U]) 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0U], 8U))
                                     : ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0U] 
                                         + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0U]) 
                                        - VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0U], 8U)))),32);
        tracep->chgIData(oldp+117,((((0x100000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U])
                                      ? 1U : 0U) ? 
                                    ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0U] 
                                      - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0U]) 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0U], 8U))
                                     : ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0U] 
                                         + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0U]) 
                                        - VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0U], 8U)))),32);
        tracep->chgIData(oldp+118,((0x1fffffU & (((0x100000U 
                                                   & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U])
                                                   ? 1U
                                                   : 0U)
                                                  ? 
                                                 ((IData)(0x31e41U) 
                                                  + 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U])
                                                  : 
                                                 (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U] 
                                                  - (IData)(0x31e41U))))),21);
        tracep->chgIData(oldp+119,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0U], 8U)),32);
        tracep->chgIData(oldp+120,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0U], 8U)),32);
        tracep->chgBit(oldp+121,(((0x100000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U])
                                   ? 1U : 0U)));
        tracep->chgIData(oldp+122,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[1U]),32);
        tracep->chgIData(oldp+123,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[1U]),32);
        tracep->chgIData(oldp+124,((0x1fffffU & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                  << 0xbU) 
                                                 | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U] 
                                                    >> 0x15U)))),21);
        tracep->chgBit(oldp+125,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                        >> 1U))));
        tracep->chgIData(oldp+126,((((0x200U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U])
                                      ? 1U : 0U) ? 
                                    ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[1U] 
                                      - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[1U]) 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[1U], 7U))
                                     : ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[1U] 
                                         + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[1U]) 
                                        - VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[1U], 7U)))),32);
        tracep->chgIData(oldp+127,((((0x200U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U])
                                      ? 1U : 0U) ? 
                                    ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[1U] 
                                      - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[1U]) 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[1U], 7U))
                                     : ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[1U] 
                                         + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[1U]) 
                                        - VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[1U], 7U)))),32);
        tracep->chgIData(oldp+128,((0x1fffffU & (((0x200U 
                                                   & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U])
                                                   ? 1U
                                                   : 0U)
                                                  ? 
                                                 ((IData)(0x2c548U) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                    << 0xbU) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U] 
                                                      >> 0x15U)))
                                                  : 
                                                 (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                    << 0xbU) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U] 
                                                      >> 0x15U)) 
                                                  - (IData)(0x2c548U))))),21);
        tracep->chgIData(oldp+129,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[1U], 7U)),32);
        tracep->chgIData(oldp+130,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[1U], 7U)),32);
        tracep->chgBit(oldp+131,(((0x200U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U])
                                   ? 1U : 0U)));
        tracep->chgIData(oldp+132,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[2U]),32);
        tracep->chgIData(oldp+133,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[2U]),32);
        tracep->chgIData(oldp+134,((0x1fffffU & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                 >> 0xaU))),21);
        tracep->chgBit(oldp+135,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                        >> 2U))));
        tracep->chgIData(oldp+136,((((0x40000000U & 
                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U])
                                      ? 1U : 0U) ? 
                                    ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[2U] 
                                      - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[2U]) 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[2U], 6U))
                                     : ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[2U] 
                                         + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[2U]) 
                                        - VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[2U], 6U)))),32);
        tracep->chgIData(oldp+137,((((0x40000000U & 
                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U])
                                      ? 1U : 0U) ? 
                                    ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[2U] 
                                      - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[2U]) 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[2U], 6U))
                                     : ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[2U] 
                                         + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[2U]) 
                                        - VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[2U], 6U)))),32);
        tracep->chgIData(oldp+138,((0x1fffffU & (((0x40000000U 
                                                   & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U])
                                                   ? 1U
                                                   : 0U)
                                                  ? 
                                                 ((IData)(0x26c0eU) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                    << 0x16U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                      >> 0xaU)))
                                                  : 
                                                 (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                    << 0x16U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                      >> 0xaU)) 
                                                  - (IData)(0x26c0eU))))),21);
        tracep->chgIData(oldp+139,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[2U], 6U)),32);
        tracep->chgIData(oldp+140,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[2U], 6U)),32);
        tracep->chgBit(oldp+141,(((0x40000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U])
                                   ? 1U : 0U)));
        tracep->chgIData(oldp+142,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[3U]),32);
        tracep->chgIData(oldp+143,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[3U]),32);
        tracep->chgIData(oldp+144,((0x1fffffU & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                                                  << 1U) 
                                                 | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                    >> 0x1fU)))),21);
        tracep->chgBit(oldp+145,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                        >> 3U))));
        tracep->chgIData(oldp+146,((((0x80000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U])
                                      ? 1U : 0U) ? 
                                    ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[3U] 
                                      - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[3U]) 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[3U], 5U))
                                     : ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[3U] 
                                         + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[3U]) 
                                        - VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[3U], 5U)))),32);
        tracep->chgIData(oldp+147,((((0x80000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U])
                                      ? 1U : 0U) ? 
                                    ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[3U] 
                                      - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[3U]) 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[3U], 5U))
                                     : ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[3U] 
                                         + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[3U]) 
                                        - VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[3U], 5U)))),32);
        tracep->chgIData(oldp+148,((0x1fffffU & (((0x80000U 
                                                   & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U])
                                                   ? 1U
                                                   : 0U)
                                                  ? 
                                                 ((IData)(0x21252U) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                                                    << 1U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                      >> 0x1fU)))
                                                  : 
                                                 (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                                                    << 1U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                      >> 0x1fU)) 
                                                  - (IData)(0x21252U))))),21);
        tracep->chgIData(oldp+149,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[3U], 5U)),32);
        tracep->chgIData(oldp+150,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[3U], 5U)),32);
        tracep->chgBit(oldp+151,(((0x80000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U])
                                   ? 1U : 0U)));
        tracep->chgIData(oldp+152,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[4U]),32);
        tracep->chgIData(oldp+153,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[4U]),32);
        tracep->chgIData(oldp+154,((0x1fffffU & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                                  << 0xcU) 
                                                 | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                                                    >> 0x14U)))),21);
        tracep->chgBit(oldp+155,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                        >> 4U))));
        tracep->chgIData(oldp+156,((((0x100U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U])
                                      ? 1U : 0U) ? 
                                    ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[4U] 
                                      - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[4U]) 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[4U], 4U))
                                     : ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[4U] 
                                         + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[4U]) 
                                        - VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[4U], 4U)))),32);
        tracep->chgIData(oldp+157,((((0x100U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U])
                                      ? 1U : 0U) ? 
                                    ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[4U] 
                                      - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[4U]) 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[4U], 4U))
                                     : ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[4U] 
                                         + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[4U]) 
                                        - VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[4U], 4U)))),32);
        tracep->chgIData(oldp+158,((0x1fffffU & (((0x100U 
                                                   & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U])
                                                   ? 1U
                                                   : 0U)
                                                  ? 
                                                 ((IData)(0x1b78cU) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                                    << 0xcU) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                                                      >> 0x14U)))
                                                  : 
                                                 (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                                    << 0xcU) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                                                      >> 0x14U)) 
                                                  - (IData)(0x1b78cU))))),21);
        tracep->chgIData(oldp+159,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[4U], 4U)),32);
        tracep->chgIData(oldp+160,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[4U], 4U)),32);
        tracep->chgBit(oldp+161,(((0x100U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U])
                                   ? 1U : 0U)));
        tracep->chgIData(oldp+162,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[5U]),32);
        tracep->chgIData(oldp+163,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[5U]),32);
        tracep->chgIData(oldp+164,((0x1fffffU & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                                 >> 9U))),21);
        tracep->chgBit(oldp+165,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                        >> 5U))));
        tracep->chgIData(oldp+166,((((0x20000000U & 
                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U])
                                      ? 1U : 0U) ? 
                                    ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[5U] 
                                      - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[5U]) 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[5U], 3U))
                                     : ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[5U] 
                                         + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[5U]) 
                                        - VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[5U], 3U)))),32);
        tracep->chgIData(oldp+167,((((0x20000000U & 
                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U])
                                      ? 1U : 0U) ? 
                                    ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[5U] 
                                      - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[5U]) 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[5U], 3U))
                                     : ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[5U] 
                                         + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[5U]) 
                                        - VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[5U], 3U)))),32);
        tracep->chgIData(oldp+168,((0x1fffffU & (((0x20000000U 
                                                   & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U])
                                                   ? 1U
                                                   : 0U)
                                                  ? 
                                                 ((IData)(0x15aa1U) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                                    << 0x17U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                                      >> 9U)))
                                                  : 
                                                 (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                                    << 0x17U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                                      >> 9U)) 
                                                  - (IData)(0x15aa1U))))),21);
        tracep->chgIData(oldp+169,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[5U], 3U)),32);
        tracep->chgIData(oldp+170,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[5U], 3U)),32);
        tracep->chgBit(oldp+171,(((0x20000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U])
                                   ? 1U : 0U)));
        tracep->chgIData(oldp+172,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[6U]),32);
        tracep->chgIData(oldp+173,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[6U]),32);
        tracep->chgIData(oldp+174,((0x1fffffU & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                                                  << 2U) 
                                                 | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                                    >> 0x1eU)))),21);
        tracep->chgBit(oldp+175,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                        >> 6U))));
        tracep->chgIData(oldp+176,((((0x40000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U])
                                      ? 1U : 0U) ? 
                                    ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[6U] 
                                      - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[6U]) 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[6U], 2U))
                                     : ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[6U] 
                                         + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[6U]) 
                                        - VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[6U], 2U)))),32);
        tracep->chgIData(oldp+177,((((0x40000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U])
                                      ? 1U : 0U) ? 
                                    ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[6U] 
                                      - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[6U]) 
                                     + VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[6U], 2U))
                                     : ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[6U] 
                                         + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[6U]) 
                                        - VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[6U], 2U)))),32);
        tracep->chgIData(oldp+178,((0x1fffffU & (((0x40000U 
                                                   & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U])
                                                   ? 1U
                                                   : 0U)
                                                  ? 
                                                 ((IData)(0xf913U) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                                                    << 2U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                                      >> 0x1eU)))
                                                  : 
                                                 (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                                                    << 2U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                                      >> 0x1eU)) 
                                                  - (IData)(0xf913U))))),21);
        tracep->chgIData(oldp+179,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[6U], 2U)),32);
        tracep->chgIData(oldp+180,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[6U], 2U)),32);
        tracep->chgBit(oldp+181,(((0x40000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U])
                                   ? 1U : 0U)));
        tracep->chgIData(oldp+182,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xaU]),32);
        tracep->chgIData(oldp+183,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xaU]),32);
        tracep->chgIData(oldp+184,((0x1fffffU & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                                  << 0xeU) 
                                                 | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                                                    >> 0x12U)))),21);
        tracep->chgBit(oldp+185,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                        >> 0xaU))));
        tracep->chgIData(oldp+186,((((0x40U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U])
                                      ? 1U : 0U) ? 
                                    (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xaU] 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xaU], 4U))
                                     : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xaU] 
                                        + VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xaU], 4U)))),32);
        tracep->chgIData(oldp+187,((((0x40U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U])
                                      ? 1U : 0U) ? 
                                    (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xaU] 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xaU], 4U))
                                     : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xaU] 
                                        + VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xaU], 4U)))),32);
        tracep->chgIData(oldp+188,((0x1fffffU & (((0x40U 
                                                   & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U])
                                                   ? 1U
                                                   : 0U)
                                                  ? 
                                                 ((IData)(0x1005U) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                                    << 0xeU) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                                                      >> 0x12U)))
                                                  : 
                                                 (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                                    << 0xeU) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                                                      >> 0x12U)) 
                                                  - (IData)(0x1005U))))),21);
        tracep->chgIData(oldp+189,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xaU], 4U)),32);
        tracep->chgIData(oldp+190,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xaU], 4U)),32);
        tracep->chgBit(oldp+191,(((0x40U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U])
                                   ? 1U : 0U)));
        tracep->chgIData(oldp+192,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xbU]),32);
        tracep->chgIData(oldp+193,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xbU]),32);
        tracep->chgIData(oldp+194,((0x1fffffU & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                                 >> 7U))),21);
        tracep->chgBit(oldp+195,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                        >> 0xbU))));
        tracep->chgIData(oldp+196,((((0x8000000U & 
                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U])
                                      ? 1U : 0U) ? 
                                    (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xbU] 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xbU], 4U))
                                     : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xbU] 
                                        + VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xbU], 4U)))),32);
        tracep->chgIData(oldp+197,((((0x8000000U & 
                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U])
                                      ? 1U : 0U) ? 
                                    (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xbU] 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xbU], 4U))
                                     : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xbU] 
                                        + VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xbU], 4U)))),32);
        tracep->chgIData(oldp+198,((0x1fffffU & (((0x8000000U 
                                                   & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U])
                                                   ? 1U
                                                   : 0U)
                                                  ? 
                                                 ((IData)(0x1005U) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                                    << 0x19U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                                      >> 7U)))
                                                  : 
                                                 (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                                    << 0x19U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                                      >> 7U)) 
                                                  - (IData)(0x1005U))))),21);
        tracep->chgIData(oldp+199,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xbU], 4U)),32);
        tracep->chgIData(oldp+200,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xbU], 4U)),32);
        tracep->chgBit(oldp+201,(((0x8000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U])
                                   ? 1U : 0U)));
        tracep->chgIData(oldp+202,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xcU]),32);
        tracep->chgIData(oldp+203,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xcU]),32);
        tracep->chgIData(oldp+204,((0x1fffffU & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
                                                  << 4U) 
                                                 | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                                    >> 0x1cU)))),21);
        tracep->chgBit(oldp+205,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                        >> 0xcU))));
        tracep->chgIData(oldp+206,((((0x10000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U])
                                      ? 1U : 0U) ? 
                                    (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xcU] 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xcU], 5U))
                                     : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xcU] 
                                        + VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xcU], 5U)))),32);
        tracep->chgIData(oldp+207,((((0x10000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U])
                                      ? 1U : 0U) ? 
                                    (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xcU] 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xcU], 5U))
                                     : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xcU] 
                                        + VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xcU], 5U)))),32);
        tracep->chgIData(oldp+208,((0x1fffffU & (((0x10000U 
                                                   & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U])
                                                   ? 1U
                                                   : 0U)
                                                  ? 
                                                 ((IData)(0x800U) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
                                                    << 4U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                                      >> 0x1cU)))
                                                  : 
                                                 (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
                                                    << 4U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                                      >> 0x1cU)) 
                                                  - (IData)(0x800U))))),21);
        tracep->chgIData(oldp+209,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xcU], 5U)),32);
        tracep->chgIData(oldp+210,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xcU], 5U)),32);
        tracep->chgBit(oldp+211,(((0x10000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U])
                                   ? 1U : 0U)));
        tracep->chgIData(oldp+212,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xdU]),32);
        tracep->chgIData(oldp+213,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xdU]),32);
        tracep->chgIData(oldp+214,((0x1fffffU & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                                  << 0xfU) 
                                                 | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
                                                    >> 0x11U)))),21);
        tracep->chgBit(oldp+215,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                        >> 0xdU))));
        tracep->chgIData(oldp+216,((((0x20U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U])
                                      ? 1U : 0U) ? 
                                    (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xdU] 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xdU], 6U))
                                     : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xdU] 
                                        + VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xdU], 6U)))),32);
        tracep->chgIData(oldp+217,((((0x20U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U])
                                      ? 1U : 0U) ? 
                                    (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xdU] 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xdU], 6U))
                                     : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xdU] 
                                        + VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xdU], 6U)))),32);
        tracep->chgIData(oldp+218,((0x1fffffU & (((0x20U 
                                                   & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U])
                                                   ? 1U
                                                   : 0U)
                                                  ? 
                                                 ((IData)(0x400U) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                                    << 0xfU) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
                                                      >> 0x11U)))
                                                  : 
                                                 (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                                    << 0xfU) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
                                                      >> 0x11U)) 
                                                  - (IData)(0x400U))))),21);
        tracep->chgIData(oldp+219,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xdU], 6U)),32);
        tracep->chgIData(oldp+220,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xdU], 6U)),32);
        tracep->chgBit(oldp+221,(((0x20U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U])
                                   ? 1U : 0U)));
        tracep->chgIData(oldp+222,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xeU]),32);
        tracep->chgIData(oldp+223,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xeU]),32);
        tracep->chgIData(oldp+224,((0x1fffffU & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                                 >> 6U))),21);
        tracep->chgBit(oldp+225,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                        >> 0xeU))));
        tracep->chgIData(oldp+226,((((0x4000000U & 
                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U])
                                      ? 1U : 0U) ? 
                                    (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xeU] 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xeU], 7U))
                                     : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xeU] 
                                        + VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xeU], 7U)))),32);
        tracep->chgIData(oldp+227,((((0x4000000U & 
                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U])
                                      ? 1U : 0U) ? 
                                    (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xeU] 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xeU], 7U))
                                     : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xeU] 
                                        + VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xeU], 7U)))),32);
        tracep->chgIData(oldp+228,((0x1fffffU & (((0x4000000U 
                                                   & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U])
                                                   ? 1U
                                                   : 0U)
                                                  ? 
                                                 ((IData)(0x200U) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                                    << 0x1aU) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                                      >> 6U)))
                                                  : 
                                                 (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                                    << 0x1aU) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                                      >> 6U)) 
                                                  - (IData)(0x200U))))),21);
        tracep->chgIData(oldp+229,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xeU], 7U)),32);
        tracep->chgIData(oldp+230,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xeU], 7U)),32);
        tracep->chgBit(oldp+231,(((0x4000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U])
                                   ? 1U : 0U)));
        tracep->chgIData(oldp+232,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xfU]),32);
        tracep->chgIData(oldp+233,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xfU]),32);
        tracep->chgIData(oldp+234,((0x1fffffU & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU] 
                                                  << 5U) 
                                                 | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                                    >> 0x1bU)))),21);
        tracep->chgBit(oldp+235,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                        >> 0xfU))));
        tracep->chgIData(oldp+236,((((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU])
                                      ? 1U : 0U) ? 
                                    (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xfU] 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xfU], 8U))
                                     : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xfU] 
                                        + VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xfU], 8U)))),32);
        tracep->chgIData(oldp+237,((((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU])
                                      ? 1U : 0U) ? 
                                    (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xfU] 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xfU], 8U))
                                     : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xfU] 
                                        + VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xfU], 8U)))),32);
        tracep->chgIData(oldp+238,((0x1fffffU & (((0x8000U 
                                                   & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU])
                                                   ? 1U
                                                   : 0U)
                                                  ? 
                                                 ((IData)(0x100U) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU] 
                                                    << 5U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                                      >> 0x1bU)))
                                                  : 
                                                 (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU] 
                                                    << 5U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                                      >> 0x1bU)) 
                                                  - (IData)(0x100U))))),21);
        tracep->chgIData(oldp+239,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xfU], 8U)),32);
        tracep->chgIData(oldp+240,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xfU], 8U)),32);
        tracep->chgBit(oldp+241,(((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU])
                                   ? 1U : 0U)));
        tracep->chgIData(oldp+242,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x10U]),32);
        tracep->chgIData(oldp+243,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x10U]),32);
        tracep->chgIData(oldp+244,((0x1fffffU & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                  << 0x10U) 
                                                 | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU] 
                                                    >> 0x10U)))),21);
        tracep->chgBit(oldp+245,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                        >> 0x10U))));
        tracep->chgIData(oldp+246,((((0x10U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU])
                                      ? 1U : 0U) ? 
                                    (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x10U] 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x10U], 9U))
                                     : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x10U] 
                                        + VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x10U], 9U)))),32);
        tracep->chgIData(oldp+247,((((0x10U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU])
                                      ? 1U : 0U) ? 
                                    (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x10U] 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x10U], 9U))
                                     : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x10U] 
                                        + VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x10U], 9U)))),32);
        tracep->chgIData(oldp+248,((0x1fffffU & (((0x10U 
                                                   & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU])
                                                   ? 1U
                                                   : 0U)
                                                  ? 
                                                 ((IData)(0x80U) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                    << 0x10U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU] 
                                                      >> 0x10U)))
                                                  : 
                                                 (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                    << 0x10U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU] 
                                                      >> 0x10U)) 
                                                  - (IData)(0x80U))))),21);
        tracep->chgIData(oldp+249,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x10U], 9U)),32);
        tracep->chgIData(oldp+250,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x10U], 9U)),32);
        tracep->chgBit(oldp+251,(((0x10U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU])
                                   ? 1U : 0U)));
        tracep->chgIData(oldp+252,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x11U]),32);
        tracep->chgIData(oldp+253,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x11U]),32);
        tracep->chgIData(oldp+254,((0x1fffffU & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                 >> 5U))),21);
        tracep->chgBit(oldp+255,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                        >> 0x11U))));
        tracep->chgIData(oldp+256,((((0x2000000U & 
                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU])
                                      ? 1U : 0U) ? 
                                    (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x11U] 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x11U], 0xaU))
                                     : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x11U] 
                                        + VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x11U], 0xaU)))),32);
        tracep->chgIData(oldp+257,((((0x2000000U & 
                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU])
                                      ? 1U : 0U) ? 
                                    (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x11U] 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x11U], 0xaU))
                                     : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x11U] 
                                        + VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x11U], 0xaU)))),32);
        tracep->chgIData(oldp+258,((0x1fffffU & (((0x2000000U 
                                                   & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU])
                                                   ? 1U
                                                   : 0U)
                                                  ? 
                                                 ((IData)(0x40U) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                      >> 5U)))
                                                  : 
                                                 (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                      >> 5U)) 
                                                  - (IData)(0x40U))))),21);
        tracep->chgIData(oldp+259,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x11U], 0xaU)),32);
        tracep->chgIData(oldp+260,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x11U], 0xaU)),32);
        tracep->chgBit(oldp+261,(((0x2000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU])
                                   ? 1U : 0U)));
        tracep->chgIData(oldp+262,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U]),32);
        tracep->chgIData(oldp+263,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U]),32);
        tracep->chgIData(oldp+264,((0x1fffffU & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                  << 6U) 
                                                 | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                    >> 0x1aU)))),21);
        tracep->chgBit(oldp+265,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                        >> 0x12U))));
        tracep->chgIData(oldp+266,((((0x4000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU])
                                      ? 1U : 0U) ? 
                                    (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U] 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U], 0xbU))
                                     : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U] 
                                        + VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U], 0xbU)))),32);
        tracep->chgIData(oldp+267,((((0x4000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU])
                                      ? 1U : 0U) ? 
                                    (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U] 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U], 0xbU))
                                     : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U] 
                                        + VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U], 0xbU)))),32);
        tracep->chgIData(oldp+268,((0x1fffffU & (((0x4000U 
                                                   & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU])
                                                   ? 1U
                                                   : 0U)
                                                  ? 
                                                 ((IData)(0x20U) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                    << 6U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                      >> 0x1aU)))
                                                  : 
                                                 (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                    << 6U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                      >> 0x1aU)) 
                                                  - (IData)(0x20U))))),21);
        tracep->chgIData(oldp+269,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U], 0xbU)),32);
        tracep->chgIData(oldp+270,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U], 0xbU)),32);
        tracep->chgBit(oldp+271,(((0x4000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU])
                                   ? 1U : 0U)));
        tracep->chgIData(oldp+272,((((0x4000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU])
                                      ? 1U : 0U) ? 
                                    (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U] 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U], 0xcU))
                                     : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U] 
                                        + VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U], 0xcU)))),32);
        tracep->chgIData(oldp+273,((((0x4000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU])
                                      ? 1U : 0U) ? 
                                    (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U] 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U], 0xcU))
                                     : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U] 
                                        + VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U], 0xcU)))),32);
        tracep->chgIData(oldp+274,((0x1fffffU & (((0x4000U 
                                                   & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU])
                                                   ? 1U
                                                   : 0U)
                                                  ? 
                                                 ((IData)(0x10U) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                    << 6U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                      >> 0x1aU)))
                                                  : 
                                                 (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                    << 6U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                      >> 0x1aU)) 
                                                  - (IData)(0x10U))))),21);
        tracep->chgIData(oldp+275,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U], 0xcU)),32);
        tracep->chgIData(oldp+276,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U], 0xcU)),32);
        tracep->chgIData(oldp+277,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x13U]),32);
        tracep->chgIData(oldp+278,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x13U]),32);
        tracep->chgIData(oldp+279,((0x1fffffU & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xdU] 
                                                  << 0x11U) 
                                                 | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                    >> 0xfU)))),21);
        tracep->chgBit(oldp+280,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                        >> 0x13U))));
        tracep->chgIData(oldp+281,((((8U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xdU])
                                      ? 1U : 0U) ? 
                                    (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x13U] 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x13U], 0xcU))
                                     : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x13U] 
                                        + VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x13U], 0xcU)))),32);
        tracep->chgIData(oldp+282,((((8U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xdU])
                                      ? 1U : 0U) ? 
                                    (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x13U] 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x13U], 0xcU))
                                     : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x13U] 
                                        + VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x13U], 0xcU)))),32);
        tracep->chgIData(oldp+283,((0x1fffffU & (((8U 
                                                   & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xdU])
                                                   ? 1U
                                                   : 0U)
                                                  ? 
                                                 ((IData)(0x10U) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xdU] 
                                                    << 0x11U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                      >> 0xfU)))
                                                  : 
                                                 (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xdU] 
                                                    << 0x11U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                      >> 0xfU)) 
                                                  - (IData)(0x10U))))),21);
        tracep->chgIData(oldp+284,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x13U], 0xcU)),32);
        tracep->chgIData(oldp+285,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x13U], 0xcU)),32);
        tracep->chgBit(oldp+286,(((8U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xdU])
                                   ? 1U : 0U)));
        tracep->chgIData(oldp+287,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[7U]),32);
        tracep->chgIData(oldp+288,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[7U]),32);
        tracep->chgIData(oldp+289,((0x1fffffU & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                                  << 0xdU) 
                                                 | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                                                    >> 0x13U)))),21);
        tracep->chgBit(oldp+290,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                        >> 7U))));
        tracep->chgIData(oldp+291,((((0x80U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U])
                                      ? 1U : 0U) ? 
                                    (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[7U] 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[7U], 1U))
                                     : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[7U] 
                                        + VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[7U], 1U)))),32);
        tracep->chgIData(oldp+292,((((0x80U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U])
                                      ? 1U : 0U) ? 
                                    (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[7U] 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[7U], 1U))
                                     : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[7U] 
                                        + VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[7U], 1U)))),32);
        tracep->chgIData(oldp+293,((0x1fffffU & (((0x80U 
                                                   & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U])
                                                   ? 1U
                                                   : 0U)
                                                  ? 
                                                 ((IData)(0x8c9fU) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                                    << 0xdU) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                                                      >> 0x13U)))
                                                  : 
                                                 (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                                    << 0xdU) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                                                      >> 0x13U)) 
                                                  - (IData)(0x8c9fU))))),21);
        tracep->chgIData(oldp+294,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[7U], 1U)),32);
        tracep->chgIData(oldp+295,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[7U], 1U)),32);
        tracep->chgBit(oldp+296,(((0x80U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U])
                                   ? 1U : 0U)));
        tracep->chgIData(oldp+297,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[8U]),32);
        tracep->chgIData(oldp+298,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[8U]),32);
        tracep->chgIData(oldp+299,((0x1fffffU & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                                 >> 8U))),21);
        tracep->chgBit(oldp+300,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                        >> 8U))));
        tracep->chgIData(oldp+301,((((0x10000000U & 
                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U])
                                      ? 1U : 0U) ? 
                                    (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[8U] 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[8U], 2U))
                                     : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[8U] 
                                        + VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[8U], 2U)))),32);
        tracep->chgIData(oldp+302,((((0x10000000U & 
                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U])
                                      ? 1U : 0U) ? 
                                    (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[8U] 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[8U], 2U))
                                     : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[8U] 
                                        + VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[8U], 2U)))),32);
        tracep->chgIData(oldp+303,((0x1fffffU & (((0x10000000U 
                                                   & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U])
                                                   ? 1U
                                                   : 0U)
                                                  ? 
                                                 ((IData)(0x4162U) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                                    << 0x18U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                                      >> 8U)))
                                                  : 
                                                 (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                                    << 0x18U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                                      >> 8U)) 
                                                  - (IData)(0x4162U))))),21);
        tracep->chgIData(oldp+304,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[8U], 2U)),32);
        tracep->chgIData(oldp+305,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[8U], 2U)),32);
        tracep->chgBit(oldp+306,(((0x10000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U])
                                   ? 1U : 0U)));
        tracep->chgIData(oldp+307,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[9U]),32);
        tracep->chgIData(oldp+308,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[9U]),32);
        tracep->chgIData(oldp+309,((0x1fffffU & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                                                  << 3U) 
                                                 | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                                    >> 0x1dU)))),21);
        tracep->chgBit(oldp+310,((1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                                        >> 9U))));
        tracep->chgIData(oldp+311,((((0x20000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U])
                                      ? 1U : 0U) ? 
                                    (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[9U] 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[9U], 3U))
                                     : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[9U] 
                                        + VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[9U], 3U)))),32);
        tracep->chgIData(oldp+312,((((0x20000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U])
                                      ? 1U : 0U) ? 
                                    (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[9U] 
                                     - VL_SHIFTRS_III(32,32,32, 
                                                      vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[9U], 3U))
                                     : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[9U] 
                                        + VL_SHIFTRS_III(32,32,32, 
                                                         vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[9U], 3U)))),32);
        tracep->chgIData(oldp+313,((0x1fffffU & (((0x20000U 
                                                   & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U])
                                                   ? 1U
                                                   : 0U)
                                                  ? 
                                                 ((IData)(0x202bU) 
                                                  + 
                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                                                    << 3U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                                      >> 0x1dU)))
                                                  : 
                                                 (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                                                    << 3U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                                      >> 0x1dU)) 
                                                  - (IData)(0x202bU))))),21);
        tracep->chgIData(oldp+314,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[9U], 3U)),32);
        tracep->chgIData(oldp+315,(VL_SHIFTRS_III(32,32,32, 
                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[9U], 3U)),32);
        tracep->chgBit(oldp+316,(((0x20000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U])
                                   ? 1U : 0U)));
    }
    tracep->chgBit(oldp+317,(vlSelf->clk_i));
    tracep->chgIData(oldp+318,(vlSelf->ang_i),21);
    tracep->chgBit(oldp+319,(vlSelf->ready_i));
    tracep->chgBit(oldp+320,(vlSelf->val_i));
    tracep->chgIData(oldp+321,(vlSelf->sinh_o),32);
    tracep->chgIData(oldp+322,(vlSelf->cosh_o),32);
    tracep->chgBit(oldp+323,(vlSelf->ready_o));
    tracep->chgBit(oldp+324,(vlSelf->val_o));
    tracep->chgBit(oldp+325,(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__stall_pipe));
}

void Vbsg_cordic_sine_cosine_hyperbolic___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_cordic_sine_cosine_hyperbolic___024root__trace_cleanup\n"); );
    // Init
    Vbsg_cordic_sine_cosine_hyperbolic___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbsg_cordic_sine_cosine_hyperbolic___024root*>(voidSelf);
    Vbsg_cordic_sine_cosine_hyperbolic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
