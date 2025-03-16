// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCounterModule.h for the primary calling header

#ifndef VERILATED_VCOUNTERMODULE___024ROOT_H_
#define VERILATED_VCOUNTERMODULE___024ROOT_H_  // guard

#include "verilated.h"

class VCounterModule__Syms;

class VCounterModule___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_second,6,0);
    VL_OUT8(io_minutes,6,0);
    VL_OUT8(io_hour,6,0);
    VL_IN8(io_enable,0,0);
    VL_IN8(io_reset,0,0);
    VL_OUT8(io_led_second1,6,0);
    VL_OUT8(io_led_second2,6,0);
    VL_OUT8(io_led_minutes1,6,0);
    VL_OUT8(io_led_minutes2,6,0);
    VL_OUT8(io_led_hour1,6,0);
    VL_OUT8(io_led_hour2,6,0);
    CData/*6:0*/ CounterModule__DOT__secondsReg;
    CData/*6:0*/ CounterModule__DOT__minutesReg;
    CData/*6:0*/ CounterModule__DOT__hoursReg;
    CData/*0:0*/ CounterModule__DOT__unnamedblk1__DOT___hoursReg_T;
    CData/*0:0*/ __Vtrigrprev__TOP__clock;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ CounterModule__DOT__tick;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VCounterModule__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCounterModule___024root(VCounterModule__Syms* symsp, const char* v__name);
    ~VCounterModule___024root();
    VL_UNCOPYABLE(VCounterModule___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
