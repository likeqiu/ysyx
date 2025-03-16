// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCounterModule.h for the primary calling header

#include "verilated.h"

#include "VCounterModule___024root.h"

VL_ATTR_COLD void VCounterModule___024root___eval_static(VCounterModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCounterModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounterModule___024root___eval_static\n"); );
}

VL_ATTR_COLD void VCounterModule___024root___eval_initial(VCounterModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCounterModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounterModule___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VCounterModule___024root___eval_final(VCounterModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCounterModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounterModule___024root___eval_final\n"); );
}

VL_ATTR_COLD void VCounterModule___024root___eval_triggers__stl(VCounterModule___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VCounterModule___024root___dump_triggers__stl(VCounterModule___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VCounterModule___024root___eval_stl(VCounterModule___024root* vlSelf);

VL_ATTR_COLD void VCounterModule___024root___eval_settle(VCounterModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCounterModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounterModule___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VCounterModule___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VCounterModule___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/CounterModule.sv", 2, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VCounterModule___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCounterModule___024root___dump_triggers__stl(VCounterModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCounterModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounterModule___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCounterModule___024root___stl_sequent__TOP__0(VCounterModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCounterModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounterModule___024root___stl_sequent__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h8ccc2c1e__0;
    VlWide<4>/*127:0*/ __Vtemp_h8ccc2c1e__1;
    VlWide<4>/*127:0*/ __Vtemp_h8ccc2c1e__2;
    // Body
    vlSelf->io_second = vlSelf->CounterModule__DOT__secondsReg;
    __Vtemp_h8ccc2c1e__0[0U] = 0xc0c4a781U;
    __Vtemp_h8ccc2c1e__0[1U] = 0x1f8124U;
    __Vtemp_h8ccc2c1e__0[2U] = 0xffffffc2U;
    __Vtemp_h8ccc2c1e__0[3U] = 0xffffU;
    vlSelf->io_led_second1 = ((0x6fU >= (0x7fU & ((IData)(7U) 
                                                  * 
                                                  (0xfU 
                                                   & VL_MODDIV_III(7, (IData)(vlSelf->CounterModule__DOT__secondsReg), (IData)(0xaU))))))
                               ? (0x7fU & (((0U == 
                                             (0x1fU 
                                              & ((IData)(7U) 
                                                 * 
                                                 (0xfU 
                                                  & VL_MODDIV_III(7, (IData)(vlSelf->CounterModule__DOT__secondsReg), (IData)(0xaU))))))
                                             ? 0U : 
                                            (__Vtemp_h8ccc2c1e__0[
                                             (((IData)(6U) 
                                               + (0x7fU 
                                                  & ((IData)(7U) 
                                                     * 
                                                     (0xfU 
                                                      & VL_MODDIV_III(7, (IData)(vlSelf->CounterModule__DOT__secondsReg), (IData)(0xaU)))))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(7U) 
                                                     * 
                                                     (0xfU 
                                                      & VL_MODDIV_III(7, (IData)(vlSelf->CounterModule__DOT__secondsReg), (IData)(0xaU)))))))) 
                                           | (__Vtemp_h8ccc2c1e__0[
                                              (3U & 
                                               (((IData)(7U) 
                                                 * 
                                                 (0xfU 
                                                  & VL_MODDIV_III(7, (IData)(vlSelf->CounterModule__DOT__secondsReg), (IData)(0xaU)))) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(7U) 
                                                     * 
                                                     (0xfU 
                                                      & VL_MODDIV_III(7, (IData)(vlSelf->CounterModule__DOT__secondsReg), (IData)(0xaU))))))))
                               : 0U);
    vlSelf->io_led_second2 = ((0U == (0x7fU & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__secondsReg), (IData)(0xaU))))
                               ? 1U : ((1U == (0x7fU 
                                               & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__secondsReg), (IData)(0xaU))))
                                        ? 0x4fU : (
                                                   (2U 
                                                    == 
                                                    (0x7fU 
                                                     & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__secondsReg), (IData)(0xaU))))
                                                    ? 0x12U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x7fU 
                                                      & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__secondsReg), (IData)(0xaU))))
                                                     ? 6U
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (0x7fU 
                                                       & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__secondsReg), (IData)(0xaU))))
                                                      ? 0x4cU
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (0x7fU 
                                                        & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__secondsReg), (IData)(0xaU))))
                                                       ? 0x24U
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (0x7fU 
                                                         & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__secondsReg), (IData)(0xaU))))
                                                        ? 0x60U
                                                        : 
                                                       ((7U 
                                                         == 
                                                         (0x7fU 
                                                          & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__secondsReg), (IData)(0xaU))))
                                                         ? 0xfU
                                                         : 
                                                        ((8U 
                                                          == 
                                                          (0x7fU 
                                                           & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__secondsReg), (IData)(0xaU))))
                                                          ? 0U
                                                          : 
                                                         ((9U 
                                                           == 
                                                           (0x7fU 
                                                            & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__secondsReg), (IData)(0xaU))))
                                                           ? 4U
                                                           : 0x7fU))))))))));
    vlSelf->io_minutes = vlSelf->CounterModule__DOT__minutesReg;
    __Vtemp_h8ccc2c1e__1[0U] = 0xc0c4a781U;
    __Vtemp_h8ccc2c1e__1[1U] = 0x1f8124U;
    __Vtemp_h8ccc2c1e__1[2U] = 0xffffffc2U;
    __Vtemp_h8ccc2c1e__1[3U] = 0xffffU;
    vlSelf->io_led_minutes1 = ((0x6fU >= (0x7fU & ((IData)(7U) 
                                                   * 
                                                   (0xfU 
                                                    & VL_MODDIV_III(7, (IData)(vlSelf->CounterModule__DOT__minutesReg), (IData)(0xaU))))))
                                ? (0x7fU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(7U) 
                                                  * 
                                                  (0xfU 
                                                   & VL_MODDIV_III(7, (IData)(vlSelf->CounterModule__DOT__minutesReg), (IData)(0xaU))))))
                                              ? 0U : 
                                             (__Vtemp_h8ccc2c1e__1[
                                              (((IData)(6U) 
                                                + (0x7fU 
                                                   & ((IData)(7U) 
                                                      * 
                                                      (0xfU 
                                                       & VL_MODDIV_III(7, (IData)(vlSelf->CounterModule__DOT__minutesReg), (IData)(0xaU)))))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(7U) 
                                                      * 
                                                      (0xfU 
                                                       & VL_MODDIV_III(7, (IData)(vlSelf->CounterModule__DOT__minutesReg), (IData)(0xaU)))))))) 
                                            | (__Vtemp_h8ccc2c1e__1[
                                               (3U 
                                                & (((IData)(7U) 
                                                    * 
                                                    (0xfU 
                                                     & VL_MODDIV_III(7, (IData)(vlSelf->CounterModule__DOT__minutesReg), (IData)(0xaU)))) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(7U) 
                                                      * 
                                                      (0xfU 
                                                       & VL_MODDIV_III(7, (IData)(vlSelf->CounterModule__DOT__minutesReg), (IData)(0xaU))))))))
                                : 0U);
    vlSelf->io_led_minutes2 = ((0U == (0x7fU & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__minutesReg), (IData)(0xaU))))
                                ? 1U : ((1U == (0x7fU 
                                                & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__minutesReg), (IData)(0xaU))))
                                         ? 0x4fU : 
                                        ((2U == (0x7fU 
                                                 & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__minutesReg), (IData)(0xaU))))
                                          ? 0x12U : 
                                         ((3U == (0x7fU 
                                                  & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__minutesReg), (IData)(0xaU))))
                                           ? 6U : (
                                                   (4U 
                                                    == 
                                                    (0x7fU 
                                                     & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__minutesReg), (IData)(0xaU))))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (0x7fU 
                                                      & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__minutesReg), (IData)(0xaU))))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (0x7fU 
                                                       & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__minutesReg), (IData)(0xaU))))
                                                      ? 0x60U
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (0x7fU 
                                                        & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__minutesReg), (IData)(0xaU))))
                                                       ? 0xfU
                                                       : 
                                                      ((8U 
                                                        == 
                                                        (0x7fU 
                                                         & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__minutesReg), (IData)(0xaU))))
                                                        ? 0U
                                                        : 
                                                       ((9U 
                                                         == 
                                                         (0x7fU 
                                                          & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__minutesReg), (IData)(0xaU))))
                                                         ? 4U
                                                         : 0x7fU))))))))));
    vlSelf->io_hour = vlSelf->CounterModule__DOT__hoursReg;
    __Vtemp_h8ccc2c1e__2[0U] = 0xc0c4a781U;
    __Vtemp_h8ccc2c1e__2[1U] = 0x1f8124U;
    __Vtemp_h8ccc2c1e__2[2U] = 0xffffffc2U;
    __Vtemp_h8ccc2c1e__2[3U] = 0xffffU;
    vlSelf->io_led_hour1 = ((0x6fU >= (0x7fU & ((IData)(7U) 
                                                * (0xfU 
                                                   & VL_MODDIV_III(7, (IData)(vlSelf->CounterModule__DOT__hoursReg), (IData)(0xaU))))))
                             ? (0x7fU & (((0U == (0x1fU 
                                                  & ((IData)(7U) 
                                                     * 
                                                     (0xfU 
                                                      & VL_MODDIV_III(7, (IData)(vlSelf->CounterModule__DOT__hoursReg), (IData)(0xaU))))))
                                           ? 0U : (
                                                   __Vtemp_h8ccc2c1e__2[
                                                   (((IData)(6U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(7U) 
                                                         * 
                                                         (0xfU 
                                                          & VL_MODDIV_III(7, (IData)(vlSelf->CounterModule__DOT__hoursReg), (IData)(0xaU)))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(7U) 
                                                        * 
                                                        (0xfU 
                                                         & VL_MODDIV_III(7, (IData)(vlSelf->CounterModule__DOT__hoursReg), (IData)(0xaU)))))))) 
                                         | (__Vtemp_h8ccc2c1e__2[
                                            (3U & (
                                                   ((IData)(7U) 
                                                    * 
                                                    (0xfU 
                                                     & VL_MODDIV_III(7, (IData)(vlSelf->CounterModule__DOT__hoursReg), (IData)(0xaU)))) 
                                                   >> 5U))] 
                                            >> (0x1fU 
                                                & ((IData)(7U) 
                                                   * 
                                                   (0xfU 
                                                    & VL_MODDIV_III(7, (IData)(vlSelf->CounterModule__DOT__hoursReg), (IData)(0xaU))))))))
                             : 0U);
    vlSelf->io_led_hour2 = ((0U == (0x7fU & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__hoursReg), (IData)(0xaU))))
                             ? 1U : ((1U == (0x7fU 
                                             & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__hoursReg), (IData)(0xaU))))
                                      ? 0x4fU : ((2U 
                                                  == 
                                                  (0x7fU 
                                                   & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__hoursReg), (IData)(0xaU))))
                                                  ? 0x12U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (0x7fU 
                                                    & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__hoursReg), (IData)(0xaU))))
                                                   ? 6U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fU 
                                                     & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__hoursReg), (IData)(0xaU))))
                                                    ? 0x4cU
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (0x7fU 
                                                      & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__hoursReg), (IData)(0xaU))))
                                                     ? 0x24U
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (0x7fU 
                                                       & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__hoursReg), (IData)(0xaU))))
                                                      ? 0x60U
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (0x7fU 
                                                        & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__hoursReg), (IData)(0xaU))))
                                                       ? 0xfU
                                                       : 
                                                      ((8U 
                                                        == 
                                                        (0x7fU 
                                                         & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__hoursReg), (IData)(0xaU))))
                                                        ? 0U
                                                        : 
                                                       ((9U 
                                                         == 
                                                         (0x7fU 
                                                          & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__hoursReg), (IData)(0xaU))))
                                                         ? 4U
                                                         : 0x7fU))))))))));
}

