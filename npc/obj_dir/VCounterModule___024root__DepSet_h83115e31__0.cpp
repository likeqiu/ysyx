// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCounterModule.h for the primary calling header

#include "verilated.h"

#include "VCounterModule__Syms.h"
#include "VCounterModule___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VCounterModule___024root___dump_triggers__act(VCounterModule___024root* vlSelf);
#endif  // VL_DEBUG

void VCounterModule___024root___eval_triggers__act(VCounterModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCounterModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounterModule___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock)));
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCounterModule___024root___dump_triggers__act(vlSelf);
    }
#endif
}
