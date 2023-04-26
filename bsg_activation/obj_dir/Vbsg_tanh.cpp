// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbsg_tanh.h"
#include "Vbsg_tanh__Syms.h"

//============================================================
// Constructors

Vbsg_tanh::Vbsg_tanh(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vbsg_tanh__Syms(contextp(), _vcname__, this)}
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

Vbsg_tanh::Vbsg_tanh(const char* _vcname__)
    : Vbsg_tanh(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vbsg_tanh::~Vbsg_tanh() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vbsg_tanh___024root___eval_initial(Vbsg_tanh___024root* vlSelf);
void Vbsg_tanh___024root___eval_settle(Vbsg_tanh___024root* vlSelf);
void Vbsg_tanh___024root___eval(Vbsg_tanh___024root* vlSelf);
#ifdef VL_DEBUG
void Vbsg_tanh___024root___eval_debug_assertions(Vbsg_tanh___024root* vlSelf);
#endif  // VL_DEBUG
void Vbsg_tanh___024root___final(Vbsg_tanh___024root* vlSelf);

static void _eval_initial_loop(Vbsg_tanh__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vbsg_tanh___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vbsg_tanh___024root___eval_settle(&(vlSymsp->TOP));
        Vbsg_tanh___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vbsg_tanh::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbsg_tanh::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbsg_tanh___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vbsg_tanh___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vbsg_tanh::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vbsg_tanh::final() {
    Vbsg_tanh___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vbsg_tanh::hierName() const { return vlSymsp->name(); }
const char* Vbsg_tanh::modelName() const { return "Vbsg_tanh"; }
unsigned Vbsg_tanh::threads() const { return 1; }
