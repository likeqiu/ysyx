// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25040109_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25040109_top___024root.h"

void Vysyx_25040109_top___024root___eval_act(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval_act\n"); );
}

void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__regfile__DOT__update_cpu_state__Vdpioc2_TOP(IData/*31:0*/ pc, const VlUnpacked<IData/*31:0*/, 32> &regs);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__verilog_pmem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ &data);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__verilog_pmem_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ len);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__itrace_print_TOP(IData/*31:0*/ pc, IData/*31:0*/ instruction_word, IData/*31:0*/ instr_len_bytes);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__printf_finish_TOP(IData/*31:0*/ inst, IData/*31:0*/ &printf_finish__Vfuncrtn);

VL_INLINE_OPT void Vysyx_25040109_top___024root___nba_sequent__TOP__0(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_ysyx_25040109_top__DOT__verilog_pmem_read__0__data;
    __Vtask_ysyx_25040109_top__DOT__verilog_pmem_read__0__data = 0;
    IData/*31:0*/ __Vtask_ysyx_25040109_top__DOT__verilog_pmem_read__1__data;
    __Vtask_ysyx_25040109_top__DOT__verilog_pmem_read__1__data = 0;
    IData/*31:0*/ __Vtask_ysyx_25040109_top__DOT__verilog_pmem_read__2__data;
    __Vtask_ysyx_25040109_top__DOT__verilog_pmem_read__2__data = 0;
    IData/*31:0*/ __Vfunc_ysyx_25040109_top__DOT__printf_finish__7__Vfuncout;
    __Vfunc_ysyx_25040109_top__DOT__printf_finish__7__Vfuncout = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_25040109_top__DOT__regfile__DOT__rf__v0;
    __Vdlyvdim0__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regfile__DOT__rf__v0;
    __Vdlyvval__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_25040109_top__DOT__regfile__DOT__rf__v0;
    __Vdlyvset__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 = 0;
    // Body
    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__regfile__DOT__update_cpu_state__Vdpioc2_TOP(vlSelf->pc, vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf);
    __Vdlyvset__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 = 0U;
    if ((((~ (IData)(vlSelf->ysyx_25040109_top__DOT__inst_invalid)) 
          & (IData)(vlSelf->ysyx_25040109_top__DOT__reg_write_en_idu)) 
         & (0U != (0x1fU & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                            >> 7U))))) {
        __Vdlyvval__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 
            = vlSelf->ysyx_25040109_top__DOT__result;
        __Vdlyvset__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 
            = (0x1fU & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                        >> 7U));
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_25040109_top__DOT__mem_data = 0U;
    } else if (((IData)(vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_valid_reg) 
                & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__inst_invalid)))) {
        if ((((3U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg)) 
              & ((IData)(vlSelf->ysyx_25040109_top__DOT____VdfgTmp_h8a51f582__0) 
                 | ((4U == (7U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                  >> 0xcU))) | (5U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                    >> 0xcU)))))) 
             & (IData)(vlSelf->ysyx_25040109_top__DOT__addr_valid))) {
            if ((0x4000U & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg)) {
                if ((0x2000U & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg)) {
                    vlSelf->ysyx_25040109_top__DOT__mem_data = 0U;
                } else {
                    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__verilog_pmem_read_TOP(vlSelf->ysyx_25040109_top__DOT__mem_addr, __Vtask_ysyx_25040109_top__DOT__verilog_pmem_read__0__data);
                    vlSelf->ysyx_25040109_top__DOT__mem_data_temp 
                        = __Vtask_ysyx_25040109_top__DOT__verilog_pmem_read__0__data;
                    vlSelf->ysyx_25040109_top__DOT__mem_data 
                        = vlSelf->ysyx_25040109_top__DOT__mem_data_temp;
                }
            } else if ((0x2000U & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg)) {
                if ((0x1000U & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg)) {
                    vlSelf->ysyx_25040109_top__DOT__mem_data = 0U;
                } else {
                    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__verilog_pmem_read_TOP(vlSelf->ysyx_25040109_top__DOT__mem_addr, __Vtask_ysyx_25040109_top__DOT__verilog_pmem_read__1__data);
                    vlSelf->ysyx_25040109_top__DOT__mem_data_temp 
                        = __Vtask_ysyx_25040109_top__DOT__verilog_pmem_read__1__data;
                    vlSelf->ysyx_25040109_top__DOT__mem_data 
                        = vlSelf->ysyx_25040109_top__DOT__mem_data_temp;
                }
            } else {
                Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__verilog_pmem_read_TOP(vlSelf->ysyx_25040109_top__DOT__mem_addr, __Vtask_ysyx_25040109_top__DOT__verilog_pmem_read__2__data);
                vlSelf->ysyx_25040109_top__DOT__mem_data_temp 
                    = __Vtask_ysyx_25040109_top__DOT__verilog_pmem_read__2__data;
                vlSelf->ysyx_25040109_top__DOT__mem_data 
                    = vlSelf->ysyx_25040109_top__DOT__mem_data_temp;
            }
        } else {
            vlSelf->ysyx_25040109_top__DOT__mem_data = 0U;
        }
        if ((((0x23U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg)) 
              & (IData)(vlSelf->ysyx_25040109_top__DOT____VdfgTmp_h8a51f582__0)) 
             & (IData)(vlSelf->ysyx_25040109_top__DOT__addr_valid))) {
            if ((0U == (7U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                              >> 0xcU)))) {
                Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__verilog_pmem_write_TOP(vlSelf->ysyx_25040109_top__DOT__mem_addr, vlSelf->ysyx_25040109_top__DOT__exu__DOT__rs2_signed, 1U);
            } else if ((1U == (7U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                     >> 0xcU)))) {
                Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__verilog_pmem_write_TOP(vlSelf->ysyx_25040109_top__DOT__mem_addr, vlSelf->ysyx_25040109_top__DOT__exu__DOT__rs2_signed, 2U);
            } else if ((2U == (7U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                     >> 0xcU)))) {
                Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__verilog_pmem_write_TOP(vlSelf->ysyx_25040109_top__DOT__mem_addr, vlSelf->ysyx_25040109_top__DOT__exu__DOT__rs2_signed, 4U);
            }
        }
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__itrace_print_TOP(vlSelf->pc, vlSelf->inst, 4U);
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__printf_finish_TOP(vlSelf->inst, __Vfunc_ysyx_25040109_top__DOT__printf_finish__7__Vfuncout);
        if (VL_UNLIKELY((0U == __Vfunc_ysyx_25040109_top__DOT__printf_finish__7__Vfuncout))) {
            VL_FINISH_MT("/home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_top.v", 150, "");
        }
    }
    if (vlSelf->rst) {
        vlSelf->pc = 0x80000000U;
        vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg = 0x13U;
    } else {
        vlSelf->pc = vlSelf->ysyx_25040109_top__DOT__next_pc;
        vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
            = vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem;
    }
    if (__Vdlyvset__ysyx_25040109_top__DOT__regfile__DOT__rf__v0) {
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[__Vdlyvdim0__ysyx_25040109_top__DOT__regfile__DOT__rf__v0] 
            = __Vdlyvval__ysyx_25040109_top__DOT__regfile__DOT__rf__v0;
    }
    vlSelf->a0_out = vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
        [0xaU];
    vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_valid_reg 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->ysyx_25040109_top__DOT__ifu__DOT__is_pc_valid));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[0U] 
        = (0x6f00000000ULL | (QData)((IData)(vlSelf->pc)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[2U] 
        = (0x1700000000ULL | (QData)((IData)(vlSelf->pc)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__pair_list[1U] 
        = (0x6700000000ULL | (QData)((IData)(((IData)(4U) 
                                              + vlSelf->pc))));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__pair_list[2U] 
        = (0x6f00000000ULL | (QData)((IData)(((IData)(4U) 
                                              + vlSelf->pc))));
    vlSelf->ysyx_25040109_top__DOT__ifu__DOT__is_pc_valid 
        = ((0x80000000U <= vlSelf->pc) & ((0x87ffffffU 
                                           >= vlSelf->pc) 
                                          & (0U == 
                                             (3U & vlSelf->pc))));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list[1U] 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list[2U] 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[0U] 
        = vlSelf->pc;
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[2U] 
        = vlSelf->pc;
    vlSelf->inst = vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg;
    vlSelf->ysyx_25040109_top__DOT____VdfgTmp_h8a51f582__0 
        = ((0U == (7U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                         >> 0xcU))) | ((1U == (7U & 
                                               (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                >> 0xcU))) 
                                       | (2U == (7U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                    >> 0xcU)))));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[5U] 
        = (0x3700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg))));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[6U] 
        = (0x1700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg))));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                >> 0x14U));
    vlSelf->ysyx_25040109_top__DOT__reg_write_en_idu 
        = ((0x37U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg)) 
           | ((0x17U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg)) 
              | ((0x6fU == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg)) 
                 | ((0x67U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg)) 
                    | ((3U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg)) 
                       | ((0x13U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg)) 
                          | (0x33U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg))))))));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__rs1_signed 
        = ((0U == (0x1fU & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                            >> 0xfU))) ? 0U : vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
           [(0x1fU & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                      >> 0xfU))]);
    vlSelf->__VdfgTmp_h6199ed9f__0 = vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
        [(0x1fU & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                   >> 0x14U))];
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                >> 0x14U));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                >> 0x14U));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[5U] 
        = (0xfffff000U & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[6U] 
        = (0xfffff000U & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j 
        = ((0x80000U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                        >> 0xcU)) | ((0x7f800U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                            >> 0x15U)))));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s 
        = ((0xfe0U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                      >> 0x14U)) | (0x1fU & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                             >> 7U)));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b 
        = ((0x800U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                      >> 0x14U)) | ((0x400U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                               << 3U)) 
                                    | ((0x3f0U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                  >> 0x15U)) 
                                       | (0xfU & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                  >> 8U)))));
    if (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__is_pc_valid) {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__verilog_pmem_read_TOP(vlSelf->pc, vlSelf->__Vtask_ysyx_25040109_top__DOT__ifu__DOT__verilog_pmem_read__8__data);
        vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
            = vlSelf->__Vtask_ysyx_25040109_top__DOT__ifu__DOT__verilog_pmem_read__8__data;
    } else {
        vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem = 0x13U;
    }
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[3U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext)));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[4U] 
        = (0x1300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext)));
    vlSelf->ysyx_25040109_top__DOT__inst_invalid = 
        (1U & ((~ ((IData)(vlSelf->ysyx_25040109_top__DOT__reg_write_en_idu) 
                   | ((0x23U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg)) 
                      | (0x63U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg))))) 
               | (IData)((0x100073U == (0xfff0707fU 
                                        & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg)))));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
                       == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
           == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
                          == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
              == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
                          == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
              == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit)
            ? vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out
            : vlSelf->ysyx_25040109_top__DOT__exu__DOT__rs1_signed);
    if ((0U == (0x1fU & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                         >> 0x14U)))) {
        vlSelf->ysyx_25040109_top__DOT__exu__DOT__rs2_signed = 0U;
        vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[1U] = 0U;
        vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[2U] = 0U;
    } else {
        vlSelf->ysyx_25040109_top__DOT__exu__DOT__rs2_signed 
            = vlSelf->__VdfgTmp_h6199ed9f__0;
        vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[1U] 
            = vlSelf->__VdfgTmp_h6199ed9f__0;
        vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[2U] 
            = vlSelf->__VdfgTmp_h6199ed9f__0;
    }
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[1U] 
        = (0x6f00000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                           >> 0x1fU))) 
                                               << 0x15U) 
                                              | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j 
                                                 << 1U)))));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                        >> 0x1fU))) << 0x15U) | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j 
                                                 << 1U));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[2U] 
        = (0x2300000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s)))));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                        >> 0x1fU))) << 0xcU) | (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[0U] 
        = (0x6300000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                           >> 0x1fU))) 
                                               << 0xdU) 
                                              | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b) 
                                                 << 1U)))));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                        >> 0x1fU))) << 0xdU) | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b) 
                                                << 1U));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__pair_list[0U] 
        = (0x7300000000ULL | (QData)((IData)(((IData)(vlSelf->ysyx_25040109_top__DOT__inst_invalid)
                                               ? vlSelf->pc
                                               : ((IData)(4U) 
                                                  + vlSelf->pc)))));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[1U] 
        = (0x6300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__rs2_signed)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[2U] 
        = (0x3300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__rs2_signed)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__branch_taken 
        = ((0x63U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg)) 
           & ((IData)(((0U == (0x7000U & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg)) 
                       & (vlSelf->ysyx_25040109_top__DOT__exu__DOT__rs1_signed 
                          == vlSelf->ysyx_25040109_top__DOT__exu__DOT__rs2_signed))) 
              | ((IData)(((0x1000U == (0x7000U & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg)) 
                          & ((vlSelf->ysyx_25040109_top__DOT__exu__DOT__rs1_signed 
                              != vlSelf->ysyx_25040109_top__DOT__exu__DOT__rs2_signed) 
                             & (0U != vlSelf->ysyx_25040109_top__DOT__exu__DOT__rs2_signed)))) 
                 | ((IData)(((0x4000U == (0x7000U & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg)) 
                             & VL_LTS_III(32, vlSelf->ysyx_25040109_top__DOT__exu__DOT__rs1_signed, vlSelf->ysyx_25040109_top__DOT__exu__DOT__rs2_signed))) 
                    | ((IData)(((0x5000U == (0x7000U 
                                             & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg)) 
                                & VL_GTES_III(32, vlSelf->ysyx_25040109_top__DOT__exu__DOT__rs1_signed, vlSelf->ysyx_25040109_top__DOT__exu__DOT__rs2_signed))) 
                       | ((IData)(((0x6000U == (0x7000U 
                                                & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg)) 
                                   & (vlSelf->ysyx_25040109_top__DOT__exu__DOT__rs1_signed 
                                      < vlSelf->ysyx_25040109_top__DOT__exu__DOT__rs2_signed))) 
                          | ((IData)(((0x7000U == (0x7000U 
                                                   & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg)) 
                                      & (vlSelf->ysyx_25040109_top__DOT__exu__DOT__rs1_signed 
                                         >= vlSelf->ysyx_25040109_top__DOT__exu__DOT__rs2_signed))) 
                             | (IData)((((0x1000U == 
                                          (0x7000U 
                                           & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg)) 
                                         & (0U == vlSelf->ysyx_25040109_top__DOT__exu__DOT__rs2_signed)) 
                                        & (0U != vlSelf->ysyx_25040109_top__DOT__exu__DOT__rs1_signed))))))))));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
                       == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
           == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
                          == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
              == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
                          == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
              == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
                          == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
              == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
                          == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
              == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
                          == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
              == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
                          == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
              == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_25040109_top__DOT__imm = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit)
                                            ? vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out
                                            : 0U);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[0U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__imm)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__data_list[0U] 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__inst_invalid)
            ? vlSelf->pc : ((IData)(4U) + vlSelf->pc));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__data_list[3U] 
        = (vlSelf->pc + vlSelf->ysyx_25040109_top__DOT__imm);
    vlSelf->ysyx_25040109_top__DOT__mem_addr = (vlSelf->ysyx_25040109_top__DOT__imm 
                                                + vlSelf->ysyx_25040109_top__DOT__exu__DOT__rs1_signed);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target 
        = (vlSelf->pc + vlSelf->ysyx_25040109_top__DOT__imm);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__shift_amount 
        = (0x1fU & (((0x13U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg)) 
                     & ((1U == (7U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                      >> 0xcU))) | 
                        (5U == (7U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                      >> 0xcU))))) ? vlSelf->ysyx_25040109_top__DOT__imm
                     : ((0U == (0x1fU & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                         >> 0x14U)))
                         ? 0U : vlSelf->__VdfgTmp_h6199ed9f__0)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[0U] 
        = vlSelf->ysyx_25040109_top__DOT__imm;
    vlSelf->ysyx_25040109_top__DOT__addr_valid = ((0x80000000U 
                                                   <= vlSelf->ysyx_25040109_top__DOT__mem_addr) 
                                                  & ((0x87ffffffU 
                                                      >= vlSelf->ysyx_25040109_top__DOT__mem_addr) 
                                                     & (0U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->ysyx_25040109_top__DOT__mem_addr))));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__pair_list[2U] 
        = (0x6700000000ULL | (QData)((IData)((0xfffffffeU 
                                              & vlSelf->ysyx_25040109_top__DOT__mem_addr))));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__data_list[2U] 
        = (0xfffffffeU & vlSelf->ysyx_25040109_top__DOT__mem_addr);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__pair_list[3U] 
        = (0x6f00000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__pair_list[1U] 
        = (0x6300000000ULL | (QData)((IData)(((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__branch_taken)
                                               ? vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target
                                               : ((IData)(4U) 
                                                  + vlSelf->pc)))));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__data_list[1U] 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__branch_taken)
            ? vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target
            : ((IData)(4U) + vlSelf->pc));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
                       == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
           == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
                          == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
              == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
                          == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
              == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit)
            ? vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out
            : vlSelf->ysyx_25040109_top__DOT__imm);
    if (vlSelf->ysyx_25040109_top__DOT__inst_invalid) {
        vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out = 0U;
    } else if (((((((((0x4c00U == (0x1ff80U & ((0x1fc00U 
                                                & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                   << 0xaU)) 
                                               | ((0x380U 
                                                   & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                      >> 5U)) 
                                                  | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                     >> 0x19U))))) 
                      | (0x4d00U == (0x1ff80U & ((0x1fc00U 
                                                  & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                     << 0xaU)) 
                                                 | ((0x380U 
                                                     & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                        >> 5U)) 
                                                    | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                       >> 0x19U)))))) 
                     | (0x4d80U == (0x1ff80U & ((0x1fc00U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                    << 0xaU)) 
                                                | ((0x380U 
                                                    & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                       >> 5U)) 
                                                   | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                      >> 0x19U)))))) 
                    | (0x4e00U == (0x1ff80U & ((0x1fc00U 
                                                & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                   << 0xaU)) 
                                               | ((0x380U 
                                                   & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                      >> 5U)) 
                                                  | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                     >> 0x19U)))))) 
                   | (0x4f00U == (0x1ff80U & ((0x1fc00U 
                                               & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                  << 0xaU)) 
                                              | ((0x380U 
                                                  & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                     >> 5U)) 
                                                 | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                    >> 0x19U)))))) 
                  | (0x4f80U == (0x1ff80U & ((0x1fc00U 
                                              & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                 << 0xaU)) 
                                             | ((0x380U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                    >> 5U)) 
                                                | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                   >> 0x19U)))))) 
                 | (0x4c80U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                             << 0xaU)) 
                                | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                              >> 5U)) 
                                   | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                      >> 0x19U))))) 
                | (0x4e80U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                            << 0xaU)) 
                               | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                             >> 5U)) 
                                  | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                     >> 0x19U)))))) {
        vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out 
            = ((0x4c00U == (0x1ff80U & ((0x1fc00U & 
                                         (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                          << 0xaU)) 
                                        | ((0x380U 
                                            & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                               >> 5U)) 
                                           | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                              >> 0x19U)))))
                ? (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                   + vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                : ((0x4d00U == (0x1ff80U & ((0x1fc00U 
                                             & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                << 0xaU)) 
                                            | ((0x380U 
                                                & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                   >> 5U)) 
                                               | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                  >> 0x19U)))))
                    ? (VL_LTS_III(32, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                        ? 1U : 0U) : ((0x4d80U == (0x1ff80U 
                                                   & ((0x1fc00U 
                                                       & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                          << 0xaU)) 
                                                      | ((0x380U 
                                                          & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                             >> 5U)) 
                                                         | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                            >> 0x19U)))))
                                       ? ((vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                                           < vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                                           ? 1U : 0U)
                                       : ((0x4e00U 
                                           == (0x1ff80U 
                                               & ((0x1fc00U 
                                                   & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                      << 0xaU)) 
                                                  | ((0x380U 
                                                      & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                         >> 5U)) 
                                                     | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                        >> 0x19U)))))
                                           ? (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                                              ^ vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                                           : ((0x4f00U 
                                               == (0x1ff80U 
                                                   & ((0x1fc00U 
                                                       & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                          << 0xaU)) 
                                                      | ((0x380U 
                                                          & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                             >> 5U)) 
                                                         | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                            >> 0x19U)))))
                                               ? (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                                                  | vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                                               : ((0x4f80U 
                                                   == 
                                                   (0x1ff80U 
                                                    & ((0x1fc00U 
                                                        & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                           << 0xaU)) 
                                                       | ((0x380U 
                                                           & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                              >> 5U)) 
                                                          | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                             >> 0x19U)))))
                                                   ? 
                                                  (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                                                   & vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                                                   : 
                                                  ((0x4c80U 
                                                    == 
                                                    ((0x1fc00U 
                                                      & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                         << 0xaU)) 
                                                     | ((0x380U 
                                                         & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                            >> 5U)) 
                                                        | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                           >> 0x19U))))
                                                    ? 
                                                   (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                                                    << (IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__shift_amount))
                                                    : 
                                                   (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                                                    >> (IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__shift_amount)))))))));
    } else if (((((((((0x4ea0U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                << 0xaU)) 
                                   | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                 >> 5U)) 
                                      | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                         >> 0x19U)))) 
                      | (0xcc00U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                  << 0xaU)) 
                                     | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                   >> 5U)) 
                                        | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                           >> 0x19U))))) 
                     | (0xcc20U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                 << 0xaU)) 
                                    | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                  >> 5U)) 
                                       | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                          >> 0x19U))))) 
                    | (0xcc80U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                << 0xaU)) 
                                   | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                 >> 5U)) 
                                      | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                         >> 0x19U))))) 
                   | (0xcd00U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                               << 0xaU)) 
                                  | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                >> 5U)) 
                                     | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                        >> 0x19U))))) 
                  | (0xcd80U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                              << 0xaU)) 
                                 | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                               >> 5U)) 
                                    | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                       >> 0x19U))))) 
                 | (0xce00U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                             << 0xaU)) 
                                | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                              >> 5U)) 
                                   | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                      >> 0x19U))))) 
                | (0xce80U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                            << 0xaU)) 
                               | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                             >> 5U)) 
                                  | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                     >> 0x19U)))))) {
        vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out 
            = ((0x4ea0U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                         << 0xaU)) 
                            | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                          >> 5U)) | 
                               (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                >> 0x19U)))) ? VL_SHIFTRS_III(32,32,5, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a, (IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__shift_amount))
                : ((0xcc00U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                             << 0xaU)) 
                                | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                              >> 5U)) 
                                   | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                      >> 0x19U)))) ? 
                   (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                    + vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                    : ((0xcc20U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                 << 0xaU)) 
                                    | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                  >> 5U)) 
                                       | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                          >> 0x19U))))
                        ? (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                           - vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                        : ((0xcc80U == ((0x1fc00U & 
                                         (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                          << 0xaU)) 
                                        | ((0x380U 
                                            & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                               >> 5U)) 
                                           | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                              >> 0x19U))))
                            ? (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                               << (IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__shift_amount))
                            : ((0xcd00U == ((0x1fc00U 
                                             & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                << 0xaU)) 
                                            | ((0x380U 
                                                & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                   >> 5U)) 
                                               | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                  >> 0x19U))))
                                ? (VL_LTS_III(32, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                                    ? 1U : 0U) : ((0xcd80U 
                                                   == 
                                                   ((0x1fc00U 
                                                     & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                        << 0xaU)) 
                                                    | ((0x380U 
                                                        & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                           >> 5U)) 
                                                       | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                          >> 0x19U))))
                                                   ? 
                                                  ((vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                                                    < vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  ((0xce00U 
                                                    == 
                                                    ((0x1fc00U 
                                                      & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                         << 0xaU)) 
                                                     | ((0x380U 
                                                         & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                            >> 5U)) 
                                                        | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                           >> 0x19U))))
                                                    ? 
                                                   (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                                                    ^ vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                                                    : 
                                                   (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                                                    >> (IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__shift_amount)))))))));
    } else if (((((((((0xcea0U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                << 0xaU)) 
                                   | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                 >> 5U)) 
                                      | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                         >> 0x19U)))) 
                      | (0xcf00U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                  << 0xaU)) 
                                     | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                   >> 5U)) 
                                        | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                           >> 0x19U))))) 
                     | (0xcf80U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                 << 0xaU)) 
                                    | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                  >> 5U)) 
                                       | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                          >> 0x19U))))) 
                    | (0xcc01U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                << 0xaU)) 
                                   | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                 >> 5U)) 
                                      | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                         >> 0x19U))))) 
                   | (0xcc81U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                               << 0xaU)) 
                                  | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                >> 5U)) 
                                     | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                        >> 0x19U))))) 
                  | (0xce01U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                              << 0xaU)) 
                                 | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                               >> 5U)) 
                                    | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                       >> 0x19U))))) 
                 | (0xce81U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                             << 0xaU)) 
                                | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                              >> 5U)) 
                                   | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                      >> 0x19U))))) 
                | (0xcf01U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                            << 0xaU)) 
                               | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                             >> 5U)) 
                                  | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                     >> 0x19U)))))) {
        if ((0xcea0U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                      << 0xaU)) | (
                                                   (0x380U 
                                                    & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                       >> 5U)) 
                                                   | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                      >> 0x19U))))) {
            vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out 
                = VL_SHIFTRS_III(32,32,5, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a, (IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__shift_amount));
        } else if ((0xcf00U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                             << 0xaU)) 
                                | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                              >> 5U)) 
                                   | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                      >> 0x19U))))) {
            vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out 
                = (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                   | vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b);
        } else if ((0xcf80U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                             << 0xaU)) 
                                | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                              >> 5U)) 
                                   | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                      >> 0x19U))))) {
            vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out 
                = (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                   & vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b);
        } else if ((0xcc01U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                             << 0xaU)) 
                                | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                              >> 5U)) 
                                   | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                      >> 0x19U))))) {
            vlSelf->ysyx_25040109_top__DOT__exu__DOT__mul_temp 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a), 
                              VL_EXTENDS_QI(64,32, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b));
            vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out 
                = (IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__mul_temp);
        } else if ((0xcc81U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                             << 0xaU)) 
                                | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                              >> 5U)) 
                                   | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                      >> 0x19U))))) {
            vlSelf->ysyx_25040109_top__DOT__exu__DOT__mul_temp 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a), 
                              VL_EXTENDS_QI(64,32, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b));
            vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out 
                = (IData)((vlSelf->ysyx_25040109_top__DOT__exu__DOT__mul_temp 
                           >> 0x20U));
        } else {
            vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out 
                = ((0xce01U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                             << 0xaU)) 
                                | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                              >> 5U)) 
                                   | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                      >> 0x19U)))) ? 
                   ((0U == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                     ? 0xffffffffU : (((0x80000000U 
                                        == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a) 
                                       & (0xffffffffU 
                                          == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b))
                                       ? 0x80000000U
                                       : VL_DIV_III(32, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)))
                    : ((0xce81U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                 << 0xaU)) 
                                    | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                  >> 5U)) 
                                       | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                          >> 0x19U))))
                        ? ((0U == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                            ? 0xffffffffU : VL_DIV_III(32, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b))
                        : ((0U == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                            ? vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a
                            : (((0x80000000U == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a) 
                                & (0xffffffffU == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b))
                                ? 0U : VL_MODDIV_III(32, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)))));
        }
    } else {
        vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out 
            = ((0xcf81U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                         << 0xaU)) 
                            | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                          >> 5U)) | 
                               (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                >> 0x19U)))) ? ((0U 
                                                 == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                                                 ? vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a
                                                 : 
                                                VL_MODDIV_III(32, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b))
                : ((0xc00U == (0x1ff80U & ((0x1fc00U 
                                            & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                               << 0xaU)) 
                                           | ((0x380U 
                                               & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                  >> 5U)) 
                                              | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                 >> 0x19U)))))
                    ? (((- (IData)((1U & (vlSelf->ysyx_25040109_top__DOT__mem_data 
                                          >> 7U)))) 
                        << 8U) | (0xffU & vlSelf->ysyx_25040109_top__DOT__mem_data))
                    : ((0xc80U == (0x1ff80U & ((0x1fc00U 
                                                & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                   << 0xaU)) 
                                               | ((0x380U 
                                                   & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                      >> 5U)) 
                                                  | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                     >> 0x19U)))))
                        ? (((- (IData)((1U & (vlSelf->ysyx_25040109_top__DOT__mem_data 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & vlSelf->ysyx_25040109_top__DOT__mem_data))
                        : ((0xd00U == (0x1ff80U & (
                                                   (0x1fc00U 
                                                    & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                       << 0xaU)) 
                                                   | ((0x380U 
                                                       & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                          >> 5U)) 
                                                      | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                         >> 0x19U)))))
                            ? vlSelf->ysyx_25040109_top__DOT__mem_data
                            : ((0xe00U == (0x1ff80U 
                                           & ((0x1fc00U 
                                               & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                  << 0xaU)) 
                                              | ((0x380U 
                                                  & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                     >> 5U)) 
                                                 | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                    >> 0x19U)))))
                                ? (0xffU & vlSelf->ysyx_25040109_top__DOT__mem_data)
                                : ((0xe80U == (0x1ff80U 
                                               & ((0x1fc00U 
                                                   & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                      << 0xaU)) 
                                                  | ((0x380U 
                                                      & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                         >> 5U)) 
                                                     | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                        >> 0x19U)))))
                                    ? (0xffffU & vlSelf->ysyx_25040109_top__DOT__mem_data)
                                    : 0U))))));
    }
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
                       == vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
           == vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
                          == vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
              == vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
                          == vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
              == vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
                          == vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
              == vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_25040109_top__DOT__next_pc = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__hit)
                                                ? vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__lut_out
                                                : ((IData)(4U) 
                                                   + vlSelf->pc));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__pair_list[0U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list[0U] 
        = vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out;
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
                       == vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
           == vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
                          == vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
              == vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
                          == vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg) 
              == vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list
              [2U]));
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
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

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
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
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
                    VL_FATAL_MT("/home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_top.v", 1, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_top.v", 1, "", "NBA region did not converge.");
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
