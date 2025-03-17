// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

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

extern const VlUnpacked<CData/*6:0*/, 16> Vtop__ConstPool__TABLE_hb1f3222a_0;
extern const VlUnpacked<CData/*6:0*/, 16> Vtop__ConstPool__TABLE_h228bbf13_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelf->date = vlSelf->top__DOT__fifo[(7U & (IData)(vlSelf->top__DOT__r_ptr))];
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff))))) {
        VL_WRITEF("clk: %b, ps2_clk: %b, ps2_data: %b, date: %b, ready: %b\n",
                  1,vlSelf->clk,1,(IData)(vlSelf->ps2_clk),
                  1,vlSelf->ps2_date,8,(IData)(vlSelf->date),
                  1,vlSelf->ready);
    }
    __Vtableidx1 = (0xfU & (IData)(vlSelf->date));
    vlSelf->seg0 = Vtop__ConstPool__TABLE_hb1f3222a_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & ((IData)(vlSelf->date) >> 4U));
    vlSelf->seg1 = Vtop__ConstPool__TABLE_hb1f3222a_0
        [__Vtableidx2];
    __Vtableidx3 = (0xfU & VL_MODDIV_III(32, (0xfU 
                                              & ((IData)(0xfU) 
                                                 + (IData)(vlSelf->date))), (IData)(0xaU)));
    vlSelf->seg2 = Vtop__ConstPool__TABLE_h228bbf13_0
        [__Vtableidx3];
    __Vtableidx4 = (0xfU & VL_DIV_III(32, (0xfU & (
                                                   ((IData)(0x2fU) 
                                                    + (IData)(vlSelf->date)) 
                                                   >> 4U)), (IData)(0xaU)));
    vlSelf->seg3 = Vtop__ConstPool__TABLE_h228bbf13_0
        [__Vtableidx4];
}
