// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VCounterModule__Syms.h"


void VCounterModule___024root__trace_chg_sub_0(VCounterModule___024root* vlSelf, VerilatedFst::Buffer* bufp);

void VCounterModule___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounterModule___024root__trace_chg_top_0\n"); );
    // Init
    VCounterModule___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCounterModule___024root*>(voidSelf);
    VCounterModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VCounterModule___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VCounterModule___024root__trace_chg_sub_0(VCounterModule___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCounterModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounterModule___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->CounterModule__DOT__secondsReg),7);
        bufp->chgCData(oldp+1,(vlSelf->CounterModule__DOT__minutesReg),7);
        bufp->chgCData(oldp+2,(vlSelf->CounterModule__DOT__hoursReg),7);
        bufp->chgIData(oldp+3,(vlSelf->CounterModule__DOT__tick),32);
        bufp->chgCData(oldp+4,((0x7fU & VL_MODDIV_III(7, (IData)(vlSelf->CounterModule__DOT__secondsReg), (IData)(0xaU)))),7);
        bufp->chgCData(oldp+5,((0x7fU & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__secondsReg), (IData)(0xaU)))),7);
        bufp->chgCData(oldp+6,((0x7fU & VL_MODDIV_III(7, (IData)(vlSelf->CounterModule__DOT__minutesReg), (IData)(0xaU)))),7);
        bufp->chgCData(oldp+7,((0x7fU & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__minutesReg), (IData)(0xaU)))),7);
        bufp->chgCData(oldp+8,((0x7fU & VL_MODDIV_III(7, (IData)(vlSelf->CounterModule__DOT__hoursReg), (IData)(0xaU)))),7);
        bufp->chgCData(oldp+9,((0x7fU & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__hoursReg), (IData)(0xaU)))),7);
    }
    bufp->chgBit(oldp+10,(vlSelf->clock));
    bufp->chgBit(oldp+11,(vlSelf->reset));
    bufp->chgCData(oldp+12,(vlSelf->io_second),7);
    bufp->chgCData(oldp+13,(vlSelf->io_minutes),7);
    bufp->chgCData(oldp+14,(vlSelf->io_hour),7);
    bufp->chgBit(oldp+15,(vlSelf->io_enable));
    bufp->chgBit(oldp+16,(vlSelf->io_reset));
    bufp->chgCData(oldp+17,(vlSelf->io_led_second1),7);
    bufp->chgCData(oldp+18,(vlSelf->io_led_second2),7);
    bufp->chgCData(oldp+19,(vlSelf->io_led_minutes1),7);
    bufp->chgCData(oldp+20,(vlSelf->io_led_minutes2),7);
    bufp->chgCData(oldp+21,(vlSelf->io_led_hour1),7);
    bufp->chgCData(oldp+22,(vlSelf->io_led_hour2),7);
}

void VCounterModule___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounterModule___024root__trace_cleanup\n"); );
    // Init
    VCounterModule___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCounterModule___024root*>(voidSelf);
    VCounterModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
