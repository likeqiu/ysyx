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
    tracep->declBit(c+415,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+416,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+417,"p_count_number",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+418,"inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+419,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+420,"a0_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+421,"inst_wb_complete",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+422,"is_load_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+423,"is_store_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+424,"is_ecall_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+425,"opcode_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+426,"dmem_raddr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+427,"dmem_waddr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_25040109_top ");
    tracep->declBit(c+415,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+416,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+417,"p_count_number",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+418,"inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+419,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+420,"a0_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+421,"inst_wb_complete",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+422,"is_load_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+423,"is_store_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+424,"is_ecall_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+425,"opcode_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+426,"dmem_raddr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+426,"dmem_waddr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+10,"imem_araddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+11,"imem_arvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+12,"imem_arready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+13,"imem_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+14,"imem_rvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"imem_rready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+16,"imem_rresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+432,"imem_arlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+433,"imem_arsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+434,"imem_arburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+435,"imem_awaddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+436,"imem_awvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+435,"imem_wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+437,"imem_wstr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+436,"imem_wvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+436,"imem_bready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+437,"imem_awid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+436,"imem_wlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+436,"imem_awready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+436,"imem_wready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+436,"imem_bvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+438,"imem_bresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+437,"imem_bid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+426,"dmem_araddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+17,"dmem_arvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"dmem_arready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+19,"dmem_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+20,"dmem_rvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"dmem_rready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+432,"dmem_arlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+433,"dmem_arsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+434,"dmem_arburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+22,"dmem_awvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"dmem_awready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+426,"dmem_awaddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+439,"dmem_awid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+24,"dmem_wvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+25,"dmem_wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+26,"dmem_wstrb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+27,"dmem_wready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"dmem_wlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+432,"dmem_awlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+433,"dmem_awsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+434,"dmem_awburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+28,"dmem_rresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+29,"dmem_bresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+30,"dmem_bvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"dmem_bready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+32,"dmem_bid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+33,"mem_arvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"mem_arready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+35,"mem_araddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+36,"mem_rvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"mem_rready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+38,"mem_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+39,"mem_rresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+432,"mem_arlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+433,"mem_arsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+434,"mem_arburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+40,"mem_awvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+41,"mem_awready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+42,"mem_awaddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"mem_awid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+44,"mem_wvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"mem_wready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+46,"mem_wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"mem_wstrb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+48,"mem_wlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+432,"mem_awlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+49,"mem_awsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+50,"mem_awburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+51,"mem_bvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"mem_bready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+53,"mem_bresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+54,"mem_bid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+55,"sram_arvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"sram_arready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+35,"sram_araddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+57,"sram_rvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"sram_rready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+59,"sram_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+60,"sram_rresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+432,"sram_arlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+433,"sram_arsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+434,"sram_arburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+61,"sram_awvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"sram_awready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+42,"sram_awaddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"sram_awid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+63,"sram_wvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"sram_wready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+46,"sram_wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"sram_wstrb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+48,"sram_wlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+432,"sram_awlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+49,"sram_awsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+50,"sram_awburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+65,"sram_bvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"sram_bready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+67,"sram_bresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+68,"sram_bid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+69,"uart_arvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"uart_arready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+35,"uart_araddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+71,"uart_rvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+72,"uart_rready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+73,"uart_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+74,"uart_rresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+432,"uart_arlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+433,"uart_arsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+434,"uart_arburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+75,"uart_awvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"uart_awready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+42,"uart_awaddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"uart_awid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+77,"uart_wvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"uart_wready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+46,"uart_wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"uart_wstrb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+48,"uart_wlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+432,"uart_awlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+49,"uart_awsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+50,"uart_awburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+79,"uart_bvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"uart_bready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+81,"uart_bresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+82,"uart_bid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+83,"clint_arvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+84,"clint_arready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+35,"clint_araddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+85,"clint_rvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"clint_rready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+87,"clint_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+88,"clint_rresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+432,"clint_arlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+433,"clint_arsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+434,"clint_arburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+89,"clint_awvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+90,"clint_awready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+42,"clint_awaddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"clint_awid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+91,"clint_wvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+92,"clint_wready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+46,"clint_wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"clint_wstrb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+48,"clint_wlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+432,"clint_awlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+49,"clint_awsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+50,"clint_awburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+93,"clint_bvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"clint_bready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+95,"clint_bresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+96,"clint_bid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+437,"imem_arid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+97,"imem_rid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+98,"imem_rlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+439,"dmem_arid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+99,"dmem_rid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+100,"dmem_rlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+101,"mem_arid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+102,"mem_rid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+103,"mem_rlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+101,"sram_arid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+104,"sram_rid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+105,"sram_rlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+101,"uart_arid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+106,"uart_rid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+71,"uart_rlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+101,"clint_arid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+107,"clint_rid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+85,"clint_rlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+415,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+416,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+417,"p_count_number",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+11,"imem_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+12,"imem_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"imem_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"imem_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+10,"imem_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+13,"imem_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+16,"imem_rresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+435,"imem_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+436,"imem_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+436,"imem_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+435,"imem_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+437,"imem_wstr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+436,"imem_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+436,"imem_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+436,"imem_bready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+436,"imem_bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+438,"imem_bresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+437,"imem_awid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+436,"imem_wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+437,"imem_bid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+432,"imem_arlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+433,"imem_arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+434,"imem_arburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+437,"imem_arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+97,"imem_rid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+98,"imem_rlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"dmem_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"dmem_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+426,"dmem_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+20,"dmem_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"dmem_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+19,"dmem_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+28,"dmem_rresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+439,"dmem_arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+99,"dmem_rid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+100,"dmem_rlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+432,"dmem_arlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+433,"dmem_arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+434,"dmem_arburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+22,"dmem_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"dmem_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+426,"dmem_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+439,"dmem_awid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+24,"dmem_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+27,"dmem_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+25,"dmem_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+26,"dmem_wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+24,"dmem_wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+29,"dmem_bresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+32,"dmem_bid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+30,"dmem_bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"dmem_bready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+432,"dmem_awlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+433,"dmem_awsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+434,"dmem_awburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+418,"inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+419,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+420,"a0_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+421,"inst_wb_complete",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+422,"is_load_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+423,"is_store_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+424,"is_ecall_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+425,"opcode_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+440,"S_NORMAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+441,"S_TRAP_MCAUSE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+442,"CSR_MEPC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+443,"CSR_MCAUSE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+437,"WB_LAT_ALU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+437,"WB_LAT_MEM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+437,"WB_LAT_CSR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+438,"RESP_OKAY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+10,"pc_fetch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,"pc_exe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+109,"stage_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+110,"id_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+111,"id_inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,"id_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+113,"lsu_req_issued",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+114,"imem_req_pending",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+115,"inst_exe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,"wb_delay_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+117,"trap_state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+118,"trap_mepc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,"trap_cause",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+120,"inst_wb_complete_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+121,"inst_ifu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+15,"ifu_ready_to_mem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+122,"ifu_valid_to_idu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+123,"idu_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"fetch_allow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+124,"imem_ar_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+125,"imem_r_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+425,"opcode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+126,"rs1_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+127,"rs2_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+128,"imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+129,"funct3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+130,"rd_addr_idu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+131,"reg_write_en_idu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+132,"inst_invalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+133,"csr_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+134,"alu_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+135,"alu_a_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+136,"alu_b_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+137,"result_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+138,"is_branch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+428,"is_jal",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+139,"is_jalr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+140,"branch_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+141,"csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+142,"is_mret",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+143,"result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+144,"next_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+130,"rd_addr_exu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+145,"reg_write_en_exu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+146,"csr_we_from_exu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+147,"csr_wdata_from_exu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+148,"is_load",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+149,"is_store",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+423,"final_mem_we",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+150,"load_data_from_lsu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+151,"store_enable_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+152,"lsu_in_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+153,"lsu_out_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+154,"lsu_out_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+155,"lsu_in_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+156,"lsu_in_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+157,"lsu_out_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+158,"lsu_resp_err",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+155,"wb_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+159,"wb_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+160,"wb_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+161,"ex_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+161,"idu_out_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+109,"idu_out_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+162,"id_to_ex_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+163,"id_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+164,"writeback_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+165,"mem_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+166,"mem_done",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+437,"wb_delay_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+167,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+168,"rs2_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+169,"csr_rdata_from_regfile",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+170,"mepc_from_regfile",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+171,"mtvec_from_regfile",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+117,"is_stalled_by_trap",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+172,"is_ecall",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+173,"final_gpr_we",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+174,"final_csr_we",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+175,"final_csr_waddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+176,"final_csr_wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+177,"exc_imem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+178,"exc_load",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+179,"exc_store",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+180,"exc_any",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+181,"commit_cond",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+182,"dbg_id_fire_cnt",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+183,"dbg_commit_cnt",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBus(c+167,"rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+168,"rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+128,"imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+184,"reg_write_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+145,"reg_write_en_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+130,"rd_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+126,"rs1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+108,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+134,"alu_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+135,"alu_a_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+136,"alu_b_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+137,"result_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+138,"is_branch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+428,"is_jal",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+139,"is_jalr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+140,"branch_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+141,"csr_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+172,"is_ecall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"is_mret",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+185,"inst_invalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+143,"result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+130,"rd_addr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+144,"next_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+169,"csr_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+170,"mepc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+171,"mtvec",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+146,"csr_we_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+147,"csr_wdata_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+186,"alu_a",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+187,"alu_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+188,"alu_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declQuad(c+189,"mul_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBus(c+444,"ALU_ADD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+445,"ALU_SUB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+446,"ALU_SLL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+447,"ALU_SLT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+448,"ALU_SLTU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+449,"ALU_XOR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+450,"ALU_SRL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+451,"ALU_SRA",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+452,"ALU_OR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+453,"ALU_AND",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+454,"ALU_MUL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+455,"ALU_MULH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+456,"ALU_DIV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+457,"ALU_DIVU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+458,"ALU_REM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+459,"ALU_REMU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+438,"ALU_A_RS1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+434,"ALU_A_PC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+460,"ALU_A_ZERO",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+440,"ALU_B_RS2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+441,"ALU_B_IMM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+438,"RES_ALU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+434,"RES_CSR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+460,"RES_PC4",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+438,"CSR_OP_NONE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+434,"CSR_OP_CSRRW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+460,"CSR_OP_CSRRS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+191,"shift_amount",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+192,"pc_plus4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+193,"jal_target",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+194,"jalr_target",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+193,"branch_target",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+195,"branch_taken",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+115,"inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+109,"in_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+161,"out_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+109,"out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+161,"in_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+130,"rd_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+128,"imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+131,"reg_write_en_idu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+129,"funct3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+132,"inst_invalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+133,"csr_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+425,"opcode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+126,"rs1_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+127,"rs2_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+148,"is_load",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+149,"is_store",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+172,"is_ecall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+134,"alu_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+135,"alu_a_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+136,"alu_b_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+137,"result_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+138,"is_branch",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+428,"is_jal",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+139,"is_jalr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+140,"branch_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+141,"csr_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+142,"is_mret",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+196,"funct7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+444,"ALU_ADD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+445,"ALU_SUB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+446,"ALU_SLL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+447,"ALU_SLT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+448,"ALU_SLTU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+449,"ALU_XOR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+450,"ALU_SRL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+451,"ALU_SRA",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+452,"ALU_OR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+453,"ALU_AND",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+454,"ALU_MUL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+455,"ALU_MULH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+456,"ALU_DIV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+457,"ALU_DIVU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+458,"ALU_REM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+459,"ALU_REMU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+438,"ALU_A_RS1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+434,"ALU_A_PC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+460,"ALU_A_ZERO",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+440,"ALU_B_RS2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+441,"ALU_B_IMM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+438,"RES_ALU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+434,"RES_CSR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+460,"RES_PC4",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+438,"CSR_OP_NONE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+434,"CSR_OP_CSRRW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+460,"CSR_OP_CSRRS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+197,"imm_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+198,"imm_u",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBus(c+199,"imm_j",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 20,1);
    tracep->declBus(c+200,"imm_s",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+201,"imm_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 12,1);
    tracep->declBus(c+202,"imm_i_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+203,"imm_u_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+204,"imm_j_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+205,"imm_s_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+206,"imm_b_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+429,"valid_lui",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+430,"valid_auipc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+428,"valid_jal",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+139,"valid_jalr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+148,"valid_load",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+149,"valid_store",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+138,"valid_branch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+207,"valid_i_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+208,"valid_r_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+431,"is_system_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+197,"funct12",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+209,"valid_system",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+210,"valid_csrrw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+211,"valid_csrrs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("imm_select ");
    tracep->declBus(c+461,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+462,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+463,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+128,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+425,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+435,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+212,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 311,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+461,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+462,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+463,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+464,"HAS_DEFAULT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+128,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+425,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+435,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+212,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 311,0);
    tracep->declBus(c+465,"PAIR_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+222+i*2,"pair_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 38,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1+i*1,"key_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+238+i*1,"data_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 31,0);
    }
    tracep->declBus(c+246,"lut_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+247,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+466,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+415,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+416,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+13,"imem_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+14,"mem_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"ifu_ready_to_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+123,"idu_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+121,"inst_ifu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+122,"ifu_valid_to_idu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+435,"imem_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+436,"imem_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+436,"imem_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+435,"imem_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+437,"imem_wstr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+436,"imem_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+436,"imem_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+436,"imem_bready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+436,"imem_bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+438,"imem_bresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+437,"imem_awid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+436,"imem_wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+437,"imem_bid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+437,"imem_bid_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->pushNamePrefix("u_ifu_hanshake ");
    tracep->declBit(c+415,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+416,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+13,"imem_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+14,"mem_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"ifu_ready_to_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+123,"idu_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+121,"inst_ifu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+122,"ifu_valid_to_idu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+248,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+249,"inst_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+250,"mem_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"idu_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+415,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+416,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+143,"addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+168,"store_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+129,"funct3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+148,"is_load",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+423,"is_store",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+132,"inst_invalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+152,"in_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+153,"out_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"dmem_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"dmem_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+426,"dmem_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+19,"dmem_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+20,"dmem_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"dmem_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+22,"dmem_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"dmem_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+426,"dmem_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+439,"dmem_awid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+24,"dmem_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+25,"dmem_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+26,"dmem_wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+24,"dmem_wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+27,"dmem_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+432,"dmem_awlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+433,"dmem_awsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+434,"dmem_awburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+150,"load_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+151,"store_enable",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+154,"out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+155,"in_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+28,"dmem_rresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+30,"dmem_bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+29,"dmem_bresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+32,"dmem_bid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+31,"dmem_bready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+158,"resp_err",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+439,"dmem_arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+99,"dmem_rid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+100,"dmem_rlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+432,"dmem_arlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+433,"dmem_arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+434,"dmem_arburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+32,"dmem_bid_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+467,"IDLE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+468,"WAIT_AR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+433,"WAIT_R",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+469,"WAIT_AW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+470,"WAIT_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+471,"BUFFERED",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+472,"WAIT_B",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+438,"RESP_OKAY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+252,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+253,"buffer_load_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,"buffer_funct3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+255,"buffer_addr_offset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+256,"addr_latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,"store_data_latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+257,"funct3_latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+258,"load_latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+259,"store_latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+156,"in_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+157,"out_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+260,"mem_read_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+261,"mem_write_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+262,"mem_ar_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+263,"mem_aw_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+151,"store_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+264,"current_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+265,"current_funct3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+266,"current_addr_offset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+267,"byte_shift",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+268,"shifted_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+269,"buffer_rresp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+270,"buffer_bresp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+271,"b_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBus(c+473,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+463,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+419,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+415,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+416,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+164,"wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+130,"waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+173,"wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+126,"raddr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+127,"raddr2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+167,"rdata1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+168,"rdata2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+420,"a0_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+174,"csr_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+175,"csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+176,"csr_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+170,"mepc_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+171,"mtvec_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+169,"csr_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+272+i*1,"rf",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBus(c+304,"mstatus",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,"mepc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+305,"mcause",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,"mtvec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+474,"CSR_MSTATUS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+475,"CSR_MTVEC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+442,"CSR_MEPC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+443,"CSR_MCAUSE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+9,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+415,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+416,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+55,"mem_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"mem_arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+35,"mem_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+59,"mem_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+57,"mem_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"mem_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+60,"mem_rresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+101,"mem_arid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+104,"mem_rid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+105,"mem_rlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+432,"mem_arlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+433,"mem_arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+434,"mem_arburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+61,"mem_awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"mem_awready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+42,"mem_awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"mem_awid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+63,"mem_wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"mem_wready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+46,"mem_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"mem_wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+48,"mem_wlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"mem_bvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"mem_bready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+67,"mem_bresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+68,"mem_bid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+432,"mem_awlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+49,"mem_awsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+50,"mem_awburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+306,"imem_arready_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+307,"imem_rdata_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+308,"imem_rvalid_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+309,"imem_rresp_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+436,"imem_awready_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+436,"imem_wready_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+436,"imem_bvalid_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+438,"imem_bresp_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+310,"imem_rid_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+311,"imem_rlast_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+437,"imem_bid_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+415,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+416,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+435,"imem_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+436,"imem_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+306,"imem_arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+307,"imem_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+308,"imem_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+436,"imem_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+309,"imem_rresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+437,"imem_arid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+310,"imem_rid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+311,"imem_rlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+432,"imem_arlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+467,"imem_arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+438,"imem_arburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+435,"imem_awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+436,"imem_awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+436,"imem_awready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+435,"imem_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+437,"imem_wstr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+436,"imem_wready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+436,"imem_wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+436,"imem_bready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+436,"imem_bvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+438,"imem_bresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+437,"imem_awid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+436,"imem_wlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+437,"imem_bid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+35,"dmem_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+55,"dmem_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"dmem_arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+59,"dmem_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+57,"dmem_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"dmem_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+60,"dmem_rresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+101,"dmem_arid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+104,"dmem_rid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+105,"dmem_rlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+432,"dmem_arlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+433,"dmem_arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+434,"dmem_arburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+42,"dmem_awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+61,"dmem_awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"dmem_awready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+43,"dmem_awid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+432,"dmem_awlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+49,"dmem_awsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+50,"dmem_awburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+46,"dmem_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"dmem_wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+63,"dmem_wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"dmem_wready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+48,"dmem_wlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+67,"dmem_bresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+65,"dmem_bvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+68,"dmem_bid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+66,"dmem_bready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+310,"imem_arid_latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+104,"dmem_arid_latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+68,"dmem_awid_latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+312,"imem_araddr_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+313,"imem_arlen_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+314,"imem_arsize_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+315,"imem_arburst_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+316,"imem_burst_active",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+317,"imem_burst_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+318,"dmem_araddr_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+319,"dmem_arlen_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+320,"dmem_arsize_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+321,"dmem_arburst_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+322,"dmem_burst_active",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+323,"dmem_burst_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+324,"dmem_awlen_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+325,"dmem_awsize_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+326,"dmem_awburst_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+327,"dmem_aw_burst_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+328,"dmem_wlast_err",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+437,"imem_awid_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+436,"imem_wlast_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+438,"RESP_OKAY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+460,"RESP_SLVERR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+438,"BURST_FIXED",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+434,"BURST_INCR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+460,"BURST_WRAP",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBit(c+476,"imem_burst_ok_w",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+477,"dmem_burst_ok_w",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+329,"dmem_aw_burst_ok_w",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+330,"dmem_awaddr_latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+331,"dmem_awaddr_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+332,"dmem_waddr_use",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+436,"imem_r_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+436,"imem_ar_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+333,"dmem_r_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+334,"dmem_aw_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+335,"dmem_w_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+336,"dmem_awlen_use",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+337,"dmem_awsize_use",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+338,"dmem_awburst_use",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+339,"dmem_aw_burst_ok_use",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+340,"dmem_wlast_err_this",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+341,"dmem_wlast_err_comb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+342,"dmem_w_last_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+343,"dmem_ar_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+344,"dmem_b_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+345,"dmem_wstrb_ext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+346,"dmem_wdata_aligned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,"imem_rdata_buf",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,"dmem_rdata_buf",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+347,"dmem_waddr_ok",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+473,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+473,"dmem_w_delya_wideth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+473,"dmem_aw_delay_wideth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+473,"dmem_b_delay_wideth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+348,"dmem_r_busy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+349,"imem_busy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+478,"dmem_w_busy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+350,"dmem_b_busy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+479,"dmem_aw_busy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+351,"imem_delay",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+352,"dmem_delay",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+353,"dmem_w_delay",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+354,"dmem_aw_delay",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+355,"dmem_b_delay",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+476,"imem_delay_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+476,"dmem_delay_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+476,"dmem_w_delay_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+476,"dmem_aw_delay_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+476,"dmem_b_delay_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+356,"imem_delay_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+357,"dmem_delay_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+480,"dmem_w_delay_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+481,"dmem_aw_delay_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+358,"dmem_b_delay_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->pushNamePrefix("ifsr_dmem ");
    tracep->declBus(c+482,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+483,"POLY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+445,"SEED",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBit(c+415,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+416,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+476,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+352,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+359,"lsb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifsr_dmem_aw ");
    tracep->declBus(c+482,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+484,"POLY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+445,"SEED",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBit(c+415,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+416,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+476,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+354,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+360,"lsb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifsr_dmem_b ");
    tracep->declBus(c+482,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+484,"POLY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+445,"SEED",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBit(c+415,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+416,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+476,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+355,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+361,"lsb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifsr_dmem_w ");
    tracep->declBus(c+482,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+484,"POLY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+445,"SEED",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBit(c+415,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+416,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+476,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+353,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+362,"lsb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifsr_imem ");
    tracep->declBus(c+482,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+484,"POLY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+445,"SEED",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBit(c+415,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+416,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+476,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+351,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+363,"lsb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_arbiter ");
    tracep->declBit(c+415,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+416,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"imem_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+12,"imem_arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+10,"imem_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+14,"imem_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"imem_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+13,"imem_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+16,"imem_rresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+437,"imem_arid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+97,"imem_rid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+98,"imem_rlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+432,"imem_arlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+433,"imem_arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+434,"imem_arburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+17,"dmem_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"dmem_arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+426,"dmem_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+20,"dmem_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"dmem_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+19,"dmem_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+28,"dmem_rresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+439,"dmem_arid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+99,"dmem_rid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+100,"dmem_rlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+432,"dmem_arlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+433,"dmem_arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+434,"dmem_arburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+22,"dmem_awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"dmem_awready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+426,"dmem_awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+439,"dmem_awid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+24,"dmem_wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+27,"dmem_wready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+25,"dmem_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+26,"dmem_wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+24,"dmem_wlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"dmem_bvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"dmem_bready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+29,"dmem_bresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+32,"dmem_bid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+432,"dmem_awlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+433,"dmem_awsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+434,"dmem_awburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+33,"mem_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"mem_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+35,"mem_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+36,"mem_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"mem_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+38,"mem_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+39,"mem_rresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+40,"mem_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+41,"mem_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+42,"mem_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"mem_awid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+44,"mem_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"mem_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+46,"mem_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"mem_wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+48,"mem_wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"mem_bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"mem_bready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+53,"mem_bresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+54,"mem_bid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+101,"mem_arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+102,"mem_rid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+103,"mem_rlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+432,"mem_arlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+433,"mem_arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+434,"mem_arburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+432,"mem_awlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+49,"mem_awsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+50,"mem_awburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+467,"ST_IDLE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+468,"ST_IFU_AR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+433,"ST_IFU_R",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+469,"ST_LSU_AR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+470,"ST_LSU_R",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+471,"ST_LSU_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+472,"ST_LSU_B",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+364,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+365,"state_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+366,"aw_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+367,"w_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+368,"req_lsu_w",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"req_lsu_r",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"req_ifu_r",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+369,"ar_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+370,"r_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+371,"aw_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+372,"w_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+373,"b_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_clint ");
    tracep->declBus(c+485,"BASE_ADDR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+415,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+416,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+84,"arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+35,"araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+432,"arlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+433,"arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+434,"arburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+85,"rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+87,"rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+88,"rresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+101,"arid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+107,"rid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+85,"rlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+89,"awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+90,"awready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+42,"awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"awid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+432,"awlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+49,"awsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+50,"awburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+91,"wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+92,"wready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+46,"wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+48,"wlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+93,"bvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"bready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+95,"bresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+96,"bid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+107,"arid_latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+438,"RESP_OK",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+460,"RESP_SLVERR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+42,"awaddr_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+46,"wdata_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"wstrb_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+432,"arlen_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+433,"arsize_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+434,"arburst_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+432,"awlen_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+49,"awsize_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+50,"awburst_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declQuad(c+374,"mtime",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBit(c+376,"aw_seen",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+377,"w_seen",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+96,"awid_latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+378,"ar_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+379,"r_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+380,"aw_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+381,"w_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+382,"b_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+383,"hit_lo",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+384,"hit_hi",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_uart ");
    tracep->declBit(c+415,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+416,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+69,"arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+35,"araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+432,"arlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+433,"arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+434,"arburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+71,"rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+72,"rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+73,"rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+74,"rresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+101,"arid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+106,"rid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+71,"rlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"awready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+42,"awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"awid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+432,"awlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+49,"awsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+50,"awburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+77,"wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"wready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+46,"wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+48,"wlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+79,"bvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"bready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+81,"bresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+82,"bid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+106,"arid_latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+432,"arlen_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+433,"arsize_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+434,"arburst_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+432,"awlen_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+49,"awsize_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+50,"awburst_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+438,"RESP_OK",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBit(c+385,"aw_seen",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+386,"w_seen",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+387,"wdata_latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+388,"awaddr_latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,"awid_latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+389,"ar_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+390,"r_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+391,"aw_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+392,"w_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+393,"b_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+394,"wdata_use",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("xbar ");
    tracep->declBit(c+415,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+416,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"in_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"in_arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+35,"in_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+36,"in_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"in_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+38,"in_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+39,"in_rresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+101,"in_arid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+102,"in_rid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+103,"in_rlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+432,"in_arlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+433,"in_arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+434,"in_arburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+40,"in_awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+41,"in_awready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+42,"in_awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"in_awid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+44,"in_wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"in_wready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+46,"in_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"in_wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+48,"in_wlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"in_bvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"in_bready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+53,"in_bresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+54,"in_bid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+432,"in_awlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+49,"in_awsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+50,"in_awburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+55,"s_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"s_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+35,"s_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+57,"s_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"s_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+59,"s_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+60,"s_rresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+101,"s_arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+104,"s_rid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+105,"s_rlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+432,"s_arlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+433,"s_arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+434,"s_arburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+61,"s_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"s_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+42,"s_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"s_awid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+63,"s_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"s_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+46,"s_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"s_wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+48,"s_wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"s_bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"s_bready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+67,"s_bresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+68,"s_bid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+432,"s_awlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+49,"s_awsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+50,"s_awburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+69,"u_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"u_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+35,"u_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+71,"u_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+72,"u_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+73,"u_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+74,"u_rresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+101,"u_arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+106,"u_rid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+71,"u_rlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+432,"u_arlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+433,"u_arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+434,"u_arburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+75,"u_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"u_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+42,"u_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"u_awid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+77,"u_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"u_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+46,"u_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"u_wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+48,"u_wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+79,"u_bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"u_bready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+81,"u_bresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+82,"u_bid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+432,"u_awlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+49,"u_awsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+50,"u_awburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+83,"c_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+84,"c_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+35,"c_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+85,"c_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"c_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+87,"c_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+88,"c_rresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+101,"c_arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+107,"c_rid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+85,"c_rlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+432,"c_arlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+433,"c_arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+434,"c_arburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+89,"c_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+90,"c_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+42,"c_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"c_awid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+91,"c_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+92,"c_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+46,"c_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"c_wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+48,"c_wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+93,"c_bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"c_bready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+95,"c_bresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+96,"c_bid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+432,"c_awlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+49,"c_awsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+50,"c_awburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+395,"err_rlast",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+396,"err_rlen_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+438,"RESP_OKAY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+486,"RESP_DECERR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+487,"SRAM_ADDR_BEGIN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+488,"SRAM_ADDR_END",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+489,"UART_ADDR_BEGIN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+490,"UART_ADDR_END",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+485,"CLINT_LO_ADDR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+491,"CLINT_HI_ADDR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+438,"T_SRAM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+434,"T_UART",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+460,"T_CLINT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+486,"T_INV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+438,"ST_IDLE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+434,"ST_RD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+460,"ST_WR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+486,"ST_B",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+397,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+398,"rd_target",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+399,"wr_target",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+400,"rd_err",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+401,"wr_err",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+402,"aw_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+403,"w_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+404,"err_rvalid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+405,"err_bvalid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+476,"ar_simple_ok",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+406,"aw_simple_ok",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+407,"hit_ar_uart",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+408,"hit_ar_sram",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+409,"hit_ar_clint",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+410,"hit_aw_uart",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+411,"hit_aw_sram",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+412,"hit_aw_clint",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+369,"in_ar_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+371,"in_aw_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+413,"in_w_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+414,"in_r_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+373,"in_b_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
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
    bufp->fullBit(oldp+11,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__req_ifu_r));
    bufp->fullBit(oldp+12,(((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state)) 
                            & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_arready))));
    bufp->fullIData(oldp+13,(vlSelf->ysyx_25040109_top__DOT__imem_rdata),32);
    bufp->fullBit(oldp+14,(vlSelf->ysyx_25040109_top__DOT__imem_rvalid));
    bufp->fullBit(oldp+15,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_ready_to_mem));
    bufp->fullCData(oldp+16,(((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state))
                               ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rresp)
                               : 0U)),2);
    bufp->fullBit(oldp+17,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__req_lsu_r));
    bufp->fullBit(oldp+18,(((3U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state)) 
                            & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_arready))));
    bufp->fullIData(oldp+19,(vlSelf->ysyx_25040109_top__DOT__dmem_rdata),32);
    bufp->fullBit(oldp+20,(((4U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state)) 
                            & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rvalid))));
    bufp->fullBit(oldp+21,((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))));
    bufp->fullBit(oldp+22,(vlSelf->ysyx_25040109_top__DOT__dmem_awvalid));
    bufp->fullBit(oldp+23,(((IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT____VdfgTmp_h739842b2__0) 
                            & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_awready))));
    bufp->fullBit(oldp+24,(vlSelf->ysyx_25040109_top__DOT__dmem_wvalid));
    bufp->fullIData(oldp+25,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_data_latched),32);
    bufp->fullCData(oldp+26,((0xfU & ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched))
                                       ? ((IData)(1U) 
                                          << (3U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched))
                                       : ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched))
                                           ? ((IData)(3U) 
                                              << (2U 
                                                  & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched))
                                           : ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched))
                                               ? 0xfU
                                               : 0U))))),4);
    bufp->fullBit(oldp+27,(((IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT____VdfgTmp_he79ec405__0) 
                            & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_wready))));
    bufp->fullCData(oldp+28,(((4U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state))
                               ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rresp)
                               : 0U)),2);
    bufp->fullCData(oldp+29,(((6U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state))
                               ? ((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_err)
                                   ? 3U : ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                            ? (IData)(vlSelf->ysyx_25040109_top__DOT__sram_bresp)
                                            : ((1U 
                                                == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                                ? (IData)(vlSelf->ysyx_25040109_top__DOT__uart_bresp)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                                    ? (IData)(vlSelf->ysyx_25040109_top__DOT__clint_bresp)
                                                    : 3U))))
                               : 0U)),2);
    bufp->fullBit(oldp+30,(vlSelf->ysyx_25040109_top__DOT__dmem_bvalid));
    bufp->fullBit(oldp+31,((6U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))));
    bufp->fullCData(oldp+32,(((6U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state))
                               ? ((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_err)
                                   ? 0U : ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                            ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awid_latched)
                                            : ((1U 
                                                == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                                ? (IData)(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__awid_latched)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                                    ? (IData)(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__awid_latched)
                                                    : 0U))))
                               : 0U)),4);
    bufp->fullBit(oldp+33,(vlSelf->ysyx_25040109_top__DOT__mem_arvalid));
    bufp->fullBit(oldp+34,(vlSelf->ysyx_25040109_top__DOT__mem_arready));
    bufp->fullIData(oldp+35,(vlSelf->ysyx_25040109_top__DOT__mem_araddr),32);
    bufp->fullBit(oldp+36,(vlSelf->ysyx_25040109_top__DOT__mem_rvalid));
    bufp->fullBit(oldp+37,(vlSelf->ysyx_25040109_top__DOT__mem_rready));
    bufp->fullIData(oldp+38,(vlSelf->ysyx_25040109_top__DOT__mem_rdata),32);
    bufp->fullCData(oldp+39,(vlSelf->ysyx_25040109_top__DOT__mem_rresp),2);
    bufp->fullBit(oldp+40,(vlSelf->ysyx_25040109_top__DOT__mem_awvalid));
    bufp->fullBit(oldp+41,(vlSelf->ysyx_25040109_top__DOT__mem_awready));
    bufp->fullIData(oldp+42,(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__awaddr_unused),32);
    bufp->fullCData(oldp+43,(((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state))
                               ? 1U : 0U)),4);
    bufp->fullBit(oldp+44,(vlSelf->ysyx_25040109_top__DOT__mem_wvalid));
    bufp->fullBit(oldp+45,(vlSelf->ysyx_25040109_top__DOT__mem_wready));
    bufp->fullIData(oldp+46,(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__wdata_unused),32);
    bufp->fullCData(oldp+47,(((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state))
                               ? (0xfU & ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched))
                                           ? ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched))
                                           : ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched))
                                               ? ((IData)(3U) 
                                                  << 
                                                  (2U 
                                                   & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched))
                                               : ((2U 
                                                   == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched))
                                                   ? 0xfU
                                                   : 0U))))
                               : 0U)),4);
    bufp->fullBit(oldp+48,(vlSelf->ysyx_25040109_top__DOT__mem_wlast));
    bufp->fullCData(oldp+49,(((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state))
                               ? 2U : 0U)),3);
    bufp->fullCData(oldp+50,(((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state))
                               ? 1U : 0U)),2);
    bufp->fullBit(oldp+51,(vlSelf->ysyx_25040109_top__DOT__mem_bvalid));
    bufp->fullBit(oldp+52,(vlSelf->ysyx_25040109_top__DOT__mem_bready));
    bufp->fullCData(oldp+53,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_err)
                               ? 3U : ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                        ? (IData)(vlSelf->ysyx_25040109_top__DOT__sram_bresp)
                                        : ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                            ? (IData)(vlSelf->ysyx_25040109_top__DOT__uart_bresp)
                                            : ((2U 
                                                == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                                ? (IData)(vlSelf->ysyx_25040109_top__DOT__clint_bresp)
                                                : 3U))))),2);
    bufp->fullCData(oldp+54,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_err)
                               ? 0U : ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                        ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awid_latched)
                                        : ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                            ? (IData)(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__awid_latched)
                                            : ((2U 
                                                == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                                ? (IData)(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__awid_latched)
                                                : 0U))))),4);
    bufp->fullBit(oldp+55,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h17557492__0) 
                            & (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_ar_sram))));
    bufp->fullBit(oldp+56,(vlSelf->ysyx_25040109_top__DOT__sram_arready));
    bufp->fullBit(oldp+57,(vlSelf->ysyx_25040109_top__DOT__sram_rvalid));
    bufp->fullBit(oldp+58,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h5bc4d2f1__0) 
                            & ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target)) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rready)))));
    bufp->fullIData(oldp+59,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_rdata_buf),32);
    bufp->fullCData(oldp+60,(vlSelf->ysyx_25040109_top__DOT__sram_rresp),2);
    bufp->fullBit(oldp+61,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h358f6a08__0) 
                            & (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_aw_sram))));
    bufp->fullBit(oldp+62,(vlSelf->ysyx_25040109_top__DOT__sram_awready));
    bufp->fullBit(oldp+63,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h95941268__0) 
                            & ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_wvalid)))));
    bufp->fullBit(oldp+64,(vlSelf->ysyx_25040109_top__DOT__sram_wready));
    bufp->fullBit(oldp+65,(vlSelf->ysyx_25040109_top__DOT__sram_bvalid));
    bufp->fullBit(oldp+66,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_ha390e7a0__0) 
                            & ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_bready)))));
    bufp->fullCData(oldp+67,(vlSelf->ysyx_25040109_top__DOT__sram_bresp),2);
    bufp->fullCData(oldp+68,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awid_latched),4);
    bufp->fullBit(oldp+69,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h17557492__0) 
                            & (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_ar_uart))));
    bufp->fullBit(oldp+70,((1U & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__uart_rvalid)))));
    bufp->fullBit(oldp+71,(vlSelf->ysyx_25040109_top__DOT__uart_rvalid));
    bufp->fullBit(oldp+72,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h5bc4d2f1__0) 
                            & ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target)) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rready)))));
    bufp->fullIData(oldp+73,(vlSelf->ysyx_25040109_top__DOT__uart_rdata),32);
    bufp->fullCData(oldp+74,(vlSelf->ysyx_25040109_top__DOT__uart_rresp),2);
    bufp->fullBit(oldp+75,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h358f6a08__0) 
                            & (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_aw_uart))));
    bufp->fullBit(oldp+76,(vlSelf->ysyx_25040109_top__DOT__uart_awready));
    bufp->fullBit(oldp+77,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h95941268__0) 
                            & ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_wvalid)))));
    bufp->fullBit(oldp+78,(vlSelf->ysyx_25040109_top__DOT__uart_wready));
    bufp->fullBit(oldp+79,(vlSelf->ysyx_25040109_top__DOT__uart_bvalid));
    bufp->fullBit(oldp+80,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_ha390e7a0__0) 
                            & ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_bready)))));
    bufp->fullCData(oldp+81,(vlSelf->ysyx_25040109_top__DOT__uart_bresp),2);
    bufp->fullCData(oldp+82,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__awid_latched),4);
    bufp->fullBit(oldp+83,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h17557492__0) 
                            & (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_ar_clint))));
    bufp->fullBit(oldp+84,((1U & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__clint_rvalid)))));
    bufp->fullBit(oldp+85,(vlSelf->ysyx_25040109_top__DOT__clint_rvalid));
    bufp->fullBit(oldp+86,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h5bc4d2f1__0) 
                            & ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target)) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rready)))));
    bufp->fullIData(oldp+87,(vlSelf->ysyx_25040109_top__DOT__clint_rdata),32);
    bufp->fullCData(oldp+88,(vlSelf->ysyx_25040109_top__DOT__clint_rresp),2);
    bufp->fullBit(oldp+89,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h358f6a08__0) 
                            & (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_aw_clint))));
    bufp->fullBit(oldp+90,(vlSelf->ysyx_25040109_top__DOT__clint_awready));
    bufp->fullBit(oldp+91,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h95941268__0) 
                            & ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_wvalid)))));
    bufp->fullBit(oldp+92,(vlSelf->ysyx_25040109_top__DOT__clint_wready));
    bufp->fullBit(oldp+93,(vlSelf->ysyx_25040109_top__DOT__clint_bvalid));
    bufp->fullBit(oldp+94,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_ha390e7a0__0) 
                            & ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_bready)))));
    bufp->fullCData(oldp+95,(vlSelf->ysyx_25040109_top__DOT__clint_bresp),2);
    bufp->fullCData(oldp+96,(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__awid_latched),4);
    bufp->fullCData(oldp+97,(((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state))
                               ? ((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_err)
                                   ? 0U : ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))
                                            ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_arid_latched)
                                            : ((1U 
                                                == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))
                                                ? (IData)(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__arid_latched)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))
                                                    ? (IData)(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__arid_latched)
                                                    : 0U))))
                               : 0U)),4);
    bufp->fullBit(oldp+98,(((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state)) 
                            & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rlast))));
    bufp->fullCData(oldp+99,(((4U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state))
                               ? ((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_err)
                                   ? 0U : ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))
                                            ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_arid_latched)
                                            : ((1U 
                                                == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))
                                                ? (IData)(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__arid_latched)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))
                                                    ? (IData)(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__arid_latched)
                                                    : 0U))))
                               : 0U)),4);
    bufp->fullBit(oldp+100,(((4U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state)) 
                             & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rlast))));
    bufp->fullCData(oldp+101,(vlSelf->ysyx_25040109_top__DOT__mem_arid),4);
    bufp->fullCData(oldp+102,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_err)
                                ? 0U : ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))
                                         ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_arid_latched)
                                         : ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))
                                             ? (IData)(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__arid_latched)
                                             : ((2U 
                                                 == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))
                                                 ? (IData)(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__arid_latched)
                                                 : 0U))))),4);
    bufp->fullBit(oldp+103,(vlSelf->ysyx_25040109_top__DOT__mem_rlast));
    bufp->fullCData(oldp+104,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_arid_latched),4);
    bufp->fullBit(oldp+105,(vlSelf->ysyx_25040109_top__DOT__sram_rlast));
    bufp->fullCData(oldp+106,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__arid_latched),4);
    bufp->fullCData(oldp+107,(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__arid_latched),4);
    bufp->fullIData(oldp+108,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe),32);
    bufp->fullBit(oldp+109,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid));
    bufp->fullBit(oldp+110,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_valid));
    bufp->fullIData(oldp+111,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_inst),32);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_pc),32);
    bufp->fullBit(oldp+113,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_req_issued));
    bufp->fullBit(oldp+114,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imem_req_pending));
    bufp->fullIData(oldp+115,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe),32);
    bufp->fullCData(oldp+116,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt),4);
    bufp->fullBit(oldp+117,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state));
    bufp->fullIData(oldp+118,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_mepc),32);
    bufp->fullIData(oldp+119,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_cause),32);
    bufp->fullBit(oldp+120,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_wb_complete_r));
    bufp->fullIData(oldp+121,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__full)
                                ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__inst_temp
                                : vlSelf->ysyx_25040109_top__DOT__imem_rdata)),32);
    bufp->fullBit(oldp+122,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_valid_to_idu));
    bufp->fullBit(oldp+123,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu_ready));
    bufp->fullBit(oldp+124,(((IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__req_ifu_r) 
                             & ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state)) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_arready)))));
    bufp->fullBit(oldp+125,(((IData)(vlSelf->ysyx_25040109_top__DOT__imem_rvalid) 
                             & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_ready_to_mem) 
                                & ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state)) 
                                   & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rlast))))));
    bufp->fullCData(oldp+126,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+127,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+128,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm),32);
    bufp->fullCData(oldp+129,((7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+130,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                        >> 7U))),5);
    bufp->fullBit(oldp+131,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h831d9c42__0) 
                             | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type) 
                                | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type) 
                                   | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                                      & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he97d7b16__0)))))));
    bufp->fullBit(oldp+132,((1U & (~ (IData)(vlSelf->__VdfgTmp_h2aca818a__0)))));
    bufp->fullSData(oldp+133,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system)
                                ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                   >> 0x14U) : 0U)),12);
    bufp->fullCData(oldp+134,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_op),5);
    bufp->fullCData(oldp+135,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_a_sel),2);
    bufp->fullBit(oldp+136,((1U & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type)))));
    bufp->fullCData(oldp+137,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result_sel),2);
    bufp->fullBit(oldp+138,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_branch));
    bufp->fullBit(oldp+139,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_jalr));
    bufp->fullCData(oldp+140,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__branch_op),3);
    bufp->fullCData(oldp+141,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_op),2);
    bufp->fullBit(oldp+142,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h2014d746__0) 
                             & (0x302U == (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                           >> 0x14U)))));
    bufp->fullIData(oldp+143,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result),32);
    bufp->fullIData(oldp+144,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__next_pc),32);
    bufp->fullBit(oldp+145,(((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid)) 
                             & (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h831d9c42__0) 
                                 | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type) 
                                    | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type) 
                                       | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                                          & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he97d7b16__0))))) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid)))));
    bufp->fullBit(oldp+146,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_we_from_exu));
    bufp->fullIData(oldp+147,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_wdata_from_exu),32);
    bufp->fullBit(oldp+148,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load));
    bufp->fullBit(oldp+149,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_store));
    bufp->fullIData(oldp+150,((((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched) 
                                | (5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)))
                                ? ((4U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                    ? ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                        ? 0U : ((1U 
                                                 & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                                 ? 
                                                (0xffffU 
                                                 & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata)
                                                 : 
                                                (0xffU 
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
    bufp->fullBit(oldp+151,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__store_enable_unused));
    bufp->fullBit(oldp+152,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op) 
                             & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_req_issued)) 
                                & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_any))))));
    bufp->fullBit(oldp+153,(((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
                             | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_fire))));
    bufp->fullBit(oldp+154,((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))));
    bufp->fullBit(oldp+155,((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt))));
    bufp->fullBit(oldp+156,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_in_fire));
    bufp->fullBit(oldp+157,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_fire));
    bufp->fullBit(oldp+158,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_resp_err));
    bufp->fullBit(oldp+159,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid) 
                             & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op)) 
                                | (5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))))));
    bufp->fullBit(oldp+160,((((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid) 
                              & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op)) 
                                 | (5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)))) 
                             & (0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt)))));
    bufp->fullBit(oldp+161,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ex_ready));
    bufp->fullBit(oldp+162,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_to_ex_fire));
    bufp->fullBit(oldp+163,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_fire));
    bufp->fullIData(oldp+164,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load)
                                ? (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched) 
                                    | (5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)))
                                    ? ((4U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                        ? ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                            ? 0U : 
                                           ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                             ? (0xffffU 
                                                & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata)
                                             : (0xffU 
                                                & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata)))
                                        : ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                                ? 0U
                                                : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata)
                                            : ((1U 
                                                & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata))
                                                : (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata)))))
                                    : 0U) : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result)),32);
    bufp->fullBit(oldp+165,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op));
    bufp->fullBit(oldp+166,((1U & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op)) 
                                   | (5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))))));
    bufp->fullIData(oldp+167,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data),32);
    bufp->fullIData(oldp+168,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data),32);
    bufp->fullIData(oldp+169,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_rdata_from_regfile),32);
    bufp->fullIData(oldp+170,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mepc),32);
    bufp->fullIData(oldp+171,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mtvec),32);
    bufp->fullBit(oldp+172,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_ecall));
    bufp->fullBit(oldp+173,(((((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid)) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid)) 
                              & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__commit_cond)) 
                             & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h831d9c42__0) 
                                | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type) 
                                   | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type) 
                                      | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                                         & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he97d7b16__0))))))));
    bufp->fullBit(oldp+174,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_we));
    bufp->fullSData(oldp+175,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr),12);
    bufp->fullIData(oldp+176,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_wdata),32);
    bufp->fullBit(oldp+177,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_imem));
    bufp->fullBit(oldp+178,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_load));
    bufp->fullBit(oldp+179,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_fire) 
                             & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_store) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_resp_err)))));
    bufp->fullBit(oldp+180,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_any));
    bufp->fullBit(oldp+181,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__commit_cond));
    bufp->fullIData(oldp+182,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__dbg_id_fire_cnt),32);
    bufp->fullIData(oldp+183,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__dbg_commit_cnt),32);
    bufp->fullBit(oldp+184,((((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h831d9c42__0) 
                              | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type) 
                                 | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type) 
                                    | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                                       & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he97d7b16__0))))) 
                             & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid))));
    bufp->fullBit(oldp+185,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid));
    bufp->fullIData(oldp+186,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a),32);
    bufp->fullIData(oldp+187,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b),32);
    bufp->fullIData(oldp+188,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out),32);
    bufp->fullQData(oldp+189,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__mul_temp),64);
    bufp->fullCData(oldp+191,((0x1fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)),5);
    bufp->fullIData(oldp+192,(((IData)(4U) + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe)),32);
    bufp->fullIData(oldp+193,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__jal_target),32);
    bufp->fullIData(oldp+194,((0xfffffffeU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out)),32);
    bufp->fullBit(oldp+195,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_branch) 
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
                                            | ((7U 
                                                == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__branch_op)) 
                                               & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
                                                  >= vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data))))))))));
    bufp->fullCData(oldp+196,((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                               >> 0x19U)),7);
    bufp->fullSData(oldp+197,((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+198,((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                               >> 0xcU)),20);
    bufp->fullIData(oldp+199,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j),20);
    bufp->fullSData(oldp+200,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s),12);
    bufp->fullSData(oldp+201,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b),12);
    bufp->fullIData(oldp+202,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext),32);
    bufp->fullIData(oldp+203,((0xfffff000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)),32);
    bufp->fullIData(oldp+204,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                            >> 0x1fU))) 
                                << 0x15U) | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j 
                                             << 1U))),32);
    bufp->fullIData(oldp+205,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                            >> 0x1fU))) 
                                << 0xcU) | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s))),32);
    bufp->fullIData(oldp+206,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                            >> 0x1fU))) 
                                << 0xdU) | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b) 
                                            << 1U))),32);
    bufp->fullBit(oldp+207,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type));
    bufp->fullBit(oldp+208,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type));
    bufp->fullBit(oldp+209,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system));
    bufp->fullBit(oldp+210,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                             & (0x1000U == (0x7000U 
                                            & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)))));
    bufp->fullBit(oldp+211,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
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
    bufp->fullWData(oldp+212,(__Vtemp_hcccdb7e8__0),312);
    bufp->fullQData(oldp+222,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+224,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+226,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+228,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+230,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+232,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+234,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+236,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullIData(oldp+238,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+239,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+240,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+241,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+242,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+243,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+244,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+245,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+246,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+247,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+248,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__full));
    bufp->fullIData(oldp+249,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__inst_temp),32);
    bufp->fullBit(oldp+250,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__mem_fire));
    bufp->fullBit(oldp+251,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__idu_fire));
    bufp->fullCData(oldp+252,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state),3);
    bufp->fullIData(oldp+253,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_load_data),32);
    bufp->fullCData(oldp+254,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_funct3),3);
    bufp->fullCData(oldp+255,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_addr_offset),2);
    bufp->fullIData(oldp+256,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched),32);
    bufp->fullCData(oldp+257,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched),3);
    bufp->fullBit(oldp+258,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched));
    bufp->fullBit(oldp+259,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_latched));
    bufp->fullBit(oldp+260,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_read_fire));
    bufp->fullBit(oldp+261,((((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_wvalid) 
                              & (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT____VdfgTmp_he79ec405__0)) 
                             & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_wready))));
    bufp->fullBit(oldp+262,(((IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__req_lsu_r) 
                             & ((3U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state)) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_arready)))));
    bufp->fullBit(oldp+263,(((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_awvalid) 
                             & ((IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT____VdfgTmp_h739842b2__0) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_awready)))));
    bufp->fullIData(oldp+264,(((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))
                                ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_load_data
                                : vlSelf->ysyx_25040109_top__DOT__dmem_rdata)),32);
    bufp->fullCData(oldp+265,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3),3);
    bufp->fullCData(oldp+266,((3U & ((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))
                                      ? (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_addr_offset)
                                      : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched))),2);
    bufp->fullCData(oldp+267,((0x18U & (((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))
                                          ? (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_addr_offset)
                                          : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched) 
                                        << 3U))),5);
    bufp->fullIData(oldp+268,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata),32);
    bufp->fullCData(oldp+269,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_rresp),2);
    bufp->fullCData(oldp+270,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_bresp),2);
    bufp->fullBit(oldp+271,(((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_bvalid) 
                             & (6U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)))));
    bufp->fullIData(oldp+272,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+273,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+274,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+275,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+276,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+277,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+278,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+279,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+280,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+281,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+282,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+283,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+284,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+285,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+286,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+287,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+288,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+289,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+290,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+291,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+292,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+293,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+294,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+295,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+296,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+297,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+298,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+299,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+300,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+301,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+302,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+303,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[31]),32);
    bufp->fullIData(oldp+304,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mstatus),32);
    bufp->fullIData(oldp+305,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mcause),32);
    bufp->fullBit(oldp+306,((1U & (~ ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_burst_active) 
                                      | ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_rvalid_unused) 
                                         | (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_busy)))))));
    bufp->fullIData(oldp+307,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_rdata_buf),32);
    bufp->fullBit(oldp+308,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_rvalid_unused));
    bufp->fullCData(oldp+309,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_rresp_unused),2);
    bufp->fullCData(oldp+310,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_arid_latched),4);
    bufp->fullBit(oldp+311,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_rvalid_unused) 
                             & (0U == (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_arlen_cnt)))));
    bufp->fullIData(oldp+312,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_araddr_reg),32);
    bufp->fullCData(oldp+313,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_arlen_cnt),8);
    bufp->fullCData(oldp+314,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_arsize_reg),3);
    bufp->fullCData(oldp+315,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_arburst_reg),2);
    bufp->fullBit(oldp+316,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_burst_active));
    bufp->fullBit(oldp+317,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_burst_ok));
    bufp->fullIData(oldp+318,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_araddr_reg),32);
    bufp->fullCData(oldp+319,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_arlen_cnt),8);
    bufp->fullCData(oldp+320,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_arsize_reg),3);
    bufp->fullCData(oldp+321,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_arburst_reg),2);
    bufp->fullBit(oldp+322,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_burst_active));
    bufp->fullBit(oldp+323,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_burst_ok));
    bufp->fullCData(oldp+324,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awlen_cnt),8);
    bufp->fullCData(oldp+325,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awsize_reg),3);
    bufp->fullCData(oldp+326,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awburst_reg),2);
    bufp->fullBit(oldp+327,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_burst_ok));
    bufp->fullBit(oldp+328,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_wlast_err));
    bufp->fullBit(oldp+329,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_burst_ok_w));
    bufp->fullIData(oldp+330,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awaddr_latched),32);
    bufp->fullBit(oldp+331,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awaddr_valid));
    bufp->fullIData(oldp+332,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_waddr_use),32);
    bufp->fullBit(oldp+333,((((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h5bc4d2f1__0) 
                              & ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target)) 
                                 & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rready))) 
                             & (IData)(vlSelf->ysyx_25040109_top__DOT__sram_rvalid))));
    bufp->fullBit(oldp+334,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_fire));
    bufp->fullBit(oldp+335,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_w_fire));
    bufp->fullCData(oldp+336,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awlen_use),8);
    bufp->fullCData(oldp+337,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_fire)
                                ? ((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state))
                                    ? 2U : 0U) : (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awsize_reg))),3);
    bufp->fullCData(oldp+338,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_fire)
                                ? ((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state))
                                    ? 1U : 0U) : (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awburst_reg))),2);
    bufp->fullBit(oldp+339,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_fire)
                              ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_burst_ok_w)
                              : (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_burst_ok))));
    bufp->fullBit(oldp+340,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_wlast_err_this));
    bufp->fullBit(oldp+341,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_wlast_err) 
                             | (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_wlast_err_this))));
    bufp->fullBit(oldp+342,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_w_last_fire));
    bufp->fullBit(oldp+343,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_ar_fire));
    bufp->fullBit(oldp+344,((((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_ha390e7a0__0) 
                              & ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
                                 & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_bready))) 
                             & (IData)(vlSelf->ysyx_25040109_top__DOT__sram_bvalid))));
    bufp->fullCData(oldp+345,(((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state))
                                ? (0xfU & ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched))
                                            ? ((IData)(1U) 
                                               << (3U 
                                                   & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched))
                                            : ((1U 
                                                == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched))
                                                ? ((IData)(3U) 
                                                   << 
                                                   (2U 
                                                    & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched))
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched))
                                                    ? 0xfU
                                                    : 0U))))
                                : 0U)),8);
    bufp->fullIData(oldp+346,((vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__wdata_unused 
                               << (0x18U & (vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_waddr_use 
                                            << 3U)))),32);
    bufp->fullBit(oldp+347,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_waddr_ok));
    bufp->fullBit(oldp+348,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_r_busy));
    bufp->fullBit(oldp+349,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_busy));
    bufp->fullBit(oldp+350,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_b_busy));
    bufp->fullCData(oldp+351,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_delay),5);
    bufp->fullCData(oldp+352,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_delay),5);
    bufp->fullCData(oldp+353,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_w_delay),5);
    bufp->fullCData(oldp+354,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_delay),5);
    bufp->fullCData(oldp+355,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_b_delay),5);
    bufp->fullCData(oldp+356,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_delay_cnt),5);
    bufp->fullCData(oldp+357,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_delay_cnt),5);
    bufp->fullCData(oldp+358,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_b_delay_cnt),5);
    bufp->fullBit(oldp+359,((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_delay))));
    bufp->fullBit(oldp+360,((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_delay))));
    bufp->fullBit(oldp+361,((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_b_delay))));
    bufp->fullBit(oldp+362,((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_w_delay))));
    bufp->fullBit(oldp+363,((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_delay))));
    bufp->fullCData(oldp+364,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state),3);
    bufp->fullCData(oldp+365,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state_n),3);
    bufp->fullBit(oldp+366,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__aw_done));
    bufp->fullBit(oldp+367,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__w_done));
    bufp->fullBit(oldp+368,(((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_awvalid) 
                             | (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_wvalid))));
    bufp->fullBit(oldp+369,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__ar_fire));
    bufp->fullBit(oldp+370,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem_rvalid) 
                             & ((IData)(vlSelf->ysyx_25040109_top__DOT__mem_rready) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rlast)))));
    bufp->fullBit(oldp+371,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__aw_fire));
    bufp->fullBit(oldp+372,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem_wvalid) 
                             & ((IData)(vlSelf->ysyx_25040109_top__DOT__mem_wready) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_wlast)))));
    bufp->fullBit(oldp+373,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__b_fire));
    bufp->fullQData(oldp+374,(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__mtime),64);
    bufp->fullBit(oldp+376,(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__aw_seen));
    bufp->fullBit(oldp+377,(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__w_seen));
    bufp->fullBit(oldp+378,(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__ar_fire));
    bufp->fullBit(oldp+379,((((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h5bc4d2f1__0) 
                              & ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target)) 
                                 & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rready))) 
                             & (IData)(vlSelf->ysyx_25040109_top__DOT__clint_rvalid))));
    bufp->fullBit(oldp+380,(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__aw_fire));
    bufp->fullBit(oldp+381,(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__w_fire));
    bufp->fullBit(oldp+382,((((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_ha390e7a0__0) 
                              & ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
                                 & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_bready))) 
                             & (IData)(vlSelf->ysyx_25040109_top__DOT__clint_bvalid))));
    bufp->fullBit(oldp+383,((0x10010000U == vlSelf->ysyx_25040109_top__DOT__mem_araddr)));
    bufp->fullBit(oldp+384,((0x10010004U == vlSelf->ysyx_25040109_top__DOT__mem_araddr)));
    bufp->fullBit(oldp+385,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__aw_seen));
    bufp->fullBit(oldp+386,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__w_seen));
    bufp->fullIData(oldp+387,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__wdata_latched),32);
    bufp->fullIData(oldp+388,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__awaddr_latched),32);
    bufp->fullBit(oldp+389,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__ar_fire));
    bufp->fullBit(oldp+390,((((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h5bc4d2f1__0) 
                              & ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target)) 
                                 & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rready))) 
                             & (IData)(vlSelf->ysyx_25040109_top__DOT__uart_rvalid))));
    bufp->fullBit(oldp+391,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__aw_fire));
    bufp->fullBit(oldp+392,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__w_fire));
    bufp->fullBit(oldp+393,((((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_ha390e7a0__0) 
                              & ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
                                 & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_bready))) 
                             & (IData)(vlSelf->ysyx_25040109_top__DOT__uart_bvalid))));
    bufp->fullIData(oldp+394,(((IData)(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__w_fire)
                                ? vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__wdata_unused
                                : vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__wdata_latched)),32);
    bufp->fullBit(oldp+395,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__err_rlast));
    bufp->fullCData(oldp+396,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__err_rlen_cnt),8);
    bufp->fullCData(oldp+397,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__state),2);
    bufp->fullCData(oldp+398,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target),2);
    bufp->fullCData(oldp+399,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target),2);
    bufp->fullBit(oldp+400,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_err));
    bufp->fullBit(oldp+401,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_err));
    bufp->fullBit(oldp+402,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__aw_done));
    bufp->fullBit(oldp+403,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__w_done));
    bufp->fullBit(oldp+404,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__err_rvalid));
    bufp->fullBit(oldp+405,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__err_bvalid));
    bufp->fullBit(oldp+406,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__aw_simple_ok));
    bufp->fullBit(oldp+407,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_ar_uart));
    bufp->fullBit(oldp+408,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_ar_sram));
    bufp->fullBit(oldp+409,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_ar_clint));
    bufp->fullBit(oldp+410,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_aw_uart));
    bufp->fullBit(oldp+411,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_aw_sram));
    bufp->fullBit(oldp+412,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_aw_clint));
    bufp->fullBit(oldp+413,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem_wvalid) 
                             & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_wready))));
    bufp->fullBit(oldp+414,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem_rvalid) 
                             & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rready))));
    bufp->fullBit(oldp+415,(vlSelf->clk));
    bufp->fullBit(oldp+416,(vlSelf->rst));
    bufp->fullIData(oldp+417,(vlSelf->p_count_number),32);
    bufp->fullIData(oldp+418,(vlSelf->inst),32);
    bufp->fullIData(oldp+419,(vlSelf->pc),32);
    bufp->fullIData(oldp+420,(vlSelf->a0_out),32);
    bufp->fullBit(oldp+421,(vlSelf->inst_wb_complete));
    bufp->fullBit(oldp+422,(vlSelf->is_load_out));
    bufp->fullBit(oldp+423,(vlSelf->is_store_out));
    bufp->fullBit(oldp+424,(vlSelf->is_ecall_out));
    bufp->fullCData(oldp+425,(vlSelf->opcode_out),7);
    bufp->fullIData(oldp+426,(vlSelf->dmem_raddr_out),32);
    bufp->fullIData(oldp+427,(vlSelf->dmem_waddr_out),32);
    bufp->fullBit(oldp+428,((0x6fU == (IData)(vlSelf->opcode_out))));
    bufp->fullBit(oldp+429,((0x37U == (IData)(vlSelf->opcode_out))));
    bufp->fullBit(oldp+430,((0x17U == (IData)(vlSelf->opcode_out))));
    bufp->fullBit(oldp+431,((0x73U == (IData)(vlSelf->opcode_out))));
    bufp->fullCData(oldp+432,(0U),8);
    bufp->fullCData(oldp+433,(2U),3);
    bufp->fullCData(oldp+434,(1U),2);
    bufp->fullIData(oldp+435,(0U),32);
    bufp->fullBit(oldp+436,(0U));
    bufp->fullCData(oldp+437,(0U),4);
    bufp->fullCData(oldp+438,(0U),2);
    bufp->fullCData(oldp+439,(1U),4);
    bufp->fullBit(oldp+440,(0U));
    bufp->fullBit(oldp+441,(1U));
    bufp->fullSData(oldp+442,(0x341U),12);
    bufp->fullSData(oldp+443,(0x342U),12);
    bufp->fullCData(oldp+444,(0U),5);
    bufp->fullCData(oldp+445,(1U),5);
    bufp->fullCData(oldp+446,(2U),5);
    bufp->fullCData(oldp+447,(3U),5);
    bufp->fullCData(oldp+448,(4U),5);
    bufp->fullCData(oldp+449,(5U),5);
    bufp->fullCData(oldp+450,(6U),5);
    bufp->fullCData(oldp+451,(7U),5);
    bufp->fullCData(oldp+452,(8U),5);
    bufp->fullCData(oldp+453,(9U),5);
    bufp->fullCData(oldp+454,(0xaU),5);
    bufp->fullCData(oldp+455,(0xbU),5);
    bufp->fullCData(oldp+456,(0xcU),5);
    bufp->fullCData(oldp+457,(0xdU),5);
    bufp->fullCData(oldp+458,(0xeU),5);
    bufp->fullCData(oldp+459,(0xfU),5);
    bufp->fullCData(oldp+460,(2U),2);
    bufp->fullIData(oldp+461,(8U),32);
    bufp->fullIData(oldp+462,(7U),32);
    bufp->fullIData(oldp+463,(0x20U),32);
    bufp->fullIData(oldp+464,(1U),32);
    bufp->fullIData(oldp+465,(0x27U),32);
    bufp->fullIData(oldp+466,(8U),32);
    bufp->fullCData(oldp+467,(0U),3);
    bufp->fullCData(oldp+468,(1U),3);
    bufp->fullCData(oldp+469,(3U),3);
    bufp->fullCData(oldp+470,(4U),3);
    bufp->fullCData(oldp+471,(5U),3);
    bufp->fullCData(oldp+472,(6U),3);
    bufp->fullIData(oldp+473,(5U),32);
    bufp->fullSData(oldp+474,(0x300U),12);
    bufp->fullSData(oldp+475,(0x305U),12);
    bufp->fullBit(oldp+476,(1U));
    bufp->fullBit(oldp+477,(1U));
    bufp->fullBit(oldp+478,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_w_busy));
    bufp->fullBit(oldp+479,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_busy));
    bufp->fullCData(oldp+480,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_w_delay_cnt),5);
    bufp->fullCData(oldp+481,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_delay_cnt),5);
    bufp->fullIData(oldp+482,(5U),32);
    bufp->fullCData(oldp+483,(0x10U),5);
    bufp->fullCData(oldp+484,(0x12U),5);
    bufp->fullIData(oldp+485,(0x10010000U),32);
    bufp->fullCData(oldp+486,(3U),2);
    bufp->fullIData(oldp+487,(0x80000000U),32);
    bufp->fullIData(oldp+488,(0x87ffffffU),32);
    bufp->fullIData(oldp+489,(0x10000000U),32);
    bufp->fullIData(oldp+490,(0x10000008U),32);
    bufp->fullIData(oldp+491,(0x10010004U),32);
}
