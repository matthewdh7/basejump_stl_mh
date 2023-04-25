// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbsg_tanh.h for the primary calling header

#ifndef VERILATED_VBSG_TANH___024ROOT_H_
#define VERILATED_VBSG_TANH___024ROOT_H_  // guard

#include "verilated.h"

class Vbsg_tanh__Syms;

class Vbsg_tanh___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(ready_i,0,0);
    VL_IN8(val_i,0,0);
    VL_IN8(reset_i,0,0);
    VL_OUT8(ready_o,0,0);
    VL_OUT8(val_o,0,0);
    CData/*1:0*/ bsg_tanh__DOT__state_r;
    CData/*1:0*/ bsg_tanh__DOT__state_n;
    CData/*0:0*/ bsg_tanh__DOT__sinhcosh__DOT__stall_pipe;
    CData/*0:0*/ bsg_tanh__DOT__divider__DOT__latch_signed_div_lo;
    CData/*0:0*/ bsg_tanh__DOT__divider__DOT__opA_ld_lo;
    CData/*0:0*/ bsg_tanh__DOT__divider__DOT__opB_ld_lo;
    CData/*0:0*/ bsg_tanh__DOT__divider__DOT__opC_ld_lo;
    CData/*0:0*/ bsg_tanh__DOT__divider__DOT__req_reg__DOT__data_r;
    CData/*0:0*/ bsg_tanh__DOT__divider__DOT__control__DOT__q_neg_r;
    CData/*0:0*/ bsg_tanh__DOT__divider__DOT__control__DOT__r_neg_r;
    CData/*0:0*/ bsg_tanh__DOT__divider__DOT__control__DOT__neg_ld;
    CData/*0:0*/ bsg_tanh__DOT__divider__DOT__control__DOT__add1_neg_last_r;
    CData/*5:0*/ bsg_tanh__DOT__divider__DOT__control__DOT__state;
    CData/*5:0*/ bsg_tanh__DOT__divider__DOT__control__DOT__next_state;
    CData/*5:0*/ bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt;
    CData/*0:0*/ bsg_tanh__DOT__divider__DOT__control__DOT__calc_up_li;
    CData/*0:0*/ bsg_tanh__DOT__divider__DOT__control__DOT__calc_done;
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    VL_IN(ang_i,20,0);
    VL_OUT(tanh_o,31,0);
    IData/*31:0*/ bsg_tanh__DOT__tanh_r;
    VlWide<21>/*671:0*/ bsg_tanh__DOT__sinhcosh__DOT__x;
    VlWide<21>/*671:0*/ bsg_tanh__DOT__sinhcosh__DOT__y;
    VlWide<14>/*440:0*/ bsg_tanh__DOT__sinhcosh__DOT__ang;
    IData/*20:0*/ bsg_tanh__DOT__sinhcosh__DOT__val;
    VlWide<20>/*639:0*/ bsg_tanh__DOT__sinhcosh__DOT__x_ans;
    VlWide<20>/*639:0*/ bsg_tanh__DOT__sinhcosh__DOT__y_ans;
    VlWide<14>/*419:0*/ bsg_tanh__DOT__sinhcosh__DOT__ang_ans;
    IData/*19:0*/ bsg_tanh__DOT__sinhcosh__DOT__val_ans;
    QData/*48:0*/ bsg_tanh__DOT__divider__DOT__opA_mux;
    QData/*48:0*/ bsg_tanh__DOT__divider__DOT__add1_out;
    VlWide<4>/*97:0*/ bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i;
    QData/*48:0*/ bsg_tanh__DOT__divider__DOT__opB_mux;
    QData/*48:0*/ bsg_tanh__DOT__divider__DOT__opC_mux;
    VlWide<5>/*146:0*/ bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i;
    VlWide<4>/*97:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked;
    QData/*48:0*/ bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r;
    QData/*48:0*/ bsg_tanh__DOT__divider__DOT__opB_reg__DOT__data_r;
    QData/*48:0*/ bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r;
    VlWide<5>/*146:0*/ bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked;
    VlWide<5>/*146:0*/ bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked;

    // INTERNAL VARIABLES
    Vbsg_tanh__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbsg_tanh___024root(Vbsg_tanh__Syms* symsp, const char* name);
    ~Vbsg_tanh___024root();
    VL_UNCOPYABLE(Vbsg_tanh___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
