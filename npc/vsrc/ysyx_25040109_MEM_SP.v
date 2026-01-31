module ysyx_25040109_MEM_SP (
    input clk,
    input rst,

    // 单端口存储器接口（来自仲裁器）
    input        mem_arvalid,
    output       mem_arready,
    input [31:0] mem_araddr,
    output [31:0] mem_rdata,
    output       mem_rvalid,
    input        mem_rready,
    output [1:0]  mem_rresp,

    input        mem_awvalid,
    output       mem_awready,
    input [31:0] mem_awaddr,
    input        mem_wvalid,
    output       mem_wready,
    input [31:0] mem_wdata,
    input [3:0]  mem_wstrb,
    output       mem_bvalid,
    input        mem_bready,
    output [1:0] mem_bresp

`ifdef SYNTHESIS
    ,
    input [31:0] yosys_mem_rdata
`endif
);

    /* verilator lint_off UNUSED */
    wire        imem_arready_unused;
    wire [31:0] imem_rdata_unused;
    wire        imem_rvalid_unused;
    wire [1:0]  imem_rresp_unused;
    wire        imem_awready_unused;
    wire        imem_wready_unused;
    wire        imem_bvalid_unused;
    wire [1:0]  imem_bresp_unused;
    /* verilator lint_on UNUSED */

    // 复用原 MEM 的 dmem 端口实现单端口存储器
    ysyx_25040109_MEM mem (
        .clk(clk),
        .rst(rst),

        // imem 端口空置
        .imem_araddr(32'b0),
        .imem_arvalid(1'b0),
        .imem_arready(imem_arready_unused),
        .imem_rdata(imem_rdata_unused),
        .imem_rvalid(imem_rvalid_unused),
        .imem_rready(1'b0),
        .imem_rresp(imem_rresp_unused),

        .imem_awaddr(32'b0),
        .imem_awvalid(1'b0),
        .imem_awready(imem_awready_unused),
        .imem_wdata(32'b0),
        .imem_wstr(4'b0),
        .imem_wready(imem_wready_unused),
        .imem_wvalid(1'b0),
        .imem_bready(1'b0),
        .imem_bvalid(imem_bvalid_unused),
        .imem_bresp(imem_bresp_unused),

        // dmem 端口映射为单端口
        .dmem_araddr(mem_araddr),
        .dmem_arvalid(mem_arvalid),
        .dmem_arready(mem_arready),
        .dmem_rdata(mem_rdata),
        .dmem_rvalid(mem_rvalid),
        .dmem_rready(mem_rready),
        .dmem_rresp(mem_rresp),

        .dmem_awaddr(mem_awaddr),
        .dmem_awvalid(mem_awvalid),
        .dmem_awready(mem_awready),
        .dmem_wdata(mem_wdata),
        .dmem_wstrb(mem_wstrb),
        .dmem_wvalid(mem_wvalid),
        .dmem_wready(mem_wready),

        .dmem_bresp(mem_bresp),
        .dmem_bvalid(mem_bvalid),
        .dmem_bready(mem_bready)

`ifdef SYNTHESIS
        ,
        .yosys_imem_rdata(32'b0),
        .yosys_dmem_rdata(yosys_mem_rdata)
`endif
    );

endmodule
