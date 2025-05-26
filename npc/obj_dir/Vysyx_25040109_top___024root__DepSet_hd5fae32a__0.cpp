// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25040109_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25040109_top___024root.h"

void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__pmem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ &data);

VL_INLINE_OPT void Vysyx_25040109_top___024root___ico_sequent__TOP__0(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    if ((((~ (IData)(vlSelf->rst)) & (0x80000000U <= vlSelf->pc)) 
         & (0x87ffffffU >= vlSelf->pc))) {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__pmem_read_TOP(vlSelf->pc, vlSelf->__Vtask_ysyx_25040109_top__DOT__ifu__DOT__pmem_read__9__data);
        vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_read 
            = vlSelf->__Vtask_ysyx_25040109_top__DOT__ifu__DOT__pmem_read__9__data;
    } else {
        vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_read = 0U;
    }
    vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->debug_cmd) == 
                       vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->debug_cmd) == vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->debug_cmd) 
                          == vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->debug_cmd) == vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->debug_cmd) 
                          == vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->debug_cmd) == vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__debug_action = 
        ((IData)(vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__hit)
          ? (IData)(vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__lut_out)
          : 0U);
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
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_scan_mem_TOP(IData/*31:0*/ addr, IData/*31:0*/ &value);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__step_complete_TOP();
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__printf_finish_TOP(IData/*31:0*/ inst, IData/*31:0*/ &printf_finish__Vfuncrtn);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(IData/*31:0*/ index, IData/*31:0*/ &value);

