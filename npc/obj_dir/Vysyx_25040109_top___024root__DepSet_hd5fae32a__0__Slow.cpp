// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25040109_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25040109_top___024root.h"

VL_ATTR_COLD void Vysyx_25040109_top___024root___eval_static__TOP(Vysyx_25040109_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25040109_top___024root___eval_static(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval_static\n"); );
    // Body
    Vysyx_25040109_top___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vysyx_25040109_top___024root___eval_static__TOP(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_fetch = 0x80000000U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe = 0x80000000U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_req_issued = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe = 0U;
}

VL_ATTR_COLD void Vysyx_25040109_top___024root___eval_initial__TOP(Vysyx_25040109_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25040109_top___024root___eval_initial(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval_initial\n"); );
    // Body
    Vysyx_25040109_top___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vysyx_25040109_top___024root___eval_initial__TOP(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[0U] = 0x63U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[1U] = 0x6fU;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[2U] = 0x23U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[3U] = 0x67U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[4U] = 3U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[5U] = 0x13U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[6U] = 0x37U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[7U] = 0x17U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[0U] = 0x6fU;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[1U] = 0x37U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[2U] = 0x17U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[1U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[1U] = 0x3700000000ULL;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list[0U] = 0x23U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list[1U] = 3U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list[2U] = 0x63U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list[3U] = 0x33U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[1U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[2U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[3U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[4U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[5U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[6U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[7U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[8U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[9U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0xaU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0xbU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0xcU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0xdU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0xeU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0xfU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0x10U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0x11U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0x12U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0x13U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0x14U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0x15U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0x16U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0x17U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0x18U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0x19U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0x1aU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0x1bU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0x1cU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0x1dU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0x1eU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0x1fU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 0x20U;
}

VL_ATTR_COLD void Vysyx_25040109_top___024root___eval_final(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vysyx_25040109_top___024root___eval_triggers__stl(Vysyx_25040109_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25040109_top___024root___dump_triggers__stl(Vysyx_25040109_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vysyx_25040109_top___024root___eval_stl(Vysyx_25040109_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25040109_top___024root___eval_settle(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vysyx_25040109_top___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vysyx_25040109_top___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_top.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vysyx_25040109_top___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25040109_top___024root___dump_triggers__stl(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__update_cpu_state__Vdpioc2_TOP(IData/*31:0*/ pc, const VlUnpacked<IData/*31:0*/, 32> &regs);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ &data);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__update_decode_state_TOP(IData/*31:0*/ pc, IData/*31:0*/ snpc, IData/*31:0*/ dnpc, IData/*31:0*/ inst);

VL_ATTR_COLD void Vysyx_25040109_top___024root___stl_sequent__TOP__0(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->inst = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe;
    vlSelf->a0_out = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf
        [0xaU];
    vlSelf->ysyx_25040109_top__DOT__dmem_wlen = ((0U 
                                                  == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched))
                                                  ? 1U
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched))
                                                   ? 2U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched))
                                                    ? 4U
                                                    : 0U)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu_ready 
        = (1U & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid)));
    vlSelf->inst_wb_complete = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_wb_complete_r;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[0U] 
        = (0x6f00000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[2U] 
        = (0x1700000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[6U] 
        = (0x3700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[7U] 
        = (0x1700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT____VdfgTmp_hb587fe3a__0 
        = ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
           | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_done));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_valid 
        = ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
           | ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
              & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_done)));
    vlSelf->dmem_raddr_out = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched;
    vlSelf->ysyx_25040109_top__DOT__dmem_ren = ((1U 
                                                 == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
                                                & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_done)) 
                                                   & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_ready_to_mem 
        = (1U & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__full)) 
                 | (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[0U] 
        = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[2U] 
        = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                >> 0x14U));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
        = ((0U == (0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                            >> 0xfU))) ? 0U : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf
           [(0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                      >> 0xfU))]);
    vlSelf->__VdfgTmp_h188ed58c__0 = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf
        [(0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                   >> 0x14U))];
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h26e5c323__0 
        = (IData)((0x1000U == (0xfe007000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5db903ec__0 
        = (IData)((0x5000U == (0xfe007000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5f3f1c8d__0 
        = (IData)((0x40005000U == (0xfe007000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                >> 0x14U));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                >> 0x14U));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[5U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                >> 0x14U));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[6U] 
        = (0xfffff000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[7U] 
        = (0xfffff000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j 
        = ((0x80000U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                        >> 0xcU)) | ((0x7f800U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                            >> 0x15U)))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s 
        = ((0xfe0U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                      >> 0x14U)) | (0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                             >> 7U)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b 
        = ((0x800U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                      >> 0x14U)) | ((0x400U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                               << 3U)) 
                                    | ((0x3f0U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                  >> 0x15U)) 
                                       | (0xfU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                  >> 8U)))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hfd368011__0 
        = (IData)((0U == (0xfff07000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he2c0485b__0 
        = ((0U == (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                         >> 0xcU))) | (1U == (7U & 
                                              (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                               >> 0xcU))));
    vlSelf->opcode_out = (0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe);
    vlSelf->pc = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid)
                   ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe
                   : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_fetch);
    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__update_cpu_state__Vdpioc2_TOP(vlSelf->pc, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf);
    vlSelf->dmem_waddr_out = vlSelf->dmem_raddr_out;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_read_fire 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_ren) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_rvalid));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT____VdfgTmp_hb587fe3a__0)
            ? (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_funct3)
            : (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched));
    if (((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_ren) 
         & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_busy)))) {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_read_TOP(vlSelf->dmem_raddr_out, vlSelf->__Vtask_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_read__5__data);
        vlSelf->ysyx_25040109_top__DOT__dmem_rdata 
            = vlSelf->__Vtask_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_read__5__data;
    } else {
        vlSelf->ysyx_25040109_top__DOT__dmem_rdata 
            = vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_rdata_buf;
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT____VdfgTmp_hb587fe3a__0)
            ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_load_data
            : vlSelf->ysyx_25040109_top__DOT__dmem_rdata);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__mem_fire 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__imem_rvalid) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_ready_to_mem));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[3U] 
        = (0x6700000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[4U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[5U] 
        = (0x1300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext)));
    if ((0U == (0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                         >> 0x14U)))) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[2U] = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[3U] = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data = 0U;
    } else {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[2U] 
            = vlSelf->__VdfgTmp_h188ed58c__0;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[3U] 
            = vlSelf->__VdfgTmp_h188ed58c__0;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data 
            = vlSelf->__VdfgTmp_h188ed58c__0;
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[1U] 
        = (0x6f00000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                           >> 0x1fU))) 
                                               << 0x15U) 
                                              | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j 
                                                 << 1U)))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                        >> 0x1fU))) << 0x15U) | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j 
                                                 << 1U));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[2U] 
        = (0x2300000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s)))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                        >> 0x1fU))) << 0xcU) | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[0U] 
        = (0x6300000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                           >> 0x1fU))) 
                                               << 0xdU) 
                                              | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b) 
                                                 << 1U)))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                        >> 0x1fU))) << 0xdU) | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b) 
                                                << 1U));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hd1deae94__0 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he2c0485b__0) 
           | (2U == (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                           >> 0xcU))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->opcode_out) 
                       == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->opcode_out) == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->opcode_out) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->opcode_out) == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->opcode_out) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->opcode_out) == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit)
            ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out
            : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT____VdfgTmp_hd1c31b8f__0 
        = (IData)(((0x73U == (IData)(vlSelf->opcode_out)) 
                   & (0U == (0x7000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hee48d914__0 
        = ((0x37U == (IData)(vlSelf->opcode_out)) | 
           ((0x17U == (IData)(vlSelf->opcode_out)) 
            | (0x6fU == (IData)(vlSelf->opcode_out))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type 
        = ((0x33U == (IData)(vlSelf->opcode_out)) & 
           ((IData)((0U == (0xfe007000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe))) 
            | ((IData)((0x40000000U == (0xfe007000U 
                                        & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe))) 
               | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h26e5c323__0) 
                  | ((IData)((0x2000U == (0xfe007000U 
                                          & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe))) 
                     | ((IData)((0x3000U == (0xfe007000U 
                                             & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe))) 
                        | ((IData)((0x4000U == (0xfe007000U 
                                                & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe))) 
                           | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5db903ec__0) 
                              | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5f3f1c8d__0) 
                                 | ((IData)((0x6000U 
                                             == (0xfe007000U 
                                                 & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe))) 
                                    | ((IData)((0x7000U 
                                                == 
                                                (0xfe007000U 
                                                 & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe))) 
                                       | (((0U == (7U 
                                                   & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                      >> 0xcU))) 
                                           | ((1U == 
                                               (7U 
                                                & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                   >> 0xcU))) 
                                              | ((4U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                      >> 0xcU))) 
                                                 | ((5U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                         >> 0xcU))) 
                                                    | ((6U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                            >> 0xcU))) 
                                                       | (7U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                              >> 0xcU)))))))) 
                                          & (1U == 
                                             (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                              >> 0x19U))))))))))))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system 
        = ((0x73U == (IData)(vlSelf->opcode_out)) & 
           ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hfd368011__0) 
            | ((IData)((0x100000U == (0xfff07000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe))) 
               | ((IData)((0x30200000U == (0xfff07000U 
                                           & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe))) 
                  | ((1U == (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                   >> 0xcU))) | (2U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                     >> 0xcU))))))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_valid_to_idu 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__full) 
           | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__mem_fire));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[2U] 
        = (0x6300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[3U] 
        = (0x3300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->opcode_out) 
                       == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->opcode_out) == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->opcode_out) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->opcode_out) == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->opcode_out) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->opcode_out) == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->opcode_out) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->opcode_out) == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->opcode_out) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->opcode_out) == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->opcode_out) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->opcode_out) == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->opcode_out) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->opcode_out) == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->opcode_out) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->opcode_out) == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm = 
        ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit)
          ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out
          : 0U);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_store 
        = ((0x23U == (IData)(vlSelf->opcode_out)) & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hd1deae94__0));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load 
        = ((3U == (IData)(vlSelf->opcode_out)) & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hd1deae94__0) 
                                                  | ((4U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                          >> 0xcU))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                            >> 0xcU))))));
    if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_ecall 
            = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hfd368011__0;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_addr 
            = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
               >> 0x14U);
    } else {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_ecall = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_addr = 0U;
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__idu_fire 
        = ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid)) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_valid_to_idu));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[0U] 
        = (0x2300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[1U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__shift_amount 
        = (0x1fU & (((0x13U == (IData)(vlSelf->opcode_out)) 
                     & ((1U == (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                      >> 0xcU))) | 
                        (5U == (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                      >> 0xcU))))) ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm
                     : ((0U == (0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                         >> 0x14U)))
                         ? 0U : vlSelf->__VdfgTmp_h188ed58c__0)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__jal_target 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm 
           + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[0U] 
        = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[1U] 
        = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm;
    vlSelf->is_store_out = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_store) 
                            & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid));
    vlSelf->is_load_out = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load) 
                           & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load) 
           | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_store));
    if (VL_LIKELY(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hee48d914__0) 
                   | ((IData)(((0x67U == (IData)(vlSelf->opcode_out)) 
                               & (0U == (0x7000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)))) 
                      | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load) 
                         | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_store) 
                            | (((0x63U == (IData)(vlSelf->opcode_out)) 
                                & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he2c0485b__0) 
                                   | ((5U == (7U & 
                                              (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                               >> 0xcU))) 
                                      | ((4U == (7U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                    >> 0xcU))) 
                                         | ((6U == 
                                             (7U & 
                                              (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                               >> 0xcU))) 
                                            | (7U == 
                                               (7U 
                                                & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                   >> 0xcU)))))))) 
                               | (((0x13U == (IData)(vlSelf->opcode_out)) 
                                   & ((0U == (7U & 
                                              (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                               >> 0xcU))) 
                                      | ((2U == (7U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                    >> 0xcU))) 
                                         | ((3U == 
                                             (7U & 
                                              (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                               >> 0xcU))) 
                                            | ((4U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                    >> 0xcU))) 
                                               | ((6U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                       >> 0xcU))) 
                                                  | ((7U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                          >> 0xcU))) 
                                                     | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h26e5c323__0) 
                                                        | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5db903ec__0) 
                                                           | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5f3f1c8d__0)))))))))) 
                                  | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type) 
                                     | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system)))))))))) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_invalid = 0U;
    } else {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_invalid = 1U;
        VL_WRITEF("inst:0x%08x\n",32,vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe);
    }
    vlSelf->is_ecall_out = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_ecall) 
                            & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->opcode_out) 
                       == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->opcode_out) == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->opcode_out) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->opcode_out) == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->opcode_out) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->opcode_out) == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->opcode_out) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->opcode_out) == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit)
            ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out
            : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_in_fire 
        = (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid) 
            & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_req_issued)) 
               & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op))) 
           & ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
              | (2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__commit_cond 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid) 
           & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op)) 
              | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_valid)));
    vlSelf->ysyx_25040109_top__DOT__dmem_wen = ((1U 
                                                 == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
                                                & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_done)) 
                                                   & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_invalid)) 
                                                      & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_latched))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_invalid) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_we_from_exu = 0U;
    if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out = 0U;
    } else if (((((((((0x4c00U == (0x1ff80U & (((IData)(vlSelf->opcode_out) 
                                                << 0xaU) 
                                               | ((0x380U 
                                                   & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                      >> 5U)) 
                                                  | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                     >> 0x19U))))) 
                      | (0x4d00U == (0x1ff80U & (((IData)(vlSelf->opcode_out) 
                                                  << 0xaU) 
                                                 | ((0x380U 
                                                     & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                        >> 5U)) 
                                                    | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                       >> 0x19U)))))) 
                     | (0x4d80U == (0x1ff80U & (((IData)(vlSelf->opcode_out) 
                                                 << 0xaU) 
                                                | ((0x380U 
                                                    & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                       >> 5U)) 
                                                   | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                      >> 0x19U)))))) 
                    | (0x4e00U == (0x1ff80U & (((IData)(vlSelf->opcode_out) 
                                                << 0xaU) 
                                               | ((0x380U 
                                                   & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                      >> 5U)) 
                                                  | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                     >> 0x19U)))))) 
                   | (0x4f00U == (0x1ff80U & (((IData)(vlSelf->opcode_out) 
                                               << 0xaU) 
                                              | ((0x380U 
                                                  & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                     >> 5U)) 
                                                 | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                    >> 0x19U)))))) 
                  | (0x4f80U == (0x1ff80U & (((IData)(vlSelf->opcode_out) 
                                              << 0xaU) 
                                             | ((0x380U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                    >> 5U)) 
                                                | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                   >> 0x19U)))))) 
                 | (0x4c80U == (((IData)(vlSelf->opcode_out) 
                                 << 0xaU) | ((0x380U 
                                              & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                 >> 5U)) 
                                             | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                >> 0x19U))))) 
                | (0x4e80U == (((IData)(vlSelf->opcode_out) 
                                << 0xaU) | ((0x380U 
                                             & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                >> 5U)) 
                                            | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                               >> 0x19U)))))) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out 
            = ((0x4c00U == (0x1ff80U & (((IData)(vlSelf->opcode_out) 
                                         << 0xaU) | 
                                        ((0x380U & 
                                          (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                           >> 5U)) 
                                         | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                            >> 0x19U)))))
                ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                   + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                : ((0x4d00U == (0x1ff80U & (((IData)(vlSelf->opcode_out) 
                                             << 0xaU) 
                                            | ((0x380U 
                                                & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                   >> 5U)) 
                                               | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                  >> 0x19U)))))
                    ? (VL_LTS_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                        ? 1U : 0U) : ((0x4d80U == (0x1ff80U 
                                                   & (((IData)(vlSelf->opcode_out) 
                                                       << 0xaU) 
                                                      | ((0x380U 
                                                          & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                             >> 5U)) 
                                                         | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                            >> 0x19U)))))
                                       ? ((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                           < vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                           ? 1U : 0U)
                                       : ((0x4e00U 
                                           == (0x1ff80U 
                                               & (((IData)(vlSelf->opcode_out) 
                                                   << 0xaU) 
                                                  | ((0x380U 
                                                      & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                         >> 5U)) 
                                                     | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                        >> 0x19U)))))
                                           ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                              ^ vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                           : ((0x4f00U 
                                               == (0x1ff80U 
                                                   & (((IData)(vlSelf->opcode_out) 
                                                       << 0xaU) 
                                                      | ((0x380U 
                                                          & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                             >> 5U)) 
                                                         | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                            >> 0x19U)))))
                                               ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                                  | vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                               : ((0x4f80U 
                                                   == 
                                                   (0x1ff80U 
                                                    & (((IData)(vlSelf->opcode_out) 
                                                        << 0xaU) 
                                                       | ((0x380U 
                                                           & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                              >> 5U)) 
                                                          | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                             >> 0x19U)))))
                                                   ? 
                                                  (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                                   & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                                   : 
                                                  ((0x4c80U 
                                                    == 
                                                    (((IData)(vlSelf->opcode_out) 
                                                      << 0xaU) 
                                                     | ((0x380U 
                                                         & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                            >> 5U)) 
                                                        | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                           >> 0x19U))))
                                                    ? 
                                                   (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                                    << (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__shift_amount))
                                                    : 
                                                   (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                                    >> (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__shift_amount)))))))));
    } else if (((((((((0x4ea0U == (((IData)(vlSelf->opcode_out) 
                                    << 0xaU) | ((0x380U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                    >> 5U)) 
                                                | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                   >> 0x19U)))) 
                      | (0xcc00U == (((IData)(vlSelf->opcode_out) 
                                      << 0xaU) | ((0x380U 
                                                   & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                      >> 5U)) 
                                                  | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                     >> 0x19U))))) 
                     | (0xcc20U == (((IData)(vlSelf->opcode_out) 
                                     << 0xaU) | ((0x380U 
                                                  & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                     >> 5U)) 
                                                 | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                    >> 0x19U))))) 
                    | (0xcc80U == (((IData)(vlSelf->opcode_out) 
                                    << 0xaU) | ((0x380U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                    >> 5U)) 
                                                | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                   >> 0x19U))))) 
                   | (0xcd00U == (((IData)(vlSelf->opcode_out) 
                                   << 0xaU) | ((0x380U 
                                                & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                   >> 5U)) 
                                               | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                  >> 0x19U))))) 
                  | (0xcd80U == (((IData)(vlSelf->opcode_out) 
                                  << 0xaU) | ((0x380U 
                                               & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                  >> 5U)) 
                                              | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                 >> 0x19U))))) 
                 | (0xce00U == (((IData)(vlSelf->opcode_out) 
                                 << 0xaU) | ((0x380U 
                                              & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                 >> 5U)) 
                                             | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                >> 0x19U))))) 
                | (0xce80U == (((IData)(vlSelf->opcode_out) 
                                << 0xaU) | ((0x380U 
                                             & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                >> 5U)) 
                                            | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                               >> 0x19U)))))) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out 
            = ((0x4ea0U == (((IData)(vlSelf->opcode_out) 
                             << 0xaU) | ((0x380U & 
                                          (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                           >> 5U)) 
                                         | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                            >> 0x19U))))
                ? VL_SHIFTRS_III(32,32,5, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a, (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__shift_amount))
                : ((0xcc00U == (((IData)(vlSelf->opcode_out) 
                                 << 0xaU) | ((0x380U 
                                              & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                 >> 5U)) 
                                             | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                >> 0x19U))))
                    ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                       + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                    : ((0xcc20U == (((IData)(vlSelf->opcode_out) 
                                     << 0xaU) | ((0x380U 
                                                  & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                     >> 5U)) 
                                                 | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                    >> 0x19U))))
                        ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                           - vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                        : ((0xcc80U == (((IData)(vlSelf->opcode_out) 
                                         << 0xaU) | 
                                        ((0x380U & 
                                          (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                           >> 5U)) 
                                         | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                            >> 0x19U))))
                            ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                               << (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__shift_amount))
                            : ((0xcd00U == (((IData)(vlSelf->opcode_out) 
                                             << 0xaU) 
                                            | ((0x380U 
                                                & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                   >> 5U)) 
                                               | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                  >> 0x19U))))
                                ? (VL_LTS_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                    ? 1U : 0U) : ((0xcd80U 
                                                   == 
                                                   (((IData)(vlSelf->opcode_out) 
                                                     << 0xaU) 
                                                    | ((0x380U 
                                                        & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                           >> 5U)) 
                                                       | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                          >> 0x19U))))
                                                   ? 
                                                  ((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                                    < vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  ((0xce00U 
                                                    == 
                                                    (((IData)(vlSelf->opcode_out) 
                                                      << 0xaU) 
                                                     | ((0x380U 
                                                         & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                            >> 5U)) 
                                                        | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                           >> 0x19U))))
                                                    ? 
                                                   (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                                    ^ vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                                    : 
                                                   (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                                    >> (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__shift_amount)))))))));
    } else if (((((((((0xcea0U == (((IData)(vlSelf->opcode_out) 
                                    << 0xaU) | ((0x380U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                    >> 5U)) 
                                                | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                   >> 0x19U)))) 
                      | (0xcf00U == (((IData)(vlSelf->opcode_out) 
                                      << 0xaU) | ((0x380U 
                                                   & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                      >> 5U)) 
                                                  | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                     >> 0x19U))))) 
                     | (0xcf80U == (((IData)(vlSelf->opcode_out) 
                                     << 0xaU) | ((0x380U 
                                                  & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                     >> 5U)) 
                                                 | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                    >> 0x19U))))) 
                    | (0xcc01U == (((IData)(vlSelf->opcode_out) 
                                    << 0xaU) | ((0x380U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                    >> 5U)) 
                                                | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                   >> 0x19U))))) 
                   | (0xcc81U == (((IData)(vlSelf->opcode_out) 
                                   << 0xaU) | ((0x380U 
                                                & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                   >> 5U)) 
                                               | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                  >> 0x19U))))) 
                  | (0xce01U == (((IData)(vlSelf->opcode_out) 
                                  << 0xaU) | ((0x380U 
                                               & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                  >> 5U)) 
                                              | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                 >> 0x19U))))) 
                 | (0xce81U == (((IData)(vlSelf->opcode_out) 
                                 << 0xaU) | ((0x380U 
                                              & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                 >> 5U)) 
                                             | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                >> 0x19U))))) 
                | (0xcf01U == (((IData)(vlSelf->opcode_out) 
                                << 0xaU) | ((0x380U 
                                             & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                >> 5U)) 
                                            | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                               >> 0x19U)))))) {
        if ((0xcea0U == (((IData)(vlSelf->opcode_out) 
                          << 0xaU) | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                 >> 5U)) 
                                      | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                         >> 0x19U))))) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out 
                = VL_SHIFTRS_III(32,32,5, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a, (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__shift_amount));
        } else if ((0xcf00U == (((IData)(vlSelf->opcode_out) 
                                 << 0xaU) | ((0x380U 
                                              & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                 >> 5U)) 
                                             | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                >> 0x19U))))) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out 
                = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                   | vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b);
        } else if ((0xcf80U == (((IData)(vlSelf->opcode_out) 
                                 << 0xaU) | ((0x380U 
                                              & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                 >> 5U)) 
                                             | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                >> 0x19U))))) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out 
                = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                   & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b);
        } else if ((0xcc01U == (((IData)(vlSelf->opcode_out) 
                                 << 0xaU) | ((0x380U 
                                              & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                 >> 5U)) 
                                             | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                >> 0x19U))))) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__mul_temp 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a), 
                              VL_EXTENDS_QI(64,32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b));
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out 
                = (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__mul_temp);
        } else if ((0xcc81U == (((IData)(vlSelf->opcode_out) 
                                 << 0xaU) | ((0x380U 
                                              & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                 >> 5U)) 
                                             | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                >> 0x19U))))) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__mul_temp 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a), 
                              VL_EXTENDS_QI(64,32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b));
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out 
                = (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__mul_temp 
                           >> 0x20U));
        } else {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out 
                = ((0xce01U == (((IData)(vlSelf->opcode_out) 
                                 << 0xaU) | ((0x380U 
                                              & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                 >> 5U)) 
                                             | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                >> 0x19U))))
                    ? ((0U == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                        ? 0xffffffffU : (((0x80000000U 
                                           == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a) 
                                          & (0xffffffffU 
                                             == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b))
                                          ? 0x80000000U
                                          : VL_DIVS_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)))
                    : ((0xce81U == (((IData)(vlSelf->opcode_out) 
                                     << 0xaU) | ((0x380U 
                                                  & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                     >> 5U)) 
                                                 | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                    >> 0x19U))))
                        ? ((0U == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                            ? 0xffffffffU : VL_DIV_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b))
                        : ((0U == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                            ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a
                            : (((0x80000000U == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a) 
                                & (0xffffffffU == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b))
                                ? 0U : VL_MODDIVS_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)))));
        }
    } else {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out 
            = (((((((((0xcf81U == (((IData)(vlSelf->opcode_out) 
                                    << 0xaU) | ((0x380U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                    >> 5U)) 
                                                | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                   >> 0x19U)))) 
                      | (0xdc00U == (0x1fc00U & (((IData)(vlSelf->opcode_out) 
                                                  << 0xaU) 
                                                 | ((0x380U 
                                                     & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                        >> 5U)) 
                                                    | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                       >> 0x19U)))))) 
                     | (0x5c00U == (0x1fc00U & (((IData)(vlSelf->opcode_out) 
                                                 << 0xaU) 
                                                | ((0x380U 
                                                    & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                       >> 5U)) 
                                                   | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                      >> 0x19U)))))) 
                    | (0xc00U == (0x1ff80U & (((IData)(vlSelf->opcode_out) 
                                               << 0xaU) 
                                              | ((0x380U 
                                                  & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                     >> 5U)) 
                                                 | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                    >> 0x19U)))))) 
                   | (0xc80U == (0x1ff80U & (((IData)(vlSelf->opcode_out) 
                                              << 0xaU) 
                                             | ((0x380U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                    >> 5U)) 
                                                | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                   >> 0x19U)))))) 
                  | (0xd00U == (0x1ff80U & (((IData)(vlSelf->opcode_out) 
                                             << 0xaU) 
                                            | ((0x380U 
                                                & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                   >> 5U)) 
                                               | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                  >> 0x19U)))))) 
                 | (0xe00U == (0x1ff80U & (((IData)(vlSelf->opcode_out) 
                                            << 0xaU) 
                                           | ((0x380U 
                                               & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                  >> 5U)) 
                                              | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                 >> 0x19U)))))) 
                | (0xe80U == (0x1ff80U & (((IData)(vlSelf->opcode_out) 
                                           << 0xaU) 
                                          | ((0x380U 
                                              & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                 >> 5U)) 
                                             | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                >> 0x19U))))))
                ? ((0xcf81U == (((IData)(vlSelf->opcode_out) 
                                 << 0xaU) | ((0x380U 
                                              & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                 >> 5U)) 
                                             | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                >> 0x19U))))
                    ? ((0U == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                        ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a
                        : VL_MODDIV_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b))
                    : ((0xdc00U == (0x1fc00U & (((IData)(vlSelf->opcode_out) 
                                                 << 0xaU) 
                                                | ((0x380U 
                                                    & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                       >> 5U)) 
                                                   | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                      >> 0x19U)))))
                        ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b
                        : ((0x5c00U == (0x1fc00U & 
                                        (((IData)(vlSelf->opcode_out) 
                                          << 0xaU) 
                                         | ((0x380U 
                                             & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                >> 5U)) 
                                            | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                               >> 0x19U)))))
                            ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                               + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                            : ((0xc00U == (0x1ff80U 
                                           & (((IData)(vlSelf->opcode_out) 
                                               << 0xaU) 
                                              | ((0x380U 
                                                  & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                     >> 5U)) 
                                                 | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                    >> 0x19U)))))
                                ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                   + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                : ((0xc80U == (0x1ff80U 
                                               & (((IData)(vlSelf->opcode_out) 
                                                   << 0xaU) 
                                                  | ((0x380U 
                                                      & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                         >> 5U)) 
                                                     | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                        >> 0x19U)))))
                                    ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                       + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                    : ((0xd00U == (0x1ff80U 
                                                   & (((IData)(vlSelf->opcode_out) 
                                                       << 0xaU) 
                                                      | ((0x380U 
                                                          & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                             >> 5U)) 
                                                         | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                            >> 0x19U)))))
                                        ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                           + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                        : ((0xe00U 
                                            == (0x1ff80U 
                                                & (((IData)(vlSelf->opcode_out) 
                                                    << 0xaU) 
                                                   | ((0x380U 
                                                       & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                          >> 5U)) 
                                                      | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                         >> 0x19U)))))
                                            ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                               + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                            : (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                               + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b))))))))
                : ((0x8c00U == (0x1ff80U & (((IData)(vlSelf->opcode_out) 
                                             << 0xaU) 
                                            | ((0x380U 
                                                & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                   >> 5U)) 
                                               | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                  >> 0x19U)))))
                    ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                       + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                    : ((0x8c80U == (0x1ff80U & (((IData)(vlSelf->opcode_out) 
                                                 << 0xaU) 
                                                | ((0x380U 
                                                    & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                       >> 5U)) 
                                                   | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                      >> 0x19U)))))
                        ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                           + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                        : ((0x8d00U == (0x1ff80U & 
                                        (((IData)(vlSelf->opcode_out) 
                                          << 0xaU) 
                                         | ((0x380U 
                                             & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                >> 5U)) 
                                            | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                               >> 0x19U)))))
                            ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                               + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                            : 0U))));
    }
    if (((0x73U == (IData)(vlSelf->opcode_out)) & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid)))) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_we_from_exu 
            = ((1U == (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                             >> 0xcU))) | (IData)((
                                                   (0x2000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)) 
                                                   & (0U 
                                                      != 
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                          >> 0xfU))))));
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state)
            ? 0x342U : ((IData)(vlSelf->is_ecall_out)
                         ? 0x341U : (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_addr)));
    if (VL_UNLIKELY(vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid)) {
        VL_FINISH_MT("/home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_EXU.v", 217, "");
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__next_pc 
            = ((IData)(4U) + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe);
        VL_WRITEF(" hit bad trap :0x%08x:\n",32,vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe);
    } else {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__next_pc 
            = (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT____VdfgTmp_hd1c31b8f__0) 
                & (0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_addr)))
                ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mtvec
                : (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT____VdfgTmp_hd1c31b8f__0) 
                    & (0x302U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_addr)))
                    ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mepc
                    : ((0x6fU == (IData)(vlSelf->opcode_out))
                        ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__jal_target
                        : ((0x67U == (IData)(vlSelf->opcode_out))
                            ? (0xfffffffeU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm 
                                              + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data))
                            : (((0x63U == (IData)(vlSelf->opcode_out)) 
                                & ((IData)(((0U == 
                                             (0x7000U 
                                              & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)) 
                                            & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
                                               == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data))) 
                                   | ((IData)(((0x1000U 
                                                == 
                                                (0x7000U 
                                                 & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)) 
                                               & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
                                                  != vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data))) 
                                      | ((IData)(((0x4000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)) 
                                                  & VL_LTS_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data))) 
                                         | ((IData)(
                                                    ((0x5000U 
                                                      == 
                                                      (0x7000U 
                                                       & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)) 
                                                     & VL_GTES_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data))) 
                                            | ((IData)(
                                                       ((0x6000U 
                                                         == 
                                                         (0x7000U 
                                                          & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)) 
                                                        & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
                                                           < vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data))) 
                                               | (IData)(
                                                         ((0x7000U 
                                                           == 
                                                           (0x7000U 
                                                            & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)) 
                                                          & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
                                                             >= vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data)))))))))
                                ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__jal_target
                                : ((IData)(4U) + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe))))));
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_rdata_from_regfile 
        = ((0x300U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr))
            ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mstatus
            : ((0x305U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr))
                ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mtvec
                : ((0x341U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr))
                    ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mepc
                    : ((0x342U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr))
                        ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mcause
                        : 0U))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_we 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state) 
           | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid) 
              & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__commit_cond) 
                 & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_we_from_exu) 
                    | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_ecall)))));
    if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid) {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__update_decode_state_TOP(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe, 
                                                                                ((IData)(4U) 
                                                                                + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe), vlSelf->ysyx_25040109_top__DOT__cpu__DOT__next_pc, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe);
    }
    if (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_ready_to_mem) 
         & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_busy)))) {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_read_TOP(
                                                                                ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid)
                                                                                 ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__next_pc
                                                                                 : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_fetch), vlSelf->__Vtask_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_read__4__data);
        vlSelf->ysyx_25040109_top__DOT__imem_rdata 
            = vlSelf->__Vtask_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_read__4__data;
    } else {
        vlSelf->ysyx_25040109_top__DOT__imem_rdata 
            = vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_rdata_buf;
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result 
        = ((0x73U == (IData)(vlSelf->opcode_out)) ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_rdata_from_regfile
            : (((0x6fU == (IData)(vlSelf->opcode_out)) 
                | (0x67U == (IData)(vlSelf->opcode_out)))
                ? ((IData)(4U) + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe)
                : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_wdata_from_exu = 0U;
    if (((0x73U == (IData)(vlSelf->opcode_out)) & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid)))) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_wdata_from_exu 
            = ((1U == (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                             >> 0xcU))) ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data
                : ((2U == (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                 >> 0xcU))) ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_rdata_from_regfile 
                                               | vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data)
                    : 0U));
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_wdata 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state)
            ? 0xbU : ((IData)(vlSelf->is_ecall_out)
                       ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe
                       : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_wdata_from_exu));
}

