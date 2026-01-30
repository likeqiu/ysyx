module ysyx_25040109_top (
    input clk,
    input rst,
    input [31:0] p_count_number,
    
`ifdef SYNTHESIS
    input [31:0] yosys_imem_rdata,
    input [31:0] yosys_dmem_rdata,
`endif

    output [31:0] inst,
    output [31:0] pc,
    output [31:0] a0_out,

    // difftest
    output inst_wb_complete,
    output is_load_out,
    output is_store_out,
    output is_ecall_out,
    output [6:0] opcode_out,
    output [31:0] dmem_raddr_out,
    output [31:0] dmem_waddr_out
);

    
    wire [31:0] imem_araddr;
    wire        imem_arvalid;
    wire        imem_arready;
    wire [31:0] imem_rdata;
    wire        imem_rvalid;
    wire        imem_rready;
    wire [1:0]  imem_rresp;

    wire [31:0] imem_awaddr;
    wire        imem_awvalid;
    wire        imem_awready;
    wire [31:0] imem_wdata;
    wire [3:0]  imem_wstr;
    wire        imem_wready;
    wire        imem_wvalid;
    wire        imem_bready;
    wire        imem_bvalid;
    wire [1:0]  imem_bresp;

    wire [31:0] dmem_araddr;
    wire        dmem_arvalid;
    wire        dmem_arready;
    wire [31:0] dmem_rdata;
    wire        dmem_rvalid;
    wire        dmem_rready;
    wire        dmem_awvalid;
    wire        dmem_awready;
    wire [31:0] dmem_awaddr;
    wire        dmem_wvalid;
    wire [31:0] dmem_wdata;
    wire [3:0]  dmem_wstrb;
    wire        dmem_wen;
    wire        dmem_wready;
    wire [1:0]  dmem_rresp;
    wire [1:0]  dmem_bresp;
    wire        dmem_bvalid;
    wire        dmem_bready;

    // difftest 地址导出
    assign dmem_raddr_out = dmem_araddr;
    assign dmem_waddr_out = dmem_awaddr;



    
    // CPU
    ysyx_25040109_CPU cpu (
        .clk(clk),
        .rst(rst),
        .p_count_number(p_count_number),

        // imem
        .imem_araddr(imem_araddr),
        .imem_arvalid(imem_arvalid),
        .imem_arready(imem_arready),
        .imem_rdata(imem_rdata),
        .imem_rvalid(imem_rvalid),
        .imem_rready(imem_rready),
        .imem_rresp(imem_rresp),
                
        .imem_awaddr(imem_awaddr),
        .imem_awvalid(imem_awvalid),
        .imem_awready(imem_awready),
        .imem_wdata(imem_wdata),
        .imem_wvalid(imem_wvalid),
        .imem_wready(imem_wready),
        .imem_bresp(imem_bresp),
        .imem_bvalid(imem_bvalid),
        .imem_bready(imem_bready),
        .imem_wstr(imem_wstr),

        // dmem
        .dmem_araddr(dmem_araddr),
        .dmem_arvalid(dmem_arvalid),
        .dmem_arready(dmem_arready),
        .dmem_rdata(dmem_rdata),
        .dmem_rvalid(dmem_rvalid),
        .dmem_rready(dmem_rready),
        .dmem_awvalid(dmem_awvalid),
        .dmem_awready(dmem_awready),
        .dmem_awaddr(dmem_awaddr),
        .dmem_wvalid(dmem_wvalid),
        .dmem_wdata(dmem_wdata),
        .dmem_wstrb(dmem_wstrb),
        .dmem_wen(dmem_wen),
        .dmem_wready(dmem_wready),

        // debug
        .inst(inst),
        .pc(pc),
        .a0_out(a0_out),

        // difftest
        .inst_wb_complete(inst_wb_complete),
        .is_load_out(is_load_out),
        .is_store_out(is_store_out),
        .is_ecall_out(is_ecall_out),
        .opcode_out(opcode_out),

        .dmem_rresp(dmem_rresp),
        .dmem_bresp(dmem_bresp),
        .dmem_bvalid(dmem_bvalid),
        .dmem_bready(dmem_bready)
    );

    // MEM
    ysyx_25040109_MEM mem (
        .clk(clk),
        .rst(rst),

        // imem
        .imem_araddr(imem_araddr),
        .imem_arvalid(imem_arvalid),
        .imem_arready(imem_arready),
        .imem_rdata(imem_rdata),
        .imem_rvalid(imem_rvalid),
        .imem_rready(imem_rready),
        .imem_rresp(imem_rresp),

        .imem_awaddr(imem_awaddr),
        .imem_awvalid(imem_awvalid),
        .imem_awready(imem_awready),
        .imem_wdata(imem_wdata),
        .imem_wvalid(imem_wvalid),
        .imem_wready(imem_wready),
        .imem_bresp(imem_bresp),
        .imem_bvalid(imem_bvalid),
        .imem_bready(imem_bready),
        .imem_wstr(imem_wstr),

        // dmem
        .dmem_araddr(dmem_araddr),
        .dmem_arvalid(dmem_arvalid),
        .dmem_arready(dmem_arready),
        .dmem_rdata(dmem_rdata),
        .dmem_rvalid(dmem_rvalid),
        .dmem_rready(dmem_rready),
        .dmem_awvalid(dmem_awvalid),
        .dmem_awready(dmem_awready),
        .dmem_awaddr(dmem_awaddr),
        .dmem_wvalid(dmem_wvalid),
        .dmem_wdata(dmem_wdata),
        .dmem_wstrb(dmem_wstrb),
        .dmem_wen(dmem_wen),
        .dmem_wready(dmem_wready),


        .dmem_rresp(dmem_rresp),
        .dmem_bresp(dmem_bresp),
        .dmem_bvalid(dmem_bvalid),
        .dmem_bready(dmem_bready)


`ifdef SYNTHESIS
        ,
        .yosys_imem_rdata(yosys_imem_rdata),
        .yosys_dmem_rdata(yosys_dmem_rdata)
`endif
    );

endmodule
