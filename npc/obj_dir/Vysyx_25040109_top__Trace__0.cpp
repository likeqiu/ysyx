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
    VlWide<10>/*319:0*/ __Vtemp_hcf91fb4e__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+1,(vlSelf->ysyx_25040109_top__DOT__imm),32);
        bufp->chgBit(oldp+2,(vlSelf->ysyx_25040109_top__DOT__is_jalr));
        bufp->chgIData(oldp+3,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b),32);
        bufp->chgSData(oldp+4,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b),12);
        bufp->chgIData(oldp+5,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext),32);
        bufp->chgIData(oldp+6,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j_ext),32);
        __Vtemp_hcf91fb4e__0[0U] = vlSelf->__VdfgTmp_h027222d6__0[0U];
        __Vtemp_hcf91fb4e__0[1U] = vlSelf->__VdfgTmp_h027222d6__0[1U];
        __Vtemp_hcf91fb4e__0[2U] = vlSelf->__VdfgTmp_h027222d6__0[2U];
        __Vtemp_hcf91fb4e__0[3U] = vlSelf->__VdfgTmp_h027222d6__0[3U];
        __Vtemp_hcf91fb4e__0[4U] = vlSelf->__VdfgTmp_h027222d6__0[4U];
        __Vtemp_hcf91fb4e__0[5U] = vlSelf->__VdfgTmp_h027222d6__0[5U];
        __Vtemp_hcf91fb4e__0[6U] = vlSelf->__VdfgTmp_h027222d6__0[6U];
        __Vtemp_hcf91fb4e__0[7U] = (0xb800U | vlSelf->__VdfgTmp_h027222d6__0[7U]);
        __Vtemp_hcf91fb4e__0[8U] = 0U;
        __Vtemp_hcf91fb4e__0[9U] = 0U;
        bufp->chgWData(oldp+7,(__Vtemp_hcf91fb4e__0),312);
        bufp->chgQData(oldp+17,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+19,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+21,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgQData(oldp+23,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[3]),39);
        bufp->chgQData(oldp+25,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[4]),39);
        bufp->chgQData(oldp+27,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[5]),39);
        bufp->chgQData(oldp+29,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[6]),39);
        bufp->chgQData(oldp+31,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[7]),39);
        bufp->chgCData(oldp+33,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+34,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+35,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+36,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+37,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+38,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+39,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+40,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[7]),7);
        bufp->chgIData(oldp+41,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+42,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+43,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+44,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+45,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+46,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+47,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+48,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+49,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+50,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+51,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0]),32);
        bufp->chgIData(oldp+52,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[1]),32);
        bufp->chgIData(oldp+53,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[2]),32);
        bufp->chgIData(oldp+54,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[3]),32);
        bufp->chgIData(oldp+55,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[4]),32);
        bufp->chgIData(oldp+56,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[5]),32);
        bufp->chgIData(oldp+57,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[6]),32);
        bufp->chgIData(oldp+58,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[7]),32);
        bufp->chgIData(oldp+59,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[8]),32);
        bufp->chgIData(oldp+60,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[9]),32);
        bufp->chgIData(oldp+61,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[10]),32);
        bufp->chgIData(oldp+62,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[11]),32);
        bufp->chgIData(oldp+63,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[12]),32);
        bufp->chgIData(oldp+64,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[13]),32);
        bufp->chgIData(oldp+65,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[14]),32);
        bufp->chgIData(oldp+66,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[15]),32);
        bufp->chgIData(oldp+67,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[16]),32);
        bufp->chgIData(oldp+68,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[17]),32);
        bufp->chgIData(oldp+69,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[18]),32);
        bufp->chgIData(oldp+70,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[19]),32);
        bufp->chgIData(oldp+71,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[20]),32);
        bufp->chgIData(oldp+72,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[21]),32);
        bufp->chgIData(oldp+73,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[22]),32);
        bufp->chgIData(oldp+74,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[23]),32);
        bufp->chgIData(oldp+75,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[24]),32);
        bufp->chgIData(oldp+76,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[25]),32);
        bufp->chgIData(oldp+77,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[26]),32);
        bufp->chgIData(oldp+78,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[27]),32);
        bufp->chgIData(oldp+79,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[28]),32);
        bufp->chgIData(oldp+80,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[29]),32);
        bufp->chgIData(oldp+81,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[30]),32);
        bufp->chgIData(oldp+82,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+83,(vlSelf->clk));
    bufp->chgBit(oldp+84,(vlSelf->rst));
    bufp->chgIData(oldp+85,(vlSelf->inst),32);
    bufp->chgIData(oldp+86,(vlSelf->pc),32);
    bufp->chgIData(oldp+87,(vlSelf->a0_out),32);
    bufp->chgIData(oldp+88,(((0x6fU == (0x7fU & vlSelf->inst))
                              ? (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b 
                                 + vlSelf->pc) : ((IData)(vlSelf->ysyx_25040109_top__DOT__is_jalr)
                                                   ? 
                                                  (0xfffffffeU 
                                                   & (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b 
                                                      + vlSelf->ysyx_25040109_top__DOT__rs1_data))
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->pc)))),32);
    bufp->chgIData(oldp+89,(vlSelf->ysyx_25040109_top__DOT__rs1_data),32);
    bufp->chgIData(oldp+90,((((0x6fU == (0x7fU & vlSelf->inst)) 
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
    bufp->chgCData(oldp+91,((0x1fU & (vlSelf->inst 
                                      >> 7U))),5);
    bufp->chgBit(oldp+92,(((IData)((0x13U == (0x707fU 
                                              & vlSelf->inst))) 
                           | ((0x17U == (0x7fU & vlSelf->inst)) 
                              | ((0x37U == (0x7fU & vlSelf->inst)) 
                                 | ((0x6fU == (0x7fU 
                                               & vlSelf->inst)) 
                                    | (IData)(vlSelf->ysyx_25040109_top__DOT__is_jalr)))))));
    bufp->chgCData(oldp+93,((0x7fU & vlSelf->inst)),7);
    bufp->chgBit(oldp+94,((0x6fU == (0x7fU & vlSelf->inst))));
    bufp->chgIData(oldp+95,((vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b 
                             + vlSelf->pc)),32);
    bufp->chgIData(oldp+96,((0xfffffffeU & (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b 
                                            + vlSelf->ysyx_25040109_top__DOT__rs1_data))),32);
    bufp->chgBit(oldp+97,((0x17U == (0x7fU & vlSelf->inst))));
    bufp->chgBit(oldp+98,((0x37U == (0x7fU & vlSelf->inst))));
    bufp->chgBit(oldp+99,((0x67U == (0x7fU & vlSelf->inst))));
    bufp->chgIData(oldp+100,(((0x17U == (0x7fU & vlSelf->inst))
                               ? vlSelf->pc : ((0x37U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst))
                                                ? 0U
                                                : vlSelf->ysyx_25040109_top__DOT__rs1_data))),32);
    bufp->chgIData(oldp+101,((((0x17U == (0x7fU & vlSelf->inst))
                                ? vlSelf->pc : ((0x37U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->inst))
                                                 ? 0U
                                                 : vlSelf->ysyx_25040109_top__DOT__rs1_data)) 
                              + vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)),32);
    bufp->chgIData(oldp+102,(((IData)(4U) + vlSelf->pc)),32);
    bufp->chgCData(oldp+103,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgCData(oldp+104,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->chgSData(oldp+105,((vlSelf->inst >> 0x14U)),12);
    bufp->chgIData(oldp+106,((vlSelf->inst >> 0xcU)),20);
    bufp->chgIData(oldp+107,(((0x80000U & (vlSelf->inst 
                                           >> 0xcU)) 
                              | ((0x7f800U & (vlSelf->inst 
                                              >> 1U)) 
                                 | ((0x400U & (vlSelf->inst 
                                               >> 0xaU)) 
                                    | (0x3ffU & (vlSelf->inst 
                                                 >> 0x15U)))))),20);
    bufp->chgSData(oldp+108,(((0xfe0U & (vlSelf->inst 
                                         >> 0x14U)) 
                              | (0x1fU & (vlSelf->inst 
                                          >> 7U)))),12);
    bufp->chgIData(oldp+109,((0xfffff000U & vlSelf->inst)),32);
    bufp->chgIData(oldp+110,((((- (IData)((1U & (vlSelf->inst 
                                                 >> 0xbU)))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 7U))))),32);
    bufp->chgIData(oldp+111,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xdU) | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b) 
                                           << 1U))),32);
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
