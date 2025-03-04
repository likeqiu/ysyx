// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vwater_fall_light.h for the primary calling header

#include "verilated.h"

#include "Vwater_fall_light__Syms.h"
#include "Vwater_fall_light___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vwater_fall_light___024root___dump_triggers__act(Vwater_fall_light___024root* vlSelf);
#endif  // VL_DEBUG

void Vwater_fall_light___024root___eval_triggers__act(Vwater_fall_light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwater_fall_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwater_fall_light___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vwater_fall_light___024root___dump_triggers__act(vlSelf);
    }
#endif
}
