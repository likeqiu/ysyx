// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25040109_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25040109_top___024root.h"

VL_INLINE_OPT void Vysyx_25040109_top___024root___ico_sequent__TOP__0(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___ico_sequent__TOP__0\n"); );
    // Init
    IData/*20:0*/ __VdfgTmp_hdd37e9d5__0;
    __VdfgTmp_hdd37e9d5__0 = 0;
    VlWide<3>/*78:0*/ __VdfgTmp_h5749c53c__0;
    VL_ZERO_W(79, __VdfgTmp_h5749c53c__0);
    VlWide<4>/*117:0*/ __VdfgTmp_hfa571458__0;
    VL_ZERO_W(118, __VdfgTmp_hfa571458__0);
    VlWide<6>/*164:0*/ __VdfgTmp_h4730df24__0;
    VL_ZERO_W(165, __VdfgTmp_h4730df24__0);
    VlWide<7>/*203:0*/ __VdfgTmp_h2e4b8ec5__0;
    VL_ZERO_W(204, __VdfgTmp_h2e4b8ec5__0);
    // Body
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[6U] 
        = (0x2e00ULL | (QData)((IData)((vlSelf->inst 
                                        >> 0x17U))));
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
                    >> 4U));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[4U] 
        = (0x7fU & (vlSelf->inst >> 0x10U));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[5U] 
        = (0x7fU & (vlSelf->inst >> 0x10U));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[6U] 
        = (0x2e00U | (vlSelf->inst >> 0x17U));
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
    __VdfgTmp_h4730df24__0[0U] = __VdfgTmp_hfa571458__0[0U];
    __VdfgTmp_h4730df24__0[1U] = __VdfgTmp_hfa571458__0[1U];
    __VdfgTmp_h4730df24__0[2U] = __VdfgTmp_hfa571458__0[2U];
    __VdfgTmp_h4730df24__0[3U] = (0xc8c00000U | (((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_r_ext) 
                                                  << 0x1dU) 
                                                 | __VdfgTmp_hfa571458__0[3U]));
    __VdfgTmp_h4730df24__0[4U] = (0xcU | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                          << 5U));
    __VdfgTmp_h4730df24__0[5U] = (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                  >> 0x1bU);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[3U] 
        = (0x7fffffffffULL & (((QData)((IData)(__VdfgTmp_h4730df24__0[4U])) 
                               << 0xbU) | ((QData)((IData)(
                                                           __VdfgTmp_h4730df24__0[3U])) 
                                           >> 0x15U)));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[3U] 
        = ((__VdfgTmp_h4730df24__0[4U] << 0xbU) | (
                                                   __VdfgTmp_h4730df24__0[3U] 
                                                   >> 0x15U));
    __VdfgTmp_h2e4b8ec5__0[0U] = __VdfgTmp_h4730df24__0[0U];
    __VdfgTmp_h2e4b8ec5__0[1U] = __VdfgTmp_h4730df24__0[1U];
    __VdfgTmp_h2e4b8ec5__0[2U] = __VdfgTmp_h4730df24__0[2U];
    __VdfgTmp_h2e4b8ec5__0[3U] = __VdfgTmp_h4730df24__0[3U];
    __VdfgTmp_h2e4b8ec5__0[4U] = __VdfgTmp_h4730df24__0[4U];
    __VdfgTmp_h2e4b8ec5__0[5U] = (0x260U | ((0xff000000U 
                                             & (vlSelf->inst 
                                                << 0xcU)) 
                                            | __VdfgTmp_h4730df24__0[5U]));
    __VdfgTmp_h2e4b8ec5__0[6U] = (vlSelf->inst >> 0x14U);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[4U] 
        = (0x7fffffffffULL & (((QData)((IData)(__VdfgTmp_h2e4b8ec5__0[6U])) 
                               << 0x24U) | (((QData)((IData)(
                                                             __VdfgTmp_h2e4b8ec5__0[5U])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               __VdfgTmp_h2e4b8ec5__0[4U])) 
                                               >> 0x1cU))));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[4U] 
        = ((__VdfgTmp_h2e4b8ec5__0[5U] << 4U) | (__VdfgTmp_h2e4b8ec5__0[4U] 
                                                 >> 0x1cU));
    vlSelf->__VdfgTmp_h47798454__0[0U] = __VdfgTmp_h2e4b8ec5__0[0U];
    vlSelf->__VdfgTmp_h47798454__0[1U] = __VdfgTmp_h2e4b8ec5__0[1U];
    vlSelf->__VdfgTmp_h47798454__0[2U] = __VdfgTmp_h2e4b8ec5__0[2U];
    vlSelf->__VdfgTmp_h47798454__0[3U] = __VdfgTmp_h2e4b8ec5__0[3U];
    vlSelf->__VdfgTmp_h47798454__0[4U] = __VdfgTmp_h2e4b8ec5__0[4U];
    vlSelf->__VdfgTmp_h47798454__0[5U] = __VdfgTmp_h2e4b8ec5__0[5U];
    vlSelf->__VdfgTmp_h47798454__0[6U] = (0x37000U 
                                          | ((0x80000000U 
                                              & (vlSelf->inst 
                                                 << 0x13U)) 
                                             | __VdfgTmp_h2e4b8ec5__0[6U]));
    vlSelf->__VdfgTmp_h47798454__0[7U] = (vlSelf->inst 
                                          >> 0xdU);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[5U] 
        = (0x7fffffffffULL & (((QData)((IData)(vlSelf->__VdfgTmp_h47798454__0[7U])) 
                               << 0x1dU) | ((QData)((IData)(
                                                            vlSelf->__VdfgTmp_h47798454__0[6U])) 
                                            >> 3U)));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[5U] 
        = ((vlSelf->__VdfgTmp_h47798454__0[7U] << 0x1dU) 
           | (vlSelf->__VdfgTmp_h47798454__0[6U] >> 3U));
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
                                            : (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_inv_ext));
}

