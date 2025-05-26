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
    tracep->declBit(c+158,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+159,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+160,"inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+161,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+162,"a0_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_25040109_top ");
    tracep->declBit(c+158,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+159,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+160,"inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+161,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+162,"a0_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+163,"next_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+164,"inst_ifu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"rs2_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+44,"imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+45,"result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"rs1_data_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+46,"mem_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"rd_addr_idu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+47,"rd_addr_exu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+48,"reg_write_en_idu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+48,"reg_write_en_exu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+176,"step_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+49,"inst_reg",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+50,"opcode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+51,"funct3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+52,"is_sw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+53,"is_lw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+54,"mem_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+55,"addr_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("exu ");
    tracep->declBus(c+42,"rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+44,"imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+48,"reg_write_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+47,"rd_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+161,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+50,"opcode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+51,"funct3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+46,"mem_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+45,"result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"rd_addr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+48,"reg_write_en_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+163,"next_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+56,"is_auipc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+57,"is_lui",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"is_jal",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+59,"is_jalr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+60,"is_addi",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+53,"is_lw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"is_branch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+62,"alu_a",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+44,"alu_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+63,"alu_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+165,"jal_result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+166,"jal_target",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+64,"jalr_target",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+166,"branch_target",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+54,"jalr_base",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+65,"branch_taken",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("alu_a_select ");
    tracep->declBus(c+177,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+178,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+179,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+62,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+50,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+42,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+167,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 116,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+177,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+178,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+179,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+180,"HAS_DEFAULT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+62,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+50,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+42,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+167,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 116,0);
    tracep->declBus(c+181,"PAIR_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+1+i*2,"pair_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 38,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+7+i*1,"key_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 6,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+10+i*1,"data_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 31,0);
    }
    tracep->declBus(c+66,"lut_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+67,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+182,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("result_select ");
    tracep->declBus(c+177,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+178,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+179,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+45,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+50,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+63,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+171,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 116,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+177,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+178,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+179,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+180,"HAS_DEFAULT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+45,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+50,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+63,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+171,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 116,0);
    tracep->declBus(c+181,"PAIR_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+68+i*2,"pair_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 38,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+13+i*1,"key_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 6,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+74+i*1,"data_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 31,0);
    }
    tracep->declBus(c+77,"lut_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+78,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+182,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+49,"inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"rd_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+44,"imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+48,"reg_write_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+42,"rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"rs1_data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+50,"opcode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+51,"funct3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+79,"imm_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+80,"imm_u",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBus(c+81,"imm_j",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 20,1);
    tracep->declBus(c+82,"imm_s",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+83,"imm_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 12,1);
    tracep->declBus(c+84,"imm_i_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+85,"imm_u_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+86,"imm_j_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+87,"imm_s_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+88,"imm_b_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("imm_select ");
    tracep->declBus(c+178,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+178,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+179,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+44,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+50,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+183,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+89,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 272,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+178,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+178,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+179,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+180,"HAS_DEFAULT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+44,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+50,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+183,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+89,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 272,0);
    tracep->declBus(c+181,"PAIR_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declQuad(c+98+i*2,"pair_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 38,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+16+i*1,"key_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 6,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+112+i*1,"data_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 31,0);
    }
    tracep->declBus(c+119,"lut_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+120,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+184,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reg_write_select ");
    tracep->declBus(c+185,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+186,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+180,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+48,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+121,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->declBus(c+187,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declArray(c+188,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+185,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+186,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+180,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+180,"HAS_DEFAULT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+48,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+121,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->declBus(c+187,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declArray(c+188,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 65,0);
    tracep->declBus(c+191,"PAIR_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+23+i*1,"pair_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 10,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+29+i*1,"key_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 9,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+35+i*1,"data_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 0,0);
    }
    tracep->declBus(c+122,"lut_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBit(c+123,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+192,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+158,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+161,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+159,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+164,"inst_ifu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+175,"pc_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBus(c+179,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+193,"RESET_VAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+158,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+159,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+164,"din",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+49,"dout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+176,"wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBus(c+194,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+179,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+158,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+45,"wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+48,"wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+124,"raddr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+125,"raddr2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+42,"rdata1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"rdata2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+162,"a0_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+126+i*1,"rf",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+41,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
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
    VlWide<9>/*287:0*/ __Vtemp_hb02b637a__0;
    VlWide<4>/*127:0*/ __Vtemp_hfaf36e9a__0;
    VlWide<4>/*127:0*/ __Vtemp_hc92765bb__0;
    VlWide<3>/*95:0*/ __Vtemp_h4d1dc47f__0;
    // Body
    bufp->fullQData(oldp+1,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+3,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+5,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullCData(oldp+7,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+8,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+9,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[2]),7);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[2]),32);
    bufp->fullCData(oldp+13,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+14,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+15,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+16,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+17,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+18,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+19,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+20,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+21,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+22,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[6]),7);
    bufp->fullSData(oldp+23,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__pair_list[0]),11);
    bufp->fullSData(oldp+24,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__pair_list[1]),11);
    bufp->fullSData(oldp+25,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__pair_list[2]),11);
    bufp->fullSData(oldp+26,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__pair_list[3]),11);
    bufp->fullSData(oldp+27,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__pair_list[4]),11);
    bufp->fullSData(oldp+28,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__pair_list[5]),11);
    bufp->fullSData(oldp+29,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list[0]),10);
    bufp->fullSData(oldp+30,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list[1]),10);
    bufp->fullSData(oldp+31,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list[2]),10);
    bufp->fullSData(oldp+32,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list[3]),10);
    bufp->fullSData(oldp+33,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list[4]),10);
    bufp->fullSData(oldp+34,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list[5]),10);
    bufp->fullBit(oldp+35,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+36,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+37,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+38,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+39,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+40,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__data_list[5]));
    bufp->fullIData(oldp+41,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_25040109_top__DOT__rs1_data),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_25040109_top__DOT__rs2_data),32);
    bufp->fullIData(oldp+44,(vlSelf->ysyx_25040109_top__DOT__imm),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyx_25040109_top__DOT__result),32);
    bufp->fullIData(oldp+46,(vlSelf->ysyx_25040109_top__DOT__mem_data),32);
    bufp->fullCData(oldp+47,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__inst_reg 
                                       >> 7U))),5);
    bufp->fullBit(oldp+48,(vlSelf->ysyx_25040109_top__DOT__reg_write_en_idu));
    bufp->fullIData(oldp+49,(vlSelf->ysyx_25040109_top__DOT__inst_reg),32);
    bufp->fullCData(oldp+50,((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_reg)),7);
    bufp->fullCData(oldp+51,((7U & (vlSelf->ysyx_25040109_top__DOT__inst_reg 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+52,((IData)((0x2023U == (0x707fU 
                                                & vlSelf->ysyx_25040109_top__DOT__inst_reg)))));
    bufp->fullBit(oldp+53,((IData)((0x2003U == (0x707fU 
                                                & vlSelf->ysyx_25040109_top__DOT__inst_reg)))));
    bufp->fullIData(oldp+54,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__jalr_base),32);
    bufp->fullBit(oldp+55,(vlSelf->ysyx_25040109_top__DOT__addr_valid));
    bufp->fullBit(oldp+56,((0x17U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_reg))));
    bufp->fullBit(oldp+57,((0x37U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_reg))));
    bufp->fullBit(oldp+58,((0x6fU == (0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_reg))));
    bufp->fullBit(oldp+59,((IData)((0x67U == (0x707fU 
                                              & vlSelf->ysyx_25040109_top__DOT__inst_reg)))));
    bufp->fullBit(oldp+60,((IData)((0x13U == (0x707fU 
                                              & vlSelf->ysyx_25040109_top__DOT__inst_reg)))));
    bufp->fullBit(oldp+61,((IData)((0x63U == (0x707fU 
                                              & vlSelf->ysyx_25040109_top__DOT__inst_reg)))));
    bufp->fullIData(oldp+62,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a),32);
    bufp->fullIData(oldp+63,((vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                              + vlSelf->ysyx_25040109_top__DOT__imm)),32);
    bufp->fullIData(oldp+64,((0xfffffffeU & vlSelf->ysyx_25040109_top__DOT__exu__DOT__jalr_base)),32);
    bufp->fullBit(oldp+65,(((IData)((0x63U == (0x707fU 
                                               & vlSelf->ysyx_25040109_top__DOT__inst_reg))) 
                            & (vlSelf->ysyx_25040109_top__DOT__rs1_data 
                               == vlSelf->ysyx_25040109_top__DOT__rs2_data))));
    bufp->fullIData(oldp+66,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+67,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+68,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+70,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+72,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+77,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+78,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+79,((vlSelf->ysyx_25040109_top__DOT__inst_reg 
                              >> 0x14U)),12);
    bufp->fullIData(oldp+80,((vlSelf->ysyx_25040109_top__DOT__inst_reg 
                              >> 0xcU)),20);
    bufp->fullIData(oldp+81,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j),20);
    bufp->fullSData(oldp+82,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s),12);
    bufp->fullSData(oldp+83,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b),12);
    bufp->fullIData(oldp+84,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext),32);
    bufp->fullIData(oldp+85,((0xfffff000U & vlSelf->ysyx_25040109_top__DOT__inst_reg)),32);
    bufp->fullIData(oldp+86,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__inst_reg 
                                           >> 0x1fU))) 
                               << 0x15U) | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j 
                                            << 1U))),32);
    bufp->fullIData(oldp+87,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__inst_reg 
                                           >> 0x1fU))) 
                               << 0xcU) | (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s))),32);
    bufp->fullIData(oldp+88,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__inst_reg 
                                           >> 0x1fU))) 
                               << 0xdU) | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b) 
                                           << 1U))),32);
    __Vtemp_hb02b637a__0[0U] = (IData)((0x6300000000ULL 
                                        | (QData)((IData)(
                                                          (((- (IData)(
                                                                       (vlSelf->ysyx_25040109_top__DOT__inst_reg 
                                                                        >> 0x1fU))) 
                                                            << 0xdU) 
                                                           | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b) 
                                                              << 1U))))));
    __Vtemp_hb02b637a__0[1U] = ((0xffffff80U & (((- (IData)(
                                                            (vlSelf->ysyx_25040109_top__DOT__inst_reg 
                                                             >> 0x1fU))) 
                                                 << 0x1cU) 
                                                | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j 
                                                   << 8U))) 
                                | (IData)(((0x6300000000ULL 
                                            | (QData)((IData)(
                                                              (((- (IData)(
                                                                           (vlSelf->ysyx_25040109_top__DOT__inst_reg 
                                                                            >> 0x1fU))) 
                                                                << 0xdU) 
                                                               | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b) 
                                                                  << 1U))))) 
                                           >> 0x20U)));
    __Vtemp_hb02b637a__0[2U] = (0x3780U | ((0xffffc000U 
                                            & (((- (IData)(
                                                           (vlSelf->ysyx_25040109_top__DOT__inst_reg 
                                                            >> 0x1fU))) 
                                                << 0x1aU) 
                                               | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s) 
                                                  << 0xeU))) 
                                           | (0x7fU 
                                              & (((- (IData)(
                                                             (vlSelf->ysyx_25040109_top__DOT__inst_reg 
                                                              >> 0x1fU))) 
                                                  >> 4U) 
                                                 | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j 
                                                    >> 0x18U)))));
    __Vtemp_hb02b637a__0[3U] = (0x8c000U | ((vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                             << 0x15U) 
                                            | (0x3fffU 
                                               & ((0x3fffU 
                                                   & ((- (IData)(
                                                                 (vlSelf->ysyx_25040109_top__DOT__inst_reg 
                                                                  >> 0x1fU))) 
                                                      >> 6U)) 
                                                  | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s) 
                                                     >> 0x12U)))));
    __Vtemp_hb02b637a__0[4U] = (0x600000U | ((vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                              << 0x1cU) 
                                             | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                                >> 0xbU)));
    __Vtemp_hb02b637a__0[5U] = (0x30000000U | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                               >> 4U));
    __Vtemp_hb02b637a__0[6U] = (1U | (0xffff8000U & 
                                      (vlSelf->ysyx_25040109_top__DOT__inst_reg 
                                       << 3U)));
    __Vtemp_hb02b637a__0[7U] = (0x1b8U | ((0xffc00000U 
                                           & (vlSelf->ysyx_25040109_top__DOT__inst_reg 
                                              << 0xaU)) 
                                          | (vlSelf->ysyx_25040109_top__DOT__inst_reg 
                                             >> 0x1dU)));
    __Vtemp_hb02b637a__0[8U] = (0x5c00U | (vlSelf->ysyx_25040109_top__DOT__inst_reg 
                                           >> 0x16U));
    bufp->fullWData(oldp+89,(__Vtemp_hb02b637a__0),273);
    bufp->fullQData(oldp+98,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+100,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+102,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+104,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+106,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+108,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+110,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+113,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+114,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+115,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+116,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+117,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+118,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+119,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+120,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+121,(vlSelf->ysyx_25040109_top__DOT__idu__DOT____Vcellinp__reg_write_select__key),10);
    bufp->fullBit(oldp+122,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+123,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+124,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__inst_reg 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+125,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__inst_reg 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+126,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+127,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+128,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+129,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+130,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+131,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+132,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+133,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+134,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+135,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+136,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+137,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+138,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+139,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+140,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+141,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+142,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+143,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+144,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+145,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+146,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+147,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+148,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+149,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+150,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+151,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+152,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+153,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+154,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+155,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+156,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+157,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[31]),32);
    bufp->fullBit(oldp+158,(vlSelf->clk));
    bufp->fullBit(oldp+159,(vlSelf->rst));
    bufp->fullIData(oldp+160,(vlSelf->inst),32);
    bufp->fullIData(oldp+161,(vlSelf->pc),32);
    bufp->fullIData(oldp+162,(vlSelf->a0_out),32);
    bufp->fullIData(oldp+163,(((0x6fU == (0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_reg))
                                ? (vlSelf->pc + vlSelf->ysyx_25040109_top__DOT__imm)
                                : ((IData)((0x67U == 
                                            (0x707fU 
                                             & vlSelf->ysyx_25040109_top__DOT__inst_reg)))
                                    ? (0xfffffffeU 
                                       & vlSelf->ysyx_25040109_top__DOT__exu__DOT__jalr_base)
                                    : ((IData)(((0x63U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->ysyx_25040109_top__DOT__inst_reg)) 
                                                & (vlSelf->ysyx_25040109_top__DOT__rs1_data 
                                                   == vlSelf->ysyx_25040109_top__DOT__rs2_data)))
                                        ? (vlSelf->pc 
                                           + vlSelf->ysyx_25040109_top__DOT__imm)
                                        : ((IData)(4U) 
                                           + vlSelf->pc))))),32);
    bufp->fullIData(oldp+164,(vlSelf->ysyx_25040109_top__DOT__inst_ifu),32);
    bufp->fullIData(oldp+165,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullIData(oldp+166,((vlSelf->pc + vlSelf->ysyx_25040109_top__DOT__imm)),32);
    __Vtemp_hfaf36e9a__0[0U] = vlSelf->pc;
    __Vtemp_hfaf36e9a__0[1U] = 0x6fU;
    __Vtemp_hfaf36e9a__0[2U] = (0x1b80U | (vlSelf->pc 
                                           << 0xeU));
    __Vtemp_hfaf36e9a__0[3U] = (0x5c000U | (vlSelf->pc 
                                            >> 0x12U));
    bufp->fullWData(oldp+167,(__Vtemp_hfaf36e9a__0),117);
    __Vtemp_hc92765bb__0[0U] = (IData)((0x300000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__mem_data))));
    __Vtemp_hc92765bb__0[1U] = ((((IData)(4U) + vlSelf->pc) 
                                 << 7U) | (IData)((
                                                   (0x300000000ULL 
                                                    | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__mem_data))) 
                                                   >> 0x20U)));
    __Vtemp_hc92765bb__0[2U] = (0x3380U | ((((IData)(4U) 
                                             + vlSelf->pc) 
                                            << 0xeU) 
                                           | (((IData)(4U) 
                                               + vlSelf->pc) 
                                              >> 0x19U)));
    __Vtemp_hc92765bb__0[3U] = (0x1bc000U | (((IData)(4U) 
                                              + vlSelf->pc) 
                                             >> 0x12U));
    bufp->fullWData(oldp+171,(__Vtemp_hc92765bb__0),117);
    bufp->fullBit(oldp+175,(((~ (IData)(vlSelf->rst)) 
                             & ((0x80000000U <= vlSelf->pc) 
                                & (0x87ffffffU >= vlSelf->pc)))));
    bufp->fullBit(oldp+176,(1U));
    bufp->fullIData(oldp+177,(3U),32);
    bufp->fullIData(oldp+178,(7U),32);
    bufp->fullIData(oldp+179,(0x20U),32);
    bufp->fullIData(oldp+180,(1U),32);
    bufp->fullIData(oldp+181,(0x27U),32);
    bufp->fullIData(oldp+182,(3U),32);
    bufp->fullIData(oldp+183,(0U),32);
    bufp->fullIData(oldp+184,(7U),32);
    bufp->fullIData(oldp+185,(6U),32);
    bufp->fullIData(oldp+186,(0xaU),32);
    bufp->fullBit(oldp+187,(0U));
    __Vtemp_h4d1dc47f__0[0U] = 0xbc738835U;
    __Vtemp_h4d1dc47f__0[1U] = 0x989716e3U;
    __Vtemp_h4d1dc47f__0[2U] = 0U;
    bufp->fullWData(oldp+188,(__Vtemp_h4d1dc47f__0),66);
    bufp->fullIData(oldp+191,(0xbU),32);
    bufp->fullIData(oldp+192,(6U),32);
    bufp->fullIData(oldp+193,(0x80000000U),32);
    bufp->fullIData(oldp+194,(5U),32);
}
