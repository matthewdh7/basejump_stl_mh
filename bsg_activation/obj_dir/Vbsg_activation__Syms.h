// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBSG_ACTIVATION__SYMS_H_
#define VERILATED_VBSG_ACTIVATION__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vbsg_activation.h"

// INCLUDE MODULE CLASSES
#include "Vbsg_activation___024root.h"

// SYMS CLASS (contains all model state)
class Vbsg_activation__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vbsg_activation* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vbsg_activation___024root      TOP;

    // CONSTRUCTORS
    Vbsg_activation__Syms(VerilatedContext* contextp, const char* namep, Vbsg_activation* modelp);
    ~Vbsg_activation__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
