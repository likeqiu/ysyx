// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25040109_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25040109_top___024root.h"

void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__pmem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ &data);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mtrace_record_TOP(CData/*7:0*/ tp, IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ data);

VL_INLINE_OPT void Vysyx_25040109_top___024root___ico_sequent__TOP__0(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (((~ (IData)(vlSelf->rst)) & ((0x80000000U <= vlSelf->pc) 
                                     & (0x87ffffffU 
                                        >= vlSelf->pc)))) {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__pmem_read_TOP(vlSelf->pc, vlSelf->__Vtask_ysyx_25040109_top__DOT__ifu__DOT__pmem_read__6__data);
        vlSelf->ysyx_25040109_top__DOT__inst_ifu = vlSelf->__Vtask_ysyx_25040109_top__DOT__ifu__DOT__pmem_read__6__data;
    } else {
        vlSelf->ysyx_25040109_top__DOT__inst_ifu = 0U;
    }
    vlSelf->inst = vlSelf->ysyx_25040109_top__DOT__inst_ifu;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[5U] 
        = (0x3700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->ysyx_25040109_top__DOT__inst_ifu))));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[6U] 
        = (0x1700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->ysyx_25040109_top__DOT__inst_ifu))));
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
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[3U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext)));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[4U] 
        = (0x1300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__branch_taken 
        = ((0x63U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu)) 
           & ((IData)(((0U == (0x7000U & vlSelf->ysyx_25040109_top__DOT__inst_ifu)) 
                       & (vlSelf->ysyx_25040109_top__DOT__rs1_data 
                          == vlSelf->ysyx_25040109_top__DOT__rs2_data))) 
              | (IData)(((0x1000U == (0x7000U & vlSelf->ysyx_25040109_top__DOT__inst_ifu)) 
                         & (vlSelf->ysyx_25040109_top__DOT__rs1_data 
                            != vlSelf->ysyx_25040109_top__DOT__rs2_data)))));
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
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list[0U] 
        = (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
           + vlSelf->ysyx_25040109_top__DOT__imm);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__data_list[2U] 
        = (vlSelf->pc + vlSelf->ysyx_25040109_top__DOT__imm);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out 
        = (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
           + vlSelf->ysyx_25040109_top__DOT__imm);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target 
        = (vlSelf->pc + vlSelf->ysyx_25040109_top__DOT__imm);
    vlSelf->ysyx_25040109_top__DOT__mem_addr = (vlSelf->ysyx_25040109_top__DOT__imm 
                                                + vlSelf->ysyx_25040109_top__DOT__rs1_data);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__pair_list[0U] 
        = (0x3300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out)));
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
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__pair_list[1U] 
        = (0x6700000000ULL | (QData)((IData)((0xfffffffeU 
                                              & vlSelf->ysyx_25040109_top__DOT__mem_addr))));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__data_list[1U] 
        = (0xfffffffeU & vlSelf->ysyx_25040109_top__DOT__mem_addr);
    vlSelf->ysyx_25040109_top__DOT__mem_data = vlSelf->ysyx_25040109_top__DOT____Vxrand_h9b47bc05__0;
    if (((IData)((0x2003U == (0x707fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu))) 
         & ((0x80000000U <= vlSelf->ysyx_25040109_top__DOT__mem_addr) 
            & (0x87ffffffU >= vlSelf->ysyx_25040109_top__DOT__mem_addr)))) {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__pmem_read_TOP(vlSelf->ysyx_25040109_top__DOT__mem_addr, vlSelf->__Vtask_ysyx_25040109_top__DOT__pmem_read__0__data);
        vlSelf->ysyx_25040109_top__DOT__mem_data = vlSelf->__Vtask_ysyx_25040109_top__DOT__pmem_read__0__data;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mtrace_record_TOP(0x52U, vlSelf->ysyx_25040109_top__DOT__mem_addr, 4U, vlSelf->ysyx_25040109_top__DOT__mem_data);
    }
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
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__pair_list[1U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__mem_data)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list[1U] 
        = vlSelf->ysyx_25040109_top__DOT__mem_data;
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
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
                          == vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
              == vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_25040109_top__DOT__result = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__hit)
                                               ? vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__lut_out
                                               : vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out);
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

