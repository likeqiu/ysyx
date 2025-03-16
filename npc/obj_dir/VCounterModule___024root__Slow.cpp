// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCounterModule.h for the primary calling header

#include "verilated.h"

#include "VCounterModule__Syms.h"
#include "VCounterModule___024root.h"

void VCounterModule___024root___ctor_var_reset(VCounterModule___024root* vlSelf);

VCounterModule___024root::VCounterModule___024root(VCounterModule__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCounterModule___024root___ctor_var_reset(this);
}

void VCounterModule___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VCounterModule___024root::~VCounterModule___024root() {
}
