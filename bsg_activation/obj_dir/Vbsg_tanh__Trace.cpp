// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbsg_tanh__Syms.h"


void Vbsg_tanh::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vbsg_tanh__Syms* __restrict vlSymsp = static_cast<Vbsg_tanh__Syms*>(userp);
    Vbsg_tanh* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vbsg_tanh::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vbsg_tanh__Syms* __restrict vlSymsp = static_cast<Vbsg_tanh__Syms*>(userp);
    Vbsg_tanh* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x14U]),32);
            tracep->chgIData(oldp+1,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x14U]),32);
            tracep->chgIData(oldp+2,(vlTOPp->bsg_tanh__DOT__tanh_r),32);
            tracep->chgIData(oldp+3,((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r)),32);
            tracep->chgBit(oldp+4,((1U & (~ (IData)(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__stall_pipe)))));
            tracep->chgBit(oldp+5,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                          >> 0x14U))));
            tracep->chgBit(oldp+6,((0U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))));
            tracep->chgBit(oldp+7,((8U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))));
            tracep->chgCData(oldp+8,(vlTOPp->bsg_tanh__DOT__state_r),2);
            tracep->chgQData(oldp+9,((0xffffffffffffULL 
                                      & ((QData)((IData)(
                                                         vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x14U])) 
                                         << 0x10U))),48);
            tracep->chgQData(oldp+11,((0xffffffffffffULL 
                                       & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r)),48);
            tracep->chgQData(oldp+13,((0xffffffffffffULL 
                                       & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r)),48);
            tracep->chgBit(oldp+15,(((0U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                                     & (0U == (IData)(vlTOPp->bsg_tanh__DOT__state_r)))));
            tracep->chgWData(oldp+16,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x),672);
            tracep->chgWData(oldp+37,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y),672);
            tracep->chgWData(oldp+58,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang),441);
            tracep->chgIData(oldp+72,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val),21);
            tracep->chgWData(oldp+73,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans),640);
            tracep->chgWData(oldp+93,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans),640);
            tracep->chgWData(oldp+113,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans),420);
            tracep->chgIData(oldp+127,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans),20);
            tracep->chgBit(oldp+128,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__stall_pipe));
            tracep->chgIData(oldp+129,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0U]),32);
            tracep->chgIData(oldp+130,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0U]),32);
            tracep->chgIData(oldp+131,((0x1fffffU & 
                                        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])),21);
            tracep->chgBit(oldp+132,((1U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val)));
            tracep->chgIData(oldp+133,((((0x100000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                                          ? 1U : 0U)
                                         ? ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0U] 
                                             - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0U]) 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0U], 8U))
                                         : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0U] 
                                             + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0U]) 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0U], 8U)))),32);
            tracep->chgIData(oldp+134,((((0x100000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                                          ? 1U : 0U)
                                         ? ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0U] 
                                             - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0U]) 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0U], 8U))
                                         : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0U] 
                                             + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0U]) 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0U], 8U)))),32);
            tracep->chgIData(oldp+135,((0x1fffffU & 
                                        (((0x100000U 
                                           & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                                           ? 1U : 0U)
                                          ? ((IData)(0x31e41U) 
                                             + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                                          : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                             - (IData)(0x31e41U))))),21);
            tracep->chgIData(oldp+136,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0U], 8U)),32);
            tracep->chgIData(oldp+137,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0U], 8U)),32);
            tracep->chgBit(oldp+138,(((0x100000U & 
                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+139,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[1U]),32);
            tracep->chgIData(oldp+140,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[1U]),32);
            tracep->chgIData(oldp+141,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                          << 0xbU) 
                                         | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                            >> 0x15U)))),21);
            tracep->chgBit(oldp+142,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 1U))));
            tracep->chgIData(oldp+143,((((0x200U & 
                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                          ? 1U : 0U)
                                         ? ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[1U] 
                                             - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[1U]) 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[1U], 7U))
                                         : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[1U] 
                                             + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[1U]) 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[1U], 7U)))),32);
            tracep->chgIData(oldp+144,((((0x200U & 
                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                          ? 1U : 0U)
                                         ? ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[1U] 
                                             - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[1U]) 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[1U], 7U))
                                         : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[1U] 
                                             + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[1U]) 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[1U], 7U)))),32);
            tracep->chgIData(oldp+145,((0x1fffffU & 
                                        (((0x200U & 
                                           vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                           ? 1U : 0U)
                                          ? ((IData)(0x2c548U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                 << 0xbU) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                                   >> 0x15U)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                               << 0xbU) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                                 >> 0x15U)) 
                                             - (IData)(0x2c548U))))),21);
            tracep->chgIData(oldp+146,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[1U], 7U)),32);
            tracep->chgIData(oldp+147,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[1U], 7U)),32);
            tracep->chgBit(oldp+148,(((0x200U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+149,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[2U]),32);
            tracep->chgIData(oldp+150,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[2U]),32);
            tracep->chgIData(oldp+151,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                          << 0x16U) 
                                         | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                            >> 0xaU)))),21);
            tracep->chgBit(oldp+152,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 2U))));
            tracep->chgIData(oldp+153,((((0x40000000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                          ? 1U : 0U)
                                         ? ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[2U] 
                                             - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[2U]) 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[2U], 6U))
                                         : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[2U] 
                                             + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[2U]) 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[2U], 6U)))),32);
            tracep->chgIData(oldp+154,((((0x40000000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                          ? 1U : 0U)
                                         ? ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[2U] 
                                             - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[2U]) 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[2U], 6U))
                                         : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[2U] 
                                             + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[2U]) 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[2U], 6U)))),32);
            tracep->chgIData(oldp+155,((0x1fffffU & 
                                        (((0x40000000U 
                                           & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                           ? 1U : 0U)
                                          ? ((IData)(0x26c0eU) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                 << 0x16U) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                   >> 0xaU)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                               << 0x16U) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                 >> 0xaU)) 
                                             - (IData)(0x26c0eU))))),21);
            tracep->chgIData(oldp+156,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[2U], 6U)),32);
            tracep->chgIData(oldp+157,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[2U], 6U)),32);
            tracep->chgBit(oldp+158,(((0x40000000U 
                                       & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+159,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[3U]),32);
            tracep->chgIData(oldp+160,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[3U]),32);
            tracep->chgIData(oldp+161,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                          << 1U) | 
                                         (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                          >> 0x1fU)))),21);
            tracep->chgBit(oldp+162,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 3U))));
            tracep->chgIData(oldp+163,((((0x80000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U])
                                          ? 1U : 0U)
                                         ? ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[3U] 
                                             - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[3U]) 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[3U], 5U))
                                         : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[3U] 
                                             + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[3U]) 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[3U], 5U)))),32);
            tracep->chgIData(oldp+164,((((0x80000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U])
                                          ? 1U : 0U)
                                         ? ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[3U] 
                                             - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[3U]) 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[3U], 5U))
                                         : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[3U] 
                                             + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[3U]) 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[3U], 5U)))),32);
            tracep->chgIData(oldp+165,((0x1fffffU & 
                                        (((0x80000U 
                                           & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U])
                                           ? 1U : 0U)
                                          ? ((IData)(0x21252U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                 << 1U) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                   >> 0x1fU)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                               << 1U) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                 >> 0x1fU)) 
                                             - (IData)(0x21252U))))),21);
            tracep->chgIData(oldp+166,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[3U], 5U)),32);
            tracep->chgIData(oldp+167,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[3U], 5U)),32);
            tracep->chgBit(oldp+168,(((0x80000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+169,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[4U]),32);
            tracep->chgIData(oldp+170,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[4U]),32);
            tracep->chgIData(oldp+171,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                          << 0xcU) 
                                         | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                            >> 0x14U)))),21);
            tracep->chgBit(oldp+172,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 4U))));
            tracep->chgIData(oldp+173,((((0x100U & 
                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                          ? 1U : 0U)
                                         ? ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[4U] 
                                             - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[4U]) 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[4U], 4U))
                                         : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[4U] 
                                             + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[4U]) 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[4U], 4U)))),32);
            tracep->chgIData(oldp+174,((((0x100U & 
                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                          ? 1U : 0U)
                                         ? ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[4U] 
                                             - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[4U]) 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[4U], 4U))
                                         : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[4U] 
                                             + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[4U]) 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[4U], 4U)))),32);
            tracep->chgIData(oldp+175,((0x1fffffU & 
                                        (((0x100U & 
                                           vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                           ? 1U : 0U)
                                          ? ((IData)(0x1b78cU) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                 << 0xcU) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                   >> 0x14U)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                               << 0xcU) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                 >> 0x14U)) 
                                             - (IData)(0x1b78cU))))),21);
            tracep->chgIData(oldp+176,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[4U], 4U)),32);
            tracep->chgIData(oldp+177,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[4U], 4U)),32);
            tracep->chgBit(oldp+178,(((0x100U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+179,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[5U]),32);
            tracep->chgIData(oldp+180,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[5U]),32);
            tracep->chgIData(oldp+181,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                          << 0x17U) 
                                         | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                            >> 9U)))),21);
            tracep->chgBit(oldp+182,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 5U))));
            tracep->chgIData(oldp+183,((((0x20000000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                          ? 1U : 0U)
                                         ? ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[5U] 
                                             - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[5U]) 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[5U], 3U))
                                         : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[5U] 
                                             + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[5U]) 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[5U], 3U)))),32);
            tracep->chgIData(oldp+184,((((0x20000000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                          ? 1U : 0U)
                                         ? ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[5U] 
                                             - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[5U]) 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[5U], 3U))
                                         : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[5U] 
                                             + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[5U]) 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[5U], 3U)))),32);
            tracep->chgIData(oldp+185,((0x1fffffU & 
                                        (((0x20000000U 
                                           & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                           ? 1U : 0U)
                                          ? ((IData)(0x15aa1U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                 << 0x17U) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                   >> 9U)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                               << 0x17U) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                 >> 9U)) 
                                             - (IData)(0x15aa1U))))),21);
            tracep->chgIData(oldp+186,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[5U], 3U)),32);
            tracep->chgIData(oldp+187,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[5U], 3U)),32);
            tracep->chgBit(oldp+188,(((0x20000000U 
                                       & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+189,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[6U]),32);
            tracep->chgIData(oldp+190,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[6U]),32);
            tracep->chgIData(oldp+191,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                          << 2U) | 
                                         (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                          >> 0x1eU)))),21);
            tracep->chgBit(oldp+192,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 6U))));
            tracep->chgIData(oldp+193,((((0x40000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U])
                                          ? 1U : 0U)
                                         ? ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[6U] 
                                             - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[6U]) 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[6U], 2U))
                                         : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[6U] 
                                             + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[6U]) 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[6U], 2U)))),32);
            tracep->chgIData(oldp+194,((((0x40000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U])
                                          ? 1U : 0U)
                                         ? ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[6U] 
                                             - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[6U]) 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[6U], 2U))
                                         : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[6U] 
                                             + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[6U]) 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[6U], 2U)))),32);
            tracep->chgIData(oldp+195,((0x1fffffU & 
                                        (((0x40000U 
                                           & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U])
                                           ? 1U : 0U)
                                          ? ((IData)(0xf913U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                 << 2U) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                   >> 0x1eU)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                               << 2U) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                 >> 0x1eU)) 
                                             - (IData)(0xf913U))))),21);
            tracep->chgIData(oldp+196,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[6U], 2U)),32);
            tracep->chgIData(oldp+197,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[6U], 2U)),32);
            tracep->chgBit(oldp+198,(((0x40000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+199,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[7U]),32);
            tracep->chgIData(oldp+200,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[7U]),32);
            tracep->chgIData(oldp+201,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                          << 0xdU) 
                                         | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                            >> 0x13U)))),21);
            tracep->chgBit(oldp+202,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 7U))));
            tracep->chgIData(oldp+203,((((0x80U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[7U] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[7U], 1U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[7U] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[7U], 1U)))),32);
            tracep->chgIData(oldp+204,((((0x80U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[7U] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[7U], 1U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[7U] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[7U], 1U)))),32);
            tracep->chgIData(oldp+205,((0x1fffffU & 
                                        (((0x80U & 
                                           vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                           ? 1U : 0U)
                                          ? ((IData)(0x8c9fU) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                 << 0xdU) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                   >> 0x13U)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                               << 0xdU) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                 >> 0x13U)) 
                                             - (IData)(0x8c9fU))))),21);
            tracep->chgIData(oldp+206,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[7U], 1U)),32);
            tracep->chgIData(oldp+207,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[7U], 1U)),32);
            tracep->chgBit(oldp+208,(((0x80U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+209,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[8U]),32);
            tracep->chgIData(oldp+210,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[8U]),32);
            tracep->chgIData(oldp+211,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                          << 0x18U) 
                                         | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                            >> 8U)))),21);
            tracep->chgBit(oldp+212,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 8U))));
            tracep->chgIData(oldp+213,((((0x10000000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[8U] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[8U], 2U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[8U] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[8U], 2U)))),32);
            tracep->chgIData(oldp+214,((((0x10000000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[8U] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[8U], 2U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[8U] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[8U], 2U)))),32);
            tracep->chgIData(oldp+215,((0x1fffffU & 
                                        (((0x10000000U 
                                           & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                           ? 1U : 0U)
                                          ? ((IData)(0x4162U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                 << 0x18U) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                   >> 8U)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                               << 0x18U) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                 >> 8U)) 
                                             - (IData)(0x4162U))))),21);
            tracep->chgIData(oldp+216,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[8U], 2U)),32);
            tracep->chgIData(oldp+217,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[8U], 2U)),32);
            tracep->chgBit(oldp+218,(((0x10000000U 
                                       & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+219,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[9U]),32);
            tracep->chgIData(oldp+220,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[9U]),32);
            tracep->chgIData(oldp+221,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                          << 3U) | 
                                         (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                          >> 0x1dU)))),21);
            tracep->chgBit(oldp+222,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 9U))));
            tracep->chgIData(oldp+223,((((0x20000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[9U] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[9U], 3U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[9U] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[9U], 3U)))),32);
            tracep->chgIData(oldp+224,((((0x20000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[9U] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[9U], 3U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[9U] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[9U], 3U)))),32);
            tracep->chgIData(oldp+225,((0x1fffffU & 
                                        (((0x20000U 
                                           & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U])
                                           ? 1U : 0U)
                                          ? ((IData)(0x202bU) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                 << 3U) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                   >> 0x1dU)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                               << 3U) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                 >> 0x1dU)) 
                                             - (IData)(0x202bU))))),21);
            tracep->chgIData(oldp+226,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[9U], 3U)),32);
            tracep->chgIData(oldp+227,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[9U], 3U)),32);
            tracep->chgBit(oldp+228,(((0x20000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+229,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU]),32);
            tracep->chgIData(oldp+230,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU]),32);
            tracep->chgIData(oldp+231,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                          << 0xeU) 
                                         | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                            >> 0x12U)))),21);
            tracep->chgBit(oldp+232,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 0xaU))));
            tracep->chgIData(oldp+233,((((0x40U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU], 4U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU], 4U)))),32);
            tracep->chgIData(oldp+234,((((0x40U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU], 4U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU], 4U)))),32);
            tracep->chgIData(oldp+235,((0x1fffffU & 
                                        (((0x40U & 
                                           vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                           ? 1U : 0U)
                                          ? ((IData)(0x1005U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                 << 0xeU) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                   >> 0x12U)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                               << 0xeU) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                 >> 0x12U)) 
                                             - (IData)(0x1005U))))),21);
            tracep->chgIData(oldp+236,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU], 4U)),32);
            tracep->chgIData(oldp+237,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU], 4U)),32);
            tracep->chgBit(oldp+238,(((0x40U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+239,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU]),32);
            tracep->chgIData(oldp+240,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU]),32);
            tracep->chgIData(oldp+241,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                          << 0x19U) 
                                         | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                            >> 7U)))),21);
            tracep->chgBit(oldp+242,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 0xbU))));
            tracep->chgIData(oldp+243,((((0x8000000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU], 4U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU], 4U)))),32);
            tracep->chgIData(oldp+244,((((0x8000000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU], 4U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU], 4U)))),32);
            tracep->chgIData(oldp+245,((0x1fffffU & 
                                        (((0x8000000U 
                                           & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                           ? 1U : 0U)
                                          ? ((IData)(0x1005U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                 << 0x19U) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                   >> 7U)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                               << 0x19U) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                 >> 7U)) 
                                             - (IData)(0x1005U))))),21);
            tracep->chgIData(oldp+246,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU], 4U)),32);
            tracep->chgIData(oldp+247,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU], 4U)),32);
            tracep->chgBit(oldp+248,(((0x8000000U & 
                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+249,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU]),32);
            tracep->chgIData(oldp+250,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU]),32);
            tracep->chgIData(oldp+251,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                          << 4U) | 
                                         (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                          >> 0x1cU)))),21);
            tracep->chgBit(oldp+252,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 0xcU))));
            tracep->chgIData(oldp+253,((((0x10000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU], 5U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU], 5U)))),32);
            tracep->chgIData(oldp+254,((((0x10000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU], 5U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU], 5U)))),32);
            tracep->chgIData(oldp+255,((0x1fffffU & 
                                        (((0x10000U 
                                           & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U])
                                           ? 1U : 0U)
                                          ? ((IData)(0x800U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                 << 4U) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                   >> 0x1cU)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                               << 4U) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                 >> 0x1cU)) 
                                             - (IData)(0x800U))))),21);
            tracep->chgIData(oldp+256,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU], 5U)),32);
            tracep->chgIData(oldp+257,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU], 5U)),32);
            tracep->chgBit(oldp+258,(((0x10000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+259,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU]),32);
            tracep->chgIData(oldp+260,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU]),32);
            tracep->chgIData(oldp+261,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                          << 0xfU) 
                                         | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                            >> 0x11U)))),21);
            tracep->chgBit(oldp+262,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 0xdU))));
            tracep->chgIData(oldp+263,((((0x20U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU], 6U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU], 6U)))),32);
            tracep->chgIData(oldp+264,((((0x20U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU], 6U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU], 6U)))),32);
            tracep->chgIData(oldp+265,((0x1fffffU & 
                                        (((0x20U & 
                                           vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                           ? 1U : 0U)
                                          ? ((IData)(0x400U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                 << 0xfU) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                   >> 0x11U)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                               << 0xfU) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                 >> 0x11U)) 
                                             - (IData)(0x400U))))),21);
            tracep->chgIData(oldp+266,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU], 6U)),32);
            tracep->chgIData(oldp+267,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU], 6U)),32);
            tracep->chgBit(oldp+268,(((0x20U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+269,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU]),32);
            tracep->chgIData(oldp+270,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU]),32);
            tracep->chgIData(oldp+271,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                          << 0x1aU) 
                                         | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                            >> 6U)))),21);
            tracep->chgBit(oldp+272,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 0xeU))));
            tracep->chgIData(oldp+273,((((0x4000000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU], 7U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU], 7U)))),32);
            tracep->chgIData(oldp+274,((((0x4000000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU], 7U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU], 7U)))),32);
            tracep->chgIData(oldp+275,((0x1fffffU & 
                                        (((0x4000000U 
                                           & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                           ? 1U : 0U)
                                          ? ((IData)(0x200U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                 << 0x1aU) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                   >> 6U)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                               << 0x1aU) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                 >> 6U)) 
                                             - (IData)(0x200U))))),21);
            tracep->chgIData(oldp+276,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU], 7U)),32);
            tracep->chgIData(oldp+277,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU], 7U)),32);
            tracep->chgBit(oldp+278,(((0x4000000U & 
                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+279,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU]),32);
            tracep->chgIData(oldp+280,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU]),32);
            tracep->chgIData(oldp+281,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                          << 5U) | 
                                         (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                          >> 0x1bU)))),21);
            tracep->chgBit(oldp+282,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 0xfU))));
            tracep->chgIData(oldp+283,((((0x8000U & 
                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU], 8U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU], 8U)))),32);
            tracep->chgIData(oldp+284,((((0x8000U & 
                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU], 8U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU], 8U)))),32);
            tracep->chgIData(oldp+285,((0x1fffffU & 
                                        (((0x8000U 
                                           & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU])
                                           ? 1U : 0U)
                                          ? ((IData)(0x100U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                 << 5U) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                   >> 0x1bU)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                               << 5U) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                 >> 0x1bU)) 
                                             - (IData)(0x100U))))),21);
            tracep->chgIData(oldp+286,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU], 8U)),32);
            tracep->chgIData(oldp+287,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU], 8U)),32);
            tracep->chgBit(oldp+288,(((0x8000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+289,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U]),32);
            tracep->chgIData(oldp+290,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U]),32);
            tracep->chgIData(oldp+291,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                          << 0x10U) 
                                         | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                            >> 0x10U)))),21);
            tracep->chgBit(oldp+292,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 0x10U))));
            tracep->chgIData(oldp+293,((((0x10U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U], 9U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U], 9U)))),32);
            tracep->chgIData(oldp+294,((((0x10U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U], 9U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U], 9U)))),32);
            tracep->chgIData(oldp+295,((0x1fffffU & 
                                        (((0x10U & 
                                           vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                           ? 1U : 0U)
                                          ? ((IData)(0x80U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                 << 0x10U) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                   >> 0x10U)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                               << 0x10U) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                 >> 0x10U)) 
                                             - (IData)(0x80U))))),21);
            tracep->chgIData(oldp+296,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U], 9U)),32);
            tracep->chgIData(oldp+297,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U], 9U)),32);
            tracep->chgBit(oldp+298,(((0x10U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+299,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U]),32);
            tracep->chgIData(oldp+300,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U]),32);
            tracep->chgIData(oldp+301,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                          << 0x1bU) 
                                         | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                            >> 5U)))),21);
            tracep->chgBit(oldp+302,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 0x11U))));
            tracep->chgIData(oldp+303,((((0x2000000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U], 0xaU))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U], 0xaU)))),32);
            tracep->chgIData(oldp+304,((((0x2000000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U], 0xaU))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U], 0xaU)))),32);
            tracep->chgIData(oldp+305,((0x1fffffU & 
                                        (((0x2000000U 
                                           & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                           ? 1U : 0U)
                                          ? ((IData)(0x40U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                 << 0x1bU) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                   >> 5U)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                               << 0x1bU) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                 >> 5U)) 
                                             - (IData)(0x40U))))),21);
            tracep->chgIData(oldp+306,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U], 0xaU)),32);
            tracep->chgIData(oldp+307,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U], 0xaU)),32);
            tracep->chgBit(oldp+308,(((0x2000000U & 
                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+309,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U]),32);
            tracep->chgIData(oldp+310,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U]),32);
            tracep->chgIData(oldp+311,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                          << 6U) | 
                                         (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                          >> 0x1aU)))),21);
            tracep->chgBit(oldp+312,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 0x12U))));
            tracep->chgIData(oldp+313,((((0x4000U & 
                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xbU))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xbU)))),32);
            tracep->chgIData(oldp+314,((((0x4000U & 
                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xbU))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xbU)))),32);
            tracep->chgIData(oldp+315,((0x1fffffU & 
                                        (((0x4000U 
                                           & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                           ? 1U : 0U)
                                          ? ((IData)(0x20U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                 << 6U) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                   >> 0x1aU)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                               << 6U) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                 >> 0x1aU)) 
                                             - (IData)(0x20U))))),21);
            tracep->chgIData(oldp+316,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xbU)),32);
            tracep->chgIData(oldp+317,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xbU)),32);
            tracep->chgBit(oldp+318,(((0x4000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+319,((((0x4000U & 
                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xcU))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xcU)))),32);
            tracep->chgIData(oldp+320,((((0x4000U & 
                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xcU))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xcU)))),32);
            tracep->chgIData(oldp+321,((0x1fffffU & 
                                        (((0x4000U 
                                           & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                           ? 1U : 0U)
                                          ? ((IData)(0x10U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                 << 6U) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                   >> 0x1aU)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                               << 6U) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                 >> 0x1aU)) 
                                             - (IData)(0x10U))))),21);
            tracep->chgIData(oldp+322,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xcU)),32);
            tracep->chgIData(oldp+323,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xcU)),32);
            tracep->chgIData(oldp+324,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U]),32);
            tracep->chgIData(oldp+325,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U]),32);
            tracep->chgIData(oldp+326,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
                                          << 0x11U) 
                                         | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                            >> 0xfU)))),21);
            tracep->chgBit(oldp+327,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 0x13U))));
            tracep->chgIData(oldp+328,((((8U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U], 0xcU))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U], 0xcU)))),32);
            tracep->chgIData(oldp+329,((((8U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U], 0xcU))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U], 0xcU)))),32);
            tracep->chgIData(oldp+330,((0x1fffffU & 
                                        (((8U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                                           ? 1U : 0U)
                                          ? ((IData)(0x10U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
                                                 << 0x11U) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                   >> 0xfU)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
                                               << 0x11U) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                 >> 0xfU)) 
                                             - (IData)(0x10U))))),21);
            tracep->chgIData(oldp+331,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U], 0xcU)),32);
            tracep->chgIData(oldp+332,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U], 0xcU)),32);
            tracep->chgBit(oldp+333,(((8U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+334,(vlTOPp->bsg_tanh__DOT____Vcellinp__divider__v_i));
            tracep->chgQData(oldp+335,((QData)((IData)(
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x14U]))),48);
            tracep->chgQData(oldp+337,(vlTOPp->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r),49);
            tracep->chgQData(oldp+339,(vlTOPp->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r),49);
            tracep->chgBit(oldp+341,(vlTOPp->bsg_tanh__DOT__divider__DOT__req_reg__DOT__data_r));
            tracep->chgBit(oldp+342,((1U & (IData)(
                                                   ((QData)((IData)(
                                                                    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x14U])) 
                                                    >> 0x2fU)))));
            tracep->chgBit(oldp+343,((1U & (IData)(
                                                   (1ULL 
                                                    & ((QData)((IData)(
                                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x14U])) 
                                                       >> 0x1fU))))));
            tracep->chgBit(oldp+344,(vlTOPp->bsg_tanh__DOT__divider__DOT__latch_signed_div_lo));
            tracep->chgBit(oldp+345,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlTOPp->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r))))));
            tracep->chgCData(oldp+346,(vlTOPp->bsg_tanh__DOT__divider__DOT__opA_sel_lo),2);
            tracep->chgQData(oldp+347,(vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux),49);
            tracep->chgQData(oldp+349,(vlTOPp->bsg_tanh__DOT__divider__DOT__add1_out),49);
            tracep->chgQData(oldp+351,(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux),49);
            tracep->chgQData(oldp+353,(vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux),49);
            tracep->chgCData(oldp+355,(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_sel_lo),3);
            tracep->chgCData(oldp+356,(vlTOPp->bsg_tanh__DOT__divider__DOT__opC_sel_lo),3);
            tracep->chgBit(oldp+357,(vlTOPp->bsg_tanh__DOT__divider__DOT__opA_ld_lo));
            tracep->chgBit(oldp+358,(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_ld_lo));
            tracep->chgQData(oldp+359,(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_reg__DOT__data_r),49);
            tracep->chgBit(oldp+361,(vlTOPp->bsg_tanh__DOT__divider__DOT__opC_ld_lo));
            tracep->chgBit(oldp+362,(vlTOPp->bsg_tanh__DOT__divider__DOT__opA_inv_lo));
            tracep->chgBit(oldp+363,(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_inv_lo));
            tracep->chgBit(oldp+364,(vlTOPp->bsg_tanh__DOT__divider__DOT__opA_clr_lo));
            tracep->chgBit(oldp+365,(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_clr_lo));
            tracep->chgQData(oldp+366,((0x1ffffffffffffULL 
                                        & ((vlTOPp->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r 
                                            ^ (- (QData)((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opA_inv_lo)))) 
                                           & (- (QData)((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opA_clr_lo)))))),49);
            tracep->chgQData(oldp+368,((0x1ffffffffffffULL 
                                        & ((vlTOPp->bsg_tanh__DOT__divider__DOT__opB_reg__DOT__data_r 
                                            ^ (- (QData)((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_inv_lo)))) 
                                           & (- (QData)((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_clr_lo)))))),49);
            tracep->chgBit(oldp+370,(vlTOPp->bsg_tanh__DOT__divider__DOT__adder1_cin_lo));
            tracep->chgWData(oldp+371,(vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i),98);
            tracep->chgWData(oldp+375,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked),98);
            tracep->chgCData(oldp+379,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__0__KET____DOT__gather),2);
            tracep->chgCData(oldp+380,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__1__KET____DOT__gather),2);
            tracep->chgCData(oldp+381,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__2__KET____DOT__gather),2);
            tracep->chgCData(oldp+382,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__3__KET____DOT__gather),2);
            tracep->chgCData(oldp+383,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__4__KET____DOT__gather),2);
            tracep->chgCData(oldp+384,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__5__KET____DOT__gather),2);
            tracep->chgCData(oldp+385,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__6__KET____DOT__gather),2);
            tracep->chgCData(oldp+386,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__7__KET____DOT__gather),2);
            tracep->chgCData(oldp+387,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__8__KET____DOT__gather),2);
            tracep->chgCData(oldp+388,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__9__KET____DOT__gather),2);
            tracep->chgCData(oldp+389,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__10__KET____DOT__gather),2);
            tracep->chgCData(oldp+390,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__11__KET____DOT__gather),2);
            tracep->chgCData(oldp+391,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__12__KET____DOT__gather),2);
            tracep->chgCData(oldp+392,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__13__KET____DOT__gather),2);
            tracep->chgCData(oldp+393,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__14__KET____DOT__gather),2);
            tracep->chgCData(oldp+394,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__15__KET____DOT__gather),2);
            tracep->chgCData(oldp+395,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__16__KET____DOT__gather),2);
            tracep->chgCData(oldp+396,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__17__KET____DOT__gather),2);
            tracep->chgCData(oldp+397,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__18__KET____DOT__gather),2);
            tracep->chgCData(oldp+398,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__19__KET____DOT__gather),2);
            tracep->chgCData(oldp+399,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__20__KET____DOT__gather),2);
            tracep->chgCData(oldp+400,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__21__KET____DOT__gather),2);
            tracep->chgCData(oldp+401,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__22__KET____DOT__gather),2);
            tracep->chgCData(oldp+402,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__23__KET____DOT__gather),2);
            tracep->chgCData(oldp+403,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__24__KET____DOT__gather),2);
            tracep->chgCData(oldp+404,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__25__KET____DOT__gather),2);
            tracep->chgCData(oldp+405,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__26__KET____DOT__gather),2);
            tracep->chgCData(oldp+406,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__27__KET____DOT__gather),2);
            tracep->chgCData(oldp+407,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__28__KET____DOT__gather),2);
            tracep->chgCData(oldp+408,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__29__KET____DOT__gather),2);
            tracep->chgCData(oldp+409,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__30__KET____DOT__gather),2);
            tracep->chgCData(oldp+410,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__31__KET____DOT__gather),2);
            tracep->chgCData(oldp+411,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__32__KET____DOT__gather),2);
            tracep->chgCData(oldp+412,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__33__KET____DOT__gather),2);
            tracep->chgCData(oldp+413,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__34__KET____DOT__gather),2);
            tracep->chgCData(oldp+414,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__35__KET____DOT__gather),2);
            tracep->chgCData(oldp+415,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__36__KET____DOT__gather),2);
            tracep->chgCData(oldp+416,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__37__KET____DOT__gather),2);
            tracep->chgCData(oldp+417,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__38__KET____DOT__gather),2);
            tracep->chgCData(oldp+418,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__39__KET____DOT__gather),2);
            tracep->chgCData(oldp+419,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__40__KET____DOT__gather),2);
            tracep->chgCData(oldp+420,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__41__KET____DOT__gather),2);
            tracep->chgCData(oldp+421,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__42__KET____DOT__gather),2);
            tracep->chgCData(oldp+422,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__43__KET____DOT__gather),2);
            tracep->chgCData(oldp+423,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__44__KET____DOT__gather),2);
            tracep->chgCData(oldp+424,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__45__KET____DOT__gather),2);
            tracep->chgCData(oldp+425,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__46__KET____DOT__gather),2);
            tracep->chgCData(oldp+426,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__47__KET____DOT__gather),2);
            tracep->chgCData(oldp+427,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__48__KET____DOT__gather),2);
            tracep->chgBit(oldp+428,((1U & (IData)(
                                                   (vlTOPp->bsg_tanh__DOT__divider__DOT__add1_out 
                                                    >> 0x30U)))));
            tracep->chgBit(oldp+429,((1U & (IData)(
                                                   (vlTOPp->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r 
                                                    >> 0x30U)))));
            tracep->chgBit(oldp+430,((1U & (IData)(
                                                   (vlTOPp->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r 
                                                    >> 0x30U)))));
            tracep->chgBit(oldp+431,(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__q_neg_r));
            tracep->chgBit(oldp+432,(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__r_neg_r));
            tracep->chgBit(oldp+433,(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__neg_ld));
            tracep->chgBit(oldp+434,(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__add1_neg_last_r));
            tracep->chgBit(oldp+435,(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__add2_neg_last_r));
            tracep->chgCData(oldp+436,(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state),6);
            tracep->chgCData(oldp+437,(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt),6);
            tracep->chgBit(oldp+438,(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__calc_up_li));
            tracep->chgBit(oldp+439,((0x30U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt))));
            tracep->chgWData(oldp+440,(vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxB__data_i),147);
            tracep->chgWData(oldp+445,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked),147);
            tracep->chgCData(oldp+450,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__0__KET____DOT__gather),3);
            tracep->chgCData(oldp+451,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__1__KET____DOT__gather),3);
            tracep->chgCData(oldp+452,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__2__KET____DOT__gather),3);
            tracep->chgCData(oldp+453,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__3__KET____DOT__gather),3);
            tracep->chgCData(oldp+454,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__4__KET____DOT__gather),3);
            tracep->chgCData(oldp+455,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__5__KET____DOT__gather),3);
            tracep->chgCData(oldp+456,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__6__KET____DOT__gather),3);
            tracep->chgCData(oldp+457,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__7__KET____DOT__gather),3);
            tracep->chgCData(oldp+458,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__8__KET____DOT__gather),3);
            tracep->chgCData(oldp+459,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__9__KET____DOT__gather),3);
            tracep->chgCData(oldp+460,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__10__KET____DOT__gather),3);
            tracep->chgCData(oldp+461,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__11__KET____DOT__gather),3);
            tracep->chgCData(oldp+462,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__12__KET____DOT__gather),3);
            tracep->chgCData(oldp+463,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__13__KET____DOT__gather),3);
            tracep->chgCData(oldp+464,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__14__KET____DOT__gather),3);
            tracep->chgCData(oldp+465,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__15__KET____DOT__gather),3);
            tracep->chgCData(oldp+466,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__16__KET____DOT__gather),3);
            tracep->chgCData(oldp+467,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__17__KET____DOT__gather),3);
            tracep->chgCData(oldp+468,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__18__KET____DOT__gather),3);
            tracep->chgCData(oldp+469,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__19__KET____DOT__gather),3);
            tracep->chgCData(oldp+470,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__20__KET____DOT__gather),3);
            tracep->chgCData(oldp+471,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__21__KET____DOT__gather),3);
            tracep->chgCData(oldp+472,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__22__KET____DOT__gather),3);
            tracep->chgCData(oldp+473,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__23__KET____DOT__gather),3);
            tracep->chgCData(oldp+474,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__24__KET____DOT__gather),3);
            tracep->chgCData(oldp+475,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__25__KET____DOT__gather),3);
            tracep->chgCData(oldp+476,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__26__KET____DOT__gather),3);
            tracep->chgCData(oldp+477,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__27__KET____DOT__gather),3);
            tracep->chgCData(oldp+478,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__28__KET____DOT__gather),3);
            tracep->chgCData(oldp+479,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__29__KET____DOT__gather),3);
            tracep->chgCData(oldp+480,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__30__KET____DOT__gather),3);
            tracep->chgCData(oldp+481,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__31__KET____DOT__gather),3);
            tracep->chgCData(oldp+482,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__32__KET____DOT__gather),3);
            tracep->chgCData(oldp+483,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__33__KET____DOT__gather),3);
            tracep->chgCData(oldp+484,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__34__KET____DOT__gather),3);
            tracep->chgCData(oldp+485,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__35__KET____DOT__gather),3);
            tracep->chgCData(oldp+486,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__36__KET____DOT__gather),3);
            tracep->chgCData(oldp+487,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__37__KET____DOT__gather),3);
            tracep->chgCData(oldp+488,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__38__KET____DOT__gather),3);
            tracep->chgCData(oldp+489,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__39__KET____DOT__gather),3);
            tracep->chgCData(oldp+490,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__40__KET____DOT__gather),3);
            tracep->chgCData(oldp+491,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__41__KET____DOT__gather),3);
            tracep->chgCData(oldp+492,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__42__KET____DOT__gather),3);
            tracep->chgCData(oldp+493,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__43__KET____DOT__gather),3);
            tracep->chgCData(oldp+494,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__44__KET____DOT__gather),3);
            tracep->chgCData(oldp+495,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__45__KET____DOT__gather),3);
            tracep->chgCData(oldp+496,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__46__KET____DOT__gather),3);
            tracep->chgCData(oldp+497,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__47__KET____DOT__gather),3);
            tracep->chgCData(oldp+498,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__48__KET____DOT__gather),3);
            tracep->chgWData(oldp+499,(vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxC__data_i),147);
            tracep->chgWData(oldp+504,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked),147);
            tracep->chgCData(oldp+509,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__0__KET____DOT__gather),3);
            tracep->chgCData(oldp+510,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__1__KET____DOT__gather),3);
            tracep->chgCData(oldp+511,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__2__KET____DOT__gather),3);
            tracep->chgCData(oldp+512,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__3__KET____DOT__gather),3);
            tracep->chgCData(oldp+513,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__4__KET____DOT__gather),3);
            tracep->chgCData(oldp+514,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__5__KET____DOT__gather),3);
            tracep->chgCData(oldp+515,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__6__KET____DOT__gather),3);
            tracep->chgCData(oldp+516,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__7__KET____DOT__gather),3);
            tracep->chgCData(oldp+517,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__8__KET____DOT__gather),3);
            tracep->chgCData(oldp+518,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__9__KET____DOT__gather),3);
            tracep->chgCData(oldp+519,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__10__KET____DOT__gather),3);
            tracep->chgCData(oldp+520,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__11__KET____DOT__gather),3);
            tracep->chgCData(oldp+521,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__12__KET____DOT__gather),3);
            tracep->chgCData(oldp+522,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__13__KET____DOT__gather),3);
            tracep->chgCData(oldp+523,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__14__KET____DOT__gather),3);
            tracep->chgCData(oldp+524,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__15__KET____DOT__gather),3);
            tracep->chgCData(oldp+525,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__16__KET____DOT__gather),3);
            tracep->chgCData(oldp+526,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__17__KET____DOT__gather),3);
            tracep->chgCData(oldp+527,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__18__KET____DOT__gather),3);
            tracep->chgCData(oldp+528,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__19__KET____DOT__gather),3);
            tracep->chgCData(oldp+529,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__20__KET____DOT__gather),3);
            tracep->chgCData(oldp+530,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__21__KET____DOT__gather),3);
            tracep->chgCData(oldp+531,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__22__KET____DOT__gather),3);
            tracep->chgCData(oldp+532,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__23__KET____DOT__gather),3);
            tracep->chgCData(oldp+533,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__24__KET____DOT__gather),3);
            tracep->chgCData(oldp+534,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__25__KET____DOT__gather),3);
            tracep->chgCData(oldp+535,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__26__KET____DOT__gather),3);
            tracep->chgCData(oldp+536,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__27__KET____DOT__gather),3);
            tracep->chgCData(oldp+537,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__28__KET____DOT__gather),3);
            tracep->chgCData(oldp+538,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__29__KET____DOT__gather),3);
            tracep->chgCData(oldp+539,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__30__KET____DOT__gather),3);
            tracep->chgCData(oldp+540,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__31__KET____DOT__gather),3);
            tracep->chgCData(oldp+541,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__32__KET____DOT__gather),3);
            tracep->chgCData(oldp+542,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__33__KET____DOT__gather),3);
            tracep->chgCData(oldp+543,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__34__KET____DOT__gather),3);
            tracep->chgCData(oldp+544,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__35__KET____DOT__gather),3);
            tracep->chgCData(oldp+545,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__36__KET____DOT__gather),3);
            tracep->chgCData(oldp+546,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__37__KET____DOT__gather),3);
            tracep->chgCData(oldp+547,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__38__KET____DOT__gather),3);
            tracep->chgCData(oldp+548,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__39__KET____DOT__gather),3);
            tracep->chgCData(oldp+549,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__40__KET____DOT__gather),3);
            tracep->chgCData(oldp+550,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__41__KET____DOT__gather),3);
            tracep->chgCData(oldp+551,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__42__KET____DOT__gather),3);
            tracep->chgCData(oldp+552,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__43__KET____DOT__gather),3);
            tracep->chgCData(oldp+553,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__44__KET____DOT__gather),3);
            tracep->chgCData(oldp+554,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__45__KET____DOT__gather),3);
            tracep->chgCData(oldp+555,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__46__KET____DOT__gather),3);
            tracep->chgCData(oldp+556,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__47__KET____DOT__gather),3);
            tracep->chgCData(oldp+557,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__48__KET____DOT__gather),3);
        }
        tracep->chgBit(oldp+558,(vlTOPp->clk_i));
        tracep->chgIData(oldp+559,(vlTOPp->ang_i),21);
        tracep->chgBit(oldp+560,(vlTOPp->ready_i));
        tracep->chgBit(oldp+561,(vlTOPp->val_i));
        tracep->chgBit(oldp+562,(vlTOPp->reset_i));
        tracep->chgIData(oldp+563,(vlTOPp->tanh_o),32);
        tracep->chgBit(oldp+564,(vlTOPp->ready_o));
        tracep->chgBit(oldp+565,(vlTOPp->val_o));
        tracep->chgCData(oldp+566,(vlTOPp->bsg_tanh__DOT__state_n),2);
        tracep->chgCData(oldp+567,(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__next_state),6);
    }
}

void Vbsg_tanh::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vbsg_tanh__Syms* __restrict vlSymsp = static_cast<Vbsg_tanh__Syms*>(userp);
    Vbsg_tanh* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