void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__pmem_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ len);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__itrace_print_TOP(IData/*31:0*/ pc, IData/*31:0*/ instruction_word, IData/*31:0*/ instr_len_bytes);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__printf_finish_TOP(IData/*31:0*/ inst, IData/*31:0*/ &printf_finish__Vfuncrtn);

VL_INLINE_OPT void Vysyx_25040109_top___024root___nba_sequent__TOP__0(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_ysyx_25040109_top__DOT__printf_finish__5__Vfuncout;
    __Vfunc_ysyx_25040109_top__DOT__printf_finish__5__Vfuncout = 0;
    CData/*4:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regs__v0;
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regs__v1;
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v1 = 0;
    CData/*4:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regs__v2;
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v2 = 0;
    CData/*4:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regs__v3;
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v3 = 0;
    CData/*4:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regs__v4;
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v4 = 0;
    CData/*4:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regs__v5;
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v5 = 0;
    CData/*4:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regs__v6;
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v6 = 0;
    CData/*4:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regs__v7;
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v7 = 0;
    CData/*4:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regs__v8;
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v8 = 0;
    CData/*4:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regs__v9;
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v9 = 0;
    CData/*4:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regs__v10;
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v10 = 0;
    CData/*4:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regs__v11;
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v11 = 0;
    CData/*4:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regs__v12;
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v12 = 0;
    CData/*4:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regs__v13;
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v13 = 0;
    CData/*4:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regs__v14;
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v14 = 0;
    CData/*4:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regs__v15;
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v15 = 0;
    CData/*4:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regs__v16;
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v16 = 0;
    CData/*4:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regs__v17;
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v17 = 0;
    CData/*4:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regs__v18;
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v18 = 0;
    CData/*4:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regs__v19;
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v19 = 0;
    CData/*4:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regs__v20;
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v20 = 0;
    CData/*4:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regs__v21;
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v21 = 0;
    CData/*4:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regs__v22;
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v22 = 0;
    CData/*4:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regs__v23;
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v23 = 0;
    CData/*4:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regs__v24;
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v24 = 0;
    CData/*4:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regs__v25;
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v25 = 0;
    CData/*4:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regs__v26;
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v26 = 0;
    CData/*4:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regs__v27;
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v27 = 0;
    CData/*4:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regs__v28;
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v28 = 0;
    CData/*4:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regs__v29;
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v29 = 0;
    CData/*4:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regs__v30;
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v30 = 0;
    CData/*4:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regs__v31;
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v31 = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_25040109_top__DOT__regfile__DOT__rf__v0;
    __Vdlyvdim0__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regfile__DOT__rf__v0;
    __Vdlyvval__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_25040109_top__DOT__regfile__DOT__rf__v0;
    __Vdlyvset__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 = 0;
    // Body
    if (((IData)((0x2023U == (0x707fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu))) 
         & ((0x80000000U <= vlSelf->ysyx_25040109_top__DOT__mem_addr) 
            & (0x87ffffffU >= vlSelf->ysyx_25040109_top__DOT__mem_addr)))) {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__pmem_write_TOP(vlSelf->ysyx_25040109_top__DOT__mem_addr, vlSelf->ysyx_25040109_top__DOT__rs2_data, 4U);
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mtrace_record_TOP(0x57U, vlSelf->ysyx_25040109_top__DOT__mem_addr, 4U, vlSelf->ysyx_25040109_top__DOT__rs2_data);
    }
    __Vdlyvset__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 = 0U;
    vlSelf->ysyx_25040109_top__DOT__unnamedblk1__DOT__i = 0x20U;
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__itrace_print_TOP(vlSelf->pc, vlSelf->ysyx_25040109_top__DOT__inst_ifu, 4U);
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__printf_finish_TOP(vlSelf->ysyx_25040109_top__DOT__inst_ifu, __Vfunc_ysyx_25040109_top__DOT__printf_finish__5__Vfuncout);
        if (VL_UNLIKELY((0U == __Vfunc_ysyx_25040109_top__DOT__printf_finish__5__Vfuncout))) {
            VL_FINISH_MT("vsrc/ysyx_25040109_top.v", 121, "");
        }
    }
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v0 = 
        (0x1fU & vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
         [0U]);
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v1 = 
        (0x1fU & vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
         [1U]);
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v2 = 
        (0x1fU & vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
         [2U]);
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v3 = 
        (0x1fU & vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
         [3U]);
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v4 = 
        (0x1fU & vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
         [4U]);
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v5 = 
        (0x1fU & vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
         [5U]);
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v6 = 
        (0x1fU & vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
         [6U]);
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v7 = 
        (0x1fU & vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
         [7U]);
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v8 = 
        (0x1fU & vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
         [8U]);
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v9 = 
        (0x1fU & vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
         [9U]);
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v10 = 
        (0x1fU & vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
         [0xaU]);
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v11 = 
        (0x1fU & vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
         [0xbU]);
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v12 = 
        (0x1fU & vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
         [0xcU]);
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v13 = 
        (0x1fU & vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
         [0xdU]);
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v14 = 
        (0x1fU & vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
         [0xeU]);
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v15 = 
        (0x1fU & vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
         [0xfU]);
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v16 = 
        (0x1fU & vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
         [0x10U]);
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v17 = 
        (0x1fU & vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
         [0x11U]);
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v18 = 
        (0x1fU & vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
         [0x12U]);
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v19 = 
        (0x1fU & vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
         [0x13U]);
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v20 = 
        (0x1fU & vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
         [0x14U]);
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v21 = 
        (0x1fU & vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
         [0x15U]);
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v22 = 
        (0x1fU & vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
         [0x16U]);
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v23 = 
        (0x1fU & vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
         [0x17U]);
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v24 = 
        (0x1fU & vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
         [0x18U]);
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v25 = 
        (0x1fU & vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
         [0x19U]);
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v26 = 
        (0x1fU & vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
         [0x1aU]);
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v27 = 
        (0x1fU & vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
         [0x1bU]);
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v28 = 
        (0x1fU & vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
         [0x1cU]);
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v29 = 
        (0x1fU & vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
         [0x1dU]);
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v30 = 
        (0x1fU & vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
         [0x1eU]);
    __Vdlyvval__ysyx_25040109_top__DOT__regs__v31 = 
        (0x1fU & vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
         [0x1fU]);
    if (((0x37U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu)) 
         | ((0x17U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu)) 
            | ((0x6fU == (0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu)) 
               | ((0x67U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu)) 
                  | ((3U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu)) 
                     | ((0x13U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu)) 
                        | (0x33U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu))))))))) {
        __Vdlyvval__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 
            = vlSelf->ysyx_25040109_top__DOT__result;
        __Vdlyvset__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 
            = (0x1fU & (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                        >> 7U));
    }
    vlSelf->ysyx_25040109_top__DOT__regs[0U] = __Vdlyvval__ysyx_25040109_top__DOT__regs__v0;
    vlSelf->ysyx_25040109_top__DOT__regs[1U] = __Vdlyvval__ysyx_25040109_top__DOT__regs__v1;
    vlSelf->ysyx_25040109_top__DOT__regs[2U] = __Vdlyvval__ysyx_25040109_top__DOT__regs__v2;
    vlSelf->ysyx_25040109_top__DOT__regs[3U] = __Vdlyvval__ysyx_25040109_top__DOT__regs__v3;
    vlSelf->ysyx_25040109_top__DOT__regs[4U] = __Vdlyvval__ysyx_25040109_top__DOT__regs__v4;
    vlSelf->ysyx_25040109_top__DOT__regs[5U] = __Vdlyvval__ysyx_25040109_top__DOT__regs__v5;
    vlSelf->ysyx_25040109_top__DOT__regs[6U] = __Vdlyvval__ysyx_25040109_top__DOT__regs__v6;
    vlSelf->ysyx_25040109_top__DOT__regs[7U] = __Vdlyvval__ysyx_25040109_top__DOT__regs__v7;
    vlSelf->ysyx_25040109_top__DOT__regs[8U] = __Vdlyvval__ysyx_25040109_top__DOT__regs__v8;
    vlSelf->ysyx_25040109_top__DOT__regs[9U] = __Vdlyvval__ysyx_25040109_top__DOT__regs__v9;
    vlSelf->ysyx_25040109_top__DOT__regs[0xaU] = __Vdlyvval__ysyx_25040109_top__DOT__regs__v10;
    vlSelf->ysyx_25040109_top__DOT__regs[0xbU] = __Vdlyvval__ysyx_25040109_top__DOT__regs__v11;
    vlSelf->ysyx_25040109_top__DOT__regs[0xcU] = __Vdlyvval__ysyx_25040109_top__DOT__regs__v12;
    vlSelf->ysyx_25040109_top__DOT__regs[0xdU] = __Vdlyvval__ysyx_25040109_top__DOT__regs__v13;
    vlSelf->ysyx_25040109_top__DOT__regs[0xeU] = __Vdlyvval__ysyx_25040109_top__DOT__regs__v14;
    vlSelf->ysyx_25040109_top__DOT__regs[0xfU] = __Vdlyvval__ysyx_25040109_top__DOT__regs__v15;
    vlSelf->ysyx_25040109_top__DOT__regs[0x10U] = __Vdlyvval__ysyx_25040109_top__DOT__regs__v16;
    vlSelf->ysyx_25040109_top__DOT__regs[0x11U] = __Vdlyvval__ysyx_25040109_top__DOT__regs__v17;
    vlSelf->ysyx_25040109_top__DOT__regs[0x12U] = __Vdlyvval__ysyx_25040109_top__DOT__regs__v18;
    vlSelf->ysyx_25040109_top__DOT__regs[0x13U] = __Vdlyvval__ysyx_25040109_top__DOT__regs__v19;
    vlSelf->ysyx_25040109_top__DOT__regs[0x14U] = __Vdlyvval__ysyx_25040109_top__DOT__regs__v20;
    vlSelf->ysyx_25040109_top__DOT__regs[0x15U] = __Vdlyvval__ysyx_25040109_top__DOT__regs__v21;
    vlSelf->ysyx_25040109_top__DOT__regs[0x16U] = __Vdlyvval__ysyx_25040109_top__DOT__regs__v22;
    vlSelf->ysyx_25040109_top__DOT__regs[0x17U] = __Vdlyvval__ysyx_25040109_top__DOT__regs__v23;
    vlSelf->ysyx_25040109_top__DOT__regs[0x18U] = __Vdlyvval__ysyx_25040109_top__DOT__regs__v24;
    vlSelf->ysyx_25040109_top__DOT__regs[0x19U] = __Vdlyvval__ysyx_25040109_top__DOT__regs__v25;
    vlSelf->ysyx_25040109_top__DOT__regs[0x1aU] = __Vdlyvval__ysyx_25040109_top__DOT__regs__v26;
    vlSelf->ysyx_25040109_top__DOT__regs[0x1bU] = __Vdlyvval__ysyx_25040109_top__DOT__regs__v27;
    vlSelf->ysyx_25040109_top__DOT__regs[0x1cU] = __Vdlyvval__ysyx_25040109_top__DOT__regs__v28;
    vlSelf->ysyx_25040109_top__DOT__regs[0x1dU] = __Vdlyvval__ysyx_25040109_top__DOT__regs__v29;
    vlSelf->ysyx_25040109_top__DOT__regs[0x1eU] = __Vdlyvval__ysyx_25040109_top__DOT__regs__v30;
    vlSelf->ysyx_25040109_top__DOT__regs[0x1fU] = __Vdlyvval__ysyx_25040109_top__DOT__regs__v31;
    if (__Vdlyvset__ysyx_25040109_top__DOT__regfile__DOT__rf__v0) {
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[__Vdlyvdim0__ysyx_25040109_top__DOT__regfile__DOT__rf__v0] 
            = __Vdlyvval__ysyx_25040109_top__DOT__regfile__DOT__rf__v0;
    }
    vlSelf->pc = ((IData)(vlSelf->rst) ? 0x80000000U
                   : vlSelf->ysyx_25040109_top__DOT__next_pc);
    vlSelf->a0_out = vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
        [0xaU];
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[0U] 
        = (0x6f00000000ULL | (QData)((IData)(vlSelf->pc)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[2U] 
        = (0x1700000000ULL | (QData)((IData)(vlSelf->pc)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__pair_list[2U] 
        = (0x6700000000ULL | (QData)((IData)(((IData)(4U) 
                                              + vlSelf->pc))));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__pair_list[3U] 
        = (0x6f00000000ULL | (QData)((IData)(((IData)(4U) 
                                              + vlSelf->pc))));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list[2U] 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list[3U] 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[0U] 
        = vlSelf->pc;
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[2U] 
        = vlSelf->pc;
    if (((~ (IData)(vlSelf->rst)) & ((0x80000000U <= vlSelf->pc) 
                                     & (0x87ffffffU 
                                        >= vlSelf->pc)))) {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__pmem_read_TOP(vlSelf->pc, vlSelf->__Vtask_ysyx_25040109_top__DOT__ifu__DOT__pmem_read__6__data);
        vlSelf->ysyx_25040109_top__DOT__inst_ifu = vlSelf->__Vtask_ysyx_25040109_top__DOT__ifu__DOT__pmem_read__6__data;
    } else {
        vlSelf->ysyx_25040109_top__DOT__inst_ifu = 0U;
    }
    vlSelf->inst = vlSelf->ysyx_25040109_top__DOT__inst_ifu;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[5U] 
        = (0x3700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->ysyx_25040109_top__DOT__inst_ifu))));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[6U] 
        = (0x1700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->ysyx_25040109_top__DOT__inst_ifu))));
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
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[3U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext)));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[4U] 
        = (0x1300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__branch_taken 
        = ((0x63U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu)) 
           & ((IData)(((0U == (0x7000U & vlSelf->ysyx_25040109_top__DOT__inst_ifu)) 
                       & (vlSelf->ysyx_25040109_top__DOT__rs1_data 
                          == vlSelf->ysyx_25040109_top__DOT__rs2_data))) 
              | (IData)(((0x1000U == (0x7000U & vlSelf->ysyx_25040109_top__DOT__inst_ifu)) 
                         & (vlSelf->ysyx_25040109_top__DOT__rs1_data 
                            != vlSelf->ysyx_25040109_top__DOT__rs2_data)))));
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
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__data_list[2U] 
        = (vlSelf->pc + vlSelf->ysyx_25040109_top__DOT__imm);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list[0U] 
        = (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
           + vlSelf->ysyx_25040109_top__DOT__imm);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out 
        = (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
           + vlSelf->ysyx_25040109_top__DOT__imm);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target 
        = (vlSelf->pc + vlSelf->ysyx_25040109_top__DOT__imm);
    vlSelf->ysyx_25040109_top__DOT__mem_addr = (vlSelf->ysyx_25040109_top__DOT__imm 
                                                + vlSelf->ysyx_25040109_top__DOT__rs1_data);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__pair_list[0U] 
        = (0x3300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out)));
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
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__pair_list[1U] 
        = (0x6700000000ULL | (QData)((IData)((0xfffffffeU 
                                              & vlSelf->ysyx_25040109_top__DOT__mem_addr))));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__data_list[1U] 
        = (0xfffffffeU & vlSelf->ysyx_25040109_top__DOT__mem_addr);
    vlSelf->ysyx_25040109_top__DOT__mem_data = vlSelf->ysyx_25040109_top__DOT____Vxrand_h9b47bc05__0;
    if (((IData)((0x2003U == (0x707fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu))) 
         & ((0x80000000U <= vlSelf->ysyx_25040109_top__DOT__mem_addr) 
            & (0x87ffffffU >= vlSelf->ysyx_25040109_top__DOT__mem_addr)))) {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__pmem_read_TOP(vlSelf->ysyx_25040109_top__DOT__mem_addr, vlSelf->__Vtask_ysyx_25040109_top__DOT__pmem_read__0__data);
        vlSelf->ysyx_25040109_top__DOT__mem_data = vlSelf->__Vtask_ysyx_25040109_top__DOT__pmem_read__0__data;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mtrace_record_TOP(0x52U, vlSelf->ysyx_25040109_top__DOT__mem_addr, 4U, vlSelf->ysyx_25040109_top__DOT__mem_data);
    }
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
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__pair_list[1U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__mem_data)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list[1U] 
        = vlSelf->ysyx_25040109_top__DOT__mem_data;
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
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
                          == vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu) 
              == vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_25040109_top__DOT__result = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__hit)
                                               ? vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__lut_out
                                               : vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out);
}

void Vysyx_25040109_top___024root___eval_nba(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_25040109_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
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