VL_INLINE_OPT void Vysyx_25040109_top___024root___nba_sequent__TOP__0(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_ysyx_25040109_top__DOT__sdb_scan_mem__1__value;
    __Vtask_ysyx_25040109_top__DOT__sdb_scan_mem__1__value = 0;
    IData/*31:0*/ __Vtask_ysyx_25040109_top__DOT__pmem_read__2__data;
    __Vtask_ysyx_25040109_top__DOT__pmem_read__2__data = 0;
    IData/*31:0*/ __Vtask_ysyx_25040109_top__DOT__sdb_scan_mem__3__value;
    __Vtask_ysyx_25040109_top__DOT__sdb_scan_mem__3__value = 0;
    IData/*31:0*/ __Vtask_ysyx_25040109_top__DOT__pmem_read__4__data;
    __Vtask_ysyx_25040109_top__DOT__pmem_read__4__data = 0;
    IData/*31:0*/ __Vtask_ysyx_25040109_top__DOT__sdb_scan_mem__5__value;
    __Vtask_ysyx_25040109_top__DOT__sdb_scan_mem__5__value = 0;
    IData/*31:0*/ __Vfunc_ysyx_25040109_top__DOT__printf_finish__7__Vfuncout;
    __Vfunc_ysyx_25040109_top__DOT__printf_finish__7__Vfuncout = 0;
    IData/*31:0*/ __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
    __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_25040109_top__DOT__regfile__DOT__rf__v0;
    __Vdlyvdim0__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_25040109_top__DOT__regfile__DOT__rf__v0;
    __Vdlyvval__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_25040109_top__DOT__regfile__DOT__rf__v0;
    __Vdlyvset__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 = 0;
    // Body
    __Vdlyvset__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 = 0U;
    if (((((1U == (IData)(vlSelf->debug_cmd)) & (IData)(
                                                        (0x2023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->ysyx_25040109_top__DOT__inst_ifu)))) 
          & (IData)(vlSelf->ysyx_25040109_top__DOT__addr_valid)) 
         & (~ (IData)(vlSelf->rst)))) {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__pmem_write_TOP(vlSelf->ysyx_25040109_top__DOT__mem_addr, vlSelf->ysyx_25040109_top__DOT__rs2_data, 4U);
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_scan_mem_TOP(vlSelf->ysyx_25040109_top__DOT__mem_addr, __Vtask_ysyx_25040109_top__DOT__sdb_scan_mem__1__value);
        vlSelf->ysyx_25040109_top__DOT__rs2_data = __Vtask_ysyx_25040109_top__DOT__sdb_scan_mem__1__value;
    }
    if (((((1U == (IData)(vlSelf->debug_cmd)) & (IData)(
                                                        (0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->ysyx_25040109_top__DOT__inst_ifu)))) 
          & (IData)(vlSelf->ysyx_25040109_top__DOT__addr_valid)) 
         & (~ (IData)(vlSelf->rst)))) {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__pmem_read_TOP(vlSelf->ysyx_25040109_top__DOT__mem_addr, __Vtask_ysyx_25040109_top__DOT__pmem_read__2__data);
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_scan_mem_TOP(vlSelf->ysyx_25040109_top__DOT__mem_addr, __Vtask_ysyx_25040109_top__DOT__sdb_scan_mem__3__value);
        vlSelf->ysyx_25040109_top__DOT__mem_data = __Vtask_ysyx_25040109_top__DOT__sdb_scan_mem__3__value;
    }
    if ((((3U == (IData)(vlSelf->debug_cmd)) & ((0x80000000U 
                                                 <= vlSelf->debug_addr) 
                                                & (0x87ffffffU 
                                                   >= vlSelf->debug_addr))) 
         & (~ (IData)(vlSelf->rst)))) {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__pmem_read_TOP(vlSelf->debug_addr, __Vtask_ysyx_25040109_top__DOT__pmem_read__4__data);
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_scan_mem_TOP(vlSelf->debug_addr, __Vtask_ysyx_25040109_top__DOT__sdb_scan_mem__5__value);
        vlSelf->ysyx_25040109_top__DOT__mem_data = __Vtask_ysyx_25040109_top__DOT__sdb_scan_mem__5__value;
    }
    if (((1U == (IData)(vlSelf->debug_cmd)) & (~ (IData)(vlSelf->rst)))) {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__step_complete_TOP();
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->rst)) & (1U 
                                                 == (IData)(vlSelf->ysyx_25040109_top__DOT__debug_action))))) {
        VL_WRITEF("PC=0x%x, inst=0x%x\n",32,vlSelf->pc,
                  32,vlSelf->ysyx_25040109_top__DOT__inst_ifu);
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__printf_finish_TOP(vlSelf->ysyx_25040109_top__DOT__inst_ifu, __Vfunc_ysyx_25040109_top__DOT__printf_finish__7__Vfuncout);
        if (VL_UNLIKELY(((0U == __Vfunc_ysyx_25040109_top__DOT__printf_finish__7__Vfuncout) 
                         & (~ (IData)(vlSelf->rst))))) {
            VL_FINISH_MT("vsrc/ysyx_25040109_top.v", 137, "");
        }
    }
    if (((~ (IData)(vlSelf->rst)) & (2U == (IData)(vlSelf->ysyx_25040109_top__DOT__debug_action)))) {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(0U, __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value);
        vlSelf->ysyx_25040109_top__DOT__unnamedblk1__DOT__i = 0x20U;
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0U] 
            = __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(1U, __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value);
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[1U] 
            = __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(2U, __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value);
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[2U] 
            = __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(3U, __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value);
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[3U] 
            = __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(4U, __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value);
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[4U] 
            = __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(5U, __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value);
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[5U] 
            = __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(6U, __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value);
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[6U] 
            = __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(7U, __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value);
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[7U] 
            = __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(8U, __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value);
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[8U] 
            = __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(9U, __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value);
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[9U] 
            = __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(0xaU, __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value);
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0xaU] 
            = __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(0xbU, __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value);
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0xbU] 
            = __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(0xcU, __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value);
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0xcU] 
            = __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(0xdU, __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value);
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0xdU] 
            = __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(0xeU, __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value);
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0xeU] 
            = __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(0xfU, __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value);
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0xfU] 
            = __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(0x10U, __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value);
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0x10U] 
            = __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(0x11U, __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value);
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0x11U] 
            = __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(0x12U, __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value);
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0x12U] 
            = __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(0x13U, __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value);
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0x13U] 
            = __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(0x14U, __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value);
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0x14U] 
            = __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(0x15U, __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value);
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0x15U] 
            = __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(0x16U, __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value);
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0x16U] 
            = __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(0x17U, __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value);
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0x17U] 
            = __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(0x18U, __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value);
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0x18U] 
            = __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(0x19U, __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value);
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0x19U] 
            = __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(0x1aU, __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value);
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0x1aU] 
            = __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(0x1bU, __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value);
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0x1bU] 
            = __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(0x1cU, __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value);
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0x1cU] 
            = __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(0x1dU, __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value);
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0x1dU] 
            = __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(0x1eU, __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value);
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0x1eU] 
            = __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__sdb_read_reg_TOP(0x1fU, __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value);
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0x1fU] 
            = __Vtask_ysyx_25040109_top__DOT__sdb_read_reg__8__value;
    }
    if (((1U == (IData)(vlSelf->debug_cmd)) & (~ (IData)(vlSelf->rst)))) {
        vlSelf->inst = vlSelf->ysyx_25040109_top__DOT__inst_ifu;
    }
    if (((IData)(vlSelf->ysyx_25040109_top__DOT__reg_write_en_idu) 
         & (1U == (IData)(vlSelf->debug_cmd)))) {
        __Vdlyvval__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 
            = vlSelf->ysyx_25040109_top__DOT__result;
        __Vdlyvset__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_25040109_top__DOT__regfile__DOT__rf__v0 
            = (0x1fU & (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                        >> 7U));
    }
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__pair_list[0U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__mem_data)));
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list[0U] 
        = vlSelf->ysyx_25040109_top__DOT__mem_data;
    if (__Vdlyvset__ysyx_25040109_top__DOT__regfile__DOT__rf__v0) {
        vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[__Vdlyvdim0__ysyx_25040109_top__DOT__regfile__DOT__rf__v0] 
            = __Vdlyvval__ysyx_25040109_top__DOT__regfile__DOT__rf__v0;
    }
    if (vlSelf->rst) {
        vlSelf->pc = 0x80000000U;
    } else if (((~ (IData)(vlSelf->rst)) & (1U == (IData)(vlSelf->debug_cmd)))) {
        vlSelf->pc = vlSelf->ysyx_25040109_top__DOT__next_pc;
    }
    vlSelf->a0_out = vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
        [0xaU];
    vlSelf->ysyx_25040109_top__DOT__inst_ifu = vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_read;
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
    if ((((~ (IData)(vlSelf->rst)) & (0x80000000U <= vlSelf->pc)) 
         & (0x87ffffffU >= vlSelf->pc))) {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__pmem_read_TOP(vlSelf->pc, vlSelf->__Vtask_ysyx_25040109_top__DOT__ifu__DOT__pmem_read__9__data);
        vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_read 
            = vlSelf->__Vtask_ysyx_25040109_top__DOT__ifu__DOT__pmem_read__9__data;
    } else {
        vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_read = 0U;
    }
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list[1U] 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list[2U] 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[0U] 
        = vlSelf->pc;
    vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[2U] 
        = vlSelf->pc;
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
    if (VL_UNLIKELY((vlSelf->debug_cmd & 0xf0U))) {
        Verilated::overWidthError("debug_cmd");}
}
#endif  // VL_DEBUG