VL_ATTR_COLD void VCounterModule___024root___eval_stl(VCounterModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCounterModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounterModule___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VCounterModule___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCounterModule___024root___dump_triggers__act(VCounterModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCounterModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounterModule___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCounterModule___024root___dump_triggers__nba(VCounterModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCounterModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounterModule___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCounterModule___024root___ctor_var_reset(VCounterModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCounterModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounterModule___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_second = VL_RAND_RESET_I(7);
    vlSelf->io_minutes = VL_RAND_RESET_I(7);
    vlSelf->io_hour = VL_RAND_RESET_I(7);
    vlSelf->io_enable = VL_RAND_RESET_I(1);
    vlSelf->io_reset = VL_RAND_RESET_I(1);
    vlSelf->io_led_second1 = VL_RAND_RESET_I(7);
    vlSelf->io_led_second2 = VL_RAND_RESET_I(7);
    vlSelf->io_led_minutes1 = VL_RAND_RESET_I(7);
    vlSelf->io_led_minutes2 = VL_RAND_RESET_I(7);
    vlSelf->io_led_hour1 = VL_RAND_RESET_I(7);
    vlSelf->io_led_hour2 = VL_RAND_RESET_I(7);
    vlSelf->CounterModule__DOT__secondsReg = VL_RAND_RESET_I(7);
    vlSelf->CounterModule__DOT__minutesReg = VL_RAND_RESET_I(7);
    vlSelf->CounterModule__DOT__hoursReg = VL_RAND_RESET_I(7);
    vlSelf->CounterModule__DOT__tick = VL_RAND_RESET_I(32);
    vlSelf->CounterModule__DOT__unnamedblk1__DOT___hoursReg_T = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
