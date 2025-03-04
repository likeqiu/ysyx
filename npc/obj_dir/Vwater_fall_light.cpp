// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vwater_fall_light.h"
#include "Vwater_fall_light__Syms.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vwater_fall_light::Vwater_fall_light(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vwater_fall_light__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , led{vlSymsp->TOP.led}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vwater_fall_light::Vwater_fall_light(const char* _vcname__)
    : Vwater_fall_light(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vwater_fall_light::~Vwater_fall_light() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vwater_fall_light___024root___eval_debug_assertions(Vwater_fall_light___024root* vlSelf);
#endif  // VL_DEBUG
void Vwater_fall_light___024root___eval_static(Vwater_fall_light___024root* vlSelf);
void Vwater_fall_light___024root___eval_initial(Vwater_fall_light___024root* vlSelf);
void Vwater_fall_light___024root___eval_settle(Vwater_fall_light___024root* vlSelf);
void Vwater_fall_light___024root___eval(Vwater_fall_light___024root* vlSelf);

void Vwater_fall_light::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vwater_fall_light::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vwater_fall_light___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vwater_fall_light___024root___eval_static(&(vlSymsp->TOP));
        Vwater_fall_light___024root___eval_initial(&(vlSymsp->TOP));
        Vwater_fall_light___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vwater_fall_light___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vwater_fall_light::eventsPending() { return false; }

uint64_t Vwater_fall_light::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vwater_fall_light::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vwater_fall_light___024root___eval_final(Vwater_fall_light___024root* vlSelf);

VL_ATTR_COLD void Vwater_fall_light::final() {
    Vwater_fall_light___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vwater_fall_light::hierName() const { return vlSymsp->name(); }
const char* Vwater_fall_light::modelName() const { return "Vwater_fall_light"; }
unsigned Vwater_fall_light::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vwater_fall_light::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vwater_fall_light___024root__trace_init_top(Vwater_fall_light___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vwater_fall_light___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vwater_fall_light___024root*>(voidSelf);
    Vwater_fall_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vwater_fall_light___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vwater_fall_light___024root__trace_register(Vwater_fall_light___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vwater_fall_light::trace(VerilatedFstC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vwater_fall_light::trace()' shall not be called after 'VerilatedFstC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vwater_fall_light___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
