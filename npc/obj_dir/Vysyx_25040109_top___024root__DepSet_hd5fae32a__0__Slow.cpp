// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25040109_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25040109_top___024root.h"

VL_ATTR_COLD void Vysyx_25040109_top___024root___eval_static(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vysyx_25040109_top___024root___eval_initial__TOP(Vysyx_25040109_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25040109_top___024root___eval_initial(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval_initial\n"); );
    // Body
    Vysyx_25040109_top___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vysyx_25040109_top___024root___eval_initial__TOP(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[0U] = 0x63U;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[1U] = 0x6fU;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[2U] = 0x23U;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[3U] = 3U;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[4U] = 0x13U;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[5U] = 0x37U;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[6U] = 0x17U;
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[0U] = 0x6fU;
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[1U] = 0x37U;
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[2U] = 0x17U;
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[1U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[1U] = 0x3700000000ULL;
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list[1U] = 0x67U;
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list[2U] = 0x6fU;
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__key_list[0U] = 0x63U;
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__key_list[1U] = 0x67U;
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__key_list[2U] = 0x6fU;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list[0U] = 0x1aU;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list[1U] = 0x338U;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list[2U] = 0x378U;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list[3U] = 0x1b8U;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list[4U] = 0xb8U;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list[5U] = 0x98U;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__data_list[3U] = 1U;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__data_list[4U] = 1U;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__data_list[5U] = 1U;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__pair_list[0U] = 0x35U;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__pair_list[1U] = 0x671U;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__pair_list[2U] = 0x6f1U;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__pair_list[3U] = 0x371U;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__pair_list[4U] = 0x171U;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__pair_list[5U] = 0x131U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[1U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[2U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[3U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[4U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[5U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[6U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[7U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[8U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[9U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0xaU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0xbU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0xcU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0xdU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0xeU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0xfU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0x10U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0x11U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0x12U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0x13U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0x14U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0x15U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0x16U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0x17U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0x18U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0x19U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0x1aU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0x1bU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0x1cU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0x1dU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0x1eU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0x1fU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__unnamedblk1__DOT__i = 0x20U;
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
                VL_FATAL_MT("vsrc/ysyx_25040109_top.v", 1, "", "Settle region did not converge.");
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

void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__pmem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ &data);

VL_ATTR_COLD void Vysyx_25040109_top___024root___stl_sequent__TOP__0(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->a0_out = vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
        [0xaU];
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[0U] 
        = (0x6f00000000ULL | (QData)((IData)(vlSelf->pc)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[2U] 
        = (0x1700000000ULL | (QData)((IData)(vlSelf->pc)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__pair_list[0U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__mem_data)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__pair_list[1U] 
        = (0x6700000000ULL | (QData)((IData)(((IData)(4U) 
                                              + vlSelf->pc))));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__pair_list[2U] 
        = (0x6f00000000ULL | (QData)((IData)(((IData)(4U) 
                                              + vlSelf->pc))));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list[0U] 
        = vlSelf->ysyx_25040109_top__DOT__mem_data;
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list[1U] 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list[2U] 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[0U] 
        = vlSelf->pc;
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[2U] 
        = vlSelf->pc;
    if (((~ (IData)(vlSelf->rst)) & ((0x80000000U <= vlSelf->pc) 
                                     & (0x87ffffffU 
                                        >= vlSelf->pc)))) {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__pmem_read_TOP(vlSelf->pc, vlSelf->__Vtask_ysyx_25040109_top__DOT__ifu__DOT__pmem_read__5__data);
        vlSelf->ysyx_25040109_top__DOT__inst_ifu = vlSelf->__Vtask_ysyx_25040109_top__DOT__ifu__DOT__pmem_read__5__data;
    }
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[5U] 
        = (0x3700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->ysyx_25040109_top__DOT__inst_ifu))));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[6U] 
        = (0x1700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->ysyx_25040109_top__DOT__inst_ifu))));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT____Vcellinp__reg_write_select__key 
        = ((0x3f8U & (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                      << 3U)) | (7U & (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                       >> 0xcU)));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                                >> 0x14U));
    vlSelf->ysyx_25040109_top__DOT__rs2_data = ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                                     >> 0x14U)))
                                                 ? 0U
                                                 : 
                                                vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
                                                [(0x1fU 
                                                  & (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                                     >> 0x14U))]);
    vlSelf->ysyx_25040109_top__DOT__rs1_data = ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                                     >> 0xfU)))
                                                 ? 0U
                                                 : 
                                                vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
                                                [(0x1fU 
                                                  & (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                                     >> 0xfU))]);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                                >> 0x14U));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                                >> 0x14U));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[5U] 
        = (0xfffff000U & vlSelf->ysyx_25040109_top__DOT__inst_ifu);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[6U] 
        = (0xfffff000U & vlSelf->ysyx_25040109_top__DOT__inst_ifu);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j 
        = ((0x80000U & (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                        >> 0xcU)) | ((0x7f800U & (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                            >> 0x15U)))));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s 
        = ((0xfe0U & (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                      >> 0x14U)) | (0x1fU & (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                             >> 7U)));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b 
        = ((0x800U & (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                      >> 0x14U)) | ((0x400U & (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                               << 3U)) 
                                    | ((0x3f0U & (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                                  >> 0x15U)) 
                                       | (0xfU & (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                                  >> 8U)))));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____Vcellinp__reg_write_select__key) 
            == vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list
            [0U]) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____Vcellinp__reg_write_select__key) 
           == vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____Vcellinp__reg_write_select__key) 
               == vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list
               [1U]) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____Vcellinp__reg_write_select__key) 
              == vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____Vcellinp__reg_write_select__key) 
               == vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list
               [2U]) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____Vcellinp__reg_write_select__key) 
              == vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____Vcellinp__reg_write_select__key) 
               == vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list
               [3U]) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____Vcellinp__reg_write_select__key) 
              == vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____Vcellinp__reg_write_select__key) 
               == vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list
               [4U]) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____Vcellinp__reg_write_select__key) 
              == vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____Vcellinp__reg_write_select__key) 
               == vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list
               [5U]) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____Vcellinp__reg_write_select__key) 
              == vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_25040109_top__DOT__reg_write_en_idu 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__hit) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__lut_out));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[3U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext)));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[4U] 
        = (0x1300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
                       == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
           == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
                          == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
              == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
                          == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
              == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit)
            ? vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out
            : vlSelf->ysyx_25040109_top__DOT__rs1_data);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__branch_taken 
        = ((IData)((0x63U == (0x707fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu))) 
           & (vlSelf->ysyx_25040109_top__DOT__rs1_data 
              == vlSelf->ysyx_25040109_top__DOT__rs2_data));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[1U] 
        = (0x6f00000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                                           >> 0x1fU))) 
                                               << 0x15U) 
                                              | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j 
                                                 << 1U)))));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                        >> 0x1fU))) << 0x15U) | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j 
                                                 << 1U));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[2U] 
        = (0x2300000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s)))));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                        >> 0x1fU))) << 0xcU) | (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[0U] 
        = (0x6300000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                                           >> 0x1fU))) 
                                               << 0xdU) 
                                              | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b) 
                                                 << 1U)))));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                        >> 0x1fU))) << 0xdU) | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b) 
                                                << 1U));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
                       == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
           == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
                          == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
              == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
                          == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
              == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
                          == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
              == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
                          == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
              == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
                          == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
              == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
                          == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
              == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_25040109_top__DOT__imm = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit)
                                            ? vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out
                                            : 0U);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
                       == vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
           == vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
                          == vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
              == vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
                          == vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
              == vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__result = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__hit)
                                               ? vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__lut_out
                                               : (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                                                  + vlSelf->ysyx_25040109_top__DOT__imm));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__data_list[2U] 
        = (vlSelf->pc + vlSelf->ysyx_25040109_top__DOT__imm);
    vlSelf->ysyx_25040109_top__DOT__mem_addr = (vlSelf->ysyx_25040109_top__DOT__imm 
                                                + vlSelf->ysyx_25040109_top__DOT__rs1_data);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target 
        = (vlSelf->pc + vlSelf->ysyx_25040109_top__DOT__imm);
    vlSelf->ysyx_25040109_top__DOT__addr_valid = ((0x80000000U 
                                                   <= vlSelf->ysyx_25040109_top__DOT__mem_addr) 
                                                  & (0x87ffffffU 
                                                     >= vlSelf->ysyx_25040109_top__DOT__mem_addr));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__pair_list[1U] 
        = (0x6700000000ULL | (QData)((IData)((0xfffffffeU 
                                              & vlSelf->ysyx_25040109_top__DOT__mem_addr))));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__data_list[1U] 
        = (0xfffffffeU & vlSelf->ysyx_25040109_top__DOT__mem_addr);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__pair_list[2U] 
        = (0x6f00000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__pair_list[0U] 
        = (0x6300000000ULL | (QData)((IData)(((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__branch_taken)
                                               ? vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target
                                               : ((IData)(4U) 
                                                  + vlSelf->pc)))));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__data_list[0U] 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__branch_taken)
            ? vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target
            : ((IData)(4U) + vlSelf->pc));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
                       == vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
           == vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
                          == vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
              == vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
                          == vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
              == vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__next_pc = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__hit)
                                                ? vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__lut_out
                                                : ((IData)(4U) 
                                                   + vlSelf->pc));
}

VL_ATTR_COLD void Vysyx_25040109_top___024root___eval_stl(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_25040109_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25040109_top___024root___dump_triggers__ico(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

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
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->a0_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__inst_ifu = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__mem_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__reg_write_en_idu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__addr_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j = VL_RAND_RESET_I(20);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s = VL_RAND_RESET_I(12);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b = VL_RAND_RESET_I(12);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT____Vcellinp__reg_write_select__key = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(39);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__branch_taken = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(39);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(39);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(39);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_ysyx_25040109_top__DOT__ifu__DOT__pmem_read__5__data = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
