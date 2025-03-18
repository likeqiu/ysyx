// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*6:0*/, 256> Vtop__ConstPool__TABLE_h15f1b71f_0;
extern const VlUnpacked<CData/*6:0*/, 32> Vtop__ConstPool__TABLE_h7b2c8753_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*7:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*2:0*/ __Vdly__top__DOT__ps2_clk_sync;
    __Vdly__top__DOT__ps2_clk_sync = 0;
    CData/*3:0*/ __Vdly__top__DOT__count;
    __Vdly__top__DOT__count = 0;
    CData/*3:0*/ __Vdly__top__DOT__w_ptr;
    __Vdly__top__DOT__w_ptr = 0;
    CData/*3:0*/ __Vdly__top__DOT__r_ptr;
    __Vdly__top__DOT__r_ptr = 0;
    CData/*0:0*/ __Vdly__ready;
    __Vdly__ready = 0;
    CData/*0:0*/ __Vdly__overflow;
    __Vdly__overflow = 0;
    CData/*0:0*/ __Vdly__top__DOT__release_detected;
    __Vdly__top__DOT__release_detected = 0;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__fifo__v0;
    __Vdlyvdim0__top__DOT__fifo__v0 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__fifo__v0;
    __Vdlyvval__top__DOT__fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__fifo__v0;
    __Vdlyvset__top__DOT__fifo__v0 = 0;
    SData/*9:0*/ __Vdly__top__DOT__last_buffer;
    __Vdly__top__DOT__last_buffer = 0;
    // Body
    __Vdly__top__DOT__ps2_clk_sync = vlSelf->top__DOT__ps2_clk_sync;
    __Vdly__top__DOT__last_buffer = vlSelf->top__DOT__last_buffer;
    __Vdly__overflow = vlSelf->overflow;
    __Vdly__ready = vlSelf->ready;
    __Vdly__top__DOT__w_ptr = vlSelf->top__DOT__w_ptr;
    __Vdly__top__DOT__count = vlSelf->top__DOT__count;
    __Vdly__top__DOT__release_detected = vlSelf->top__DOT__release_detected;
    __Vdly__top__DOT__r_ptr = vlSelf->top__DOT__r_ptr;
    __Vdlyvset__top__DOT__fifo__v0 = 0U;
    __Vdly__top__DOT__ps2_clk_sync = ((6U & ((IData)(vlSelf->top__DOT__ps2_clk_sync) 
                                             << 1U)) 
                                      | (IData)(vlSelf->ps2_clk));
    if (vlSelf->clrk) {
        __Vdly__top__DOT__count = 0U;
        __Vdly__top__DOT__w_ptr = 0U;
        __Vdly__top__DOT__r_ptr = 0U;
        __Vdly__ready = 0U;
        __Vdly__overflow = 0U;
        __Vdly__top__DOT__release_detected = 0U;
        vlSelf->top__DOT__key_pressed = 0U;
    } else {
        if (vlSelf->ready) {
            if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->nextdate_n))))) {
                __Vdly__top__DOT__r_ptr = (0xfU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__r_ptr)));
                VL_WRITEF("date %x\n",8,vlSelf->date);
                if (((IData)(vlSelf->top__DOT__w_ptr) 
                     == (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__r_ptr))))) {
                    __Vdly__ready = 0U;
                }
            }
        }
        if ((IData)((4U == (6U & (IData)(vlSelf->top__DOT__ps2_clk_sync))))) {
            if ((0xaU == (IData)(vlSelf->top__DOT__count))) {
                if (VL_UNLIKELY((((~ (IData)(vlSelf->top__DOT__buffer)) 
                                  & (IData)(vlSelf->ps2_date)) 
                                 & VL_REDXOR_32((0x1ffU 
                                                 & ((IData)(vlSelf->top__DOT__buffer) 
                                                    >> 1U)))))) {
                    VL_WRITEF("receive %x\n",8,(0xffU 
                                                & ((IData)(vlSelf->top__DOT__buffer) 
                                                   >> 1U)));
                    if (((0xf0U != (0xffU & ((IData)(vlSelf->top__DOT__buffer) 
                                             >> 1U))) 
                         & (0xf0U != (0xffU & ((IData)(vlSelf->top__DOT__last_buffer) 
                                               >> 1U))))) {
                        __Vdlyvval__top__DOT__fifo__v0 
                            = (0xffU & ((IData)(vlSelf->top__DOT__buffer) 
                                        >> 1U));
                        __Vdlyvset__top__DOT__fifo__v0 = 1U;
                        __Vdlyvdim0__top__DOT__fifo__v0 
                            = (7U & (IData)(vlSelf->top__DOT__w_ptr));
                        __Vdly__top__DOT__last_buffer 
                            = vlSelf->top__DOT__buffer;
                        __Vdly__ready = 1U;
                        __Vdly__top__DOT__release_detected = 0U;
                        __Vdly__top__DOT__w_ptr = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__w_ptr)));
                        __Vdly__overflow = ((IData)(vlSelf->overflow) 
                                            | ((IData)(vlSelf->top__DOT__r_ptr) 
                                               == (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__w_ptr)))));
                    }
                    if ((0xf0U == (0xffU & ((IData)(vlSelf->top__DOT__buffer) 
                                            >> 1U)))) {
                        __Vdly__top__DOT__release_detected = 1U;
                    } else if (((~ (IData)(vlSelf->top__DOT__release_detected)) 
                                & (0xf0U != (0xffU 
                                             & ((IData)(vlSelf->top__DOT__buffer) 
                                                >> 1U))))) {
                        if (((((0xffU & ((IData)(vlSelf->top__DOT__last_buffer) 
                                         >> 1U)) != 
                               (0xffU & ((IData)(vlSelf->top__DOT__buffer) 
                                         >> 1U))) & 
                              (0xf0U != (0xffU & ((IData)(vlSelf->top__DOT__buffer) 
                                                  >> 1U)))) 
                             & (0xf0U != (0xffU & ((IData)(vlSelf->top__DOT__last_buffer) 
                                                   >> 1U))))) {
                            vlSelf->top__DOT__button_times 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__button_times)));
                        }
                    }
                    __Vdly__top__DOT__last_buffer = vlSelf->top__DOT__buffer;
                }
                __Vdly__top__DOT__count = 0U;
            } else {
                __Vdly__top__DOT__w_ptr = vlSelf->top__DOT__w_ptr;
                __Vdly__top__DOT__r_ptr = vlSelf->top__DOT__r_ptr;
                vlSelf->top__DOT____Vlvbound_h1a91ade8__0 
                    = vlSelf->ps2_date;
                if (VL_LIKELY((9U >= (IData)(vlSelf->top__DOT__count)))) {
                    vlSelf->top__DOT__buffer = (((~ 
                                                  ((IData)(1U) 
                                                   << (IData)(vlSelf->top__DOT__count))) 
                                                 & (IData)(vlSelf->top__DOT__buffer)) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSelf->top__DOT____Vlvbound_h1a91ade8__0) 
                                                      << (IData)(vlSelf->top__DOT__count))));
                }
                __Vdly__top__DOT__count = (0xfU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__count)));
            }
        }
    }
    vlSelf->top__DOT__count = __Vdly__top__DOT__count;
    vlSelf->top__DOT__w_ptr = __Vdly__top__DOT__w_ptr;
    vlSelf->ready = __Vdly__ready;
    vlSelf->overflow = __Vdly__overflow;
    vlSelf->top__DOT__ps2_clk_sync = __Vdly__top__DOT__ps2_clk_sync;
    vlSelf->top__DOT__last_buffer = __Vdly__top__DOT__last_buffer;
    vlSelf->top__DOT__release_detected = __Vdly__top__DOT__release_detected;
    vlSelf->top__DOT__r_ptr = __Vdly__top__DOT__r_ptr;
    if (__Vdlyvset__top__DOT__fifo__v0) {
        vlSelf->top__DOT__fifo[__Vdlyvdim0__top__DOT__fifo__v0] 
            = __Vdlyvval__top__DOT__fifo__v0;
    }
    __Vtableidx3 = (0xffU & VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__button_times), (IData)(0xaU)));
    vlSelf->seg4 = Vtop__ConstPool__TABLE_h15f1b71f_0
        [__Vtableidx3];
    __Vtableidx4 = (0xffU & VL_DIV_III(32, (IData)(vlSelf->top__DOT__button_times), (IData)(0xaU)));
    vlSelf->seg5 = Vtop__ConstPool__TABLE_h15f1b71f_0
        [__Vtableidx4];
    vlSelf->date = vlSelf->top__DOT__fifo[(7U & (IData)(vlSelf->top__DOT__r_ptr))];
    if ((0x2fU != (0xffU & ((IData)(0x2fU) + (IData)(vlSelf->date))))) {
        vlSelf->seg2 = ((0x80U & VL_MODDIV_III(32, 
                                               (0xffU 
                                                & ((IData)(0x2fU) 
                                                   + (IData)(vlSelf->date))), (IData)(0xaU)))
                         ? 0x7fU : ((0x40U & VL_MODDIV_III(32, 
                                                           (0xffU 
                                                            & ((IData)(0x2fU) 
                                                               + (IData)(vlSelf->date))), (IData)(0xaU)))
                                     ? 0x7fU : ((0x20U 
                                                 & VL_MODDIV_III(32, 
                                                                 (0xffU 
                                                                  & ((IData)(0x2fU) 
                                                                     + (IData)(vlSelf->date))), (IData)(0xaU)))
                                                 ? 0x7fU
                                                 : 
                                                ((0x10U 
                                                  & VL_MODDIV_III(32, 
                                                                  (0xffU 
                                                                   & ((IData)(0x2fU) 
                                                                      + (IData)(vlSelf->date))), (IData)(0xaU)))
                                                  ? 0x7fU
                                                  : 
                                                 ((8U 
                                                   & VL_MODDIV_III(32, 
                                                                   (0xffU 
                                                                    & ((IData)(0x2fU) 
                                                                       + (IData)(vlSelf->date))), (IData)(0xaU)))
                                                   ? 
                                                  ((4U 
                                                    & VL_MODDIV_III(32, 
                                                                    (0xffU 
                                                                     & ((IData)(0x2fU) 
                                                                        + (IData)(vlSelf->date))), (IData)(0xaU)))
                                                    ? 0x7fU
                                                    : 
                                                   ((2U 
                                                     & VL_MODDIV_III(32, 
                                                                     (0xffU 
                                                                      & ((IData)(0x2fU) 
                                                                         + (IData)(vlSelf->date))), (IData)(0xaU)))
                                                     ? 0x7fU
                                                     : 
                                                    ((1U 
                                                      & VL_MODDIV_III(32, 
                                                                      (0xffU 
                                                                       & ((IData)(0x2fU) 
                                                                          + (IData)(vlSelf->date))), (IData)(0xaU)))
                                                      ? 0xcU
                                                      : 0U)))
                                                   : 
                                                  ((4U 
                                                    & VL_MODDIV_III(32, 
                                                                    (0xffU 
                                                                     & ((IData)(0x2fU) 
                                                                        + (IData)(vlSelf->date))), (IData)(0xaU)))
                                                    ? 
                                                   ((2U 
                                                     & VL_MODDIV_III(32, 
                                                                     (0xffU 
                                                                      & ((IData)(0x2fU) 
                                                                         + (IData)(vlSelf->date))), (IData)(0xaU)))
                                                     ? 
                                                    ((1U 
                                                      & VL_MODDIV_III(32, 
                                                                      (0xffU 
                                                                       & ((IData)(0x2fU) 
                                                                          + (IData)(vlSelf->date))), (IData)(0xaU)))
                                                      ? 0xfU
                                                      : 0x60U)
                                                     : 
                                                    ((1U 
                                                      & VL_MODDIV_III(32, 
                                                                      (0xffU 
                                                                       & ((IData)(0x2fU) 
                                                                          + (IData)(vlSelf->date))), (IData)(0xaU)))
                                                      ? 0x24U
                                                      : 0x4cU))
                                                    : 
                                                   ((2U 
                                                     & VL_MODDIV_III(32, 
                                                                     (0xffU 
                                                                      & ((IData)(0x2fU) 
                                                                         + (IData)(vlSelf->date))), (IData)(0xaU)))
                                                     ? 
                                                    ((1U 
                                                      & VL_MODDIV_III(32, 
                                                                      (0xffU 
                                                                       & ((IData)(0x2fU) 
                                                                          + (IData)(vlSelf->date))), (IData)(0xaU)))
                                                      ? 6U
                                                      : 0x12U)
                                                     : 
                                                    ((1U 
                                                      & VL_MODDIV_III(32, 
                                                                      (0xffU 
                                                                       & ((IData)(0x2fU) 
                                                                          + (IData)(vlSelf->date))), (IData)(0xaU)))
                                                      ? 0x4fU
                                                      : 1U))))))));
        vlSelf->seg3 = ((0x80U & VL_DIV_III(32, (0xffU 
                                                 & ((IData)(0x2fU) 
                                                    + (IData)(vlSelf->date))), (IData)(0xaU)))
                         ? 0x7fU : ((0x40U & VL_DIV_III(32, 
                                                        (0xffU 
                                                         & ((IData)(0x2fU) 
                                                            + (IData)(vlSelf->date))), (IData)(0xaU)))
                                     ? 0x7fU : ((0x20U 
                                                 & VL_DIV_III(32, 
                                                              (0xffU 
                                                               & ((IData)(0x2fU) 
                                                                  + (IData)(vlSelf->date))), (IData)(0xaU)))
                                                 ? 0x7fU
                                                 : 
                                                ((0x10U 
                                                  & VL_DIV_III(32, 
                                                               (0xffU 
                                                                & ((IData)(0x2fU) 
                                                                   + (IData)(vlSelf->date))), (IData)(0xaU)))
                                                  ? 0x7fU
                                                  : 
                                                 ((8U 
                                                   & VL_DIV_III(32, 
                                                                (0xffU 
                                                                 & ((IData)(0x2fU) 
                                                                    + (IData)(vlSelf->date))), (IData)(0xaU)))
                                                   ? 
                                                  ((4U 
                                                    & VL_DIV_III(32, 
                                                                 (0xffU 
                                                                  & ((IData)(0x2fU) 
                                                                     + (IData)(vlSelf->date))), (IData)(0xaU)))
                                                    ? 0x7fU
                                                    : 
                                                   ((2U 
                                                     & VL_DIV_III(32, 
                                                                  (0xffU 
                                                                   & ((IData)(0x2fU) 
                                                                      + (IData)(vlSelf->date))), (IData)(0xaU)))
                                                     ? 0x7fU
                                                     : 
                                                    ((1U 
                                                      & VL_DIV_III(32, 
                                                                   (0xffU 
                                                                    & ((IData)(0x2fU) 
                                                                       + (IData)(vlSelf->date))), (IData)(0xaU)))
                                                      ? 0xcU
                                                      : 0U)))
                                                   : 
                                                  ((4U 
                                                    & VL_DIV_III(32, 
                                                                 (0xffU 
                                                                  & ((IData)(0x2fU) 
                                                                     + (IData)(vlSelf->date))), (IData)(0xaU)))
                                                    ? 
                                                   ((2U 
                                                     & VL_DIV_III(32, 
                                                                  (0xffU 
                                                                   & ((IData)(0x2fU) 
                                                                      + (IData)(vlSelf->date))), (IData)(0xaU)))
                                                     ? 
                                                    ((1U 
                                                      & VL_DIV_III(32, 
                                                                   (0xffU 
                                                                    & ((IData)(0x2fU) 
                                                                       + (IData)(vlSelf->date))), (IData)(0xaU)))
                                                      ? 0xfU
                                                      : 0x60U)
                                                     : 
                                                    ((1U 
                                                      & VL_DIV_III(32, 
                                                                   (0xffU 
                                                                    & ((IData)(0x2fU) 
                                                                       + (IData)(vlSelf->date))), (IData)(0xaU)))
                                                      ? 0x24U
                                                      : 0x4cU))
                                                    : 
                                                   ((2U 
                                                     & VL_DIV_III(32, 
                                                                  (0xffU 
                                                                   & ((IData)(0x2fU) 
                                                                      + (IData)(vlSelf->date))), (IData)(0xaU)))
                                                     ? 
                                                    ((1U 
                                                      & VL_DIV_III(32, 
                                                                   (0xffU 
                                                                    & ((IData)(0x2fU) 
                                                                       + (IData)(vlSelf->date))), (IData)(0xaU)))
                                                      ? 6U
                                                      : 0x12U)
                                                     : 
                                                    ((1U 
                                                      & VL_DIV_III(32, 
                                                                   (0xffU 
                                                                    & ((IData)(0x2fU) 
                                                                       + (IData)(vlSelf->date))), (IData)(0xaU)))
                                                      ? 0x4fU
                                                      : 1U))))))));
    } else {
        vlSelf->seg2 = 0x7fU;
        vlSelf->seg3 = 0x7fU;
    }
    __Vtableidx1 = ((0x1eU & ((IData)(vlSelf->date) 
                              << 1U)) | (IData)(vlSelf->top__DOT__release_detected));
    vlSelf->seg0 = Vtop__ConstPool__TABLE_h7b2c8753_0
        [__Vtableidx1];
    __Vtableidx2 = ((0x1eU & ((IData)(vlSelf->date) 
                              >> 3U)) | (IData)(vlSelf->top__DOT__release_detected));
    vlSelf->seg1 = Vtop__ConstPool__TABLE_h7b2c8753_0
        [__Vtableidx2];
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
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
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/keyboard.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/keyboard.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->clrk & 0xfeU))) {
        Verilated::overWidthError("clrk");}
    if (VL_UNLIKELY((vlSelf->nextdate_n & 0xfeU))) {
        Verilated::overWidthError("nextdate_n");}
    if (VL_UNLIKELY((vlSelf->ps2_clk & 0xfeU))) {
        Verilated::overWidthError("ps2_clk");}
    if (VL_UNLIKELY((vlSelf->ps2_date & 0xfeU))) {
        Verilated::overWidthError("ps2_date");}
}
#endif  // VL_DEBUG
