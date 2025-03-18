// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*6:0*/, 256> Vtop__ConstPool__TABLE_h15f1b71f_0;
extern const VlUnpacked<CData/*6:0*/, 32> Vtop__ConstPool__TABLE_hb825249e_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*4:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*4:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*7:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
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
    CData/*2:0*/ __Vdlyvdim0__top__DOT__fifo__v0;
    __Vdlyvdim0__top__DOT__fifo__v0 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__fifo__v0;
    __Vdlyvval__top__DOT__fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__fifo__v0;
    __Vdlyvset__top__DOT__fifo__v0 = 0;
    // Body
    __Vdly__top__DOT__ps2_clk_sync = vlSelf->top__DOT__ps2_clk_sync;
    __Vdly__overflow = vlSelf->overflow;
    __Vdly__ready = vlSelf->ready;
    __Vdly__top__DOT__w_ptr = vlSelf->top__DOT__w_ptr;
    __Vdly__top__DOT__count = vlSelf->top__DOT__count;
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
        vlSelf->top__DOT__release_detected = 0U;
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
                    VL_WRITEF("buffer %x\n",8,(0xffU 
                                               & ((IData)(vlSelf->top__DOT__buffer) 
                                                  >> 1U)));
                    if (((0xf0U != (0xffU & ((IData)(vlSelf->top__DOT__buffer) 
                                             >> 1U))) 
                         & (0xf0U != (0xffU & ((IData)(vlSelf->top__DOT__last_buffer) 
                                               >> 1U))))) {
                        vlSelf->top__DOT__button_times 
                            = (0xffU & (((IData)(vlSelf->top__DOT__last_buffer) 
                                         != (IData)(vlSelf->top__DOT__buffer))
                                         ? ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__button_times))
                                         : (IData)(vlSelf->top__DOT__button_times)));
                        __Vdlyvval__top__DOT__fifo__v0 
                            = (0xffU & ((IData)(vlSelf->top__DOT__buffer) 
                                        >> 1U));
                        __Vdlyvset__top__DOT__fifo__v0 = 1U;
                        __Vdlyvdim0__top__DOT__fifo__v0 
                            = (7U & (IData)(vlSelf->top__DOT__w_ptr));
                        __Vdly__ready = 1U;
                        vlSelf->top__DOT__release_detected = 0U;
                        __Vdly__top__DOT__w_ptr = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__w_ptr)));
                        vlSelf->top__DOT__last_buffer 
                            = vlSelf->top__DOT__buffer;
                        __Vdly__overflow = ((IData)(vlSelf->overflow) 
                                            | ((IData)(vlSelf->top__DOT__r_ptr) 
                                               == (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__w_ptr)))));
                    }
                    if ((0xf0U == (0xffU & ((IData)(vlSelf->top__DOT__buffer) 
                                            >> 1U)))) {
                        vlSelf->top__DOT__release_detected = 1U;
                    }
                    vlSelf->top__DOT__last_buffer = vlSelf->top__DOT__buffer;
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
    vlSelf->top__DOT__r_ptr = __Vdly__top__DOT__r_ptr;
    if (__Vdlyvset__top__DOT__fifo__v0) {
        vlSelf->top__DOT__fifo[__Vdlyvdim0__top__DOT__fifo__v0] 
            = __Vdlyvval__top__DOT__fifo__v0;
    }
    __Vtableidx5 = (0xffU & VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__button_times), (IData)(0xaU)));
    vlSelf->seg4 = Vtop__ConstPool__TABLE_h15f1b71f_0
        [__Vtableidx5];
    __Vtableidx6 = (0xffU & VL_DIV_III(32, (IData)(vlSelf->top__DOT__button_times), (IData)(0xaU)));
    vlSelf->seg5 = Vtop__ConstPool__TABLE_h15f1b71f_0
        [__Vtableidx6];
    vlSelf->date = vlSelf->top__DOT__fifo[(7U & (IData)(vlSelf->top__DOT__r_ptr))];
    __Vtableidx1 = ((0x1eU & ((IData)(vlSelf->date) 
                              << 1U)) | (IData)(vlSelf->top__DOT__release_detected));
    vlSelf->seg0 = Vtop__ConstPool__TABLE_hb825249e_0
        [__Vtableidx1];
    __Vtableidx2 = ((0x1eU & ((IData)(vlSelf->date) 
                              >> 3U)) | (IData)(vlSelf->top__DOT__release_detected));
    vlSelf->seg1 = Vtop__ConstPool__TABLE_hb825249e_0
        [__Vtableidx2];
    vlSelf->top__DOT__ascll = (0xffU & ((0x1cU > (IData)(vlSelf->date))
                                         ? ((IData)(0x1dU) 
                                            + (IData)(vlSelf->date))
                                         : ((IData)(0x24U) 
                                            + (IData)(vlSelf->date))));
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("ascll=%3#,three=%2#,four=%2#\n",
                  8,vlSelf->top__DOT__ascll,4,(0xfU 
                                               & (IData)(vlSelf->top__DOT__ascll)),
                  4,(0xfU & ((IData)(vlSelf->top__DOT__ascll) 
                             >> 4U)));
    }
    __Vtableidx3 = ((0x1eU & ((IData)(vlSelf->top__DOT__ascll) 
                              << 1U)) | (IData)(vlSelf->top__DOT__release_detected));
    vlSelf->seg2 = Vtop__ConstPool__TABLE_hb825249e_0
        [__Vtableidx3];
    __Vtableidx4 = ((0x1eU & ((IData)(vlSelf->top__DOT__ascll) 
                              >> 3U)) | (IData)(vlSelf->top__DOT__release_detected));
    vlSelf->seg3 = Vtop__ConstPool__TABLE_hb825249e_0
        [__Vtableidx4];
}
