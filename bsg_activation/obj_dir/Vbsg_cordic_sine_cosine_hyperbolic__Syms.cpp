// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vbsg_cordic_sine_cosine_hyperbolic__Syms.h"
#include "Vbsg_cordic_sine_cosine_hyperbolic.h"
#include "Vbsg_cordic_sine_cosine_hyperbolic___024root.h"

// FUNCTIONS
Vbsg_cordic_sine_cosine_hyperbolic__Syms::~Vbsg_cordic_sine_cosine_hyperbolic__Syms()
{
}

Vbsg_cordic_sine_cosine_hyperbolic__Syms::Vbsg_cordic_sine_cosine_hyperbolic__Syms(VerilatedContext* contextp, const char* namep,Vbsg_cordic_sine_cosine_hyperbolic* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
}
