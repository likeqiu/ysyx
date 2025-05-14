// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vysyx_25040109_top__Syms.h"


VL_ATTR_COLD void Vysyx_25040109_top___024root__trace_init_sub__TOP__0(Vysyx_25040109_top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+33,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+35,"inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_25040109_top ");
    tracep->declBit(c+33,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+35,"inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+37,"next_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+35,"inst_ifu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+38,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+39,"imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+40,"result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+38,"rs1_data_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+41,"rd_addr_idu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+41,"rd_addr_exu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+42,"reg_write_en_idu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+42,"reg_write_en_exu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("exu ");
    tracep->declBus(c+38,"rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+39,"imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+42,"reg_write_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+41,"rd_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+40,"result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+41,"rd_addr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+42,"reg_write_en_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+35,"inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+41,"rd_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+39,"imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+42,"reg_write_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+38,"rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+38,"rs1_data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"opcode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+44,"funct3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+45,"rs1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+41,"rd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+46,"imm_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+33,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+35,"inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+35,"inst_ifu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBus(c+47,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+48,"RESET_VAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+33,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+37,"din",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"dout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+49,"wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBus(c+50,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+47,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+33,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+40,"wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+41,"waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+42,"wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+45,"raddr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+38,"rdata1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"rf",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_25040109_top___024root__trace_init_top(Vysyx_25040109_top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root__trace_init_top\n"); );
    // Body
    Vysyx_25040109_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_25040109_top___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vysyx_25040109_top___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vysyx_25040109_top___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vysyx_25040109_top___024root__trace_register(Vysyx_25040109_top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_25040109_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_25040109_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_25040109_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_25040109_top___024root__trace_full_sub_0(Vysyx_25040109_top___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vysyx_25040109_top___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_25040109_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25040109_top___024root*>(voidSelf);
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_25040109_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_25040109_top___024root__trace_full_sub_0(Vysyx_25040109_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[31]),32);
    bufp->fullBit(oldp+33,(vlSelf->clk));
    bufp->fullBit(oldp+34,(vlSelf->rst));
    bufp->fullIData(oldp+35,(vlSelf->inst),32);
    bufp->fullIData(oldp+36,(vlSelf->pc),32);
    bufp->fullIData(oldp+37,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullIData(oldp+38,(((0U == (0x1fU & (vlSelf->inst 
                                               >> 0xfU)))
                               ? 0U : vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
                              [(0x1fU & (vlSelf->inst 
                                         >> 0xfU))])),32);
    bufp->fullIData(oldp+39,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->inst 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+40,(((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->inst 
                                            >> 0x14U)) 
                              + ((0U == (0x1fU & (vlSelf->inst 
                                                  >> 0xfU)))
                                  ? 0U : vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf
                                 [(0x1fU & (vlSelf->inst 
                                            >> 0xfU))]))),32);
    bufp->fullCData(oldp+41,((0x1fU & (vlSelf->inst 
                                       >> 7U))),5);
    bufp->fullBit(oldp+42,((IData)((0x13U == (0x707fU 
                                              & vlSelf->inst)))));
    bufp->fullCData(oldp+43,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+44,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+45,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->fullSData(oldp+46,((vlSelf->inst >> 0x14U)),12);
    bufp->fullIData(oldp+47,(0x20U),32);
    bufp->fullIData(oldp+48,(0x80000000U),32);
    bufp->fullBit(oldp+49,(1U));
    bufp->fullIData(oldp+50,(5U),32);
}
