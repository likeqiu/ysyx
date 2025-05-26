// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25040109_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25040109_top__Syms.h"
#include "Vysyx_25040109_top___024root.h"

extern "C" void pmem_read(int addr, int* data);

VL_INLINE_OPT void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__pmem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__pmem_read_TOP\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int data__Vcvt;
    pmem_read(addr__Vcvt, &data__Vcvt);
    data = data__Vcvt;
}

extern "C" void pmem_write(int addr, int data, int len);

VL_INLINE_OPT void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__pmem_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ len) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__pmem_write_TOP\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int data__Vcvt;
    for (size_t data__Vidx = 0; data__Vidx < 1; ++data__Vidx) data__Vcvt = data;
    int len__Vcvt;
    for (size_t len__Vidx = 0; len__Vidx < 1; ++len__Vidx) len__Vcvt = len;
    pmem_write(addr__Vcvt, data__Vcvt, len__Vcvt);
}

extern "C" int printf_finish(int inst);

VL_INLINE_OPT void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__printf_finish_TOP(IData/*31:0*/ inst, IData/*31:0*/ &printf_finish__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__printf_finish_TOP\n"); );
    // Body
    int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    int printf_finish__Vfuncrtn__Vcvt;
    printf_finish__Vfuncrtn__Vcvt = printf_finish(inst__Vcvt);
    printf_finish__Vfuncrtn = printf_finish__Vfuncrtn__Vcvt;
}

extern "C" int monitor_pc(int pc);

VL_INLINE_OPT void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__monitor_pc_TOP(IData/*31:0*/ pc, IData/*31:0*/ &monitor_pc__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__monitor_pc_TOP\n"); );
    // Body
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int monitor_pc__Vfuncrtn__Vcvt;
    monitor_pc__Vfuncrtn__Vcvt = monitor_pc(pc__Vcvt);
    monitor_pc__Vfuncrtn = monitor_pc__Vfuncrtn__Vcvt;
}

extern "C" void sdb_read_reg(int index, int* value);

VL_INLINE_OPT void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(IData/*31:0*/ index, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP\n"); );
    // Body
    int index__Vcvt;
    for (size_t index__Vidx = 0; index__Vidx < 1; ++index__Vidx) index__Vcvt = index;
    int value__Vcvt;
    sdb_read_reg(index__Vcvt, &value__Vcvt);
    value = value__Vcvt;
}

extern "C" void sdb_scan_mem(int addr, int* value);

VL_INLINE_OPT void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_scan_mem_TOP(IData/*31:0*/ addr, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_scan_mem_TOP\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int value__Vcvt;
    sdb_scan_mem(addr__Vcvt, &value__Vcvt);
    value = value__Vcvt;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25040109_top___024root___dump_triggers__act(Vysyx_25040109_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25040109_top___024root___eval_triggers__act(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25040109_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}
