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
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[6U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[7U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[7U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[7U] = 0ULL;
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

VL_ATTR_COLD void Vysyx_25040109_top___024root___stl_sequent__TOP__0(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*20:0*/ __VdfgTmp_hdd37e9d5__0;
    __VdfgTmp_hdd37e9d5__0 = 0;
    VlWide<3>/*78:0*/ __VdfgTmp_h5749c53c__0;
    VL_ZERO_W(79, __VdfgTmp_h5749c53c__0);
    VlWide<4>/*117:0*/ __VdfgTmp_hfa571458__0;
    VL_ZERO_W(118, __VdfgTmp_hfa571458__0);
    VlWide<5>/*156:0*/ __VdfgTmp_h23152f92__0;
    VL_ZERO_W(157, __VdfgTmp_h23152f92__0);
    VlWide<7>/*195:0*/ __VdfgTmp_h733fe146__0;
    VL_ZERO_W(196, __VdfgTmp_h733fe146__0);
    // Body
    vlSelf->a0_out = vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
        [0xaU];
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[6U] 
        = (0x2eULL | (QData)((IData)((vlSelf->inst 
                                      >> 0x1fU))));
    vlSelf->ysyx_25040109_top__DOT__is_jalr = (IData)(
                                                      (0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->inst)));
    vlSelf->ysyx_25040109_top__DOT__rs1_data = ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->inst 
                                                     >> 0xfU)))
                                                 ? 0U
                                                 : 
                                                vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
                                                [(0x1fU 
                                                  & (vlSelf->inst 
                                                     >> 0xfU))]);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[0U] 
        = (0x7fU & ((- (IData)((vlSelf->inst >> 0x1fU))) 
                    >> 0xbU));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[1U] 
        = (0x7fU & ((- (IData)((vlSelf->inst >> 0x1fU))) 
                    >> 3U));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[2U] 
        = (0x7fU & ((- (IData)((1U & (vlSelf->inst 
                                      >> 0xbU)))) >> 0xcU));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[3U] 
        = (0x7fU & ((- (IData)((vlSelf->inst >> 0x1fU))) 
                    >> 0xcU));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[4U] 
        = (0x7fU & (vlSelf->inst >> 0x18U));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[5U] 
        = (0x7fU & (vlSelf->inst >> 0x18U));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[6U] 
        = (0x2eU | (vlSelf->inst >> 0x1fU));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0xcU) 
           | (vlSelf->inst >> 0x14U));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j_ext 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0x15U) 
           | ((0x100000U & (vlSelf->inst >> 0xbU)) 
              | ((0xff000U & vlSelf->inst) | ((0x800U 
                                               & (vlSelf->inst 
                                                  >> 9U)) 
                                              | (0x7feU 
                                                 & (vlSelf->inst 
                                                    >> 0x14U))))));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b 
        = ((0x800U & (vlSelf->inst >> 0x14U)) | ((0x400U 
                                                  & (vlSelf->inst 
                                                     << 3U)) 
                                                 | ((0x3f0U 
                                                     & (vlSelf->inst 
                                                        >> 0x15U)) 
                                                    | (0xfU 
                                                       & (vlSelf->inst 
                                                          >> 8U)))));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b 
        = (((0x17U == (0x7fU & vlSelf->inst)) | (0x37U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->inst)))
            ? (0xfffff000U & vlSelf->inst) : ((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->inst))
                                               ? vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j_ext
                                               : vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext));
    __VdfgTmp_hdd37e9d5__0 = (0xe6U | (((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b) 
                                        << 9U) | (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_ebreak_ext)));
    __VdfgTmp_h5749c53c__0[0U] = (IData)((0x630000000000ULL 
                                          | (((QData)((IData)(
                                                              (((- (IData)(
                                                                           (vlSelf->inst 
                                                                            >> 0x1fU))) 
                                                                << 0xdU) 
                                                               | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b) 
                                                                  << 1U)))) 
                                              << 8U) 
                                             | (QData)((IData)(
                                                               (0xe6U 
                                                                | (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_ebreak_ext)))))));
    __VdfgTmp_h5749c53c__0[1U] = ((vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j_ext 
                                   << 0xfU) | (IData)(
                                                      ((0x630000000000ULL 
                                                        | (((QData)((IData)(
                                                                            (((- (IData)(
                                                                                (vlSelf->inst 
                                                                                >> 0x1fU))) 
                                                                              << 0xdU) 
                                                                             | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b) 
                                                                                << 1U)))) 
                                                            << 8U) 
                                                           | (QData)((IData)(
                                                                             (0xe6U 
                                                                              | (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_ebreak_ext)))))) 
                                                       >> 0x20U)));
    __VdfgTmp_h5749c53c__0[2U] = (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j_ext 
                                  >> 0x11U);
    vlSelf->ysyx_25040109_top__DOT__next_pc = ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst))
                                                ? (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b 
                                                   + vlSelf->pc)
                                                : ((IData)(vlSelf->ysyx_25040109_top__DOT__is_jalr)
                                                    ? 
                                                   (0xfffffffeU 
                                                    & (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b 
                                                       + vlSelf->ysyx_25040109_top__DOT__rs1_data))
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->pc)));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[0U] 
        = (((QData)((IData)((0x3ffffU & (- (IData)(
                                                   (vlSelf->inst 
                                                    >> 0x1fU)))))) 
            << 0x15U) | (QData)((IData)(__VdfgTmp_hdd37e9d5__0)));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0x15U) 
           | __VdfgTmp_hdd37e9d5__0);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[1U] 
        = (0x7fffffffffULL & (((QData)((IData)(__VdfgTmp_h5749c53c__0[2U])) 
                               << 0x19U) | ((QData)((IData)(
                                                            __VdfgTmp_h5749c53c__0[1U])) 
                                            >> 7U)));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[1U] 
        = ((__VdfgTmp_h5749c53c__0[2U] << 0x19U) | 
           (__VdfgTmp_h5749c53c__0[1U] >> 7U));
    __VdfgTmp_hfa571458__0[0U] = __VdfgTmp_h5749c53c__0[0U];
    __VdfgTmp_hfa571458__0[1U] = __VdfgTmp_h5749c53c__0[1U];
    __VdfgTmp_hfa571458__0[2U] = (0x378000U | ((0xffc00000U 
                                                & ((0xf8000000U 
                                                    & (vlSelf->inst 
                                                       << 2U)) 
                                                   | (0x7c00000U 
                                                      & (vlSelf->inst 
                                                         << 0xfU)))) 
                                               | __VdfgTmp_h5749c53c__0[2U]));
    __VdfgTmp_hfa571458__0[3U] = (0x3fffffU & ((0x3ffffcU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (vlSelf->inst 
                                                                  >> 0xbU)))) 
                                                   << 2U)) 
                                               | (vlSelf->inst 
                                                  >> 0x1eU)));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[2U] 
        = (0x7fffffffffULL & (((QData)((IData)(__VdfgTmp_hfa571458__0[3U])) 
                               << 0x12U) | ((QData)((IData)(
                                                            __VdfgTmp_hfa571458__0[2U])) 
                                            >> 0xeU)));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[2U] 
        = ((__VdfgTmp_hfa571458__0[3U] << 0x12U) | 
           (__VdfgTmp_hfa571458__0[2U] >> 0xeU));
    __VdfgTmp_h23152f92__0[0U] = __VdfgTmp_hfa571458__0[0U];
    __VdfgTmp_h23152f92__0[1U] = __VdfgTmp_hfa571458__0[1U];
    __VdfgTmp_h23152f92__0[2U] = __VdfgTmp_hfa571458__0[2U];
    __VdfgTmp_h23152f92__0[3U] = (0x8c00000U | ((vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                                 << 0x1dU) 
                                                | __VdfgTmp_hfa571458__0[3U]));
    __VdfgTmp_h23152f92__0[4U] = (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                  >> 3U);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[3U] 
        = (0x7fffffffffULL & (((QData)((IData)(__VdfgTmp_h23152f92__0[4U])) 
                               << 0xbU) | ((QData)((IData)(
                                                           __VdfgTmp_h23152f92__0[3U])) 
                                           >> 0x15U)));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[3U] 
        = ((__VdfgTmp_h23152f92__0[4U] << 0xbU) | (
                                                   __VdfgTmp_h23152f92__0[3U] 
                                                   >> 0x15U));
    __VdfgTmp_h733fe146__0[0U] = __VdfgTmp_h23152f92__0[0U];
    __VdfgTmp_h733fe146__0[1U] = __VdfgTmp_h23152f92__0[1U];
    __VdfgTmp_h733fe146__0[2U] = __VdfgTmp_h23152f92__0[2U];
    __VdfgTmp_h733fe146__0[3U] = __VdfgTmp_h23152f92__0[3U];
    __VdfgTmp_h733fe146__0[4U] = (0x60000000U | __VdfgTmp_h23152f92__0[4U]);
    __VdfgTmp_h733fe146__0[5U] = (2U | (0xffff0000U 
                                        & (vlSelf->inst 
                                           << 4U)));
    __VdfgTmp_h733fe146__0[6U] = (vlSelf->inst >> 0x1cU);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[4U] 
        = (0x7fffffffffULL & (((QData)((IData)(__VdfgTmp_h733fe146__0[6U])) 
                               << 0x24U) | (((QData)((IData)(
                                                             __VdfgTmp_h733fe146__0[5U])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               __VdfgTmp_h733fe146__0[4U])) 
                                               >> 0x1cU))));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[4U] 
        = ((__VdfgTmp_h733fe146__0[5U] << 4U) | (__VdfgTmp_h733fe146__0[4U] 
                                                 >> 0x1cU));
    vlSelf->__VdfgTmp_h027222d6__0[0U] = __VdfgTmp_h733fe146__0[0U];
    vlSelf->__VdfgTmp_h027222d6__0[1U] = __VdfgTmp_h733fe146__0[1U];
    vlSelf->__VdfgTmp_h027222d6__0[2U] = __VdfgTmp_h733fe146__0[2U];
    vlSelf->__VdfgTmp_h027222d6__0[3U] = __VdfgTmp_h733fe146__0[3U];
    vlSelf->__VdfgTmp_h027222d6__0[4U] = __VdfgTmp_h733fe146__0[4U];
    vlSelf->__VdfgTmp_h027222d6__0[5U] = __VdfgTmp_h733fe146__0[5U];
    vlSelf->__VdfgTmp_h027222d6__0[6U] = (0x370U | 
                                          ((0xff800000U 
                                            & (vlSelf->inst 
                                               << 0xbU)) 
                                           | __VdfgTmp_h733fe146__0[6U]));
    vlSelf->__VdfgTmp_h027222d6__0[7U] = (vlSelf->inst 
                                          >> 0x15U);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[5U] 
        = (0x7fffffffffULL & (((QData)((IData)(vlSelf->__VdfgTmp_h027222d6__0[7U])) 
                               << 0x1dU) | ((QData)((IData)(
                                                            vlSelf->__VdfgTmp_h027222d6__0[6U])) 
                                            >> 3U)));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[5U] 
        = ((vlSelf->__VdfgTmp_h027222d6__0[7U] << 0x1dU) 
           | (vlSelf->__VdfgTmp_h027222d6__0[6U] >> 3U));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->inst) == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->inst) == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_25040109_top__DOT__imm = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit)
                                            ? vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out
                                            : 0U);
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
    vlSelf->ysyx_25040109_top__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b = VL_RAND_RESET_I(12);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j_ext = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_ebreak_ext = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(39);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    VL_ZERO_RESET_W(235, vlSelf->__VdfgTmp_h027222d6__0);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
