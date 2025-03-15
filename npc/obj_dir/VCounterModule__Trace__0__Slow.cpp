// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VCounterModule__Syms.h"


VL_ATTR_COLD void VCounterModule___024root__trace_init_sub__TOP__0(VCounterModule___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCounterModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounterModule___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+10,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+12,"io_second",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+13,"io_minutes",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+14,"io_hour",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+15,"io_enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"io_reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+17,"io_led_second1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+18,"io_led_second2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+19,"io_led_minutes1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+20,"io_led_minutes2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+21,"io_led_hour1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+22,"io_led_hour2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->pushNamePrefix("CounterModule ");
    tracep->declBit(c+10,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+12,"io_second",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+13,"io_minutes",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+14,"io_hour",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+15,"io_enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"io_reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+17,"io_led_second1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+18,"io_led_second2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+19,"io_led_minutes1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+20,"io_led_minutes2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+21,"io_led_hour1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+22,"io_led_hour2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1,"secondsReg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+2,"minutesReg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+3,"hoursReg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+4,"secOnes",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+5,"secTens",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+6,"minOnes",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+7,"minTens",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+8,"hourOnes",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+9,"hourTens",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VCounterModule___024root__trace_init_top(VCounterModule___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCounterModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounterModule___024root__trace_init_top\n"); );
    // Body
    VCounterModule___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VCounterModule___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VCounterModule___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VCounterModule___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void VCounterModule___024root__trace_register(VCounterModule___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCounterModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounterModule___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VCounterModule___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VCounterModule___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VCounterModule___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VCounterModule___024root__trace_full_sub_0(VCounterModule___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void VCounterModule___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounterModule___024root__trace_full_top_0\n"); );
    // Init
    VCounterModule___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCounterModule___024root*>(voidSelf);
    VCounterModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCounterModule___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCounterModule___024root__trace_full_sub_0(VCounterModule___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCounterModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounterModule___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->CounterModule__DOT__secondsReg),7);
    bufp->fullCData(oldp+2,(vlSelf->CounterModule__DOT__minutesReg),7);
    bufp->fullCData(oldp+3,(vlSelf->CounterModule__DOT__hoursReg),7);
    bufp->fullCData(oldp+4,((0x7fU & VL_MODDIV_III(7, (IData)(vlSelf->CounterModule__DOT__secondsReg), (IData)(0xaU)))),7);
    bufp->fullCData(oldp+5,((0x7fU & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__secondsReg), (IData)(0xaU)))),7);
    bufp->fullCData(oldp+6,((0x7fU & VL_MODDIV_III(7, (IData)(vlSelf->CounterModule__DOT__minutesReg), (IData)(0xaU)))),7);
    bufp->fullCData(oldp+7,((0x7fU & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__minutesReg), (IData)(0xaU)))),7);
    bufp->fullCData(oldp+8,((0x7fU & VL_MODDIV_III(7, (IData)(vlSelf->CounterModule__DOT__hoursReg), (IData)(0xaU)))),7);
    bufp->fullCData(oldp+9,((0x7fU & VL_DIV_III(7, (IData)(vlSelf->CounterModule__DOT__hoursReg), (IData)(0xaU)))),7);
    bufp->fullBit(oldp+10,(vlSelf->clock));
    bufp->fullBit(oldp+11,(vlSelf->reset));
    bufp->fullCData(oldp+12,(vlSelf->io_second),7);
    bufp->fullCData(oldp+13,(vlSelf->io_minutes),7);
    bufp->fullCData(oldp+14,(vlSelf->io_hour),7);
    bufp->fullBit(oldp+15,(vlSelf->io_enable));
    bufp->fullBit(oldp+16,(vlSelf->io_reset));
    bufp->fullCData(oldp+17,(vlSelf->io_led_second1),7);
    bufp->fullCData(oldp+18,(vlSelf->io_led_second2),7);
    bufp->fullCData(oldp+19,(vlSelf->io_led_minutes1),7);
    bufp->fullCData(oldp+20,(vlSelf->io_led_minutes2),7);
    bufp->fullCData(oldp+21,(vlSelf->io_led_hour1),7);
    bufp->fullCData(oldp+22,(vlSelf->io_led_hour2),7);
}
