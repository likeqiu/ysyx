// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCounterModule.h for the primary calling header

#include "verilated.h"

#include "VCounterModule___024root.h"

void VCounterModule___024root___eval_act(VCounterModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCounterModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounterModule___024root___eval_act\n"); );
}

VL_INLINE_OPT void VCounterModule___024root___nba_sequent__TOP__0(VCounterModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCounterModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounterModule___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vdly__CounterModule__DOT__tick;
    __Vdly__CounterModule__DOT__tick = 0;
    VlWide<4>/*127:0*/ __Vtemp_ha3b2720e__0;
    VlWide<4>/*127:0*/ __Vtemp_ha3b2720e__1;
    VlWide<4>/*127:0*/ __Vtemp_ha3b2720e__2;
    // Body
    __Vdly__CounterModule__DOT__tick = vlSelf->CounterModule__DOT__tick;
    if (vlSelf->reset) {
        __Vdly__CounterModule__DOT__tick = 0U;
        vlSelf->CounterModule__DOT__hoursReg = 0U;
        vlSelf->CounterModule__DOT__minutesReg = 0U;
        vlSelf->CounterModule__DOT__secondsReg = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSelf->io_reset) | (~ (IData)(vlSelf->io_enable)))))) {
            __Vdly__CounterModule__DOT__tick = (0x7fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->CounterModule__DOT__tick)));
        }
        if (vlSelf->io_reset) {
            vlSelf->CounterModule__DOT__hoursReg = 0U;
            vlSelf->CounterModule__DOT__minutesReg = 0U;
            vlSelf->CounterModule__DOT__secondsReg = 0U;
        }
    }
    vlSelf->CounterModule__DOT__tick = __Vdly__CounterModule__DOT__tick;
    vlSelf->io_hour = vlSelf->CounterModule__DOT__hoursReg;
    __Vtemp_ha3b2720e__0[0U] = 0xc0c4a7c0U;
    __Vtemp_ha3b2720e__0[1U] = 0x801f8124U;
    __Vtemp_ha3b2720e__0[2U] = 0xffffffc2U;
    __Vtemp_ha3b2720e__0[3U] = 0xffffU;
    vlSelf->io_led_hour1 = ((0x6fU >= (0x7fU & ((IData)(7U) 
                                                * (0xfU 
                                                   & VL_MODDIV_III(7, (IData)(vlSelf->CounterModule__DOT__hoursReg), (IData)(0xaU))))))
                             ? (0x7fU & (((0U == (0x1fU 
                                                  & ((IData)(7U) 
                                                     * 
                                                     (0xfU 
                                                      & VL_MODDIV_III(7, (IData)(vlSelf->CounterModule__DOT__hoursReg), (IData)(0xaU))))))
                                           ? 0U : (
                                                   __Vtemp_ha3b2720e__0[
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
                                         | (__Vtemp_ha3b2720e__0[
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
                             ? 0x40U : ((1U == (0x7fU 
                                                & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__hoursReg), (IData)(0xaU))))
                                         ? 0x4fU : 
                                        ((2U == (0x7fU 
                                                 & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__hoursReg), (IData)(0xaU))))
                                          ? 0x12U : 
                                         ((3U == (0x7fU 
                                                  & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__hoursReg), (IData)(0xaU))))
                                           ? 6U : (
                                                   (4U 
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
                                                         ? 5U
                                                         : 0x7fU))))))))));
    vlSelf->io_minutes = vlSelf->CounterModule__DOT__minutesReg;
    __Vtemp_ha3b2720e__1[0U] = 0xc0c4a7c0U;
    __Vtemp_ha3b2720e__1[1U] = 0x801f8124U;
    __Vtemp_ha3b2720e__1[2U] = 0xffffffc2U;
    __Vtemp_ha3b2720e__1[3U] = 0xffffU;
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
                                             (__Vtemp_ha3b2720e__1[
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
                                            | (__Vtemp_ha3b2720e__1[
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
                                ? 0x40U : ((1U == (0x7fU 
                                                   & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__minutesReg), (IData)(0xaU))))
                                            ? 0x4fU
                                            : ((2U 
                                                == 
                                                (0x7fU 
                                                 & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__minutesReg), (IData)(0xaU))))
                                                ? 0x12U
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x7fU 
                                                     & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__minutesReg), (IData)(0xaU))))
                                                    ? 6U
                                                    : 
                                                   ((4U 
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
                                                          ? 5U
                                                          : 0x7fU))))))))));
    vlSelf->io_second = vlSelf->CounterModule__DOT__secondsReg;
    __Vtemp_ha3b2720e__2[0U] = 0xc0c4a7c0U;
    __Vtemp_ha3b2720e__2[1U] = 0x801f8124U;
    __Vtemp_ha3b2720e__2[2U] = 0xffffffc2U;
    __Vtemp_ha3b2720e__2[3U] = 0xffffU;
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
                                            (__Vtemp_ha3b2720e__2[
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
                                           | (__Vtemp_ha3b2720e__2[
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
                               ? 0x40U : ((1U == (0x7fU 
                                                  & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__secondsReg), (IData)(0xaU))))
                                           ? 0x4fU : 
                                          ((2U == (0x7fU 
                                                   & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__secondsReg), (IData)(0xaU))))
                                            ? 0x12U
                                            : ((3U 
                                                == 
                                                (0x7fU 
                                                 & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__secondsReg), (IData)(0xaU))))
                                                ? 6U
                                                : (
                                                   (4U 
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
                                                         ? 5U
                                                         : 0x7fU))))))))));
}

void VCounterModule___024root___eval_nba(VCounterModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCounterModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounterModule___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VCounterModule___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VCounterModule___024root___eval_triggers__act(VCounterModule___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VCounterModule___024root___dump_triggers__act(VCounterModule___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VCounterModule___024root___dump_triggers__nba(VCounterModule___024root* vlSelf);
#endif  // VL_DEBUG

void VCounterModule___024root___eval(VCounterModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCounterModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounterModule___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VCounterModule___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VCounterModule___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/CounterModule.sv", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VCounterModule___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VCounterModule___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/CounterModule.sv", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VCounterModule___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VCounterModule___024root___eval_debug_assertions(VCounterModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCounterModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounterModule___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_enable & 0xfeU))) {
        Verilated::overWidthError("io_enable");}
    if (VL_UNLIKELY((vlSelf->io_reset & 0xfeU))) {
        Verilated::overWidthError("io_reset");}
}
#endif  // VL_DEBUG
