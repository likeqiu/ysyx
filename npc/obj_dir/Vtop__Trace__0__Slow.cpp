// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+16,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"clrk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"nextdate_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"ps2_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"ps2_date",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+21,"date",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+22,"ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"overflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+24,"seg0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+25,"seg1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+26,"seg2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+27,"seg3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+16,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"clrk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"nextdate_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"ps2_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"ps2_date",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+21,"date",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+22,"ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"overflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+24,"seg0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+25,"seg1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+26,"seg2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+27,"seg3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1,"buffer",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+2+i*1,"fifo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    tracep->declBus(c+10,"w_ptr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,"r_ptr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+12,"count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+13,"ps2_clk_sync",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+14,"last_buffer",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->declBit(c+15,"sampling",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+28,"one",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+29,"two",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+30,"ascll",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+31,"three",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+32,"four",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->pushNamePrefix("first ");
    tracep->declBus(c+28,"num",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+24,"seg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fourth ");
    tracep->declBus(c+32,"num",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+27,"seg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("second ");
    tracep->declBus(c+29,"num",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+25,"seg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("third ");
    tracep->declBus(c+31,"num",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+26,"seg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelf->top__DOT__buffer),10);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__fifo[0]),8);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__fifo[1]),8);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__fifo[2]),8);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__fifo[3]),8);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__fifo[4]),8);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__fifo[5]),8);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__fifo[6]),8);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__fifo[7]),8);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__w_ptr),4);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__r_ptr),4);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__count),4);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__ps2_clk_sync),3);
    bufp->fullSData(oldp+14,(vlSelf->top__DOT__last_buffer),10);
    bufp->fullBit(oldp+15,((IData)((4U == (6U & (IData)(vlSelf->top__DOT__ps2_clk_sync))))));
    bufp->fullBit(oldp+16,(vlSelf->clk));
    bufp->fullBit(oldp+17,(vlSelf->clrk));
    bufp->fullBit(oldp+18,(vlSelf->nextdate_n));
    bufp->fullBit(oldp+19,(vlSelf->ps2_clk));
    bufp->fullBit(oldp+20,(vlSelf->ps2_date));
    bufp->fullCData(oldp+21,(vlSelf->date),8);
    bufp->fullBit(oldp+22,(vlSelf->ready));
    bufp->fullBit(oldp+23,(vlSelf->overflow));
    bufp->fullCData(oldp+24,(vlSelf->seg0),7);
    bufp->fullCData(oldp+25,(vlSelf->seg1),7);
    bufp->fullCData(oldp+26,(vlSelf->seg2),7);
    bufp->fullCData(oldp+27,(vlSelf->seg3),7);
    bufp->fullCData(oldp+28,((0xfU & (IData)(vlSelf->date))),4);
    bufp->fullCData(oldp+29,((0xfU & ((IData)(vlSelf->date) 
                                      >> 4U))),4);
    bufp->fullCData(oldp+30,((0xffU & ((IData)(0x2fU) 
                                       + (IData)(vlSelf->date)))),8);
    bufp->fullCData(oldp+31,((0xfU & VL_MODDIV_III(32, 
                                                   (0xfU 
                                                    & ((IData)(0xfU) 
                                                       + (IData)(vlSelf->date))), (IData)(0xaU)))),4);
    bufp->fullCData(oldp+32,((0xfU & VL_DIV_III(32, 
                                                (0xfU 
                                                 & (((IData)(0x2fU) 
                                                     + (IData)(vlSelf->date)) 
                                                    >> 4U)), (IData)(0xaU)))),4);
}
