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

    /* verilator lint_off UNUSED */
    wire [31:0] imem_awaddr;
    wire        imem_awvalid;
    wire [31:0] imem_wdata;
    wire [3:0]  imem_wstr;
    wire        imem_wvalid;
    wire        imem_bready;
    /* verilator lint_on UNUSED */

    wire        imem_awready;
    wire        imem_wready;
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
    wire        dmem_wready;
    wire [1:0]  dmem_rresp;
    wire [1:0]  dmem_bresp;
    wire        dmem_bvalid;
    wire        dmem_bready;

    // 仲裁器 <-> 交叉开关
    wire        mem_arvalid;
    wire        mem_arready;
    wire [31:0] mem_araddr;
    wire        mem_rvalid;
    wire        mem_rready;
    wire [31:0] mem_rdata;
    wire [1:0]  mem_rresp;

    wire        mem_awvalid;
    wire        mem_awready;
    wire [31:0] mem_awaddr;
    wire        mem_wvalid;
    wire        mem_wready;
    wire [31:0] mem_wdata;
    wire [3:0]  mem_wstrb;
    wire        mem_bvalid;
    wire        mem_bready;
    wire [1:0]  mem_bresp;

    // 交叉开关 <-> 存储器
    wire        sram_arvalid;
    wire        sram_arready;
    wire [31:0] sram_araddr;
    wire        sram_rvalid;
    wire        sram_rready;
    wire [31:0] sram_rdata;
    wire [1:0]  sram_rresp;

    wire        sram_awvalid;
    wire        sram_awready;
    wire [31:0] sram_awaddr;
    wire        sram_wvalid;
    wire        sram_wready;
    wire [31:0] sram_wdata;
    wire [3:0]  sram_wstrb;
    wire        sram_bvalid;
    wire        sram_bready;
    wire [1:0]  sram_bresp;

    // 交叉开关 <-> 串口
    wire        uart_arvalid;
    wire        uart_arready;
    wire [31:0] uart_araddr;
    wire        uart_rvalid;
    wire        uart_rready;
    wire [31:0] uart_rdata;
    wire [1:0]  uart_rresp;

    wire        uart_awvalid;
    wire        uart_awready;
    wire [31:0] uart_awaddr;
    wire        uart_wvalid;
    wire        uart_wready;
    wire [31:0] uart_wdata;
    wire [3:0]  uart_wstrb;
    wire        uart_bvalid;
    wire        uart_bready;
    wire [1:0]  uart_bresp;

    // difftest 地址导出
    assign dmem_raddr_out = dmem_araddr;
    assign dmem_waddr_out = dmem_awaddr;

    // imem 写通道未使用，输入侧固定为 0
    assign imem_awready = 1'b0;
    assign imem_wready  = 1'b0;
    assign imem_bvalid  = 1'b0;
    assign imem_bresp   = 2'b00;


    
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

    // 仲裁器：IFU + LSU -> 单端口存储器
    arbiter u_arbiter (
        .clk(clk),
        .rst(rst),

        // IFU 读通道
        .imem_arvalid(imem_arvalid),
        .imem_arready(imem_arready),
        .imem_araddr(imem_araddr),
        .imem_rvalid(imem_rvalid),
        .imem_rready(imem_rready),
        .imem_rdata(imem_rdata),
        .imem_rresp(imem_rresp),

        // LSU 读通道
        .dmem_arvalid(dmem_arvalid),
        .dmem_arready(dmem_arready),
        .dmem_araddr(dmem_araddr),
        .dmem_rvalid(dmem_rvalid),
        .dmem_rready(dmem_rready),
        .dmem_rdata(dmem_rdata),
        .dmem_rresp(dmem_rresp),

        // LSU 写通道
        .dmem_awvalid(dmem_awvalid),
        .dmem_awready(dmem_awready),
        .dmem_awaddr(dmem_awaddr),
        .dmem_wvalid(dmem_wvalid),
        .dmem_wready(dmem_wready),
        .dmem_wdata(dmem_wdata),
        .dmem_wstrb(dmem_wstrb),
        .dmem_bvalid(dmem_bvalid),
        .dmem_bready(dmem_bready),
        .dmem_bresp(dmem_bresp),

        // 存储器侧（单端口）
        .mem_arvalid(mem_arvalid),
        .mem_arready(mem_arready),
        .mem_araddr(mem_araddr),
        .mem_rvalid(mem_rvalid),
        .mem_rready(mem_rready),
        .mem_rdata(mem_rdata),
        .mem_rresp(mem_rresp),

        .mem_awvalid(mem_awvalid),
        .mem_awready(mem_awready),
        .mem_awaddr(mem_awaddr),
        .mem_wvalid(mem_wvalid),
        .mem_wready(mem_wready),
        .mem_wdata(mem_wdata),
        .mem_wstrb(mem_wstrb),
        .mem_bvalid(mem_bvalid),
        .mem_bready(mem_bready),
        .mem_bresp(mem_bresp)
    );

    // 交叉开关：地址译码后分发到存储器或串口
    ysyx_25040109_XBAR xbar (
        .clk(clk),
        .rst(rst),

        // 上游输入
        .in_arvalid(mem_arvalid),
        .in_arready(mem_arready),
        .in_araddr(mem_araddr),
        .in_rvalid(mem_rvalid),
        .in_rready(mem_rready),
        .in_rdata(mem_rdata),
        .in_rresp(mem_rresp),

        .in_awvalid(mem_awvalid),
        .in_awready(mem_awready),
        .in_awaddr(mem_awaddr),
        .in_wvalid(mem_wvalid),
        .in_wready(mem_wready),
        .in_wdata(mem_wdata),
        .in_wstrb(mem_wstrb),
        .in_bvalid(mem_bvalid),
        .in_bready(mem_bready),
        .in_bresp(mem_bresp),

        // 存储器
        .s_arvalid(sram_arvalid),
        .s_arready(sram_arready),
        .s_araddr(sram_araddr),
        .s_rvalid(sram_rvalid),
        .s_rready(sram_rready),
        .s_rdata(sram_rdata),
        .s_rresp(sram_rresp),

        .s_awvalid(sram_awvalid),
        .s_awready(sram_awready),
        .s_awaddr(sram_awaddr),
        .s_wvalid(sram_wvalid),
        .s_wready(sram_wready),
        .s_wdata(sram_wdata),
        .s_wstrb(sram_wstrb),
        .s_bvalid(sram_bvalid),
        .s_bready(sram_bready),
        .s_bresp(sram_bresp),

        // 串口
        .u_arvalid(uart_arvalid),
        .u_arready(uart_arready),
        .u_araddr(uart_araddr),
        .u_rvalid(uart_rvalid),
        .u_rready(uart_rready),
        .u_rdata(uart_rdata),
        .u_rresp(uart_rresp),

        .u_awvalid(uart_awvalid),
        .u_awready(uart_awready),
        .u_awaddr(uart_awaddr),
        .u_wvalid(uart_wvalid),
        .u_wready(uart_wready),
        .u_wdata(uart_wdata),
        .u_wstrb(uart_wstrb),
        .u_bvalid(uart_bvalid),
        .u_bready(uart_bready),
        .u_bresp(uart_bresp)
    );

    // 串口
    uart u_uart (
        .clk(clk),
        .rst(rst),
        .arvalid(uart_arvalid),
        .arready(uart_arready),
        .araddr(uart_araddr),
        .rvalid(uart_rvalid),
        .rready(uart_rready),
        .rdata(uart_rdata),
        .rresp(uart_rresp),
        .awvalid(uart_awvalid),
        .awready(uart_awready),
        .awaddr(uart_awaddr),
        .wvalid(uart_wvalid),
        .wready(uart_wready),
        .wdata(uart_wdata),
        .wstrb(uart_wstrb),
        .bvalid(uart_bvalid),
        .bready(uart_bready),
        .bresp(uart_bresp)
    );

    // 单端口 MEM
    ysyx_25040109_MEM_SP mem (
        .clk(clk),
        .rst(rst),

        // 单端口接口
        .mem_araddr(sram_araddr),
        .mem_arvalid(sram_arvalid),
        .mem_arready(sram_arready),
        .mem_rdata(sram_rdata),
        .mem_rvalid(sram_rvalid),
        .mem_rready(sram_rready),
        .mem_rresp(sram_rresp),

        .mem_awaddr(sram_awaddr),
        .mem_awvalid(sram_awvalid),
        .mem_awready(sram_awready),
        .mem_wdata(sram_wdata),
        .mem_wvalid(sram_wvalid),
        .mem_wready(sram_wready),
        .mem_bresp(sram_bresp),
        .mem_bvalid(sram_bvalid),
        .mem_bready(sram_bready),
        .mem_wstrb(sram_wstrb)


`ifdef SYNTHESIS
        ,
        .yosys_mem_rdata(yosys_dmem_rdata)
`endif
    );



    




endmodule
