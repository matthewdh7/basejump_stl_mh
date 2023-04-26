// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbsg_activation.h for the primary calling header

#include "verilated.h"

#include "Vbsg_activation__Syms.h"
#include "Vbsg_activation___024root.h"

void Vbsg_activation___024root___ctor_var_reset(Vbsg_activation___024root* vlSelf);

Vbsg_activation___024root::Vbsg_activation___024root(Vbsg_activation__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vbsg_activation___024root___ctor_var_reset(this);
}

void Vbsg_activation___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vbsg_activation___024root::~Vbsg_activation___024root() {
}
