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
    tracep->declBit(c+84,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+85,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+86,"inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+87,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+88,"a0_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_25040109_top ");
    tracep->declBit(c+84,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+85,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+86,"inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+87,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+88,"a0_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+89,"next_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+86,"inst_ifu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+90,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2,"imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+91,"result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+90,"rs1_data_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+92,"rd_addr_idu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+92,"rd_addr_exu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+93,"reg_write_en_idu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+93,"reg_write_en_exu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+94,"opcode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+95,"is_jal",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"is_jalr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+96,"jal_target",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+97,"jalr_target",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBus(c+90,"rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2,"imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+93,"reg_write_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+92,"rd_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+87,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+94,"opcode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+91,"result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+92,"rd_addr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+93,"reg_write_en_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+98,"is_auipc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+99,"is_lui",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+95,"is_jal",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+100,"is_jalr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+101,"alu_a",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+4,"alu_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+102,"alu_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+103,"jal_result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+86,"inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+92,"rd_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+2,"imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+93,"reg_write_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+90,"rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+90,"rs1_data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+94,"opcode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+104,"funct3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+105,"rs1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+92,"rd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+106,"imm_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+107,"imm_u",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBus(c+108,"imm_j",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 20,1);
    tracep->declBus(c+109,"imm_s",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+5,"imm_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 12,1);
    tracep->declBus(c+6,"imm_i_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+110,"imm_u_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+7,"imm_j_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+111,"imm_s_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+112,"imm_b_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+113,"imm_ebreak_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("imm_select ");
    tracep->declBus(c+114,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+115,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+116,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+2,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+94,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+117,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+8,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 311,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+114,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+115,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+116,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+118,"HAS_DEFAULT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+2,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+94,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+117,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+8,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 311,0);
    tracep->declBus(c+119,"PAIR_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+18+i*2,"pair_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 38,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+34+i*1,"key_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+42+i*1,"data_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 31,0);
    }
    tracep->declBus(c+50,"lut_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+51,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+120,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+84,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+87,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+86,"inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+86,"inst_ifu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBus(c+116,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+121,"RESET_VAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+84,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+85,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+89,"din",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+87,"dout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+122,"wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBus(c+123,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+116,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+84,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+91,"wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+92,"waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+93,"wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+105,"raddr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+90,"rdata1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+52+i*1,"rf",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(3);
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
    VlWide<10>/*319:0*/ __Vtemp_hcf91fb4e__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->ysyx_25040109_top__DOT__imm),32);
    bufp->fullBit(oldp+3,(vlSelf->ysyx_25040109_top__DOT__is_jalr));
    bufp->fullIData(oldp+4,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b),32);
    bufp->fullSData(oldp+5,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b),12);
    bufp->fullIData(oldp+6,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext),32);
    bufp->fullIData(oldp+7,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j_ext),32);
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
    bufp->fullWData(oldp+8,(__Vtemp_hcf91fb4e__0),312);
    bufp->fullQData(oldp+18,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+20,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+22,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+24,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+26,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+28,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+30,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+32,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullCData(oldp+34,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+35,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+36,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+37,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+38,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+39,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+40,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+41,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[7]),7);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+44,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+46,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+47,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+50,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+51,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+52,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+53,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+54,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+55,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+56,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+57,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+58,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+59,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+60,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+61,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+62,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+63,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+68,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+69,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+70,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+71,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+72,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+73,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+77,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+81,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+83,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[31]),32);
    bufp->fullBit(oldp+84,(vlSelf->clk));
    bufp->fullBit(oldp+85,(vlSelf->rst));
    bufp->fullIData(oldp+86,(vlSelf->inst),32);
    bufp->fullIData(oldp+87,(vlSelf->pc),32);
    bufp->fullIData(oldp+88,(vlSelf->a0_out),32);
    bufp->fullIData(oldp+89,(((0x6fU == (0x7fU & vlSelf->inst))
                               ? (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b 
                                  + vlSelf->pc) : ((IData)(vlSelf->ysyx_25040109_top__DOT__is_jalr)
                                                    ? 
                                                   (0xfffffffeU 
                                                    & (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b 
                                                       + vlSelf->ysyx_25040109_top__DOT__rs1_data))
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->pc)))),32);
    bufp->fullIData(oldp+90,(vlSelf->ysyx_25040109_top__DOT__rs1_data),32);
    bufp->fullIData(oldp+91,((((0x6fU == (0x7fU & vlSelf->inst)) 
                               | (0x67U == (0x7fU & vlSelf->inst)))
                               ? ((IData)(4U) + vlSelf->pc)
                               : (((0x17U == (0x7fU 
                                              & vlSelf->inst))
                                    ? vlSelf->pc : 
                                   ((0x37U == (0x7fU 
                                               & vlSelf->inst))
                                     ? 0U : vlSelf->ysyx_25040109_top__DOT__rs1_data)) 
                                  + vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b))),32);
    bufp->fullCData(oldp+92,((0x1fU & (vlSelf->inst 
                                       >> 7U))),5);
    bufp->fullBit(oldp+93,(((IData)((0x13U == (0x707fU 
                                               & vlSelf->inst))) 
                            | ((0x17U == (0x7fU & vlSelf->inst)) 
                               | ((0x37U == (0x7fU 
                                             & vlSelf->inst)) 
                                  | ((0x6fU == (0x7fU 
                                                & vlSelf->inst)) 
                                     | (IData)(vlSelf->ysyx_25040109_top__DOT__is_jalr)))))));
    bufp->fullCData(oldp+94,((0x7fU & vlSelf->inst)),7);
    bufp->fullBit(oldp+95,((0x6fU == (0x7fU & vlSelf->inst))));
    bufp->fullIData(oldp+96,((vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b 
                              + vlSelf->pc)),32);
    bufp->fullIData(oldp+97,((0xfffffffeU & (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b 
                                             + vlSelf->ysyx_25040109_top__DOT__rs1_data))),32);
    bufp->fullBit(oldp+98,((0x17U == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+99,((0x37U == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+100,((0x67U == (0x7fU & vlSelf->inst))));
    bufp->fullIData(oldp+101,(((0x17U == (0x7fU & vlSelf->inst))
                                ? vlSelf->pc : ((0x37U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->inst))
                                                 ? 0U
                                                 : vlSelf->ysyx_25040109_top__DOT__rs1_data))),32);
    bufp->fullIData(oldp+102,((((0x17U == (0x7fU & vlSelf->inst))
                                 ? vlSelf->pc : ((0x37U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->inst))
                                                  ? 0U
                                                  : vlSelf->ysyx_25040109_top__DOT__rs1_data)) 
                               + vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)),32);
    bufp->fullIData(oldp+103,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullCData(oldp+104,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+105,((0x1fU & (vlSelf->inst 
                                        >> 0xfU))),5);
    bufp->fullSData(oldp+106,((vlSelf->inst >> 0x14U)),12);
    bufp->fullIData(oldp+107,((vlSelf->inst >> 0xcU)),20);
    bufp->fullIData(oldp+108,(((0x80000U & (vlSelf->inst 
                                            >> 0xcU)) 
                               | ((0x7f800U & (vlSelf->inst 
                                               >> 1U)) 
                                  | ((0x400U & (vlSelf->inst 
                                                >> 0xaU)) 
                                     | (0x3ffU & (vlSelf->inst 
                                                  >> 0x15U)))))),20);
    bufp->fullSData(oldp+109,(((0xfe0U & (vlSelf->inst 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->inst 
                                           >> 7U)))),12);
    bufp->fullIData(oldp+110,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+111,((((- (IData)((1U & (vlSelf->inst 
                                                  >> 0xbU)))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+112,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xdU) | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b) 
                                            << 1U))),32);
    bufp->fullBit(oldp+113,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_ebreak_ext));
    bufp->fullIData(oldp+114,(8U),32);
    bufp->fullIData(oldp+115,(7U),32);
    bufp->fullIData(oldp+116,(0x20U),32);
    bufp->fullIData(oldp+117,(0U),32);
    bufp->fullIData(oldp+118,(1U),32);
    bufp->fullIData(oldp+119,(0x27U),32);
    bufp->fullIData(oldp+120,(8U),32);
    bufp->fullIData(oldp+121,(0x80000000U),32);
    bufp->fullBit(oldp+122,(1U));
    bufp->fullIData(oldp+123,(5U),32);
}
