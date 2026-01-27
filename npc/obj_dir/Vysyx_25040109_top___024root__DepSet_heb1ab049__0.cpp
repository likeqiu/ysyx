// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25040109_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25040109_top__Syms.h"
#include "Vysyx_25040109_top___024root.h"

extern "C" void difftest_skip_ref();

VL_INLINE_OPT void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__difftest_skip_ref_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__difftest_skip_ref_TOP\n"); );
    // Body
    difftest_skip_ref();
}

extern "C" int printf_finish(int inst);

VL_INLINE_OPT void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__printf_finish_TOP(IData/*31:0*/ inst, IData/*31:0*/ &printf_finish__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__printf_finish_TOP\n"); );
    // Body
    int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    int printf_finish__Vfuncrtn__Vcvt;
    printf_finish__Vfuncrtn__Vcvt = printf_finish(inst__Vcvt);
    printf_finish__Vfuncrtn = printf_finish__Vfuncrtn__Vcvt;
}

extern "C" void itrace_print(int pc, int instruction_word, int instr_len_bytes, int p_count_number);

VL_INLINE_OPT void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__itrace_print_TOP(IData/*31:0*/ pc, IData/*31:0*/ instruction_word, IData/*31:0*/ instr_len_bytes, IData/*31:0*/ p_count_number) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__itrace_print_TOP\n"); );
    // Body
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int instruction_word__Vcvt;
    for (size_t instruction_word__Vidx = 0; instruction_word__Vidx < 1; ++instruction_word__Vidx) instruction_word__Vcvt = instruction_word;
    int instr_len_bytes__Vcvt;
    for (size_t instr_len_bytes__Vidx = 0; instr_len_bytes__Vidx < 1; ++instr_len_bytes__Vidx) instr_len_bytes__Vcvt = instr_len_bytes;
    int p_count_number__Vcvt;
    for (size_t p_count_number__Vidx = 0; p_count_number__Vidx < 1; ++p_count_number__Vidx) p_count_number__Vcvt = p_count_number;
    itrace_print(pc__Vcvt, instruction_word__Vcvt, instr_len_bytes__Vcvt, p_count_number__Vcvt);
}

extern "C" void update_decode_state(int pc, int snpc, int dnpc, int inst);

VL_INLINE_OPT void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__update_decode_state_TOP(IData/*31:0*/ pc, IData/*31:0*/ snpc, IData/*31:0*/ dnpc, IData/*31:0*/ inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__update_decode_state_TOP\n"); );
    // Body
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int snpc__Vcvt;
    for (size_t snpc__Vidx = 0; snpc__Vidx < 1; ++snpc__Vidx) snpc__Vcvt = snpc;
    int dnpc__Vcvt;
    for (size_t dnpc__Vidx = 0; dnpc__Vidx < 1; ++dnpc__Vidx) dnpc__Vcvt = dnpc;
    int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    update_decode_state(pc__Vcvt, snpc__Vcvt, dnpc__Vcvt, inst__Vcvt);
}

extern "C" void update_cpu_state(unsigned int pc, const svOpenArrayHandle regs);

VL_INLINE_OPT void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__update_cpu_state__Vdpioc2_TOP(IData/*31:0*/ pc, const VlUnpacked<IData/*31:0*/, 32> &regs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__update_cpu_state__Vdpioc2_TOP\n"); );
    // Body
    unsigned int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    static const int regs__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps regs__Vopenprops(VLVT_UINT32, VLVD_IN, VerilatedVarProps::Packed(), 31, 0, VerilatedVarProps::Unpacked(), 1, regs__Vopenprops__ulims);
    VerilatedDpiOpenVar regs__Vopenarray (&regs__Vopenprops, &regs);
    update_cpu_state(pc__Vcvt, &regs__Vopenarray);
}

extern "C" int pmem_read(int raddr);

VL_INLINE_OPT void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mem__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mem__DOT__pmem_read_TOP\n"); );
    // Body
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int pmem_read__Vfuncrtn__Vcvt;
    pmem_read__Vfuncrtn__Vcvt = pmem_read(raddr__Vcvt);
    pmem_read__Vfuncrtn = pmem_read__Vfuncrtn__Vcvt;
}

extern "C" void pmem_write(int waddr, int wdata, char wmask);

VL_INLINE_OPT void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mem__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mem__DOT__pmem_write_TOP\n"); );
    // Body
    int waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    int wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
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
