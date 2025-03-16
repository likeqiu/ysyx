// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCounterModule.h"
#include "VCounterModule__Syms.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

VCounterModule::VCounterModule(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VCounterModule__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_second{vlSymsp->TOP.io_second}
    , io_minutes{vlSymsp->TOP.io_minutes}
    , io_hour{vlSymsp->TOP.io_hour}
    , io_enable{vlSymsp->TOP.io_enable}
    , io_reset{vlSymsp->TOP.io_reset}
    , io_led_second1{vlSymsp->TOP.io_led_second1}
    , io_led_second2{vlSymsp->TOP.io_led_second2}
    , io_led_minutes1{vlSymsp->TOP.io_led_minutes1}
    , io_led_minutes2{vlSymsp->TOP.io_led_minutes2}
    , io_led_hour1{vlSymsp->TOP.io_led_hour1}
    , io_led_hour2{vlSymsp->TOP.io_led_hour2}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VCounterModule::VCounterModule(const char* _vcname__)
    : VCounterModule(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VCounterModule::~VCounterModule() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VCounterModule___024root___eval_debug_assertions(VCounterModule___024root* vlSelf);
#endif  // VL_DEBUG
void VCounterModule___024root___eval_static(VCounterModule___024root* vlSelf);
void VCounterModule___024root___eval_initial(VCounterModule___024root* vlSelf);
void VCounterModule___024root___eval_settle(VCounterModule___024root* vlSelf);
void VCounterModule___024root___eval(VCounterModule___024root* vlSelf);

void VCounterModule::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCounterModule::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCounterModule___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VCounterModule___024root___eval_static(&(vlSymsp->TOP));
        VCounterModule___024root___eval_initial(&(vlSymsp->TOP));
        VCounterModule___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VCounterModule___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VCounterModule::eventsPending() { return false; }

uint64_t VCounterModule::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VCounterModule::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VCounterModule___024root___eval_final(VCounterModule___024root* vlSelf);

VL_ATTR_COLD void VCounterModule::final() {
    VCounterModule___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VCounterModule::hierName() const { return vlSymsp->name(); }
const char* VCounterModule::modelName() const { return "VCounterModule"; }
unsigned VCounterModule::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VCounterModule::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VCounterModule___024root__trace_init_top(VCounterModule___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    VCounterModule___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCounterModule___024root*>(voidSelf);
    VCounterModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VCounterModule___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VCounterModule___024root__trace_register(VCounterModule___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void VCounterModule::trace(VerilatedFstC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VCounterModule::trace()' shall not be called after 'VerilatedFstC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VCounterModule___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
