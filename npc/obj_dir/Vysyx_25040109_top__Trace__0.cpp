// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vysyx_25040109_top__Syms.h"


void Vysyx_25040109_top___024root__trace_chg_sub_0(Vysyx_25040109_top___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vysyx_25040109_top___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_25040109_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25040109_top___024root*>(voidSelf);
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_25040109_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_25040109_top___024root__trace_chg_sub_0(Vysyx_25040109_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<8>/*255:0*/ __Vtemp_he579b914__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+1,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+2,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+3,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+4,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+5,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[5]),7);
        bufp->chgIData(oldp+6,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+7,(vlSelf->ysyx_25040109_top__DOT__imm),32);
        bufp->chgBit(oldp+8,(vlSelf->ysyx_25040109_top__DOT__is_jalr));
        bufp->chgIData(oldp+9,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b),32);
        bufp->chgIData(oldp+10,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j),20);
        bufp->chgSData(oldp+11,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s),12);
        bufp->chgSData(oldp+12,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b),12);
        bufp->chgIData(oldp+13,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext),32);
        bufp->chgIData(oldp+14,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j_ext),32);
        bufp->chgQData(oldp+15,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+17,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+19,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgQData(oldp+21,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[3]),39);
        bufp->chgQData(oldp+23,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[4]),39);
        bufp->chgQData(oldp+25,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[5]),39);
        bufp->chgIData(oldp+27,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+28,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+29,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+30,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+31,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+32,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+33,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+34,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+35,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0]),32);
        bufp->chgIData(oldp+36,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[1]),32);
        bufp->chgIData(oldp+37,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[2]),32);
        bufp->chgIData(oldp+38,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[3]),32);
        bufp->chgIData(oldp+39,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[4]),32);
        bufp->chgIData(oldp+40,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[5]),32);
        bufp->chgIData(oldp+41,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[6]),32);
        bufp->chgIData(oldp+42,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[7]),32);
        bufp->chgIData(oldp+43,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[8]),32);
        bufp->chgIData(oldp+44,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[9]),32);
        bufp->chgIData(oldp+45,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[10]),32);
        bufp->chgIData(oldp+46,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[11]),32);
        bufp->chgIData(oldp+47,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[12]),32);
        bufp->chgIData(oldp+48,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[13]),32);
        bufp->chgIData(oldp+49,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[14]),32);
        bufp->chgIData(oldp+50,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[15]),32);
        bufp->chgIData(oldp+51,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[16]),32);
        bufp->chgIData(oldp+52,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[17]),32);
        bufp->chgIData(oldp+53,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[18]),32);
        bufp->chgIData(oldp+54,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[19]),32);
        bufp->chgIData(oldp+55,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[20]),32);
        bufp->chgIData(oldp+56,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[21]),32);
        bufp->chgIData(oldp+57,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[22]),32);
        bufp->chgIData(oldp+58,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[23]),32);
        bufp->chgIData(oldp+59,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[24]),32);
        bufp->chgIData(oldp+60,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[25]),32);
        bufp->chgIData(oldp+61,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[26]),32);
        bufp->chgIData(oldp+62,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[27]),32);
        bufp->chgIData(oldp+63,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[28]),32);
        bufp->chgIData(oldp+64,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[29]),32);
        bufp->chgIData(oldp+65,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[30]),32);
        bufp->chgIData(oldp+66,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+67,(vlSelf->clk));
    bufp->chgBit(oldp+68,(vlSelf->rst));
    bufp->chgIData(oldp+69,(vlSelf->inst),32);
    bufp->chgIData(oldp+70,(vlSelf->pc),32);
    bufp->chgIData(oldp+71,(vlSelf->a0_out),32);
    bufp->chgIData(oldp+72,(((0x6fU == (0x7fU & vlSelf->inst))
                              ? (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b 
                                 + vlSelf->pc) : ((IData)(vlSelf->ysyx_25040109_top__DOT__is_jalr)
                                                   ? 
                                                  (0xfffffffeU 
                                                   & (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b 
                                                      + vlSelf->ysyx_25040109_top__DOT__rs1_data))
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->pc)))),32);
    bufp->chgIData(oldp+73,(vlSelf->ysyx_25040109_top__DOT__rs1_data),32);
    bufp->chgIData(oldp+74,((((0x6fU == (0x7fU & vlSelf->inst)) 
                              | (0x67U == (0x7fU & vlSelf->inst)))
                              ? ((IData)(4U) + vlSelf->pc)
                              : (((0x17U == (0x7fU 
                                             & vlSelf->inst))
                                   ? vlSelf->pc : (
                                                   (0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->inst))
                                                    ? 0U
                                                    : vlSelf->ysyx_25040109_top__DOT__rs1_data)) 
                                 + vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b))),32);
    bufp->chgCData(oldp+75,((0x1fU & (vlSelf->inst 
                                      >> 7U))),5);
    bufp->chgBit(oldp+76,(((IData)((0x13U == (0x707fU 
                                              & vlSelf->inst))) 
                           | ((0x17U == (0x7fU & vlSelf->inst)) 
                              | ((0x37U == (0x7fU & vlSelf->inst)) 
                                 | ((0x6fU == (0x7fU 
                                               & vlSelf->inst)) 
                                    | (IData)(vlSelf->ysyx_25040109_top__DOT__is_jalr)))))));
    bufp->chgCData(oldp+77,((0x7fU & vlSelf->inst)),7);
    bufp->chgBit(oldp+78,((0x6fU == (0x7fU & vlSelf->inst))));
    bufp->chgIData(oldp+79,((vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b 
                             + vlSelf->pc)),32);
    bufp->chgIData(oldp+80,((0xfffffffeU & (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b 
                                            + vlSelf->ysyx_25040109_top__DOT__rs1_data))),32);
    bufp->chgBit(oldp+81,((0x17U == (0x7fU & vlSelf->inst))));
    bufp->chgBit(oldp+82,((0x37U == (0x7fU & vlSelf->inst))));
    bufp->chgBit(oldp+83,((0x67U == (0x7fU & vlSelf->inst))));
    bufp->chgIData(oldp+84,(((0x17U == (0x7fU & vlSelf->inst))
                              ? vlSelf->pc : ((0x37U 
                                               == (0x7fU 
                                                   & vlSelf->inst))
                                               ? 0U
                                               : vlSelf->ysyx_25040109_top__DOT__rs1_data))),32);
    bufp->chgIData(oldp+85,((((0x17U == (0x7fU & vlSelf->inst))
                               ? vlSelf->pc : ((0x37U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst))
                                                ? 0U
                                                : vlSelf->ysyx_25040109_top__DOT__rs1_data)) 
                             + vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)),32);
    bufp->chgIData(oldp+86,(((IData)(4U) + vlSelf->pc)),32);
    bufp->chgCData(oldp+87,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgCData(oldp+88,((0x1fU & (vlSelf->inst 
                                      >> 0xfU))),5);
    bufp->chgSData(oldp+89,((vlSelf->inst >> 0x14U)),12);
    bufp->chgIData(oldp+90,((vlSelf->inst >> 0xcU)),20);
    bufp->chgIData(oldp+91,((0xfffff000U & vlSelf->inst)),32);
    bufp->chgIData(oldp+92,((((- (IData)((1U & (vlSelf->inst 
                                                >> 0xbU)))) 
                              << 0xcU) | (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s))),32);
    bufp->chgIData(oldp+93,((((- (IData)((vlSelf->inst 
                                          >> 0x1fU))) 
                              << 0xdU) | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b) 
                                          << 1U))),32);
    __Vtemp_he579b914__0[0U] = (IData)((0x6300000000ULL 
                                        | (QData)((IData)(
                                                          (((- (IData)(
                                                                       (vlSelf->inst 
                                                                        >> 0x1fU))) 
                                                            << 0xdU) 
                                                           | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b) 
                                                              << 1U))))));
    __Vtemp_he579b914__0[1U] = ((vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j_ext 
                                 << 7U) | (IData)((
                                                   (0x6300000000ULL 
                                                    | (QData)((IData)(
                                                                      (((- (IData)(
                                                                                (vlSelf->inst 
                                                                                >> 0x1fU))) 
                                                                        << 0xdU) 
                                                                       | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b) 
                                                                          << 1U))))) 
                                                   >> 0x20U)));
    __Vtemp_he579b914__0[2U] = (0x3780U | ((0xffffc000U 
                                            & (((- (IData)(
                                                           (1U 
                                                            & (vlSelf->inst 
                                                               >> 0xbU)))) 
                                                << 0x1aU) 
                                               | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s) 
                                                  << 0xeU))) 
                                           | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j_ext 
                                              >> 0x19U)));
    __Vtemp_he579b914__0[3U] = (0x8c000U | ((vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                             << 0x15U) 
                                            | (0x3fffU 
                                               & ((0x3fffU 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->inst 
                                                                     >> 0xbU)))) 
                                                      >> 6U)) 
                                                  | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s) 
                                                     >> 0x12U)))));
    __Vtemp_he579b914__0[4U] = (0x2600000U | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                              >> 0xbU));
    __Vtemp_he579b914__0[5U] = (0x70000000U | (0xfffff00U 
                                               & (vlSelf->inst 
                                                  >> 4U)));
    __Vtemp_he579b914__0[6U] = (3U | (0xffff8000U & 
                                      (vlSelf->inst 
                                       << 3U)));
    __Vtemp_he579b914__0[7U] = (0xb8U | (vlSelf->inst 
                                         >> 0x1dU));
    bufp->chgWData(oldp+94,(__Vtemp_he579b914__0),234);
}

void Vysyx_25040109_top___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root__trace_cleanup\n"); );
    // Init
    Vysyx_25040109_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25040109_top___024root*>(voidSelf);
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