void Vysyx_25040109_top___024root___eval_ico(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vysyx_25040109_top___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vysyx_25040109_top___024root___eval_act(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval_act\n"); );
}

void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__printf_finish_TOP(IData/*31:0*/ inst, IData/*31:0*/ &printf_finish__Vfuncrtn);

VL_INLINE_OPT void Vysyx_25040109_top___024root___nba_sequent__TOP__0(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_ysyx_25040109_top__DOT__printf_finish__0__Vfuncout;
    __Vfunc_ysyx_25040109_top__DOT__printf_finish__0__Vfuncout = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_25040109_top__DOT__regfile__DOT__rf__v0;
    __Vdlyvdim0__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regfile__DOT__rf__v0;
    __Vdlyvval__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_25040109_top__DOT__regfile__DOT__rf__v0;
    __Vdlyvset__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 = 0;
    // Body
    VL_WRITEF("waddr=0x%x  wdata=0x%x  raddr1=0x%x  rdata1=0x%x\n\n",
              5,(0x1fU & (vlSelf->inst >> 7U)),32,(
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->inst)) 
                                                    | (0x67U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->inst)))
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlSelf->pc)
                                                    : 
                                                   (((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->inst))
                                                      ? vlSelf->pc
                                                      : 
                                                     ((0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->inst))
                                                       ? 0U
                                                       : vlSelf->ysyx_25040109_top__DOT__rs1_data)) 
                                                    + vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)),
              5,(0x1fU & (vlSelf->inst >> 0xfU)),32,
              vlSelf->ysyx_25040109_top__DOT__rs1_data);
    __Vdlyvset__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 = 0U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->rst))))) {
        VL_WRITEF("PC=0x%x, inst=0x%x, t0(x5)=0x%x, t1(x6)=0x%x\n",
                  32,vlSelf->pc,32,vlSelf->inst,32,
                  vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
                  [5U],32,vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
                  [6U]);
    }
    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__printf_finish_TOP(vlSelf->inst, __Vfunc_ysyx_25040109_top__DOT__printf_finish__0__Vfuncout);
    if (VL_UNLIKELY((0U == __Vfunc_ysyx_25040109_top__DOT__printf_finish__0__Vfuncout))) {
        VL_FINISH_MT("vsrc/ysyx_25040109_top.v", 79, "");
    }
    if (((IData)((0x13U == (0x707fU & vlSelf->inst))) 
         | ((0x17U == (0x7fU & vlSelf->inst)) | ((0x37U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->inst)) 
                                                 | ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->inst)) 
                                                    | (IData)(vlSelf->ysyx_25040109_top__DOT__is_jalr)))))) {
        __Vdlyvval__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 
            = (((0x6fU == (0x7fU & vlSelf->inst)) | 
                (0x67U == (0x7fU & vlSelf->inst))) ? 
               ((IData)(4U) + vlSelf->pc) : (((0x17U 
                                               == (0x7fU 
                                                   & vlSelf->inst))
                                               ? vlSelf->pc
                                               : ((0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->inst))
                                                   ? 0U
                                                   : vlSelf->ysyx_25040109_top__DOT__rs1_data)) 
                                             + vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b));
        __Vdlyvset__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 
            = (0x1fU & (vlSelf->inst >> 7U));
    }
    if (__Vdlyvset__ysyx_25040109_top__DOT__regfile__DOT__rf__v0) {
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[__Vdlyvdim0__ysyx_25040109_top__DOT__regfile__DOT__rf__v0] 
            = __Vdlyvval__ysyx_25040109_top__DOT__regfile__DOT__rf__v0;
    }
    vlSelf->a0_out = vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
        [0xaU];
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
    vlSelf->pc = ((IData)(vlSelf->rst) ? 0x80000000U
                   : vlSelf->ysyx_25040109_top__DOT__next_pc);
}

VL_INLINE_OPT void Vysyx_25040109_top___024root___nba_sequent__TOP__1(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___nba_sequent__TOP__1\n"); );
    // Body
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
}

void Vysyx_25040109_top___024root___eval_nba(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_25040109_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vysyx_25040109_top___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vysyx_25040109_top___024root___eval_triggers__ico(Vysyx_25040109_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25040109_top___024root___dump_triggers__ico(Vysyx_25040109_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_25040109_top___024root___eval_triggers__act(Vysyx_25040109_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25040109_top___024root___dump_triggers__act(Vysyx_25040109_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25040109_top___024root___dump_triggers__nba(Vysyx_25040109_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25040109_top___024root___eval(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vysyx_25040109_top___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vysyx_25040109_top___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ysyx_25040109_top.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vysyx_25040109_top___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vysyx_25040109_top___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vysyx_25040109_top___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/ysyx_25040109_top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vysyx_25040109_top___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vysyx_25040109_top___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ysyx_25040109_top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vysyx_25040109_top___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_25040109_top___024root___eval_debug_assertions(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
