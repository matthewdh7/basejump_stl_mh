// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbsg_activation.h for the primary calling header

#ifndef VERILATED_VBSG_ACTIVATION___024ROOT_H_
#define VERILATED_VBSG_ACTIVATION___024ROOT_H_  // guard

#include "verilated.h"

class Vbsg_activation__Syms;
VL_MODULE(Vbsg_activation___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(ready_i,0,0);
    VL_IN8(val_i,0,0);
    VL_IN8(reset_i,0,0);
    VL_IN8(tanh_sel_i,0,0);
    VL_OUT8(ready_o,0,0);
    VL_OUT8(val_o,0,0);
    CData/*0:0*/ bsg_activation__DOT__one_bypass;
    CData/*0:0*/ bsg_activation__DOT__load_ang;
    CData/*0:0*/ bsg_activation__DOT__zero_bypass;
    CData/*0:0*/ bsg_activation__DOT__sinhcosh__DOT__stall_pipe;
    CData/*0:0*/ bsg_activation__DOT__divider__DOT__latch_signed_div_lo;
    CData/*0:0*/ bsg_activation__DOT__divider__DOT__opA_ld_lo;
    CData/*0:0*/ bsg_activation__DOT__divider__DOT__opB_ld_lo;
    CData/*0:0*/ bsg_activation__DOT__divider__DOT__opC_ld_lo;
    CData/*0:0*/ bsg_activation__DOT__divider__DOT__req_reg__DOT__data_r;
    CData/*0:0*/ bsg_activation__DOT__divider__DOT__control__DOT__q_neg_r;
    CData/*0:0*/ bsg_activation__DOT__divider__DOT__control__DOT__r_neg_r;
    CData/*0:0*/ bsg_activation__DOT__divider__DOT__control__DOT__neg_ld;
    CData/*0:0*/ bsg_activation__DOT__divider__DOT__control__DOT__add1_neg_last_r;
    CData/*5:0*/ bsg_activation__DOT__divider__DOT__control__DOT__state;
    CData/*5:0*/ bsg_activation__DOT__divider__DOT__control__DOT__next_state;
    CData/*5:0*/ bsg_activation__DOT__divider__DOT__control__DOT__calc_cnt;
    CData/*0:0*/ bsg_activation__DOT__divider__DOT__control__DOT__calc_up_li;
    CData/*0:0*/ bsg_activation__DOT__divider__DOT__control__DOT__calc_done;
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    VL_IN(ang_i,20,0);
    VL_OUT(data_o,16,0);
    IData/*20:0*/ bsg_activation__DOT__ang_n;
    IData/*20:0*/ bsg_activation__DOT__ang_r;
    IData/*19:0*/ bsg_activation__DOT__negExp;
    IData/*16:0*/ bsg_activation__DOT__data_r;
    IData/*16:0*/ bsg_activation__DOT__data_n;
    IData/*31:0*/ bsg_activation__DOT__state_r;
    IData/*31:0*/ bsg_activation__DOT__state_n;
    VlWide<21>/*671:0*/ bsg_activation__DOT__sinhcosh__DOT__x;
    VlWide<21>/*671:0*/ bsg_activation__DOT__sinhcosh__DOT__y;
    VlWide<14>/*440:0*/ bsg_activation__DOT__sinhcosh__DOT__ang;
    IData/*20:0*/ bsg_activation__DOT__sinhcosh__DOT__val;
    VlWide<20>/*639:0*/ bsg_activation__DOT__sinhcosh__DOT__x_ans;
    VlWide<20>/*639:0*/ bsg_activation__DOT__sinhcosh__DOT__y_ans;
    VlWide<14>/*419:0*/ bsg_activation__DOT__sinhcosh__DOT__ang_ans;
    IData/*19:0*/ bsg_activation__DOT__sinhcosh__DOT__val_ans;
    QData/*36:0*/ bsg_activation__DOT__divider__DOT__opA_mux;
    QData/*36:0*/ bsg_activation__DOT__divider__DOT__add1_out;
    QData/*36:0*/ bsg_activation__DOT__divider__DOT__opB_mux;
    QData/*36:0*/ bsg_activation__DOT__divider__DOT__opC_mux;
    VlWide<3>/*73:0*/ bsg_activation__DOT__divider__DOT__muxA__DOT__data_masked;
    QData/*36:0*/ bsg_activation__DOT__divider__DOT__opA_reg__DOT__data_r;
    QData/*36:0*/ bsg_activation__DOT__divider__DOT__opB_reg__DOT__data_r;
    QData/*36:0*/ bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r;
    VlWide<4>/*110:0*/ bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked;
    VlWide<4>/*110:0*/ bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked;

    // INTERNAL VARIABLES
    Vbsg_activation__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vbsg_activation___024root(const char* name);
    ~Vbsg_activation___024root();
    VL_UNCOPYABLE(Vbsg_activation___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vbsg_activation__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
