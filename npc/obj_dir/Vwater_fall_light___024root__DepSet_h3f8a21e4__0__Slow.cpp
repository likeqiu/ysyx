// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vwater_fall_light.h for the primary calling header

#include "verilated.h"

#include "Vwater_fall_light___024root.h"

VL_ATTR_COLD void Vwater_fall_light___024root___eval_static(Vwater_fall_light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwater_fall_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwater_fall_light___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vwater_fall_light___024root___eval_initial(Vwater_fall_light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwater_fall_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwater_fall_light___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vwater_fall_light___024root___eval_final(Vwater_fall_light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwater_fall_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwater_fall_light___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vwater_fall_light___024root___eval_settle(Vwater_fall_light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwater_fall_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwater_fall_light___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vwater_fall_light___024root___dump_triggers__act(Vwater_fall_light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwater_fall_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwater_fall_light___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vwater_fall_light___024root___dump_triggers__nba(Vwater_fall_light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwater_fall_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwater_fall_light___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vwater_fall_light___024root___ctor_var_reset(Vwater_fall_light___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwater_fall_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwater_fall_light___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->led = VL_RAND_RESET_I(16);
    vlSelf->light__DOT__count = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
}
