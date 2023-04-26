// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbsg_activation.h"
#include "Vbsg_activation__Syms.h"

//============================================================
// Constructors

Vbsg_activation::Vbsg_activation(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vbsg_activation__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , ready_i{vlSymsp->TOP.ready_i}
    , val_i{vlSymsp->TOP.val_i}
    , reset_i{vlSymsp->TOP.reset_i}
    , tanh_sel_i{vlSymsp->TOP.tanh_sel_i}
    , neg_sel_i{vlSymsp->TOP.neg_sel_i}
    , ready_o{vlSymsp->TOP.ready_o}
    , val_o{vlSymsp->TOP.val_o}
    , ang_i{vlSymsp->TOP.ang_i}
    , data_o{vlSymsp->TOP.data_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vbsg_activation::Vbsg_activation(const char* _vcname__)
    : Vbsg_activation(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vbsg_activation::~Vbsg_activation() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vbsg_activation___024root___eval_initial(Vbsg_activation___024root* vlSelf);
void Vbsg_activation___024root___eval_settle(Vbsg_activation___024root* vlSelf);
void Vbsg_activation___024root___eval(Vbsg_activation___024root* vlSelf);
#ifdef VL_DEBUG
void Vbsg_activation___024root___eval_debug_assertions(Vbsg_activation___024root* vlSelf);
#endif  // VL_DEBUG
void Vbsg_activation___024root___final(Vbsg_activation___024root* vlSelf);

static void _eval_initial_loop(Vbsg_activation__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vbsg_activation___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vbsg_activation___024root___eval_settle(&(vlSymsp->TOP));
        Vbsg_activation___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vbsg_activation::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbsg_activation::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbsg_activation___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vbsg_activation___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vbsg_activation::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vbsg_activation::final() {
    Vbsg_activation___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vbsg_activation::hierName() const { return vlSymsp->name(); }
const char* Vbsg_activation::modelName() const { return "Vbsg_activation"; }
unsigned Vbsg_activation::threads() const { return 1; }
