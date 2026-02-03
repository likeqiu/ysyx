module ysyx_25040109_IFU (
    input           clk,
    input           rst,

    // 来自 MEM
    input  [31:0]   imem_rdata,
    input           mem_valid,
    output          ifu_ready_to_mem, // ready 给 MEM

    // 去往 IDU
    input           idu_ready,
    output [31:0]   inst_ifu,
    output          ifu_valid_to_idu,
    
    /* verilator lint_off UNUSED */    
    output [31:0] imem_awaddr,
    output        imem_awvalid,
    input         imem_awready,
    output [31:0] imem_wdata,
    output [3:0]  imem_wstr,
    input         imem_wready,
    output        imem_wvalid,
    output        imem_bready,
    input         imem_bvalid,
    input [1:0]   imem_bresp,
    output [3:0]  imem_awid,
    output        imem_wlast,
    input  [3:0]  imem_bid
    /* verilator lint_off UNUSED */
);

    

    ysyx_25040109_hanshake u_ifu_hanshake (
        .clk(clk),
        .rst(rst),
        .imem_rdata(imem_rdata),
        .mem_valid(mem_valid),
        .ifu_ready_to_mem(ifu_ready_to_mem),
        .idu_ready(idu_ready),
        .inst_ifu(inst_ifu),
        .ifu_valid_to_idu(ifu_valid_to_idu)
    );


    assign imem_awvalid = 1'b0;
    assign imem_wvalid  = 1'b0;
    assign imem_bready  = 1'b0;
    assign imem_awaddr  = 32'b0;
    assign imem_wdata   = 32'b0;
    assign imem_wstr    = 4'b0;
    assign imem_awid    = 4'b0;
    assign imem_wlast   = 1'b0;

    /* verilator lint_off UNUSED */
    wire [3:0] imem_bid_unused = imem_bid;
    /* verilator lint_on UNUSED */

endmodule