VL_ATTR_COLD void Vysyx_25040109_top___024root___eval_stl(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_25040109_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25040109_top___024root___dump_triggers__act(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25040109_top___024root___dump_triggers__nba(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_25040109_top___024root___ctor_var_reset(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->p_count_number = VL_RAND_RESET_I(32);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->a0_out = VL_RAND_RESET_I(32);
    vlSelf->inst_wb_complete = VL_RAND_RESET_I(1);
    vlSelf->is_load_out = VL_RAND_RESET_I(1);
    vlSelf->is_store_out = VL_RAND_RESET_I(1);
    vlSelf->is_ecall_out = VL_RAND_RESET_I(1);
    vlSelf->opcode_out = VL_RAND_RESET_I(7);
    vlSelf->dmem_raddr_out = VL_RAND_RESET_I(32);
    vlSelf->dmem_waddr_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__imem_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__imem_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__dmem_ren = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__dmem_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__dmem_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__dmem_wlen = VL_RAND_RESET_I(3);
    vlSelf->ysyx_25040109_top__DOT__dmem_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__dmem_wready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_fetch = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_req_issued = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_ready_to_mem = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_valid_to_idu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_invalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_addr = VL_RAND_RESET_I(12);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_we_from_exu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_wdata_from_exu = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_store = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_rdata_from_regfile = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_we = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr = VL_RAND_RESET_I(12);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__commit_cond = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_wb_complete_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_in_fire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__inst_temp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__mem_fire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__idu_fire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j = VL_RAND_RESET_I(20);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s = VL_RAND_RESET_I(12);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b = VL_RAND_RESET_I(12);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hee48d914__0 = 0;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hd1deae94__0 = 0;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hfd368011__0 = 0;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he2c0485b__0 = 0;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h26e5c323__0 = 0;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5db903ec__0 = 0;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5f3f1c8d__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(39);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__mul_temp = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__shift_amount = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__jal_target = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT____VdfgTmp_hd1c31b8f__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(39);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(39);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_load_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_funct3 = VL_RAND_RESET_I(3);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_data_latched = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched = VL_RAND_RESET_I(3);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_latched = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_done = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_read_fire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3 = VL_RAND_RESET_I(3);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT____VdfgTmp_hb587fe3a__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_busy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_delay_cnt = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_busy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_delay_cnt = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_rdata_buf = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_rdata_buf = VL_RAND_RESET_I(32);
    vlSelf->__VdfgTmp_h188ed58c__0 = 0;
    vlSelf->__Vtask_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_read__4__data = 0;
    vlSelf->__Vtask_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_read__5__data = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
