// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    vlSelf->top__DOT__button_times = 0U;
    vlSelf->top__DOT__release_detected = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*6:0*/, 256> Vtop__ConstPool__TABLE_h15f1b71f_0;
extern const VlUnpacked<CData/*6:0*/, 32> Vtop__ConstPool__TABLE_hb825249e_0;
extern const VlUnpacked<CData/*6:0*/, 512> Vtop__ConstPool__TABLE_hfdf29644_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*8:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    SData/*8:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*7:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    __Vtableidx5 = (0xffU & VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__button_times), (IData)(0xaU)));
    vlSelf->seg4 = Vtop__ConstPool__TABLE_h15f1b71f_0
        [__Vtableidx5];
    __Vtableidx6 = (0xffU & VL_DIV_III(32, (IData)(vlSelf->top__DOT__button_times), (IData)(0xaU)));
    vlSelf->seg5 = Vtop__ConstPool__TABLE_h15f1b71f_0
        [__Vtableidx6];
    vlSelf->date = vlSelf->top__DOT__fifo[(7U & (IData)(vlSelf->top__DOT__r_ptr))];
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("ascll=%3#,three=%3#,four=%3#\n",
                  8,(0xffU & ((IData)(0x2fU) + (IData)(vlSelf->date))),
                  8,(0xffU & VL_MODDIV_III(32, (0xffU 
                                                & ((IData)(0x2fU) 
                                                   + (IData)(vlSelf->date))), (IData)(0xaU))),
                  8,(0xffU & VL_DIV_III(32, (0xffU 
                                             & ((IData)(0x2fU) 
                                                + (IData)(vlSelf->date))), (IData)(0xaU))));
    }
    __Vtableidx1 = ((0x1eU & ((IData)(vlSelf->date) 
                              << 1U)) | (IData)(vlSelf->top__DOT__release_detected));
    vlSelf->seg0 = Vtop__ConstPool__TABLE_hb825249e_0
        [__Vtableidx1];
    __Vtableidx2 = ((0x1eU & ((IData)(vlSelf->date) 
                              >> 3U)) | (IData)(vlSelf->top__DOT__release_detected));
    vlSelf->seg1 = Vtop__ConstPool__TABLE_hb825249e_0
        [__Vtableidx2];
    __Vtableidx3 = ((0x1feU & (VL_MODDIV_III(32, (0xffU 
                                                  & ((IData)(0x2fU) 
                                                     + (IData)(vlSelf->date))), (IData)(0xaU)) 
                               << 1U)) | (IData)(vlSelf->top__DOT__release_detected));
    vlSelf->seg2 = Vtop__ConstPool__TABLE_hfdf29644_0
        [__Vtableidx3];
    __Vtableidx4 = ((0x1feU & (VL_DIV_III(32, (0xffU 
                                               & ((IData)(0x2fU) 
                                                  + (IData)(vlSelf->date))), (IData)(0xaU)) 
                               << 1U)) | (IData)(vlSelf->top__DOT__release_detected));
    vlSelf->seg3 = Vtop__ConstPool__TABLE_hfdf29644_0
        [__Vtableidx4];
}
