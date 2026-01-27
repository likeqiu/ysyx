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
    tracep->declBit(c+214,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+215,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+216,"p_count_number",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+217,"inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+218,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+219,"a0_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+220,"inst_wb_complete",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+221,"is_load_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+222,"is_store_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+223,"is_ecall_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+224,"opcode_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+225,"dmem_raddr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+226,"dmem_waddr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_25040109_top ");
    tracep->declBit(c+214,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+215,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+216,"p_count_number",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+217,"inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+218,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+219,"a0_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+220,"inst_wb_complete",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+221,"is_load_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+222,"is_store_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+223,"is_ecall_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+224,"opcode_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+225,"dmem_raddr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+225,"dmem_waddr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+10,"imem_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+11,"imem_ren",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+12,"imem_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+13,"imem_rvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"imem_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+225,"dmem_raddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+14,"dmem_ren",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+15,"dmem_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+16,"dmem_rvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"dmem_rready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"dmem_wvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+225,"dmem_waddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+19,"dmem_wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+20,"dmem_wlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+18,"dmem_wen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"dmem_wready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+214,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+215,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+216,"p_count_number",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+11,"imem_ren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+13,"imem_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"imem_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+10,"imem_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+12,"imem_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+14,"dmem_ren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"dmem_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"dmem_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+225,"dmem_raddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+15,"dmem_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+18,"dmem_wen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"dmem_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"dmem_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+225,"dmem_waddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+19,"dmem_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+20,"dmem_wlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+217,"inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+218,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+219,"a0_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+220,"inst_wb_complete",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+221,"is_load_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+222,"is_store_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+223,"is_ecall_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+224,"opcode_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+231,"S_NORMAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+232,"S_TRAP_MCAUSE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+233,"CSR_MEPC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+234,"CSR_MCAUSE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+235,"WB_LAT_ALU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+235,"WB_LAT_MEM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+235,"WB_LAT_CSR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+10,"pc_fetch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,"pc_exe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,"stage_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+24,"id_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+25,"id_inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,"id_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,"lsu_req_issued",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+28,"inst_exe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,"inst_ifu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+30,"ifu_ready_to_mem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"ifu_valid_to_idu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"idu_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+224,"opcode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+33,"rs1_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+34,"rs2_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+35,"imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"funct3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+37,"rd_addr_idu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+38,"reg_write_en_idu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"inst_invalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+40,"csr_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+41,"alu_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+42,"alu_a_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+43,"alu_b_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+44,"result_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+45,"is_branch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+227,"is_jal",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+46,"is_jalr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+47,"branch_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+48,"csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+49,"is_mret",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+50,"result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+51,"next_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+37,"rd_addr_exu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+52,"reg_write_en_exu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+53,"csr_we_from_exu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+54,"csr_wdata_from_exu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+55,"is_load",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"is_store",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+222,"final_mem_we",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+57,"load_data_from_lsu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+58,"store_enable_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+59,"lsu_in_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+60,"lsu_out_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"lsu_out_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"lsu_in_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"wb_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"wb_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"wb_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"ex_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"idu_out_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"idu_out_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"id_to_ex_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+67,"id_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+68,"wb_delay_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+69,"writeback_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+70,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"rs2_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+72,"csr_rdata_from_regfile",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+73,"mepc_from_regfile",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+74,"mtvec_from_regfile",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+75,"trap_state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+75,"is_stalled_by_trap",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"is_ecall",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+77,"final_gpr_we",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"final_csr_we",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+79,"final_csr_waddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+80,"final_csr_wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+81,"fetch_allow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+82,"mem_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"mem_done",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+235,"wb_delay_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+64,"commit_cond",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+84,"inst_wb_complete_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+85,"lsu_in_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+86,"dbg_id_fire_cnt",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+87,"dbg_commit_cnt",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBus(c+70,"rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+35,"imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+88,"reg_write_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"reg_write_en_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+37,"rd_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+33,"rs1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+22,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+41,"alu_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+42,"alu_a_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+43,"alu_b_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+44,"result_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+45,"is_branch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+227,"is_jal",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+46,"is_jalr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+47,"branch_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+48,"csr_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+76,"is_ecall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49,"is_mret",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+89,"inst_invalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+50,"result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+37,"rd_addr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+51,"next_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+72,"csr_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+73,"mepc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+74,"mtvec",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+53,"csr_we_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+54,"csr_wdata_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+90,"alu_a",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+91,"alu_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+92,"alu_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declQuad(c+93,"mul_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBus(c+236,"ALU_ADD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+237,"ALU_SUB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+238,"ALU_SLL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+239,"ALU_SLT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+240,"ALU_SLTU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+241,"ALU_XOR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+242,"ALU_SRL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+243,"ALU_SRA",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+244,"ALU_OR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+245,"ALU_AND",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+246,"ALU_MUL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+247,"ALU_MULH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+248,"ALU_DIV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+249,"ALU_DIVU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+250,"ALU_REM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+251,"ALU_REMU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+252,"ALU_A_RS1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+253,"ALU_A_PC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+254,"ALU_A_ZERO",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+231,"ALU_B_RS2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+232,"ALU_B_IMM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+252,"RES_ALU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+253,"RES_CSR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+254,"RES_PC4",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+252,"CSR_OP_NONE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+253,"CSR_OP_CSRRW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+254,"CSR_OP_CSRRS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+95,"shift_amount",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+96,"pc_plus4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+97,"jal_target",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+98,"jalr_target",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+97,"branch_target",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+99,"branch_taken",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+28,"inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+23,"in_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"out_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"in_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+37,"rd_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+35,"imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+38,"reg_write_en_idu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"funct3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+39,"inst_invalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+40,"csr_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+224,"opcode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+33,"rs1_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+34,"rs2_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+55,"is_load",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"is_store",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"is_ecall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+41,"alu_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+42,"alu_a_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+43,"alu_b_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+44,"result_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+45,"is_branch",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+227,"is_jal",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+46,"is_jalr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+47,"branch_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+48,"csr_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+49,"is_mret",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+100,"funct7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+236,"ALU_ADD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+237,"ALU_SUB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+238,"ALU_SLL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+239,"ALU_SLT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+240,"ALU_SLTU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+241,"ALU_XOR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+242,"ALU_SRL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+243,"ALU_SRA",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+244,"ALU_OR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+245,"ALU_AND",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+246,"ALU_MUL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+247,"ALU_MULH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+248,"ALU_DIV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+249,"ALU_DIVU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+250,"ALU_REM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+251,"ALU_REMU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+252,"ALU_A_RS1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+253,"ALU_A_PC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+254,"ALU_A_ZERO",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+231,"ALU_B_RS2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+232,"ALU_B_IMM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+252,"RES_ALU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+253,"RES_CSR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+254,"RES_PC4",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+252,"CSR_OP_NONE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+253,"CSR_OP_CSRRW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+254,"CSR_OP_CSRRS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+101,"imm_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+102,"imm_u",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBus(c+103,"imm_j",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 20,1);
    tracep->declBus(c+104,"imm_s",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+105,"imm_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 12,1);
    tracep->declBus(c+106,"imm_i_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+107,"imm_u_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+108,"imm_j_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+109,"imm_s_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+110,"imm_b_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+228,"valid_lui",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+229,"valid_auipc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+227,"valid_jal",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+46,"valid_jalr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+55,"valid_load",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"valid_store",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"valid_branch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+111,"valid_i_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+112,"valid_r_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+230,"is_system_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+101,"funct12",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+113,"valid_system",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+114,"valid_csrrw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+115,"valid_csrrs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("imm_select ");
    tracep->declBus(c+255,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+256,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+257,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+35,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+224,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+258,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+116,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 311,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+255,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+256,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+257,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+259,"HAS_DEFAULT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+35,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+224,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+258,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+116,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 311,0);
    tracep->declBus(c+260,"PAIR_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+126+i*2,"pair_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 38,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1+i*1,"key_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+142+i*1,"data_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 31,0);
    }
    tracep->declBus(c+150,"lut_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+151,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+261,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+214,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+215,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+12,"imem_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+13,"mem_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"ifu_ready_to_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"idu_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+29,"inst_ifu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+31,"ifu_valid_to_idu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("u_ifu_hanshake ");
    tracep->declBit(c+214,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+215,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+12,"imem_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+13,"mem_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"ifu_ready_to_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"idu_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+29,"inst_ifu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+31,"ifu_valid_to_idu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+152,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+153,"inst_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+154,"mem_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+67,"idu_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+214,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+215,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+50,"addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"store_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"funct3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+55,"is_load",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+222,"is_store",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"inst_invalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+59,"in_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+60,"out_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"dmem_ren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+225,"dmem_raddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+15,"dmem_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+16,"dmem_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"dmem_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"dmem_wen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"dmem_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+225,"dmem_waddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+19,"dmem_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+20,"dmem_wlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+21,"dmem_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+57,"load_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+58,"store_enable",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"in_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+252,"IDLE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+253,"WAIT_MEM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+254,"BUFFERED",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+155,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+156,"buffer_load_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,"buffer_funct3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+158,"buffer_addr_offset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+159,"addr_latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,"store_data_latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,"funct3_latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+161,"load_latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+162,"store_latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+163,"mem_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+85,"in_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+164,"out_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+165,"mem_read_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+166,"mem_write_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"store_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+167,"current_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+168,"current_funct3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+169,"current_addr_offset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+170,"byte_shift",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+171,"shifted_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBus(c+262,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+257,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+218,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+214,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+215,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+69,"wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+37,"waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+77,"wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"raddr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+34,"raddr2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+70,"rdata1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"rdata2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+219,"a0_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+78,"csr_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+79,"csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+80,"csr_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+73,"mepc_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+74,"mtvec_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+72,"csr_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+172+i*1,"rf",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBus(c+204,"mstatus",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,"mepc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,"mcause",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,"mtvec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+263,"CSR_MSTATUS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+264,"CSR_MTVEC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+233,"CSR_MEPC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+234,"CSR_MCAUSE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+9,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+214,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+215,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+10,"imem_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+11,"imem_ren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+12,"imem_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+13,"imem_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"imem_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+225,"dmem_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+14,"dmem_ren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+15,"dmem_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+16,"dmem_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"dmem_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+225,"dmem_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+19,"dmem_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+20,"dmem_wlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+18,"dmem_wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"dmem_wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"dmem_wready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+206,"dmem_wmask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+207,"dmem_wdata_aligned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+208,"imem_busy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+209,"imem_delay_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+210,"dmem_busy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+211,"dmem_delay_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+212,"imem_rdata_buf",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,"dmem_rdata_buf",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
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
    VlWide<10>/*319:0*/ __Vtemp_hcccdb7e8__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+2,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+3,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+5,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+6,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+7,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+8,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[7]),7);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_fetch),32);
    bufp->fullBit(oldp+11,(vlSelf->ysyx_25040109_top__DOT__imem_ren));
    bufp->fullIData(oldp+12,(vlSelf->ysyx_25040109_top__DOT__imem_rdata),32);
    bufp->fullBit(oldp+13,(vlSelf->ysyx_25040109_top__DOT__imem_rvalid));
    bufp->fullBit(oldp+14,(vlSelf->ysyx_25040109_top__DOT__dmem_ren));
    bufp->fullIData(oldp+15,(vlSelf->ysyx_25040109_top__DOT__dmem_rdata),32);
    bufp->fullBit(oldp+16,(vlSelf->ysyx_25040109_top__DOT__dmem_rvalid));
    bufp->fullBit(oldp+17,((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))));
    bufp->fullBit(oldp+18,(vlSelf->ysyx_25040109_top__DOT__dmem_wvalid));
    bufp->fullIData(oldp+19,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_data_latched),32);
    bufp->fullCData(oldp+20,(vlSelf->ysyx_25040109_top__DOT__dmem_wlen),3);
    bufp->fullBit(oldp+21,(vlSelf->ysyx_25040109_top__DOT__dmem_wready));
    bufp->fullIData(oldp+22,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe),32);
    bufp->fullBit(oldp+23,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid));
    bufp->fullBit(oldp+24,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_valid));
    bufp->fullIData(oldp+25,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_inst),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_pc),32);
    bufp->fullBit(oldp+27,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_req_issued));
    bufp->fullIData(oldp+28,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu),32);
    bufp->fullBit(oldp+30,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_ready_to_mem));
    bufp->fullBit(oldp+31,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__full) 
                            | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__mem_fire))));
    bufp->fullBit(oldp+32,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu_ready));
    bufp->fullCData(oldp+33,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+34,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm),32);
    bufp->fullCData(oldp+36,((7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+37,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                       >> 7U))),5);
    bufp->fullBit(oldp+38,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h831d9c42__0) 
                            | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type) 
                               | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type) 
                                  | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                                     & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he97d7b16__0)))))));
    bufp->fullBit(oldp+39,((1U & (~ (IData)(vlSelf->__VdfgTmp_h2aca818a__0)))));
    bufp->fullSData(oldp+40,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system)
                               ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                  >> 0x14U) : 0U)),12);
    bufp->fullCData(oldp+41,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_op),5);
    bufp->fullCData(oldp+42,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_a_sel),2);
    bufp->fullBit(oldp+43,((1U & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type)))));
    bufp->fullCData(oldp+44,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result_sel),2);
    bufp->fullBit(oldp+45,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_branch));
    bufp->fullBit(oldp+46,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_jalr));
    bufp->fullCData(oldp+47,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__branch_op),3);
    bufp->fullCData(oldp+48,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_op),2);
    bufp->fullBit(oldp+49,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h2014d746__0) 
                            & (0x302U == (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                          >> 0x14U)))));
    bufp->fullIData(oldp+50,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result),32);
    bufp->fullIData(oldp+51,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__next_pc),32);
    bufp->fullBit(oldp+52,(((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid)) 
                            & (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h831d9c42__0) 
                                | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type) 
                                   | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type) 
                                      | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                                         & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he97d7b16__0))))) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid)))));
    bufp->fullBit(oldp+53,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_we_from_exu));
    bufp->fullIData(oldp+54,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_wdata_from_exu),32);
    bufp->fullBit(oldp+55,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load));
    bufp->fullBit(oldp+56,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_store));
    bufp->fullIData(oldp+57,(((((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched) 
                                | (2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))) 
                               | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_done))
                               ? ((4U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                   ? ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                       ? 0U : ((1U 
                                                & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                                ? (0xffffU 
                                                   & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata)
                                                : (0xffU 
                                                   & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata)))
                                   : ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                       ? ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                           ? 0U : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata)
                                       : ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (0xffffU 
                                                 & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata))
                                           : (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata 
                                                              >> 7U)))) 
                                               << 8U) 
                                              | (0xffU 
                                                 & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata)))))
                               : 0U)),32);
    bufp->fullBit(oldp+58,(((IData)(vlSelf->__VdfgTmp_h2aca818a__0) 
                            & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_latched))));
    bufp->fullBit(oldp+59,(((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_req_issued)) 
                            & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op))));
    bufp->fullBit(oldp+60,(((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
                            | ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
                               & (0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt))))));
    bufp->fullBit(oldp+61,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_valid));
    bufp->fullBit(oldp+62,((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt))));
    bufp->fullBit(oldp+63,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid) 
                            & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op)) 
                               | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_valid)))));
    bufp->fullBit(oldp+64,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__wb_fire));
    bufp->fullBit(oldp+65,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ex_ready));
    bufp->fullBit(oldp+66,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_to_ex_fire));
    bufp->fullBit(oldp+67,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_fire));
    bufp->fullCData(oldp+68,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt),4);
    bufp->fullIData(oldp+69,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__writeback_data),32);
    bufp->fullIData(oldp+70,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data),32);
    bufp->fullIData(oldp+71,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data),32);
    bufp->fullIData(oldp+72,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_rdata_from_regfile),32);
    bufp->fullIData(oldp+73,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mepc),32);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mtvec),32);
    bufp->fullBit(oldp+75,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state));
    bufp->fullBit(oldp+76,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_ecall));
    bufp->fullBit(oldp+77,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_gpr_we));
    bufp->fullBit(oldp+78,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_we));
    bufp->fullSData(oldp+79,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr),12);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_wdata),32);
    bufp->fullBit(oldp+81,((1U & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid)) 
                                  & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_valid))))));
    bufp->fullBit(oldp+82,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op));
    bufp->fullBit(oldp+83,((1U & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op)) 
                                  | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_valid)))));
    bufp->fullBit(oldp+84,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_wb_complete_r));
    bufp->fullBit(oldp+85,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_in_fire));
    bufp->fullIData(oldp+86,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__dbg_id_fire_cnt),32);
    bufp->fullIData(oldp+87,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__dbg_commit_cnt),32);
    bufp->fullBit(oldp+88,((((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h831d9c42__0) 
                             | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type) 
                                | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type) 
                                   | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                                      & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he97d7b16__0))))) 
                            & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid))));
    bufp->fullBit(oldp+89,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid));
    bufp->fullIData(oldp+90,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a),32);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b),32);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out),32);
    bufp->fullQData(oldp+93,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__mul_temp),64);
    bufp->fullCData(oldp+95,((0x1fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)),5);
    bufp->fullIData(oldp+96,(((IData)(4U) + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe)),32);
    bufp->fullIData(oldp+97,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__jal_target),32);
    bufp->fullIData(oldp+98,((0xfffffffeU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out)),32);
    bufp->fullBit(oldp+99,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_branch) 
                            & (((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__branch_op)) 
                                & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
                                   == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data)) 
                               | (((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__branch_op)) 
                                   & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
                                      != vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data)) 
                                  | (((4U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__branch_op)) 
                                      & VL_LTS_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data)) 
                                     | (((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__branch_op)) 
                                         & VL_GTES_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data)) 
                                        | (((6U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__branch_op)) 
                                            & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
                                               < vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data)) 
                                           | ((7U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__branch_op)) 
                                              & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
                                                 >= vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data))))))))));
    bufp->fullCData(oldp+100,((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                               >> 0x19U)),7);
    bufp->fullSData(oldp+101,((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+102,((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                               >> 0xcU)),20);
    bufp->fullIData(oldp+103,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j),20);
    bufp->fullSData(oldp+104,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s),12);
    bufp->fullSData(oldp+105,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b),12);
    bufp->fullIData(oldp+106,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext),32);
    bufp->fullIData(oldp+107,((0xfffff000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)),32);
    bufp->fullIData(oldp+108,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                            >> 0x1fU))) 
                                << 0x15U) | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j 
                                             << 1U))),32);
    bufp->fullIData(oldp+109,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                            >> 0x1fU))) 
                                << 0xcU) | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s))),32);
    bufp->fullIData(oldp+110,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                            >> 0x1fU))) 
                                << 0xdU) | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b) 
                                            << 1U))),32);
    bufp->fullBit(oldp+111,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type));
    bufp->fullBit(oldp+112,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type));
    bufp->fullBit(oldp+113,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system));
    bufp->fullBit(oldp+114,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                             & (0x1000U == (0x7000U 
                                            & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)))));
    bufp->fullBit(oldp+115,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                             & (0x2000U == (0x7000U 
                                            & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)))));
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
    bufp->fullWData(oldp+116,(__Vtemp_hcccdb7e8__0),312);
    bufp->fullQData(oldp+126,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+128,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+130,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+132,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+134,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+136,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+138,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+140,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullIData(oldp+142,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+143,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+144,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+145,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+146,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+147,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+148,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+149,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+150,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+151,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+152,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__full));
    bufp->fullIData(oldp+153,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__inst_temp),32);
    bufp->fullBit(oldp+154,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__mem_fire));
    bufp->fullCData(oldp+155,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state),2);
    bufp->fullIData(oldp+156,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_load_data),32);
    bufp->fullCData(oldp+157,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_funct3),3);
    bufp->fullCData(oldp+158,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_addr_offset),2);
    bufp->fullIData(oldp+159,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched),32);
    bufp->fullCData(oldp+160,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched),3);
    bufp->fullBit(oldp+161,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched));
    bufp->fullBit(oldp+162,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_latched));
    bufp->fullBit(oldp+163,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_done));
    bufp->fullBit(oldp+164,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__out_fire));
    bufp->fullBit(oldp+165,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_read_fire));
    bufp->fullBit(oldp+166,(((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_wvalid) 
                             & (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_wready))));
    bufp->fullIData(oldp+167,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT____VdfgTmp_hb587fe3a__0)
                                ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_load_data
                                : vlSelf->ysyx_25040109_top__DOT__dmem_rdata)),32);
    bufp->fullCData(oldp+168,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3),3);
    bufp->fullCData(oldp+169,((3U & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT____VdfgTmp_hb587fe3a__0)
                                      ? (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_addr_offset)
                                      : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched))),2);
    bufp->fullCData(oldp+170,((0x18U & (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT____VdfgTmp_hb587fe3a__0)
                                          ? (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_addr_offset)
                                          : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched) 
                                        << 3U))),5);
    bufp->fullIData(oldp+171,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata),32);
    bufp->fullIData(oldp+172,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+173,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+174,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+175,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+176,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+177,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+178,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+179,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+180,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+181,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+182,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+183,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+184,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+185,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+186,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+187,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+188,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+189,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+190,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+191,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+192,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+193,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+194,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+195,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+196,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+197,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+198,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+199,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+200,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+201,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+202,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+203,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[31]),32);
    bufp->fullIData(oldp+204,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mstatus),32);
    bufp->fullIData(oldp+205,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mcause),32);
    bufp->fullCData(oldp+206,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_wmask),8);
    bufp->fullIData(oldp+207,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_wdata_aligned),32);
    bufp->fullBit(oldp+208,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_busy));
    bufp->fullCData(oldp+209,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_delay_cnt),2);
    bufp->fullBit(oldp+210,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_busy));
    bufp->fullCData(oldp+211,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_delay_cnt),2);
    bufp->fullIData(oldp+212,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_rdata_buf),32);
    bufp->fullIData(oldp+213,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_rdata_buf),32);
    bufp->fullBit(oldp+214,(vlSelf->clk));
    bufp->fullBit(oldp+215,(vlSelf->rst));
    bufp->fullIData(oldp+216,(vlSelf->p_count_number),32);
    bufp->fullIData(oldp+217,(vlSelf->inst),32);
    bufp->fullIData(oldp+218,(vlSelf->pc),32);
    bufp->fullIData(oldp+219,(vlSelf->a0_out),32);
    bufp->fullBit(oldp+220,(vlSelf->inst_wb_complete));
    bufp->fullBit(oldp+221,(vlSelf->is_load_out));
    bufp->fullBit(oldp+222,(vlSelf->is_store_out));
    bufp->fullBit(oldp+223,(vlSelf->is_ecall_out));
    bufp->fullCData(oldp+224,(vlSelf->opcode_out),7);
    bufp->fullIData(oldp+225,(vlSelf->dmem_raddr_out),32);
    bufp->fullIData(oldp+226,(vlSelf->dmem_waddr_out),32);
    bufp->fullBit(oldp+227,((0x6fU == (IData)(vlSelf->opcode_out))));
    bufp->fullBit(oldp+228,((0x37U == (IData)(vlSelf->opcode_out))));
    bufp->fullBit(oldp+229,((0x17U == (IData)(vlSelf->opcode_out))));
    bufp->fullBit(oldp+230,((0x73U == (IData)(vlSelf->opcode_out))));
    bufp->fullBit(oldp+231,(0U));
    bufp->fullBit(oldp+232,(1U));
    bufp->fullSData(oldp+233,(0x341U),12);
    bufp->fullSData(oldp+234,(0x342U),12);
    bufp->fullCData(oldp+235,(0U),4);
    bufp->fullCData(oldp+236,(0U),5);
    bufp->fullCData(oldp+237,(1U),5);
    bufp->fullCData(oldp+238,(2U),5);
    bufp->fullCData(oldp+239,(3U),5);
    bufp->fullCData(oldp+240,(4U),5);
    bufp->fullCData(oldp+241,(5U),5);
    bufp->fullCData(oldp+242,(6U),5);
    bufp->fullCData(oldp+243,(7U),5);
    bufp->fullCData(oldp+244,(8U),5);
    bufp->fullCData(oldp+245,(9U),5);
    bufp->fullCData(oldp+246,(0xaU),5);
    bufp->fullCData(oldp+247,(0xbU),5);
    bufp->fullCData(oldp+248,(0xcU),5);
    bufp->fullCData(oldp+249,(0xdU),5);
    bufp->fullCData(oldp+250,(0xeU),5);
    bufp->fullCData(oldp+251,(0xfU),5);
    bufp->fullCData(oldp+252,(0U),2);
    bufp->fullCData(oldp+253,(1U),2);
    bufp->fullCData(oldp+254,(2U),2);
    bufp->fullIData(oldp+255,(8U),32);
    bufp->fullIData(oldp+256,(7U),32);
    bufp->fullIData(oldp+257,(0x20U),32);
    bufp->fullIData(oldp+258,(0U),32);
    bufp->fullIData(oldp+259,(1U),32);
    bufp->fullIData(oldp+260,(0x27U),32);
    bufp->fullIData(oldp+261,(8U),32);
    bufp->fullIData(oldp+262,(5U),32);
    bufp->fullSData(oldp+263,(0x300U),12);
    bufp->fullSData(oldp+264,(0x305U),12);
}
