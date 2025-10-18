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
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[3U] = 0x67U;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[4U] = 3U;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[5U] = 0x13U;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[6U] = 0x37U;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[7U] = 0x17U;
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[0U] = 0x6fU;
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[1U] = 0x37U;
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[2U] = 0x17U;
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[1U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[1U] = 0x3700000000ULL;
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list[0U] = 0x23U;
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list[1U] = 3U;
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list[2U] = 0x63U;
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list[3U] = 0x33U;
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

void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__regfile__DOT__update_cpu_state__Vdpioc2_TOP(IData/*31:0*/ pc, const VlUnpacked<IData/*31:0*/, 32> &regs);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__ifu__DOT__verilog_pmem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ &data);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__update_decode_state_TOP(IData/*31:0*/ pc, IData/*31:0*/ snpc, IData/*31:0*/ dnpc, IData/*31:0*/ inst);

VL_ATTR_COLD void Vysyx_25040109_top___024root___stl_sequent__TOP__0(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->a0_out = vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
        [0xaU];
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[0U] 
        = (0x6f00000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__pc_reg)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[2U] 
        = (0x1700000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__pc_reg)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[0U] 
        = vlSelf->ysyx_25040109_top__DOT__pc_reg;
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[2U] 
        = vlSelf->ysyx_25040109_top__DOT__pc_reg;
    vlSelf->pc = vlSelf->ysyx_25040109_top__DOT__pc_reg;
    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__regfile__DOT__update_cpu_state__Vdpioc2_TOP(vlSelf->pc, vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf);
    if (((0x80000000U <= vlSelf->ysyx_25040109_top__DOT__pc_reg) 
         & (0x87ffffffU >= vlSelf->ysyx_25040109_top__DOT__pc_reg))) {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__ifu__DOT__verilog_pmem_read_TOP(vlSelf->pc, vlSelf->__Vtask_ysyx_25040109_top__DOT__ifu__DOT__verilog_pmem_read__4__data);
        vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
            = vlSelf->__Vtask_ysyx_25040109_top__DOT__ifu__DOT__verilog_pmem_read__4__data;
    } else {
        vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem = 0x13U;
    }
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
    vlSelf->inst = vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem;
    vlSelf->__VdfgTmp_h61070d84__0 = ((4U == (7U & 
                                              (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                               >> 0xcU))) 
                                      | (5U == (7U 
                                                & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                   >> 0xcU))));
    vlSelf->__VdfgTmp_ha3c42dfe__0 = vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
        [(0x1fU & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                   >> 0x14U))];
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
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__valid_system 
        = ((0x73U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
           & ((IData)((0U == (0xfff07000U & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem))) 
              | ((IData)((0x100000U == (0xfff07000U 
                                        & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem))) 
                 | ((IData)((0x30200000U == (0xfff07000U 
                                             & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem))) 
                    | ((1U == (7U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                     >> 0xcU))) | (2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                       >> 0xcU))))))));
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
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__funct12 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__valid_system)
            ? (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
               >> 0x14U) : 0U);
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
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[2U] 
        = (0x6300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__rs2_data)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[3U] 
        = (0x3300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__rs2_data)));
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
    if (VL_LIKELY(((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_hee48d914__0) 
                   | ((IData)((0x67U == (0x707fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem))) 
                      | (((3U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                          & ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_hd1deae94__0) 
                             | (IData)(vlSelf->__VdfgTmp_h61070d84__0))) 
                         | (((0x23U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                             & (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_hd1deae94__0)) 
                            | (((0x63U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                & ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_he2c0485b__0) 
                                   | ((5U == (7U & 
                                              (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                               >> 0xcU))) 
                                      | ((4U == (7U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                    >> 0xcU))) 
                                         | ((6U == 
                                             (7U & 
                                              (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                               >> 0xcU))) 
                                            | (7U == 
                                               (7U 
                                                & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                   >> 0xcU)))))))) 
                               | (((0x13U == (0x7fU 
                                              & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                   & ((0U == (7U & 
                                              (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                               >> 0xcU))) 
                                      | ((2U == (7U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                    >> 0xcU))) 
                                         | ((3U == 
                                             (7U & 
                                              (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                               >> 0xcU))) 
                                            | ((4U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                    >> 0xcU))) 
                                               | ((6U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                       >> 0xcU))) 
                                                  | ((7U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                          >> 0xcU))) 
                                                     | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_h26e5c323__0) 
                                                        | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_h5db903ec__0) 
                                                           | (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_h5f3f1c8d__0)))))))))) 
                                  | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__valid_r_type) 
                                     | (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__valid_system)))))))))) {
        vlSelf->ysyx_25040109_top__DOT__inst_invalid = 0U;
    } else {
        vlSelf->ysyx_25040109_top__DOT__inst_invalid = 1U;
        VL_WRITEF("inst:0x%08x\n",32,vlSelf->inst);
    }
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[0U] 
        = (0x2300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__imm)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[1U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__imm)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target 
        = (vlSelf->ysyx_25040109_top__DOT__imm + vlSelf->ysyx_25040109_top__DOT__pc_reg);
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
    vlSelf->ysyx_25040109_top__DOT__csr_we_from_exu = 0U;
    vlSelf->ysyx_25040109_top__DOT__is_ecall = (IData)(
                                                       (((0x73U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                                         & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__inst_invalid))) 
                                                        & (0U 
                                                           == (IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__funct12))));
    if (((0x73U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
         & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__inst_invalid)))) {
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
    if (VL_UNLIKELY(vlSelf->ysyx_25040109_top__DOT__inst_invalid)) {
        VL_FINISH_MT("/home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_EXU.v", 217, "");
        vlSelf->ysyx_25040109_top__DOT__next_pc = ((IData)(4U) 
                                                   + vlSelf->pc);
        VL_WRITEF("0x%08x:\n",32,vlSelf->pc);
    } else {
        vlSelf->ysyx_25040109_top__DOT__next_pc = (
                                                   ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT____VdfgTmp_hd1c31b8f__0) 
                                                    & (0U 
                                                       == (IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__funct12)))
                                                    ? vlSelf->ysyx_25040109_top__DOT__regfile__DOT__mtvec
                                                    : 
                                                   (((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT____VdfgTmp_hd1c31b8f__0) 
                                                     & (0x302U 
                                                        == (IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__funct12)))
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
    vlSelf->ysyx_25040109_top__DOT__final_csr_we = 
        ((IData)(vlSelf->ysyx_25040109_top__DOT__trap_state) 
         | ((IData)(vlSelf->ysyx_25040109_top__DOT__is_ecall) 
            | (IData)(vlSelf->ysyx_25040109_top__DOT__csr_we_from_exu)));
    vlSelf->ysyx_25040109_top__DOT__final_csr_waddr 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__trap_state)
            ? 0x342U : ((IData)(vlSelf->ysyx_25040109_top__DOT__is_ecall)
                         ? 0x341U : (IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__funct12)));
    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__update_decode_state_TOP(vlSelf->pc, 
                                                                                ((IData)(4U) 
                                                                                + vlSelf->pc), vlSelf->ysyx_25040109_top__DOT__next_pc, vlSelf->inst);
    if (vlSelf->ysyx_25040109_top__DOT__inst_invalid) {
        vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out = 0U;
    } else if (((((((((0x4c00U == (0x1ff80U & ((0x1fc00U 
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
                                      >> 0x19U))))) 
                | (0x4e80U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                            << 0xaU)) 
                               | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                             >> 5U)) 
                                  | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                     >> 0x19U)))))) {
        vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out 
            = ((0x4c00U == (0x1ff80U & ((0x1fc00U & 
                                         (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
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
                        ? 1U : 0U) : ((0x4d80U == (0x1ff80U 
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
                                           ? 1U : 0U)
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
                                                  | vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                                               : ((0x4f80U 
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
    } else if (((((((((0x4ea0U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                << 0xaU)) 
                                   | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                 >> 5U)) 
                                      | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                         >> 0x19U)))) 
                      | (0xcc00U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                  << 0xaU)) 
                                     | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                   >> 5U)) 
                                        | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                           >> 0x19U))))) 
                     | (0xcc20U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                 << 0xaU)) 
                                    | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                  >> 5U)) 
                                       | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                          >> 0x19U))))) 
                    | (0xcc80U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                << 0xaU)) 
                                   | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                 >> 5U)) 
                                      | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                         >> 0x19U))))) 
                   | (0xcd00U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                               << 0xaU)) 
                                  | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
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
                                          >> 5U)) | 
                               (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                >> 0x19U)))) ? VL_SHIFTRS_III(32,32,5, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a, (IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__shift_amount))
                : ((0xcc00U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                             << 0xaU)) 
                                | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                              >> 5U)) 
                                   | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                      >> 0x19U)))) ? 
                   (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                    + vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                    : ((0xcc20U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                 << 0xaU)) 
                                    | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                  >> 5U)) 
                                       | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                          >> 0x19U))))
                        ? (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                           - vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                        : ((0xcc80U == ((0x1fc00U & 
                                         (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
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
                                    ? 1U : 0U) : ((0xcd80U 
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
                                                  ((vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                                                    < vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  ((0xce00U 
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
                                                    ^ vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                                                    : 
                                                   (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                                                    >> (IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__shift_amount)))))))));
    } else if (((((((((0xcea0U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                << 0xaU)) 
                                   | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                 >> 5U)) 
                                      | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                         >> 0x19U)))) 
                      | (0xcf00U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                  << 0xaU)) 
                                     | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                   >> 5U)) 
                                        | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                           >> 0x19U))))) 
                     | (0xcf80U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                 << 0xaU)) 
                                    | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                  >> 5U)) 
                                       | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                          >> 0x19U))))) 
                    | (0xcc01U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                << 0xaU)) 
                                   | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                 >> 5U)) 
                                      | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                         >> 0x19U))))) 
                   | (0xcc81U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                               << 0xaU)) 
                                  | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
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
                                      << 0xaU)) | (
                                                   (0x380U 
                                                    & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
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
                                      >> 0x19U)))) ? 
                   ((0U == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                     ? 0xffffffffU : (((0x80000000U 
                                        == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a) 
                                       & (0xffffffffU 
                                          == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b))
                                       ? 0x80000000U
                                       : VL_DIVS_III(32, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)))
                    : ((0xce81U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                 << 0xaU)) 
                                    | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                  >> 5U)) 
                                       | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                          >> 0x19U))))
                        ? ((0U == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                            ? 0xffffffffU : VL_DIV_III(32, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b))
                        : ((0U == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                            ? vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a
                            : (((0x80000000U == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a) 
                                & (0xffffffffU == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b))
                                ? 0U : VL_MODDIVS_III(32, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)))));
        }
    } else {
        vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out 
            = (((((((((0xcf81U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                << 0xaU)) 
                                   | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                 >> 5U)) 
                                      | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                         >> 0x19U)))) 
                      | (0xdc00U == (0x1fc00U & ((0x1fc00U 
                                                  & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                     << 0xaU)) 
                                                 | ((0x380U 
                                                     & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                        >> 5U)) 
                                                    | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                       >> 0x19U)))))) 
                     | (0x5c00U == (0x1fc00U & ((0x1fc00U 
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
                                      >> 0x19U)))) ? 
                   ((0U == vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                     ? vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a
                     : VL_MODDIV_III(32, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b))
                    : ((0xdc00U == (0x1fc00U & ((0x1fc00U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                    << 0xaU)) 
                                                | ((0x380U 
                                                    & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                       >> 5U)) 
                                                   | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                      >> 0x19U)))))
                        ? vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b
                        : ((0x5c00U == (0x1fc00U & 
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
                                    : ((0xd00U == (0x1ff80U 
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
                    : ((0x8c80U == (0x1ff80U & ((0x1fc00U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                    << 0xaU)) 
                                                | ((0x380U 
                                                    & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                       >> 5U)) 
                                                   | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                      >> 0x19U)))))
                        ? (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                           + vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)
                        : ((0x8d00U == (0x1ff80U & 
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
                            : 0U))));
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
         & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__inst_invalid)))) {
        vlSelf->ysyx_25040109_top__DOT__csr_wdata_from_exu 
            = ((1U == (7U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                             >> 0xcU))) ? vlSelf->ysyx_25040109_top__DOT__rs1_data
                : ((2U == (7U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                 >> 0xcU))) ? (vlSelf->ysyx_25040109_top__DOT__csr_rdata_from_regfile 
                                               | vlSelf->ysyx_25040109_top__DOT__rs1_data)
                    : 0U));
    }
    vlSelf->ysyx_25040109_top__DOT__final_csr_wdata 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__trap_state)
            ? 0xbU : ((IData)(vlSelf->ysyx_25040109_top__DOT__is_ecall)
                       ? vlSelf->ysyx_25040109_top__DOT__pc_reg
                       : vlSelf->ysyx_25040109_top__DOT__csr_wdata_from_exu));
    vlSelf->ysyx_25040109_top__DOT__result = ((0x73U 
                                               == (0x7fU 
                                                   & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem))
                                               ? vlSelf->ysyx_25040109_top__DOT__csr_rdata_from_regfile
                                               : ((
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                                   | (0x67U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)))
                                                   ? 
                                                  ((IData)(4U) 
                                                   + vlSelf->ysyx_25040109_top__DOT__pc_reg)
                                                   : vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out));
    if (vlSelf->ysyx_25040109_top__DOT__is_load) {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__ifu__DOT__verilog_pmem_read_TOP(vlSelf->ysyx_25040109_top__DOT__result, vlSelf->__Vtask_ysyx_25040109_top__DOT__lsu__DOT__verilog_pmem_read__6__data);
        vlSelf->ysyx_25040109_top__DOT__lsu__DOT__mem_data 
            = vlSelf->__Vtask_ysyx_25040109_top__DOT__lsu__DOT__verilog_pmem_read__6__data;
        vlSelf->ysyx_25040109_top__DOT__load_data_from_lsu 
            = ((0x4000U & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)
                ? ((0x2000U & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)
                    ? 0U : ((0x1000U & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)
                             ? (0xffffU & vlSelf->ysyx_25040109_top__DOT__lsu__DOT__mem_data)
                             : (0xffU & vlSelf->ysyx_25040109_top__DOT__lsu__DOT__mem_data)))
                : ((0x2000U & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)
                    ? ((0x1000U & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)
                        ? 0U : vlSelf->ysyx_25040109_top__DOT__lsu__DOT__mem_data)
                    : ((0x1000U & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)
                        ? (((- (IData)((1U & (vlSelf->ysyx_25040109_top__DOT__lsu__DOT__mem_data 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & vlSelf->ysyx_25040109_top__DOT__lsu__DOT__mem_data))
                        : (((- (IData)((1U & (vlSelf->ysyx_25040109_top__DOT__lsu__DOT__mem_data 
                                              >> 7U)))) 
                            << 8U) | (0xffU & vlSelf->ysyx_25040109_top__DOT__lsu__DOT__mem_data)))));
    } else {
        vlSelf->ysyx_25040109_top__DOT__lsu__DOT__mem_data = 0U;
        vlSelf->ysyx_25040109_top__DOT__load_data_from_lsu = 0U;
    }
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
    vlSelf->ysyx_25040109_top__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__inst_invalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__csr_rdata_from_regfile = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__csr_wdata_from_exu = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__csr_we_from_exu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__trap_state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__pc_reg = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__final_csr_waddr = VL_RAND_RESET_I(12);
    vlSelf->ysyx_25040109_top__DOT__final_csr_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__final_csr_we = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__is_load = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__load_data_from_lsu = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j = VL_RAND_RESET_I(20);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s = VL_RAND_RESET_I(12);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b = VL_RAND_RESET_I(12);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__valid_r_type = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT__valid_system = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_hee48d914__0 = 0;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_hd1deae94__0 = 0;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_he2c0485b__0 = 0;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_h26e5c323__0 = 0;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_h5db903ec__0 = 0;
    vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_h5f3f1c8d__0 = 0;
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
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__mul_temp = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__shift_amount = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__funct12 = VL_RAND_RESET_I(12);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT____VdfgTmp_hd1c31b8f__0 = 0;
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
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(39);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__regfile__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__lsu__DOT__mem_data = VL_RAND_RESET_I(32);
    vlSelf->__VdfgTmp_h61070d84__0 = 0;
    vlSelf->__VdfgTmp_ha3c42dfe__0 = 0;
    vlSelf->__Vtask_ysyx_25040109_top__DOT__ifu__DOT__verilog_pmem_read__4__data = 0;
    vlSelf->__Vtask_ysyx_25040109_top__DOT__lsu__DOT__verilog_pmem_read__6__data = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
