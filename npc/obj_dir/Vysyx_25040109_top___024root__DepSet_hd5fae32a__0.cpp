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

void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__update_decode_state_TOP(IData/*31:0*/ pc, IData/*31:0*/ snpc, IData/*31:0*/ dnpc, IData/*31:0*/ inst);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__verilog_pmem_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ len);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__itrace_print_TOP(IData/*31:0*/ pc, IData/*31:0*/ instruction_word, IData/*31:0*/ instr_len_bytes, IData/*31:0*/ p_count_number);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__printf_finish_TOP(IData/*31:0*/ inst, IData/*31:0*/ &printf_finish__Vfuncrtn);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__regfile__DOT__update_cpu_state__Vdpioc2_TOP(IData/*31:0*/ pc, const VlUnpacked<IData/*31:0*/, 32> &regs);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__verilog_pmem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ &data);

VL_INLINE_OPT void Vysyx_25040109_top___024root___nba_sequent__TOP__0(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_ysyx_25040109_top__DOT__printf_finish__6__Vfuncout;
    __Vfunc_ysyx_25040109_top__DOT__printf_finish__6__Vfuncout = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_25040109_top__DOT__regfile__DOT__rf__v0;
    __Vdlyvdim0__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regfile__DOT__rf__v0;
    __Vdlyvval__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_25040109_top__DOT__regfile__DOT__rf__v0;
    __Vdlyvset__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 = 0;
    // Body
    __Vdlyvset__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 = 0U;
    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__update_decode_state_TOP(vlSelf->pc, 
                                                                                ((IData)(4U) 
                                                                                + vlSelf->pc), vlSelf->ysyx_25040109_top__DOT__next_pc, vlSelf->inst);
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (((0x23U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
             & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__trap_state)) 
                & (IData)(vlSelf->ysyx_25040109_top__DOT____VdfgTmp_hf3066aec__0)))) {
            if ((0U == (7U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                              >> 0xcU)))) {
                Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__verilog_pmem_write_TOP(vlSelf->ysyx_25040109_top__DOT__result, vlSelf->ysyx_25040109_top__DOT__rs2_data, 1U);
            } else if ((1U == (7U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                     >> 0xcU)))) {
                Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__verilog_pmem_write_TOP(vlSelf->ysyx_25040109_top__DOT__result, vlSelf->ysyx_25040109_top__DOT__rs2_data, 2U);
            } else if ((2U == (7U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                     >> 0xcU)))) {
                Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__verilog_pmem_write_TOP(vlSelf->ysyx_25040109_top__DOT__result, vlSelf->ysyx_25040109_top__DOT__rs2_data, 4U);
            }
        }
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__itrace_print_TOP(vlSelf->pc, vlSelf->inst, 4U, vlSelf->p_count_number);
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__printf_finish_TOP(vlSelf->inst, __Vfunc_ysyx_25040109_top__DOT__printf_finish__6__Vfuncout);
        if (VL_UNLIKELY((0U == __Vfunc_ysyx_25040109_top__DOT__printf_finish__6__Vfuncout))) {
            VL_FINISH_MT("/home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_top.v", 281, "");
        }
    }
    if ((((~ (IData)(vlSelf->ysyx_25040109_top__DOT__trap_state)) 
          & ((IData)(vlSelf->ysyx_25040109_top__DOT____VdfgTmp_hf3066aec__0) 
             & ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_hee48d914__0) 
                | ((0x67U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                   | ((3U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                      | ((0x13U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                         | ((0x33U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                            | (0x73U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem))))))))) 
         & (0U != (0x1fU & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                            >> 7U))))) {
        __Vdlyvval__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 
            = ((IData)(vlSelf->ysyx_25040109_top__DOT__is_load)
                ? vlSelf->ysyx_25040109_top__DOT__load_result
                : vlSelf->ysyx_25040109_top__DOT__result);
        __Vdlyvset__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 
            = (0x1fU & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                        >> 7U));
    }
    if (vlSelf->ysyx_25040109_top__DOT__final_csr_we) {
        if ((0x300U != (IData)(vlSelf->ysyx_25040109_top__DOT__final_csr_waddr))) {
            if ((0x305U != (IData)(vlSelf->ysyx_25040109_top__DOT__final_csr_waddr))) {
                if ((0x341U != (IData)(vlSelf->ysyx_25040109_top__DOT__final_csr_waddr))) {
                    if ((0x342U == (IData)(vlSelf->ysyx_25040109_top__DOT__final_csr_waddr))) {
                        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__mcause 
                            = vlSelf->ysyx_25040109_top__DOT__final_csr_wdata;
                    }
                }
                if ((0x341U == (IData)(vlSelf->ysyx_25040109_top__DOT__final_csr_waddr))) {
                    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__mepc 
                        = vlSelf->ysyx_25040109_top__DOT__final_csr_wdata;
                }
            }
            if ((0x305U == (IData)(vlSelf->ysyx_25040109_top__DOT__final_csr_waddr))) {
                vlSelf->ysyx_25040109_top__DOT__regfile__DOT__mtvec 
                    = vlSelf->ysyx_25040109_top__DOT__final_csr_wdata;
            }
        }
        if ((0x300U == (IData)(vlSelf->ysyx_25040109_top__DOT__final_csr_waddr))) {
            vlSelf->ysyx_25040109_top__DOT__regfile__DOT__mstatus 
                = vlSelf->ysyx_25040109_top__DOT__final_csr_wdata;
        }
    }
    if (__Vdlyvset__ysyx_25040109_top__DOT__regfile__DOT__rf__v0) {
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[__Vdlyvdim0__ysyx_25040109_top__DOT__regfile__DOT__rf__v0] 
            = __Vdlyvval__ysyx_25040109_top__DOT__regfile__DOT__rf__v0;
    }
    if (vlSelf->rst) {
        vlSelf->pc = 0x80000000U;
    } else if ((1U & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__trap_state)))) {
        vlSelf->pc = vlSelf->ysyx_25040109_top__DOT__next_pc;
    }
    vlSelf->a0_out = vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
        [0xaU];
    vlSelf->ysyx_25040109_top__DOT__trap_state = ((~ (IData)(vlSelf->rst)) 
                                                  & (IData)(vlSelf->ysyx_25040109_top__DOT__is_ecall));
    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__regfile__DOT__update_cpu_state__Vdpioc2_TOP(vlSelf->pc, vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[0U] 
        = (0x6f00000000ULL | (QData)((IData)(vlSelf->pc)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[2U] 
        = (0x1700000000ULL | (QData)((IData)(vlSelf->pc)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__pair_list[0U] 
        = (0x6700000000ULL | (QData)((IData)(((IData)(4U) 
                                              + vlSelf->pc))));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__pair_list[1U] 
        = (0x6f00000000ULL | (QData)((IData)(((IData)(4U) 
                                              + vlSelf->pc))));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list[0U] 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list[1U] 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[0U] 
        = vlSelf->pc;
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[2U] 
        = vlSelf->pc;
    if (((0x80000000U <= vlSelf->pc) & (0x87ffffffU 
                                        >= vlSelf->pc))) {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__verilog_pmem_read_TOP(vlSelf->pc, vlSelf->__Vtask_ysyx_25040109_top__DOT__ifu__DOT__verilog_pmem_read__7__data);
        vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
            = vlSelf->__Vtask_ysyx_25040109_top__DOT__ifu__DOT__verilog_pmem_read__7__data;
    } else {
        vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem = 0x13U;
    }
    vlSelf->inst = vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[6U] 
        = (0x3700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem))));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[7U] 
        = (0x1700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem))));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT____VdfgTmp_hd1c31b8f__0 
        = (IData)((0x73U == (0x707fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                >> 0x14U));
    vlSelf->ysyx_25040109_top__DOT__rs1_data = ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                     >> 0xfU)))
                                                 ? 0U
                                                 : 
                                                vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
                                                [(0x1fU 
                                                  & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                     >> 0xfU))]);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_hee48d914__0 
        = ((0x37U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
           | ((0x17U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
              | (0x6fU == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem))));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_h92aa4f4c__0 
        = ((6U == (7U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                         >> 0xcU))) | (7U == (7U & 
                                              (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                               >> 0xcU))));
    vlSelf->__VdfgTmp_h61070d84__0 = ((4U == (7U & 
                                              (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                               >> 0xcU))) 
                                      | (5U == (7U 
                                                & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                   >> 0xcU))));
    vlSelf->__VdfgTmp_ha3c42dfe__0 = vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
        [(0x1fU & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                   >> 0x14U))];
    vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_he2c0485b__0 
        = ((0U == (7U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                         >> 0xcU))) | (1U == (7U & 
                                              (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                               >> 0xcU))));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_h26e5c323__0 
        = (IData)((0x1000U == (0xfe007000U & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_h5db903ec__0 
        = (IData)((0x5000U == (0xfe007000U & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_h5f3f1c8d__0 
        = (IData)((0x40005000U == (0xfe007000U & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                >> 0x14U));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                >> 0x14U));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[5U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                >> 0x14U));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[6U] 
        = (0xfffff000U & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[7U] 
        = (0xfffff000U & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j 
        = ((0x80000U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                        >> 0xcU)) | ((0x7f800U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                            >> 0x15U)))));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s 
        = ((0xfe0U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                      >> 0x14U)) | (0x1fU & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                             >> 7U)));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b 
        = ((0x800U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                      >> 0x14U)) | ((0x400U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                               << 3U)) 
                                    | ((0x3f0U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                  >> 0x15U)) 
                                       | (0xfU & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                  >> 8U)))));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[3U] 
        = (0x6700000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext)));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[4U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext)));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[5U] 
        = (0x1300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
                       == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
           == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
                          == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
              == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
                          == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
              == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit)
            ? vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out
            : vlSelf->ysyx_25040109_top__DOT__rs1_data);
    vlSelf->ysyx_25040109_top__DOT__is_load = ((3U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                               & ((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                       >> 0xcU))) 
                                                  | ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                          >> 0xcU))) 
                                                     | ((2U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                             >> 0xcU))) 
                                                        | (IData)(vlSelf->__VdfgTmp_h61070d84__0)))));
    if ((0U == (0x1fU & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                         >> 0x14U)))) {
        vlSelf->ysyx_25040109_top__DOT__rs2_data = 0U;
        vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[2U] = 0U;
        vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[3U] = 0U;
    } else {
        vlSelf->ysyx_25040109_top__DOT__rs2_data = vlSelf->__VdfgTmp_ha3c42dfe__0;
        vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[2U] 
            = vlSelf->__VdfgTmp_ha3c42dfe__0;
        vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[3U] 
            = vlSelf->__VdfgTmp_ha3c42dfe__0;
    }
    vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_hd1deae94__0 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_he2c0485b__0) 
           | (2U == (7U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                           >> 0xcU))));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__valid_r_type 
        = ((0x33U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
           & ((IData)((0U == (0xfe007000U & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem))) 
              | ((IData)((0x40000000U == (0xfe007000U 
                                          & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem))) 
                 | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_h26e5c323__0) 
                    | ((IData)((0x2000U == (0xfe007000U 
                                            & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem))) 
                       | ((IData)((0x3000U == (0xfe007000U 
                                               & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem))) 
                          | ((IData)((0x4000U == (0xfe007000U 
                                                  & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem))) 
                             | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_h5db903ec__0) 
                                | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_h5f3f1c8d__0) 
                                   | ((IData)((0x6000U 
                                               == (0xfe007000U 
                                                   & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem))) 
                                      | ((IData)((0x7000U 
                                                  == 
                                                  (0xfe007000U 
                                                   & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem))) 
                                         | (((0U == 
                                              (7U & 
                                               (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                >> 0xcU))) 
                                             | ((1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                     >> 0xcU))) 
                                                | ((4U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                        >> 0xcU))) 
                                                   | ((5U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                           >> 0xcU))) 
                                                      | ((6U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                              >> 0xcU))) 
                                                         | (7U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                                >> 0xcU)))))))) 
                                            & (1U == 
                                               (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                >> 0x19U))))))))))))));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[1U] 
        = (0x6f00000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                           >> 0x1fU))) 
                                               << 0x15U) 
                                              | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j 
                                                 << 1U)))));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                        >> 0x1fU))) << 0x15U) | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j 
                                                 << 1U));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[2U] 
        = (0x2300000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s)))));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                        >> 0x1fU))) << 0xcU) | (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[0U] 
        = (0x6300000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                           >> 0x1fU))) 
                                               << 0xdU) 
                                              | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b) 
                                                 << 1U)))));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                        >> 0x1fU))) << 0xdU) | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b) 
                                                << 1U));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[2U] 
        = (0x6300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__rs2_data)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[3U] 
        = (0x3300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__rs2_data)));
    vlSelf->ysyx_25040109_top__DOT____VdfgTmp_hf3066aec__0 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_hee48d914__0) 
           | ((IData)((0x67U == (0x707fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem))) 
              | (((3U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                  & ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_hd1deae94__0) 
                     | (IData)(vlSelf->__VdfgTmp_h61070d84__0))) 
                 | (((0x23U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                     & (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_hd1deae94__0)) 
                    | (((0x63U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                        & ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_he2c0485b__0) 
                           | ((4U == (7U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                            >> 0xcU))) 
                              | (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_h92aa4f4c__0)))) 
                       | (((0x13U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                           & ((0U == (7U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                            >> 0xcU))) 
                              | ((2U == (7U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                               >> 0xcU))) 
                                 | ((3U == (7U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                  >> 0xcU))) 
                                    | ((4U == (7U & 
                                               (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                >> 0xcU))) 
                                       | ((6U == (7U 
                                                  & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                     >> 0xcU))) 
                                          | ((7U == 
                                              (7U & 
                                               (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                >> 0xcU))) 
                                             | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_h26e5c323__0) 
                                                | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_h5db903ec__0) 
                                                   | (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_h5f3f1c8d__0)))))))))) 
                          | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__valid_r_type) 
                             | ((0x73U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                & ((IData)(((0U == 
                                             (0x7000U 
                                              & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                            & ((0U 
                                                == 
                                                (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                 >> 0x14U)) 
                                               | ((1U 
                                                   == 
                                                   (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                    >> 0x14U)) 
                                                  | (0x302U 
                                                     == 
                                                     (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                      >> 0x14U)))))) 
                                   | ((1U == (7U & 
                                              (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                               >> 0xcU))) 
                                      | ((2U == (7U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                    >> 0xcU))) 
                                         | ((3U == 
                                             (7U & 
                                              (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                               >> 0xcU))) 
                                            | ((5U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                    >> 0xcU))) 
                                               | (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_h92aa4f4c__0))))))))))))));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
                       == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
           == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
                          == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
              == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
                          == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
              == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
                          == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
              == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
                          == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
              == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
                          == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
              == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
                          == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
              == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
                          == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
              == vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_25040109_top__DOT__imm = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit)
                                            ? vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out
                                            : 0U);
    vlSelf->ysyx_25040109_top__DOT__csr_we_from_exu = 0U;
    vlSelf->ysyx_25040109_top__DOT__is_ecall = (IData)(
                                                       ((0x73U 
                                                         == 
                                                         (0xfff0707fU 
                                                          & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                                        & (IData)(vlSelf->ysyx_25040109_top__DOT____VdfgTmp_hf3066aec__0)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[0U] 
        = (0x2300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__imm)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[1U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__imm)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target 
        = (vlSelf->pc + vlSelf->ysyx_25040109_top__DOT__imm);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__shift_amount 
        = (0x1fU & (((0x13U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                     & ((1U == (7U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                      >> 0xcU))) | 
                        (5U == (7U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                      >> 0xcU))))) ? vlSelf->ysyx_25040109_top__DOT__imm
                     : ((0U == (0x1fU & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                         >> 0x14U)))
                         ? 0U : vlSelf->__VdfgTmp_ha3c42dfe__0)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[0U] 
        = vlSelf->ysyx_25040109_top__DOT__imm;
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[1U] 
        = vlSelf->ysyx_25040109_top__DOT__imm;
    if (((0x73U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
         & (IData)(vlSelf->ysyx_25040109_top__DOT____VdfgTmp_hf3066aec__0))) {
        vlSelf->ysyx_25040109_top__DOT__csr_we_from_exu 
            = ((1U == (7U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                             >> 0xcU))) | (IData)((
                                                   (0x2000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                                   & (0U 
                                                      != 
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                          >> 0xfU))))));
    }
    vlSelf->ysyx_25040109_top__DOT__final_csr_we = 
        ((IData)(vlSelf->ysyx_25040109_top__DOT__csr_we_from_exu) 
         | (IData)(vlSelf->ysyx_25040109_top__DOT__is_ecall));
    if (vlSelf->ysyx_25040109_top__DOT__is_ecall) {
        vlSelf->ysyx_25040109_top__DOT__final_csr_wdata 
            = vlSelf->pc;
        vlSelf->ysyx_25040109_top__DOT__final_csr_waddr = 0x341U;
    } else {
        vlSelf->ysyx_25040109_top__DOT__final_csr_wdata 
            = vlSelf->ysyx_25040109_top__DOT__rs1_data;
        vlSelf->ysyx_25040109_top__DOT__final_csr_waddr 
            = (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
               >> 0x14U);
    }
    if (VL_LIKELY(vlSelf->ysyx_25040109_top__DOT____VdfgTmp_hf3066aec__0)) {
        vlSelf->ysyx_25040109_top__DOT__next_pc = (
                                                   ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT____VdfgTmp_hd1c31b8f__0) 
                                                    & (0U 
                                                       == 
                                                       (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                        >> 0x14U)))
                                                    ? vlSelf->ysyx_25040109_top__DOT__regfile__DOT__mtvec
                                                    : 
                                                   (((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT____VdfgTmp_hd1c31b8f__0) 
                                                     & (0x302U 
                                                        == 
                                                        (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                         >> 0x14U)))
                                                     ? vlSelf->ysyx_25040109_top__DOT__regfile__DOT__mepc
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem))
                                                      ? vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem))
                                                       ? 
                                                      (0xfffffffeU 
                                                       & (vlSelf->ysyx_25040109_top__DOT__imm 
                                                          + vlSelf->ysyx_25040109_top__DOT__rs1_data))
                                                       : 
                                                      (((0x63U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                                        & ((IData)(
                                                                   ((0U 
                                                                     == 
                                                                     (0x7000U 
                                                                      & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                                                    & (vlSelf->ysyx_25040109_top__DOT__rs1_data 
                                                                       == vlSelf->ysyx_25040109_top__DOT__rs2_data))) 
                                                           | ((IData)(
                                                                      ((0x1000U 
                                                                        == 
                                                                        (0x7000U 
                                                                         & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                                                       & (vlSelf->ysyx_25040109_top__DOT__rs1_data 
                                                                          != vlSelf->ysyx_25040109_top__DOT__rs2_data))) 
                                                              | ((IData)(
                                                                         ((0x4000U 
                                                                           == 
                                                                           (0x7000U 
                                                                            & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                                                          & VL_LTS_III(32, vlSelf->ysyx_25040109_top__DOT__rs1_data, vlSelf->ysyx_25040109_top__DOT__rs2_data))) 
                                                                 | ((IData)(
                                                                            ((0x5000U 
                                                                              == 
                                                                              (0x7000U 
                                                                               & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                                                             & VL_GTES_III(32, vlSelf->ysyx_25040109_top__DOT__rs1_data, vlSelf->ysyx_25040109_top__DOT__rs2_data))) 
                                                                    | ((IData)(
                                                                               ((0x6000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                                                                & (vlSelf->ysyx_25040109_top__DOT__rs1_data 
                                                                                < vlSelf->ysyx_25040109_top__DOT__rs2_data))) 
                                                                       | (IData)(
                                                                                ((0x7000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                                                                & (vlSelf->ysyx_25040109_top__DOT__rs1_data 
                                                                                >= vlSelf->ysyx_25040109_top__DOT__rs2_data)))))))))
                                                        ? vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target
                                                        : 
                                                       ((IData)(4U) 
                                                        + vlSelf->pc))))));
    } else {
        VL_FINISH_MT("/home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_EXU.v", 227, "");
        vlSelf->ysyx_25040109_top__DOT__next_pc = ((IData)(4U) 
                                                   + vlSelf->pc);
        VL_WRITEF("0x%08x\n",32,vlSelf->pc);
    }
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
                       == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
           == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
                          == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
              == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
                          == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
              == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
                          == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
              == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit)
            ? vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out
            : vlSelf->ysyx_25040109_top__DOT__imm);
    if (vlSelf->ysyx_25040109_top__DOT____VdfgTmp_hf3066aec__0) {
        if (((((((((0x4c00U == (0x1ff80U & ((0x1fc00U 
                                             & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                << 0xaU)) 
                                            | ((0x380U 
                                                & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                   >> 5U)) 
                                               | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                  >> 0x19U))))) 
                   | (0x4d00U == (0x1ff80U & ((0x1fc00U 
                                               & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                  << 0xaU)) 
                                              | ((0x380U 
                                                  & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                     >> 5U)) 
                                                 | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                    >> 0x19U)))))) 
                  | (0x4d80U == (0x1ff80U & ((0x1fc00U 
                                              & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                 << 0xaU)) 
                                             | ((0x380U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                    >> 5U)) 
                                                | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                   >> 0x19U)))))) 
                 | (0x4e00U == (0x1ff80U & ((0x1fc00U 
                                             & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                << 0xaU)) 
                                            | ((0x380U 
                                                & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                   >> 5U)) 
                                               | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                  >> 0x19U)))))) 
                | (0x4f00U == (0x1ff80U & ((0x1fc00U 
                                            & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                               << 0xaU)) 
                                           | ((0x380U 
                                               & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                  >> 5U)) 
                                              | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                 >> 0x19U)))))) 
               | (0x4f80U == (0x1ff80U & ((0x1fc00U 
                                           & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                              << 0xaU)) 
                                          | ((0x380U 
                                              & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                 >> 5U)) 
                                             | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                >> 0x19U)))))) 
              | (0x4c80U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                          << 0xaU)) 
                             | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                           >> 5U)) 
                                | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                   >> 0x19U))))) | 
             (0x4e80U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                       << 0xaU)) | 
                          ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                      >> 5U)) | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                 >> 0x19U)))))) {
            vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out 
                = ((0x4c00U == (0x1ff80U & ((0x1fc00U 
                                             & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                << 0xaU)) 
                                            | ((0x380U 
                                                & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                   >> 5U)) 
                                               | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                  >> 0x19U)))))
                    ? (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                       + vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                    : ((0x4d00U == (0x1ff80U & ((0x1fc00U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                    << 0xaU)) 
                                                | ((0x380U 
                                                    & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                       >> 5U)) 
                                                   | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                      >> 0x19U)))))
                        ? (VL_LTS_III(32, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                            ? 1U : 0U) : ((0x4d80U 
                                           == (0x1ff80U 
                                               & ((0x1fc00U 
                                                   & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                      << 0xaU)) 
                                                  | ((0x380U 
                                                      & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                         >> 5U)) 
                                                     | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                        >> 0x19U)))))
                                           ? ((vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                                               < vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                                               ? 1U
                                               : 0U)
                                           : ((0x4e00U 
                                               == (0x1ff80U 
                                                   & ((0x1fc00U 
                                                       & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                          << 0xaU)) 
                                                      | ((0x380U 
                                                          & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                             >> 5U)) 
                                                         | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                            >> 0x19U)))))
                                               ? (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                                                  ^ vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                                               : ((0x4f00U 
                                                   == 
                                                   (0x1ff80U 
                                                    & ((0x1fc00U 
                                                        & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                           << 0xaU)) 
                                                       | ((0x380U 
                                                           & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                              >> 5U)) 
                                                          | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                             >> 0x19U)))))
                                                   ? 
                                                  (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                                                   | vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                                                   : 
                                                  ((0x4f80U 
                                                    == 
                                                    (0x1ff80U 
                                                     & ((0x1fc00U 
                                                         & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                            << 0xaU)) 
                                                        | ((0x380U 
                                                            & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                               >> 5U)) 
                                                           | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                              >> 0x19U)))))
                                                    ? 
                                                   (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                                                    & vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                                                    : 
                                                   ((0x4c80U 
                                                     == 
                                                     ((0x1fc00U 
                                                       & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                          << 0xaU)) 
                                                      | ((0x380U 
                                                          & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                             >> 5U)) 
                                                         | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                            >> 0x19U))))
                                                     ? 
                                                    (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                                                     << (IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__shift_amount))
                                                     : 
                                                    (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                                                     >> (IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__shift_amount)))))))));
        } else if (((((((((0x4ea0U == ((0x1fc00U & 
                                        (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                         << 0xaU)) 
                                       | ((0x380U & 
                                           (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                            >> 5U)) 
                                          | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                             >> 0x19U)))) 
                          | (0xcc00U == ((0x1fc00U 
                                          & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                             << 0xaU)) 
                                         | ((0x380U 
                                             & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                >> 5U)) 
                                            | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                               >> 0x19U))))) 
                         | (0xcc20U == ((0x1fc00U & 
                                         (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                          << 0xaU)) 
                                        | ((0x380U 
                                            & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                               >> 5U)) 
                                           | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                              >> 0x19U))))) 
                        | (0xcc80U == ((0x1fc00U & 
                                        (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                         << 0xaU)) 
                                       | ((0x380U & 
                                           (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                            >> 5U)) 
                                          | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                             >> 0x19U))))) 
                       | (0xcd00U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                   << 0xaU)) 
                                      | ((0x380U & 
                                          (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                           >> 5U)) 
                                         | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                            >> 0x19U))))) 
                      | (0xcd80U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                  << 0xaU)) 
                                     | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                   >> 5U)) 
                                        | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                           >> 0x19U))))) 
                     | (0xce00U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                 << 0xaU)) 
                                    | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                  >> 5U)) 
                                       | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                          >> 0x19U))))) 
                    | (0xce80U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                << 0xaU)) 
                                   | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                 >> 5U)) 
                                      | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                         >> 0x19U)))))) {
            vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out 
                = ((0x4ea0U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                             << 0xaU)) 
                                | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                              >> 5U)) 
                                   | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                      >> 0x19U)))) ? 
                   VL_SHIFTRS_III(32,32,5, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a, (IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__shift_amount))
                    : ((0xcc00U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                 << 0xaU)) 
                                    | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                  >> 5U)) 
                                       | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                          >> 0x19U))))
                        ? (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                           + vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                        : ((0xcc20U == ((0x1fc00U & 
                                         (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                          << 0xaU)) 
                                        | ((0x380U 
                                            & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                               >> 5U)) 
                                           | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                              >> 0x19U))))
                            ? (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                               - vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                            : ((0xcc80U == ((0x1fc00U 
                                             & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                << 0xaU)) 
                                            | ((0x380U 
                                                & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                   >> 5U)) 
                                               | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                  >> 0x19U))))
                                ? (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                                   << (IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__shift_amount))
                                : ((0xcd00U == ((0x1fc00U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                    << 0xaU)) 
                                                | ((0x380U 
                                                    & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                       >> 5U)) 
                                                   | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                      >> 0x19U))))
                                    ? (VL_LTS_III(32, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                                        ? 1U : 0U) : 
                                   ((0xcd80U == ((0x1fc00U 
                                                  & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                     << 0xaU)) 
                                                 | ((0x380U 
                                                     & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                        >> 5U)) 
                                                    | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                       >> 0x19U))))
                                     ? ((vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                                         < vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                                         ? 1U : 0U)
                                     : ((0xce00U == 
                                         ((0x1fc00U 
                                           & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                              << 0xaU)) 
                                          | ((0x380U 
                                              & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                 >> 5U)) 
                                             | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                >> 0x19U))))
                                         ? (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                                            ^ vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                                         : (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                                            >> (IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__shift_amount)))))))));
        } else if (((((((((0xcea0U == ((0x1fc00U & 
                                        (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                         << 0xaU)) 
                                       | ((0x380U & 
                                           (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                            >> 5U)) 
                                          | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                             >> 0x19U)))) 
                          | (0xcf00U == ((0x1fc00U 
                                          & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                             << 0xaU)) 
                                         | ((0x380U 
                                             & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                >> 5U)) 
                                            | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                               >> 0x19U))))) 
                         | (0xcf80U == ((0x1fc00U & 
                                         (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                          << 0xaU)) 
                                        | ((0x380U 
                                            & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                               >> 5U)) 
                                           | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                              >> 0x19U))))) 
                        | (0xcc01U == ((0x1fc00U & 
                                        (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                         << 0xaU)) 
                                       | ((0x380U & 
                                           (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                            >> 5U)) 
                                          | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                             >> 0x19U))))) 
                       | (0xcc81U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                   << 0xaU)) 
                                      | ((0x380U & 
                                          (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                           >> 5U)) 
                                         | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                            >> 0x19U))))) 
                      | (0xce01U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                  << 0xaU)) 
                                     | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                   >> 5U)) 
                                        | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                           >> 0x19U))))) 
                     | (0xce81U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                 << 0xaU)) 
                                    | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                  >> 5U)) 
                                       | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                          >> 0x19U))))) 
                    | (0xcf01U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                << 0xaU)) 
                                   | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                 >> 5U)) 
                                      | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                         >> 0x19U)))))) {
            if ((0xcea0U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                          << 0xaU)) 
                             | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                           >> 5U)) 
                                | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                   >> 0x19U))))) {
                vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out 
                    = VL_SHIFTRS_III(32,32,5, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a, (IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__shift_amount));
            } else if ((0xcf00U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                 << 0xaU)) 
                                    | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                  >> 5U)) 
                                       | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                          >> 0x19U))))) {
                vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out 
                    = (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                       | vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b);
            } else if ((0xcf80U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                 << 0xaU)) 
                                    | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                  >> 5U)) 
                                       | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                          >> 0x19U))))) {
                vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out 
                    = (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                       & vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b);
            } else if ((0xcc01U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                 << 0xaU)) 
                                    | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                  >> 5U)) 
                                       | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                          >> 0x19U))))) {
                vlSelf->ysyx_25040109_top__DOT__exu__DOT__mul_temp 
                    = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a), 
                                  VL_EXTENDS_QI(64,32, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b));
                vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out 
                    = (IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__mul_temp);
            } else if ((0xcc81U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                 << 0xaU)) 
                                    | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                  >> 5U)) 
                                       | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                          >> 0x19U))))) {
                vlSelf->ysyx_25040109_top__DOT__exu__DOT__mul_temp 
                    = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a), 
                                  VL_EXTENDS_QI(64,32, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b));
                vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out 
                    = (IData)((vlSelf->ysyx_25040109_top__DOT__exu__DOT__mul_temp 
                               >> 0x20U));
            } else {
                vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out 
                    = ((0xce01U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                 << 0xaU)) 
                                    | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                  >> 5U)) 
                                       | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                          >> 0x19U))))
                        ? ((0U == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                            ? 0xffffffffU : (((0x80000000U 
                                               == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a) 
                                              & (0xffffffffU 
                                                 == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b))
                                              ? 0x80000000U
                                              : VL_DIVS_III(32, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)))
                        : ((0xce81U == ((0x1fc00U & 
                                         (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                          << 0xaU)) 
                                        | ((0x380U 
                                            & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                               >> 5U)) 
                                           | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                              >> 0x19U))))
                            ? ((0U == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                                ? 0xffffffffU : VL_DIV_III(32, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b))
                            : ((0U == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                                ? vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a
                                : (((0x80000000U == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a) 
                                    & (0xffffffffU 
                                       == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b))
                                    ? 0U : VL_MODDIVS_III(32, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)))));
            }
        } else {
            vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out 
                = (((((((((0xcf81U == ((0x1fc00U & 
                                        (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                         << 0xaU)) 
                                       | ((0x380U & 
                                           (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                            >> 5U)) 
                                          | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                             >> 0x19U)))) 
                          | (0xdc00U == (0x1fc00U & 
                                         ((0x1fc00U 
                                           & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                              << 0xaU)) 
                                          | ((0x380U 
                                              & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                 >> 5U)) 
                                             | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                >> 0x19U)))))) 
                         | (0x5c00U == (0x1fc00U & 
                                        ((0x1fc00U 
                                          & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                             << 0xaU)) 
                                         | ((0x380U 
                                             & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                >> 5U)) 
                                            | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                               >> 0x19U)))))) 
                        | (0xc00U == (0x1ff80U & ((0x1fc00U 
                                                   & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                      << 0xaU)) 
                                                  | ((0x380U 
                                                      & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                         >> 5U)) 
                                                     | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                        >> 0x19U)))))) 
                       | (0xc80U == (0x1ff80U & ((0x1fc00U 
                                                  & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                     << 0xaU)) 
                                                 | ((0x380U 
                                                     & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                        >> 5U)) 
                                                    | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                       >> 0x19U)))))) 
                      | (0xd00U == (0x1ff80U & ((0x1fc00U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                    << 0xaU)) 
                                                | ((0x380U 
                                                    & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                       >> 5U)) 
                                                   | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                      >> 0x19U)))))) 
                     | (0xe00U == (0x1ff80U & ((0x1fc00U 
                                                & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                   << 0xaU)) 
                                               | ((0x380U 
                                                   & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                      >> 5U)) 
                                                  | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                     >> 0x19U)))))) 
                    | (0xe80U == (0x1ff80U & ((0x1fc00U 
                                               & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                  << 0xaU)) 
                                              | ((0x380U 
                                                  & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                     >> 5U)) 
                                                 | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                    >> 0x19U))))))
                    ? ((0xcf81U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                 << 0xaU)) 
                                    | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                  >> 5U)) 
                                       | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                          >> 0x19U))))
                        ? ((0U == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                            ? vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a
                            : VL_MODDIV_III(32, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b))
                        : ((0xdc00U == (0x1fc00U & 
                                        ((0x1fc00U 
                                          & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                             << 0xaU)) 
                                         | ((0x380U 
                                             & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                >> 5U)) 
                                            | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                               >> 0x19U)))))
                            ? vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b
                            : ((0x5c00U == (0x1fc00U 
                                            & ((0x1fc00U 
                                                & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                   << 0xaU)) 
                                               | ((0x380U 
                                                   & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                      >> 5U)) 
                                                  | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                     >> 0x19U)))))
                                ? (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                                   + vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                                : ((0xc00U == (0x1ff80U 
                                               & ((0x1fc00U 
                                                   & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                      << 0xaU)) 
                                                  | ((0x380U 
                                                      & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                         >> 5U)) 
                                                     | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                        >> 0x19U)))))
                                    ? (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                                       + vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                                    : ((0xc80U == (0x1ff80U 
                                                   & ((0x1fc00U 
                                                       & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                          << 0xaU)) 
                                                      | ((0x380U 
                                                          & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                             >> 5U)) 
                                                         | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                            >> 0x19U)))))
                                        ? (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                                           + vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                                        : ((0xd00U 
                                            == (0x1ff80U 
                                                & ((0x1fc00U 
                                                    & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                       << 0xaU)) 
                                                   | ((0x380U 
                                                       & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                          >> 5U)) 
                                                      | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                         >> 0x19U)))))
                                            ? (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                                               + vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                                            : ((0xe00U 
                                                == 
                                                (0x1ff80U 
                                                 & ((0x1fc00U 
                                                     & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                        << 0xaU)) 
                                                    | ((0x380U 
                                                        & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                           >> 5U)) 
                                                       | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                          >> 0x19U)))))
                                                ? (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                                                   + vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                                                : (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                                                   + vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b))))))))
                    : ((0x8c00U == (0x1ff80U & ((0x1fc00U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                    << 0xaU)) 
                                                | ((0x380U 
                                                    & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                       >> 5U)) 
                                                   | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                      >> 0x19U)))))
                        ? (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                           + vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                        : ((0x8c80U == (0x1ff80U & 
                                        ((0x1fc00U 
                                          & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                             << 0xaU)) 
                                         | ((0x380U 
                                             & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                >> 5U)) 
                                            | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                               >> 0x19U)))))
                            ? (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                               + vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                            : ((0x8d00U == (0x1ff80U 
                                            & ((0x1fc00U 
                                                & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                   << 0xaU)) 
                                               | ((0x380U 
                                                   & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                      >> 5U)) 
                                                  | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                     >> 0x19U)))))
                                ? (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                                   + vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                                : 0U))));
        }
    } else {
        vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out = 0U;
    }
    vlSelf->ysyx_25040109_top__DOT__csr_rdata_from_regfile 
        = ((0x300U == (IData)(vlSelf->ysyx_25040109_top__DOT__final_csr_waddr))
            ? vlSelf->ysyx_25040109_top__DOT__regfile__DOT__mstatus
            : ((0x305U == (IData)(vlSelf->ysyx_25040109_top__DOT__final_csr_waddr))
                ? vlSelf->ysyx_25040109_top__DOT__regfile__DOT__mtvec
                : ((0x341U == (IData)(vlSelf->ysyx_25040109_top__DOT__final_csr_waddr))
                    ? vlSelf->ysyx_25040109_top__DOT__regfile__DOT__mepc
                    : ((0x342U == (IData)(vlSelf->ysyx_25040109_top__DOT__final_csr_waddr))
                        ? vlSelf->ysyx_25040109_top__DOT__regfile__DOT__mcause
                        : 0U))));
    vlSelf->ysyx_25040109_top__DOT__csr_wdata_from_exu = 0U;
    if (((0x73U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
         & (IData)(vlSelf->ysyx_25040109_top__DOT____VdfgTmp_hf3066aec__0))) {
        vlSelf->ysyx_25040109_top__DOT__csr_wdata_from_exu 
            = ((1U == (7U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                             >> 0xcU))) ? vlSelf->ysyx_25040109_top__DOT__rs1_data
                : ((2U == (7U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                 >> 0xcU))) ? (vlSelf->ysyx_25040109_top__DOT__csr_rdata_from_regfile 
                                               | vlSelf->ysyx_25040109_top__DOT__rs1_data)
                    : 0U));
    }
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
                       == vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
           == vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
                          == vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem) 
              == vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__result = ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__hit)
                                               ? vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__lut_out
                                               : vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out);
    if (vlSelf->ysyx_25040109_top__DOT__is_load) {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__verilog_pmem_read_TOP(vlSelf->ysyx_25040109_top__DOT__result, vlSelf->__Vtask_ysyx_25040109_top__DOT__verilog_pmem_read__0__data);
        vlSelf->ysyx_25040109_top__DOT__mem_data = vlSelf->__Vtask_ysyx_25040109_top__DOT__verilog_pmem_read__0__data;
        vlSelf->ysyx_25040109_top__DOT__load_result 
            = ((0x4000U & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)
                ? ((0x2000U & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)
                    ? 0U : ((0x1000U & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)
                             ? (0xffffU & vlSelf->ysyx_25040109_top__DOT__mem_data)
                             : (0xffU & vlSelf->ysyx_25040109_top__DOT__mem_data)))
                : ((0x2000U & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)
                    ? ((0x1000U & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)
                        ? 0U : vlSelf->ysyx_25040109_top__DOT__mem_data)
                    : ((0x1000U & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)
                        ? (((- (IData)((1U & (vlSelf->ysyx_25040109_top__DOT__mem_data 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & vlSelf->ysyx_25040109_top__DOT__mem_data))
                        : (((- (IData)((1U & (vlSelf->ysyx_25040109_top__DOT__mem_data 
                                              >> 7U)))) 
                            << 8U) | (0xffU & vlSelf->ysyx_25040109_top__DOT__mem_data)))));
    } else {
        vlSelf->ysyx_25040109_top__DOT__mem_data = 0U;
        vlSelf->ysyx_25040109_top__DOT__load_result = 0U;
    }
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
