// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbsg_activation.h for the primary calling header

#ifndef VERILATED_VBSG_ACTIVATION___024ROOT_H_
#define VERILATED_VBSG_ACTIVATION___024ROOT_H_  // guard

#include "verilated.h"

class Vbsg_activation__Syms;

class Vbsg_activation___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(ready_i,0,0);
    VL_IN8(val_i,0,0);
    VL_IN8(reset_i,0,0);
    VL_IN8(tanh_sel_i,0,0);
    VL_OUT8(ready_o,0,0);
    VL_OUT8(val_o,0,0);
    CData/*0:0*/ bsg_activation__DOT__bypass;
    CData/*0:0*/ bsg_activation__DOT__load_ang;
    CData/*1:0*/ bsg_activation__DOT__state_r;
    CData/*1:0*/ bsg_activation__DOT__state_n;
    CData/*0:0*/ bsg_activation__DOT__sinhcosh__DOT__stall_pipe;
    CData/*0:0*/ bsg_activation__DOT__divider__DOT__latch_signed_div_lo;
    CData/*1:0*/ bsg_activation__DOT__divider__DOT__opA_sel_lo;
    CData/*2:0*/ bsg_activation__DOT__divider__DOT__opB_sel_lo;
    CData/*2:0*/ bsg_activation__DOT__divider__DOT__opC_sel_lo;
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
    CData/*0:0*/ __Vtrigrprev__TOP__clk_i;
    CData/*0:0*/ __VactContinue;
    VL_IN(ang_i,20,0);
    VL_OUT(data_o,31,0);
    IData/*20:0*/ bsg_activation__DOT__ang_n;
    IData/*20:0*/ bsg_activation__DOT__ang_r;
    IData/*31:0*/ bsg_activation__DOT__negExp;
    IData/*31:0*/ bsg_activation__DOT__data_r;
    IData/*31:0*/ bsg_activation__DOT__data_n;
    VlWide<21>/*671:0*/ bsg_activation__DOT__sinhcosh__DOT__x;
    VlWide<21>/*671:0*/ bsg_activation__DOT__sinhcosh__DOT__y;
    VlWide<14>/*440:0*/ bsg_activation__DOT__sinhcosh__DOT__ang;
    IData/*20:0*/ bsg_activation__DOT__sinhcosh__DOT__val;
    VlWide<20>/*639:0*/ bsg_activation__DOT__sinhcosh__DOT__x_ans;
    VlWide<20>/*639:0*/ bsg_activation__DOT__sinhcosh__DOT__y_ans;
    VlWide<14>/*419:0*/ bsg_activation__DOT__sinhcosh__DOT__ang_ans;
    IData/*19:0*/ bsg_activation__DOT__sinhcosh__DOT__val_ans;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    QData/*47:0*/ bsg_activation__DOT__dividend_li;
    QData/*47:0*/ bsg_activation__DOT__divisor_li;
    QData/*48:0*/ bsg_activation__DOT__divider__DOT__add1_out;
    QData/*48:0*/ bsg_activation__DOT__divider__DOT__opA_reg__DOT__data_r;
    QData/*48:0*/ bsg_activation__DOT__divider__DOT__opB_reg__DOT__data_r;
    QData/*48:0*/ bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r;
    QData/*48:0*/ bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbsg_activation__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbsg_activation___024root(Vbsg_activation__Syms* symsp, const char* name);
    ~Vbsg_activation___024root();
    VL_UNCOPYABLE(Vbsg_activation___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
