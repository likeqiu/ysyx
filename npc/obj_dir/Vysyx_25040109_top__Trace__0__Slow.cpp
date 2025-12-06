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
    tracep->declBit(c+222,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+223,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+224,"p_count_number",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+225,"inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+226,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+227,"a0_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+228,"inst_wb_complete",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+229,"is_load_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+230,"is_store_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"is_ecall_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+232,"opcode_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+233,"dmem_raddr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+234,"dmem_waddr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_25040109_top ");
    tracep->declBit(c+222,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+223,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+224,"p_count_number",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+225,"inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+226,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+227,"a0_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+228,"inst_wb_complete",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+229,"is_load_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+230,"is_store_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"is_ecall_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+232,"opcode_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+233,"dmem_raddr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+233,"dmem_waddr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+17,"imem_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+18,"imem_ren",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+19,"imem_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+20,"imem_rvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"imem_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+233,"dmem_raddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+21,"dmem_ren",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+22,"dmem_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+23,"dmem_rvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"dmem_rready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"dmem_wvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+233,"dmem_waddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+26,"dmem_wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+27,"dmem_wlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+25,"dmem_wen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"dmem_wready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+222,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+223,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+224,"p_count_number",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+17,"imem_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+18,"imem_ren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+19,"imem_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+20,"imem_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"imem_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+233,"dmem_raddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+21,"dmem_ren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+22,"dmem_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+23,"dmem_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"dmem_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+233,"dmem_waddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+26,"dmem_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+27,"dmem_wlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+25,"dmem_wen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"dmem_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"dmem_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+225,"inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+226,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+227,"a0_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+228,"inst_wb_complete",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+229,"is_load_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+230,"is_store_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"is_ecall_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+232,"opcode_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+247,"S_NORMAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+248,"S_TRAP_MCAUSE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+249,"CSR_MEPC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+250,"CSR_MCAUSE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+29,"pc_fetch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,"pc_exe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,"stage_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+32,"lsu_req_issued",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+33,"inst_exe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,"inst_ifu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+18,"ifu_ready_to_mem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"ifu_valid_to_idu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+36,"idu_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+232,"opcode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+37,"rs1_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+38,"rs2_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+39,"imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+40,"funct3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+41,"funct7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+42,"rd_addr_idu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+235,"reg_write_en_idu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+43,"inst_invalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+44,"csr_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+45,"result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+46,"next_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"rd_addr_exu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+236,"reg_write_en_exu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+47,"csr_we_from_exu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+48,"csr_wdata_from_exu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+49,"is_load",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"is_store",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+230,"final_mem_we",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+51,"load_data_from_lsu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+52,"store_enable_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+53,"lsu_in_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"lsu_out_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+55,"lsu_out_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"lsu_in_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"idu_valid_to_exu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"exu_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"exu_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"wb_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"idu_out_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"idu_out_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+56,"writeback_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+57,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+58,"rs2_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+59,"csr_rdata_from_regfile",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+60,"mepc_from_regfile",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+61,"mtvec_from_regfile",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+62,"trap_state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+62,"is_stalled_by_trap",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"is_ecall",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"final_gpr_we",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"final_csr_we",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+65,"final_csr_waddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+66,"final_csr_wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+67,"mem_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+68,"mem_done",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+69,"commit_cond",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"inst_wb_complete_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+71,"lsu_in_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("exu ");
    tracep->declBus(c+57,"rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+58,"rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+39,"imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+238,"reg_write_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+236,"reg_write_en_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+42,"rd_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+37,"rs1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+30,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+232,"opcode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+40,"funct3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+41,"funct7",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+72,"inst_invalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+45,"result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"rd_addr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+46,"next_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+44,"csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+59,"csr_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+60,"mepc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+61,"mtvec",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+47,"csr_we_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+48,"csr_wdata_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+73,"alu_a",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+74,"alu_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+75,"alu_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declQuad(c+76,"mul_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBus(c+78,"shift_amount",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+239,"is_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+44,"funct12",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+79,"is_ecall",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"is_mret",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+81,"jal_result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+82,"jal_target",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+83,"jalr_target",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+82,"branch_target",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+240,"branch_taken",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("alu_a_select ");
    tracep->declBus(c+252,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+253,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+254,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+73,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+232,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+57,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+84,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 116,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+252,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+253,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+254,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+255,"HAS_DEFAULT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+73,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+232,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+57,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+84,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 116,0);
    tracep->declBus(c+256,"PAIR_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+88+i*2,"pair_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 38,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+1+i*1,"key_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 6,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+94+i*1,"data_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 31,0);
    }
    tracep->declBus(c+97,"lut_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+98,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+257,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("alu_b_select ");
    tracep->declBus(c+258,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+253,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+254,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+74,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+232,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+39,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+99,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 155,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+258,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+253,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+254,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+255,"HAS_DEFAULT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+74,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+232,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+39,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+99,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 155,0);
    tracep->declBus(c+256,"PAIR_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+104+i*2,"pair_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 38,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+4+i*1,"key_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 6,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+112+i*1,"data_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 31,0);
    }
    tracep->declBus(c+116,"lut_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+117,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+259,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+33,"inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+31,"in_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"out_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"in_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+42,"rd_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+39,"imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+235,"reg_write_en_idu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+40,"funct3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+41,"funct7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+43,"inst_invalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+44,"csr_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+232,"opcode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+37,"rs1_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+38,"rs2_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+49,"is_load",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"is_store",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"is_ecall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+118,"imm_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+119,"imm_u",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBus(c+120,"imm_j",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 20,1);
    tracep->declBus(c+121,"imm_s",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+122,"imm_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 12,1);
    tracep->declBus(c+123,"imm_i_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+124,"imm_u_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+125,"imm_j_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+126,"imm_s_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+127,"imm_b_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+241,"valid_lui",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+242,"valid_auipc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+243,"valid_jal",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+244,"valid_jalr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49,"valid_load",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"valid_store",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+245,"valid_branch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+246,"valid_i_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+128,"valid_r_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"is_system_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+118,"funct12",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+129,"valid_system",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("imm_select ");
    tracep->declBus(c+260,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+253,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+254,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+39,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+232,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+261,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+130,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 311,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+260,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+253,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+254,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+255,"HAS_DEFAULT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+39,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+232,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+261,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+130,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 311,0);
    tracep->declBus(c+256,"PAIR_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+140+i*2,"pair_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 38,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+8+i*1,"key_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+156+i*1,"data_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 31,0);
    }
    tracep->declBus(c+164,"lut_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+165,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+262,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+222,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+223,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+19,"imem_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+20,"mem_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"ifu_ready_to_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+36,"idu_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+34,"inst_ifu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+35,"ifu_valid_to_idu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+166,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+167,"inst_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+168,"mem_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+169,"idu_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+222,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+223,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+45,"addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+58,"store_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+40,"funct3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+49,"is_load",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+230,"is_store",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+43,"inst_invalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+53,"in_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"out_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"dmem_ren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+233,"dmem_raddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+22,"dmem_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+23,"dmem_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"dmem_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"dmem_wen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"dmem_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+233,"dmem_waddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+26,"dmem_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+27,"dmem_wlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+28,"dmem_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+51,"load_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+52,"store_enable",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+55,"out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"in_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+263,"IDLE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+264,"WAIT_MEM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+265,"BUFFERED",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+170,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+171,"buffer_load_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,"buffer_funct3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+173,"addr_latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,"store_data_latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,"funct3_latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+175,"load_latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+176,"store_latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+177,"mem_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+71,"in_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+55,"out_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+178,"mem_read_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+179,"mem_write_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"store_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+180,"current_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+181,"current_funct3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBus(c+266,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+254,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+226,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+222,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+223,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+56,"wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+237,"wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+37,"raddr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+38,"raddr2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+57,"rdata1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+58,"rdata2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+227,"a0_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+64,"csr_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+65,"csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+66,"csr_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+60,"mepc_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+61,"mtvec_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+59,"csr_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+182+i*1,"rf",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBus(c+214,"mstatus",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,"mepc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+215,"mcause",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,"mtvec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+267,"CSR_MSTATUS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+268,"CSR_MTVEC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+249,"CSR_MEPC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+250,"CSR_MCAUSE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+16,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+222,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+223,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+17,"imem_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+18,"imem_ren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+19,"imem_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+20,"imem_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"imem_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+233,"dmem_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+21,"dmem_ren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+22,"dmem_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+23,"dmem_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"dmem_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+233,"dmem_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+26,"dmem_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+27,"dmem_wlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+25,"dmem_wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"dmem_wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"dmem_wready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+216,"imem_busy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+217,"imem_delay_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+218,"dmem_busy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+219,"dmem_delay_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+220,"imem_rdata_buf",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,"dmem_rdata_buf",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
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
    VlWide<4>/*127:0*/ __Vtemp_h18725beb__0;
    VlWide<5>/*159:0*/ __Vtemp_h78e5326e__0;
    VlWide<10>/*319:0*/ __Vtemp_hcccdb7e8__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+2,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+3,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+5,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+6,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+7,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+8,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+9,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+10,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+11,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+12,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+13,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+14,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+15,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[7]),7);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+17,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid)
                               ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__next_pc
                               : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_fetch)),32);
    bufp->fullBit(oldp+18,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_ready_to_mem));
    bufp->fullIData(oldp+19,(vlSelf->ysyx_25040109_top__DOT__imem_rdata),32);
    bufp->fullBit(oldp+20,(vlSelf->ysyx_25040109_top__DOT__imem_rvalid));
    bufp->fullBit(oldp+21,(vlSelf->ysyx_25040109_top__DOT__dmem_ren));
    bufp->fullIData(oldp+22,(vlSelf->ysyx_25040109_top__DOT__dmem_rdata),32);
    bufp->fullBit(oldp+23,(vlSelf->ysyx_25040109_top__DOT__dmem_rvalid));
    bufp->fullBit(oldp+24,((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))));
    bufp->fullBit(oldp+25,(vlSelf->ysyx_25040109_top__DOT__dmem_wvalid));
    bufp->fullIData(oldp+26,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_data_latched),32);
    bufp->fullCData(oldp+27,(vlSelf->ysyx_25040109_top__DOT__dmem_wlen),3);
    bufp->fullBit(oldp+28,(vlSelf->ysyx_25040109_top__DOT__dmem_wready));
    bufp->fullIData(oldp+29,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_fetch),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe),32);
    bufp->fullBit(oldp+31,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid));
    bufp->fullBit(oldp+32,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_req_issued));
    bufp->fullIData(oldp+33,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe),32);
    bufp->fullIData(oldp+34,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__full)
                               ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__inst_temp
                               : vlSelf->ysyx_25040109_top__DOT__imem_rdata)),32);
    bufp->fullBit(oldp+35,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_valid_to_idu));
    bufp->fullBit(oldp+36,((1U & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid)))));
    bufp->fullCData(oldp+37,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+38,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm),32);
    bufp->fullCData(oldp+40,((7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+41,((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+42,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                       >> 7U))),5);
    bufp->fullBit(oldp+43,((1U & (~ (IData)(vlSelf->__VdfgTmp_h52f553fe__0)))));
    bufp->fullSData(oldp+44,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_addr),12);
    bufp->fullIData(oldp+45,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result),32);
    bufp->fullIData(oldp+46,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__next_pc),32);
    bufp->fullBit(oldp+47,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_we_from_exu));
    bufp->fullIData(oldp+48,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_wdata_from_exu),32);
    bufp->fullBit(oldp+49,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load));
    bufp->fullBit(oldp+50,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_store));
    bufp->fullIData(oldp+51,(((((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched) 
                                | (2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))) 
                               | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_done))
                               ? ((4U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                   ? ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                       ? 0U : ((1U 
                                                & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                                ? (0xffffU 
                                                   & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata)
                                                : (0xffU 
                                                   & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata)))
                                   : ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                       ? ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                           ? 0U : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata)
                                       : ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (0xffffU 
                                                 & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata))
                                           : (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata 
                                                              >> 7U)))) 
                                               << 8U) 
                                              | (0xffU 
                                                 & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata)))))
                               : 0U)),32);
    bufp->fullBit(oldp+52,(((IData)(vlSelf->__VdfgTmp_h52f553fe__0) 
                            & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_latched))));
    bufp->fullBit(oldp+53,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid) 
                            & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_req_issued)) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op)))));
    bufp->fullBit(oldp+54,(((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
                            | (2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)))));
    bufp->fullBit(oldp+55,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_valid));
    bufp->fullIData(oldp+56,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load)
                               ? ((((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched) 
                                    | (2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))) 
                                   | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_done))
                                   ? ((4U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                       ? ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                           ? 0U : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                                    ? 
                                                   (0xffffU 
                                                    & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata)
                                                    : 
                                                   (0xffU 
                                                    & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata)))
                                       : ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                           ? ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                               ? 0U
                                               : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata)
                                           : ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                               ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata))
                                               : ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata)))))
                                   : 0U) : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result)),32);
    bufp->fullIData(oldp+57,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data),32);
    bufp->fullIData(oldp+58,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data),32);
    bufp->fullIData(oldp+59,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_rdata_from_regfile),32);
    bufp->fullIData(oldp+60,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mepc),32);
    bufp->fullIData(oldp+61,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mtvec),32);
    bufp->fullBit(oldp+62,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state));
    bufp->fullBit(oldp+63,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_ecall));
    bufp->fullBit(oldp+64,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_we));
    bufp->fullSData(oldp+65,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr),12);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_wdata),32);
    bufp->fullBit(oldp+67,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op));
    bufp->fullBit(oldp+68,((1U & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op)) 
                                  | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_valid)))));
    bufp->fullBit(oldp+69,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__commit_cond));
    bufp->fullBit(oldp+70,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_wb_complete_r));
    bufp->fullBit(oldp+71,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_in_fire));
    bufp->fullBit(oldp+72,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid));
    bufp->fullIData(oldp+73,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a),32);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out),32);
    bufp->fullQData(oldp+76,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__mul_temp),64);
    bufp->fullCData(oldp+78,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__shift_amount),5);
    bufp->fullBit(oldp+79,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT____VdfgTmp_hd1c31b8f__0) 
                            & (0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_addr)))));
    bufp->fullBit(oldp+80,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT____VdfgTmp_hd1c31b8f__0) 
                            & (0x302U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_addr)))));
    bufp->fullIData(oldp+81,(((IData)(4U) + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe)),32);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__jal_target),32);
    bufp->fullIData(oldp+83,((0xfffffffeU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm 
                                             + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data))),32);
    __Vtemp_h18725beb__0[0U] = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe;
    __Vtemp_h18725beb__0[1U] = 0x6fU;
    __Vtemp_h18725beb__0[2U] = (0x1b80U | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe 
                                           << 0xeU));
    __Vtemp_h18725beb__0[3U] = (0x5c000U | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe 
                                            >> 0x12U));
    bufp->fullWData(oldp+84,(__Vtemp_h18725beb__0),117);
    bufp->fullQData(oldp+88,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+90,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+92,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullIData(oldp+94,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+95,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+96,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+97,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+98,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit));
    __Vtemp_h78e5326e__0[0U] = (IData)((0x2300000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm))));
    __Vtemp_h78e5326e__0[1U] = ((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm 
                                 << 7U) | (IData)((
                                                   (0x2300000000ULL 
                                                    | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm))) 
                                                   >> 0x20U)));
    __Vtemp_h78e5326e__0[2U] = (0x180U | ((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data 
                                           << 0xeU) 
                                          | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm 
                                             >> 0x19U)));
    __Vtemp_h78e5326e__0[3U] = (0x18c000U | ((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data 
                                              << 0x15U) 
                                             | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data 
                                                >> 0x12U)));
    __Vtemp_h78e5326e__0[4U] = (0x6600000U | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data 
                                              >> 0xbU));
    bufp->fullWData(oldp+99,(__Vtemp_h78e5326e__0),156);
    bufp->fullQData(oldp+104,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+106,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+108,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+110,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+113,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+114,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+115,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+116,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+117,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+118,((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+119,((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                               >> 0xcU)),20);
    bufp->fullIData(oldp+120,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j),20);
    bufp->fullSData(oldp+121,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s),12);
    bufp->fullSData(oldp+122,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b),12);
    bufp->fullIData(oldp+123,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext),32);
    bufp->fullIData(oldp+124,((0xfffff000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)),32);
    bufp->fullIData(oldp+125,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                            >> 0x1fU))) 
                                << 0x15U) | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j 
                                             << 1U))),32);
    bufp->fullIData(oldp+126,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                            >> 0x1fU))) 
                                << 0xcU) | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s))),32);
    bufp->fullIData(oldp+127,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                            >> 0x1fU))) 
                                << 0xdU) | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b) 
                                            << 1U))),32);
    bufp->fullBit(oldp+128,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type));
    bufp->fullBit(oldp+129,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system));
    __Vtemp_hcccdb7e8__0[0U] = (IData)((0x6300000000ULL 
                                        | (QData)((IData)(
                                                          (((- (IData)(
                                                                       (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                                        >> 0x1fU))) 
                                                            << 0xdU) 
                                                           | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b) 
                                                              << 1U))))));
    __Vtemp_hcccdb7e8__0[1U] = ((0xffffff80U & (((- (IData)(
                                                            (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                             >> 0x1fU))) 
                                                 << 0x1cU) 
                                                | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j 
                                                   << 8U))) 
                                | (IData)(((0x6300000000ULL 
                                            | (QData)((IData)(
                                                              (((- (IData)(
                                                                           (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                                            >> 0x1fU))) 
                                                                << 0xdU) 
                                                               | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b) 
                                                                  << 1U))))) 
                                           >> 0x20U)));
    __Vtemp_hcccdb7e8__0[2U] = (0x3780U | ((0xffffc000U 
                                            & (((- (IData)(
                                                           (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                            >> 0x1fU))) 
                                                << 0x1aU) 
                                               | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s) 
                                                  << 0xeU))) 
                                           | (0x7fU 
                                              & (((- (IData)(
                                                             (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                              >> 0x1fU))) 
                                                  >> 4U) 
                                                 | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j 
                                                    >> 0x18U)))));
    __Vtemp_hcccdb7e8__0[3U] = (0x8c000U | ((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext 
                                             << 0x15U) 
                                            | (0x3fffU 
                                               & ((0x3fffU 
                                                   & ((- (IData)(
                                                                 (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                                  >> 0x1fU))) 
                                                      >> 6U)) 
                                                  | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s) 
                                                     >> 0x12U)))));
    __Vtemp_hcccdb7e8__0[4U] = (0xce00000U | ((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext 
                                               << 0x1cU) 
                                              | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext 
                                                 >> 0xbU)));
    __Vtemp_hcccdb7e8__0[5U] = (0x30000000U | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext 
                                               >> 4U));
    __Vtemp_hcccdb7e8__0[6U] = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext 
                                << 3U);
    __Vtemp_hcccdb7e8__0[7U] = (0x98U | ((0xffc00000U 
                                          & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                             << 0xaU)) 
                                         | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext 
                                            >> 0x1dU)));
    __Vtemp_hcccdb7e8__0[8U] = (0xdc00U | ((0xe0000000U 
                                            & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                               << 0x11U)) 
                                           | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                              >> 0x16U)));
    __Vtemp_hcccdb7e8__0[9U] = (0x2e0000U | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                             >> 0xfU));
    bufp->fullWData(oldp+130,(__Vtemp_hcccdb7e8__0),312);
    bufp->fullQData(oldp+140,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+142,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+144,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+146,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+148,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+150,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+152,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+154,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullIData(oldp+156,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+157,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+158,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+159,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+160,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+161,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+162,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+163,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+164,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+165,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+166,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__full));
    bufp->fullIData(oldp+167,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__inst_temp),32);
    bufp->fullBit(oldp+168,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__mem_fire));
    bufp->fullBit(oldp+169,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__idu_fire));
    bufp->fullCData(oldp+170,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state),2);
    bufp->fullIData(oldp+171,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_load_data),32);
    bufp->fullCData(oldp+172,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_funct3),3);
    bufp->fullIData(oldp+173,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched),32);
    bufp->fullCData(oldp+174,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched),3);
    bufp->fullBit(oldp+175,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched));
    bufp->fullBit(oldp+176,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_latched));
    bufp->fullBit(oldp+177,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_done));
    bufp->fullBit(oldp+178,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_read_fire));
    bufp->fullBit(oldp+179,(((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_wvalid) 
                             & (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_wready))));
    bufp->fullIData(oldp+180,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata),32);
    bufp->fullCData(oldp+181,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3),3);
    bufp->fullIData(oldp+182,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+183,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+184,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+185,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+186,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+187,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+188,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+189,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+190,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+191,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+192,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+193,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+194,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+195,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+196,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+197,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+198,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+199,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+200,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+201,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+202,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+203,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+204,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+205,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+206,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+207,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+208,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+209,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+210,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+211,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+212,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+213,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[31]),32);
    bufp->fullIData(oldp+214,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mstatus),32);
    bufp->fullIData(oldp+215,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mcause),32);
    bufp->fullBit(oldp+216,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_busy));
    bufp->fullCData(oldp+217,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_delay_cnt),2);
    bufp->fullBit(oldp+218,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_busy));
    bufp->fullCData(oldp+219,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_delay_cnt),2);
    bufp->fullIData(oldp+220,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_rdata_buf),32);
    bufp->fullIData(oldp+221,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_rdata_buf),32);
    bufp->fullBit(oldp+222,(vlSelf->clk));
    bufp->fullBit(oldp+223,(vlSelf->rst));
    bufp->fullIData(oldp+224,(vlSelf->p_count_number),32);
    bufp->fullIData(oldp+225,(vlSelf->inst),32);
    bufp->fullIData(oldp+226,(vlSelf->pc),32);
    bufp->fullIData(oldp+227,(vlSelf->a0_out),32);
    bufp->fullBit(oldp+228,(vlSelf->inst_wb_complete));
    bufp->fullBit(oldp+229,(vlSelf->is_load_out));
    bufp->fullBit(oldp+230,(vlSelf->is_store_out));
    bufp->fullBit(oldp+231,(vlSelf->is_ecall_out));
    bufp->fullCData(oldp+232,(vlSelf->opcode_out),7);
    bufp->fullIData(oldp+233,(vlSelf->dmem_raddr_out),32);
    bufp->fullIData(oldp+234,(vlSelf->dmem_waddr_out),32);
    bufp->fullBit(oldp+235,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hee48d914__0) 
                             | ((0x67U == (IData)(vlSelf->opcode_out)) 
                                | ((3U == (IData)(vlSelf->opcode_out)) 
                                   | ((0x13U == (IData)(vlSelf->opcode_out)) 
                                      | ((0x33U == (IData)(vlSelf->opcode_out)) 
                                         | (0x73U == (IData)(vlSelf->opcode_out)))))))));
    bufp->fullBit(oldp+236,(((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid)) 
                             & (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hee48d914__0) 
                                 | ((0x67U == (IData)(vlSelf->opcode_out)) 
                                    | ((3U == (IData)(vlSelf->opcode_out)) 
                                       | ((0x13U == (IData)(vlSelf->opcode_out)) 
                                          | ((0x33U 
                                              == (IData)(vlSelf->opcode_out)) 
                                             | (0x73U 
                                                == (IData)(vlSelf->opcode_out))))))) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid)))));
    bufp->fullBit(oldp+237,(((((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid)) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid)) 
                              & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__commit_cond)) 
                             & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hee48d914__0) 
                                | ((0x67U == (IData)(vlSelf->opcode_out)) 
                                   | ((3U == (IData)(vlSelf->opcode_out)) 
                                      | ((0x13U == (IData)(vlSelf->opcode_out)) 
                                         | ((0x33U 
                                             == (IData)(vlSelf->opcode_out)) 
                                            | (0x73U 
                                               == (IData)(vlSelf->opcode_out))))))))));
    bufp->fullBit(oldp+238,((((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hee48d914__0) 
                              | ((0x67U == (IData)(vlSelf->opcode_out)) 
                                 | ((3U == (IData)(vlSelf->opcode_out)) 
                                    | ((0x13U == (IData)(vlSelf->opcode_out)) 
                                       | ((0x33U == (IData)(vlSelf->opcode_out)) 
                                          | (0x73U 
                                             == (IData)(vlSelf->opcode_out))))))) 
                             & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid))));
    bufp->fullBit(oldp+239,((0x73U == (IData)(vlSelf->opcode_out))));
    bufp->fullBit(oldp+240,(((0x63U == (IData)(vlSelf->opcode_out)) 
                             & ((IData)(((0U == (0x7000U 
                                                 & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)) 
                                         & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
                                            == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data))) 
                                | ((IData)(((0x1000U 
                                             == (0x7000U 
                                                 & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)) 
                                            & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
                                               != vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data))) 
                                   | ((IData)(((0x4000U 
                                                == 
                                                (0x7000U 
                                                 & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)) 
                                               & VL_LTS_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data))) 
                                      | ((IData)(((0x5000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)) 
                                                  & VL_GTES_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data))) 
                                         | ((IData)(
                                                    ((0x6000U 
                                                      == 
                                                      (0x7000U 
                                                       & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)) 
                                                     & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
                                                        < vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data))) 
                                            | (IData)(
                                                      ((0x7000U 
                                                        == 
                                                        (0x7000U 
                                                         & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)) 
                                                       & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
                                                          >= vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data)))))))))));
    bufp->fullBit(oldp+241,((0x37U == (IData)(vlSelf->opcode_out))));
    bufp->fullBit(oldp+242,((0x17U == (IData)(vlSelf->opcode_out))));
    bufp->fullBit(oldp+243,((0x6fU == (IData)(vlSelf->opcode_out))));
    bufp->fullBit(oldp+244,((IData)(((0x67U == (IData)(vlSelf->opcode_out)) 
                                     & (0U == (0x7000U 
                                               & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe))))));
    bufp->fullBit(oldp+245,(((0x63U == (IData)(vlSelf->opcode_out)) 
                             & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he2c0485b__0) 
                                | ((5U == (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                 >> 0xcU))) 
                                   | ((4U == (7U & 
                                              (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                               >> 0xcU))) 
                                      | ((6U == (7U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                    >> 0xcU))) 
                                         | (7U == (7U 
                                                   & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                      >> 0xcU))))))))));
    bufp->fullBit(oldp+246,(((0x13U == (IData)(vlSelf->opcode_out)) 
                             & ((0U == (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                              >> 0xcU))) 
                                | ((2U == (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                 >> 0xcU))) 
                                   | ((3U == (7U & 
                                              (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                               >> 0xcU))) 
                                      | ((4U == (7U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                    >> 0xcU))) 
                                         | ((6U == 
                                             (7U & 
                                              (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                               >> 0xcU))) 
                                            | ((7U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                    >> 0xcU))) 
                                               | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h26e5c323__0) 
                                                  | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5db903ec__0) 
                                                     | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5f3f1c8d__0))))))))))));
    bufp->fullBit(oldp+247,(0U));
    bufp->fullBit(oldp+248,(1U));
    bufp->fullSData(oldp+249,(0x341U),12);
    bufp->fullSData(oldp+250,(0x342U),12);
    bufp->fullBit(oldp+251,(1U));
    bufp->fullIData(oldp+252,(3U),32);
    bufp->fullIData(oldp+253,(7U),32);
    bufp->fullIData(oldp+254,(0x20U),32);
    bufp->fullIData(oldp+255,(1U),32);
    bufp->fullIData(oldp+256,(0x27U),32);
    bufp->fullIData(oldp+257,(3U),32);
    bufp->fullIData(oldp+258,(4U),32);
    bufp->fullIData(oldp+259,(4U),32);
    bufp->fullIData(oldp+260,(8U),32);
    bufp->fullIData(oldp+261,(0U),32);
    bufp->fullIData(oldp+262,(8U),32);
    bufp->fullCData(oldp+263,(0U),2);
    bufp->fullCData(oldp+264,(1U),2);
    bufp->fullCData(oldp+265,(2U),2);
    bufp->fullIData(oldp+266,(5U),32);
    bufp->fullSData(oldp+267,(0x300U),12);
    bufp->fullSData(oldp+268,(0x305U),12);
}
