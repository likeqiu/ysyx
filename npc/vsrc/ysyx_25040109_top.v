module ysyx_25040109_top (
    input clock,
    input reset,
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
    wire [7:0]  imem_arlen;
    wire [2:0]  imem_arsize;
    wire [1:0]  imem_arburst;

    /* verilator lint_off UNUSED */
    wire [31:0] imem_awaddr;
    wire        imem_awvalid;
    wire [31:0] imem_wdata;
    wire [3:0]  imem_wstr;
    wire        imem_wvalid;
    wire        imem_bready;
    wire [3:0]  imem_awid;
    wire        imem_wlast;
    /* verilator lint_on UNUSED */

    wire        imem_awready;
    wire        imem_wready;
    wire        imem_bvalid;
    wire [1:0]  imem_bresp;
    wire [3:0]  imem_bid;

    wire [31:0] dmem_araddr;
    wire        dmem_arvalid;
    wire        dmem_arready;
    wire [31:0] dmem_rdata;
    wire        dmem_rvalid;
    wire        dmem_rready;
    wire [7:0]  dmem_arlen;
    wire [2:0]  dmem_arsize;
    wire [1:0]  dmem_arburst;
    wire        dmem_awvalid;
    wire        dmem_awready;
    wire [31:0] dmem_awaddr;
    wire [3:0]  dmem_awid;
    wire        dmem_wvalid;
    wire [31:0] dmem_wdata;
    wire [3:0]  dmem_wstrb;
    wire        dmem_wready;
    wire        dmem_wlast;
    wire [7:0]  dmem_awlen;
    wire [2:0]  dmem_awsize;
    wire [1:0]  dmem_awburst;
    wire [1:0]  dmem_rresp;
    wire [1:0]  dmem_bresp;
    wire        dmem_bvalid;
    wire        dmem_bready;
    wire [3:0]  dmem_bid;

    // 仲裁器 <-> 交叉开关
    wire        mem_arvalid;
    wire        mem_arready;
    wire [31:0] mem_araddr;
    wire        mem_rvalid;
    wire        mem_rready;
    wire [31:0] mem_rdata;
    wire [1:0]  mem_rresp;
    wire [7:0]  mem_arlen;
    wire [2:0]  mem_arsize;
    wire [1:0]  mem_arburst;

    wire        mem_awvalid;
    wire        mem_awready;
    wire [31:0] mem_awaddr;
    wire [3:0]  mem_awid;
    wire        mem_wvalid;
    wire        mem_wready;
    wire [31:0] mem_wdata;
    wire [3:0]  mem_wstrb;
    wire        mem_wlast;
    wire [7:0]  mem_awlen;
    wire [2:0]  mem_awsize;
    wire [1:0]  mem_awburst;
    wire        mem_bvalid;
    wire        mem_bready;
    wire [1:0]  mem_bresp;
    wire [3:0]  mem_bid;

    // 交叉开关 <-> 存储器
    wire        sram_arvalid;
    wire        sram_arready;
    wire [31:0] sram_araddr;
    wire        sram_rvalid;
    wire        sram_rready;
    wire [31:0] sram_rdata;
    wire [1:0]  sram_rresp;
    wire [7:0]  sram_arlen;
    wire [2:0]  sram_arsize;
    wire [1:0]  sram_arburst;

    wire        sram_awvalid;
    wire        sram_awready;
    wire [31:0] sram_awaddr;
    wire [3:0]  sram_awid;
    wire        sram_wvalid;
    wire        sram_wready;
    wire [31:0] sram_wdata;
    wire [3:0]  sram_wstrb;
    wire        sram_wlast;
    wire [7:0]  sram_awlen;
    wire [2:0]  sram_awsize;
    wire [1:0]  sram_awburst;
    wire        sram_bvalid;
    wire        sram_bready;
    wire [1:0]  sram_bresp;
    wire [3:0]  sram_bid;

    // 交叉开关 <-> 串口
    wire        uart_arvalid;
    wire        uart_arready;
    wire [31:0] uart_araddr;
    wire        uart_rvalid;
    wire        uart_rready;
    wire [31:0] uart_rdata;
    wire [1:0]  uart_rresp;
    wire [7:0]  uart_arlen;
    wire [2:0]  uart_arsize;
    wire [1:0]  uart_arburst;

    wire        uart_awvalid;
    wire        uart_awready;
    wire [31:0] uart_awaddr;
    wire [3:0]  uart_awid;
    wire        uart_wvalid;
    wire        uart_wready;
    wire [31:0] uart_wdata;
    wire [3:0]  uart_wstrb;
    wire        uart_wlast;
    wire [7:0]  uart_awlen;
    wire [2:0]  uart_awsize;
    wire [1:0]  uart_awburst;
    wire        uart_bvalid;
    wire        uart_bready;
    wire [1:0]  uart_bresp;
    wire [3:0]  uart_bid;


        
    wire        clint_arvalid;
    wire        clint_arready;
    wire [31:0] clint_araddr;
    wire        clint_rvalid;
    wire        clint_rready;
    wire [31:0] clint_rdata;
    wire [1:0]  clint_rresp;
    wire [7:0]  clint_arlen;
    wire [2:0]  clint_arsize;
    wire [1:0]  clint_arburst;

    wire        clint_awvalid;
    wire        clint_awready;
    wire [31:0] clint_awaddr;
    wire [3:0]  clint_awid;
    wire        clint_wvalid;
    wire        clint_wready;
    wire [31:0] clint_wdata;
    wire [3:0]  clint_wstrb;
    wire        clint_wlast;
    wire [7:0]  clint_awlen;
    wire [2:0]  clint_awsize;
    wire [1:0]  clint_awburst;
    wire        clint_bvalid;
    wire        clint_bready;
    wire [1:0]  clint_bresp;
    wire [3:0]  clint_bid;

    wire [3:0] imem_arid, imem_rid;
    wire       imem_rlast;
    wire [3:0] dmem_arid, dmem_rid;
    wire       dmem_rlast;

    wire [3:0] mem_arid, mem_rid;
    wire       mem_rlast;

    wire [3:0] sram_arid, sram_rid;  wire sram_rlast;
    wire [3:0] uart_arid, uart_rid;  wire uart_rlast;
    wire [3:0] clint_arid, clint_rid; wire clint_rlast;


    // difftest 地址导出
    assign dmem_raddr_out = dmem_araddr;
    assign dmem_waddr_out = dmem_awaddr;

    // imem 写通道未使用，输入侧固定为 0
    assign imem_awready = 1'b0;
    assign imem_wready  = 1'b0;
    assign imem_bvalid  = 1'b0;
    assign imem_bresp   = 2'b00;
    assign imem_bid     = 4'b0;


    
    // CPU
    ysyx_25040109_CPU cpu (
        .clock(clock),
        .reset(reset),
        .p_count_number(p_count_number),

        // imem
        .imem_araddr(imem_araddr),
        .imem_arvalid(imem_arvalid),
        .imem_arready(imem_arready),
        .imem_rdata(imem_rdata),
        .imem_rvalid(imem_rvalid),
        .imem_rready(imem_rready),
        .imem_rresp(imem_rresp),
        .imem_arid(imem_arid),
        .imem_rid(imem_rid),
        .imem_rlast(imem_rlast),
        .imem_arlen(imem_arlen),
        .imem_arsize(imem_arsize),
        .imem_arburst(imem_arburst),
                
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
        .imem_awid(imem_awid),
        .imem_wlast(imem_wlast),
        .imem_bid(imem_bid),

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
        .dmem_awid(dmem_awid),
        .dmem_wlast(dmem_wlast),
        .dmem_bid(dmem_bid),
        .dmem_arid(dmem_arid),
        .dmem_rid(dmem_rid),
        .dmem_rlast(dmem_rlast),
        .dmem_arlen(dmem_arlen),
        .dmem_arsize(dmem_arsize),
        .dmem_arburst(dmem_arburst),
        .dmem_awlen(dmem_awlen),
        .dmem_awsize(dmem_awsize),
        .dmem_awburst(dmem_awburst),

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
        .clock(clock),
        .reset(reset),

        // IFU 读通道
        .imem_arvalid(imem_arvalid),
        .imem_arready(imem_arready),
        .imem_araddr(imem_araddr),
        .imem_rvalid(imem_rvalid),
        .imem_rready(imem_rready),
        .imem_rdata(imem_rdata),
        .imem_rresp(imem_rresp),
        .imem_arid(imem_arid),
        .imem_rid(imem_rid),
        .imem_rlast(imem_rlast),
        .imem_arlen(imem_arlen),
        .imem_arsize(imem_arsize),
        .imem_arburst(imem_arburst),

        // LSU 读通道
        .dmem_arvalid(dmem_arvalid),
        .dmem_arready(dmem_arready),
        .dmem_araddr(dmem_araddr),
        .dmem_rvalid(dmem_rvalid),
        .dmem_rready(dmem_rready),
        .dmem_rdata(dmem_rdata),
        .dmem_rresp(dmem_rresp),
        .dmem_arid(dmem_arid),
        .dmem_rid(dmem_rid),
        .dmem_rlast(dmem_rlast),
        .dmem_arlen(dmem_arlen),
        .dmem_arsize(dmem_arsize),
        .dmem_arburst(dmem_arburst),

        // LSU 写通道
        .dmem_awvalid(dmem_awvalid),
        .dmem_awready(dmem_awready),
        .dmem_awaddr(dmem_awaddr),
        .dmem_awid(dmem_awid),
        .dmem_wvalid(dmem_wvalid),
        .dmem_wready(dmem_wready),
        .dmem_wdata(dmem_wdata),
        .dmem_wstrb(dmem_wstrb),
        .dmem_wlast(dmem_wlast),
        .dmem_bvalid(dmem_bvalid),
        .dmem_bready(dmem_bready),
        .dmem_bresp(dmem_bresp),
        .dmem_bid(dmem_bid),
        .dmem_awlen(dmem_awlen),
        .dmem_awsize(dmem_awsize),
        .dmem_awburst(dmem_awburst),

        // 存储器侧（单端口）
        .mem_arvalid(mem_arvalid),
        .mem_arready(mem_arready),
        .mem_araddr(mem_araddr),
        .mem_rvalid(mem_rvalid),
        .mem_rready(mem_rready),
        .mem_rdata(mem_rdata),
        .mem_rresp(mem_rresp),
        .mem_arid(mem_arid),
        .mem_rid(mem_rid),
        .mem_rlast(mem_rlast),
        .mem_arlen(mem_arlen),
        .mem_arsize(mem_arsize),
        .mem_arburst(mem_arburst),

        .mem_awvalid(mem_awvalid),
        .mem_awready(mem_awready),
        .mem_awaddr(mem_awaddr),
        .mem_awid(mem_awid),
        .mem_wvalid(mem_wvalid),
        .mem_wready(mem_wready),
        .mem_wdata(mem_wdata),
        .mem_wstrb(mem_wstrb),
        .mem_wlast(mem_wlast),
        .mem_bvalid(mem_bvalid),
        .mem_bready(mem_bready),
        .mem_bresp(mem_bresp),
        .mem_bid(mem_bid),
        .mem_awlen(mem_awlen),
        .mem_awsize(mem_awsize),
        .mem_awburst(mem_awburst)
    );

    // 交叉开关：地址译码后分发到存储器或串口
    ysyx_25040109_XBAR xbar (
        .clock(clock),
        .reset(reset),

        // 上游输入
        .in_arvalid(mem_arvalid),
        .in_arready(mem_arready),
        .in_araddr(mem_araddr),
        .in_rvalid(mem_rvalid),
        .in_rready(mem_rready),
        .in_rdata(mem_rdata),
        .in_rresp(mem_rresp),
        .in_arid(mem_arid),
        .in_rid(mem_rid),
        .in_rlast(mem_rlast),
        .in_arlen(mem_arlen),
        .in_arsize(mem_arsize),
        .in_arburst(mem_arburst),

        .in_awvalid(mem_awvalid),
        .in_awready(mem_awready),
        .in_awaddr(mem_awaddr),
        .in_awid(mem_awid),
        .in_wvalid(mem_wvalid),
        .in_wready(mem_wready),
        .in_wdata(mem_wdata),
        .in_wstrb(mem_wstrb),
        .in_wlast(mem_wlast),
        .in_bvalid(mem_bvalid),
        .in_bready(mem_bready),
        .in_bresp(mem_bresp),
        .in_bid(mem_bid),
        .in_awlen(mem_awlen),
        .in_awsize(mem_awsize),
        .in_awburst(mem_awburst),

        // 存储器
        .s_arvalid(sram_arvalid),
        .s_arready(sram_arready),
        .s_araddr(sram_araddr),
        .s_rvalid(sram_rvalid),
        .s_rready(sram_rready),
        .s_rdata(sram_rdata),
        .s_rresp(sram_rresp),
        .s_arid(sram_arid),
        .s_rid(sram_rid),
        .s_rlast(sram_rlast),
        .s_arlen(sram_arlen),
        .s_arsize(sram_arsize),
        .s_arburst(sram_arburst),

        .s_awvalid(sram_awvalid),
        .s_awready(sram_awready),
        .s_awaddr(sram_awaddr),
        .s_awid(sram_awid),
        .s_wvalid(sram_wvalid),
        .s_wready(sram_wready),
        .s_wdata(sram_wdata),
        .s_wstrb(sram_wstrb),
        .s_wlast(sram_wlast),
        .s_bvalid(sram_bvalid),
        .s_bready(sram_bready),
        .s_bresp(sram_bresp),
        .s_bid(sram_bid),
        .s_awlen(sram_awlen),
        .s_awsize(sram_awsize),
        .s_awburst(sram_awburst),

        // 串口
        .u_arvalid(uart_arvalid),
        .u_arready(uart_arready),
        .u_araddr(uart_araddr),
        .u_rvalid(uart_rvalid),
        .u_rready(uart_rready),
        .u_rdata(uart_rdata),
        .u_rresp(uart_rresp),
        .u_arid(uart_arid),
        .u_rid(uart_rid),
        .u_rlast(uart_rlast),
        .u_arlen(uart_arlen),
        .u_arsize(uart_arsize),
        .u_arburst(uart_arburst),

        .u_awvalid(uart_awvalid),
        .u_awready(uart_awready),
        .u_awaddr(uart_awaddr),
        .u_awid(uart_awid),
        .u_wvalid(uart_wvalid),
        .u_wready(uart_wready),
        .u_wdata(uart_wdata),
        .u_wstrb(uart_wstrb),
        .u_wlast(uart_wlast),
        .u_bvalid(uart_bvalid),
        .u_bready(uart_bready),
        .u_bresp(uart_bresp),
        .u_bid(uart_bid),
        .u_awlen(uart_awlen),
        .u_awsize(uart_awsize),
        .u_awburst(uart_awburst),

        // clint
        .c_arvalid(clint_arvalid),
        .c_arready(clint_arready),
        .c_araddr(clint_araddr),
        .c_rvalid(clint_rvalid),
        .c_rready(clint_rready),
        .c_rdata(clint_rdata),
        .c_rresp(clint_rresp),
        .c_arid(clint_arid),
        .c_rid(clint_rid),
        .c_rlast(clint_rlast),
        .c_arlen(clint_arlen),
        .c_arsize(clint_arsize),
        .c_arburst(clint_arburst),

        .c_awvalid(clint_awvalid),
        .c_awready(clint_awready),
        .c_awaddr(clint_awaddr),
        .c_awid(clint_awid),
        .c_wvalid(clint_wvalid),
        .c_wready(clint_wready),
        .c_wdata(clint_wdata),
        .c_wstrb(clint_wstrb),
        .c_wlast(clint_wlast),
        .c_bvalid(clint_bvalid),
        .c_bready(clint_bready),
        .c_bresp(clint_bresp),
        .c_bid(clint_bid),
        .c_awlen(clint_awlen),
        .c_awsize(clint_awsize),
        .c_awburst(clint_awburst)
    );

    // 串口
    uart u_uart (
        .clock(clock),
        .reset(reset),
        .arvalid(uart_arvalid),
        .arready(uart_arready),
        .araddr(uart_araddr),
        .rvalid(uart_rvalid),
        .rready(uart_rready),
        .rdata(uart_rdata),
        .rresp(uart_rresp),
        .arid(uart_arid),
        .rid(uart_rid),
        .rlast(uart_rlast),
        .arlen(uart_arlen),
        .arsize(uart_arsize),
        .arburst(uart_arburst),
        .awvalid(uart_awvalid),
        .awready(uart_awready),
        .awaddr(uart_awaddr),
        .awid(uart_awid),
        .wvalid(uart_wvalid),
        .wready(uart_wready),
        .wdata(uart_wdata),
        .wstrb(uart_wstrb),
        .wlast(uart_wlast),
        .bvalid(uart_bvalid),
        .bready(uart_bready),
        .bresp(uart_bresp),
        .bid(uart_bid),
        .awlen(uart_awlen),
        .awsize(uart_awsize),
        .awburst(uart_awburst)
    );


    clint u_clint (
        .clock(clock),
        .reset(reset),

        .arvalid(clint_arvalid),
        .arready(clint_arready),
        .araddr(clint_araddr),
        .rvalid(clint_rvalid),
        .rready(clint_rready),
        .rdata(clint_rdata),
        .rresp(clint_rresp),
        .arid(clint_arid),
        .rid(clint_rid),
        .rlast(clint_rlast),
        .arlen(clint_arlen),
        .arsize(clint_arsize),
        .arburst(clint_arburst),

        .awvalid(clint_awvalid),
        .awready(clint_awready),
        .awaddr(clint_awaddr),
        .awid(clint_awid),
        .wvalid(clint_wvalid),
        .wready(clint_wready),
        .wdata(clint_wdata),
        .wstrb(clint_wstrb),
        .wlast(clint_wlast),
        .bvalid(clint_bvalid),
        .bready(clint_bready),
        .bresp(clint_bresp),
        .bid(clint_bid),
        .awlen(clint_awlen),
        .awsize(clint_awsize),
        .awburst(clint_awburst)
    );

    // 单端口 MEM（带队列，支持读写并行发起）
    ysyx_25040109_MEM_Q mem (
        .clock(clock),
        .reset(reset),

        // 单端口接口
        .mem_araddr(sram_araddr),
        .mem_arvalid(sram_arvalid),
        .mem_arready(sram_arready),
        .mem_rdata(sram_rdata),
        .mem_rvalid(sram_rvalid),
        .mem_rready(sram_rready),
        .mem_rresp(sram_rresp),
        .mem_arid(sram_arid),
        .mem_rid(sram_rid),
        .mem_rlast(sram_rlast),
        .mem_arlen(sram_arlen),
        .mem_arsize(sram_arsize),
        .mem_arburst(sram_arburst),

        .mem_awaddr(sram_awaddr),
        .mem_awvalid(sram_awvalid),
        .mem_awready(sram_awready),
        .mem_awid(sram_awid),
        .mem_wdata(sram_wdata),
        .mem_wvalid(sram_wvalid),
        .mem_wready(sram_wready),
        .mem_bresp(sram_bresp),
        .mem_bvalid(sram_bvalid),
        .mem_bready(sram_bready),
        .mem_wstrb(sram_wstrb),
        .mem_wlast(sram_wlast),
        .mem_bid(sram_bid),
        .mem_awlen(sram_awlen),
        .mem_awsize(sram_awsize),
        .mem_awburst(sram_awburst)


`ifdef SYNTHESIS
        ,
        .yosys_mem_rdata(yosys_dmem_rdata)
`endif
    );

`ifdef CPU_DEBUG
    // AXI握手调试输出
    wire dbg_mem_ar_fire = mem_arvalid && mem_arready;
    wire dbg_mem_r_fire  = mem_rvalid  && mem_rready;
    wire dbg_mem_aw_fire = mem_awvalid && mem_awready;
    wire dbg_mem_w_fire  = mem_wvalid  && mem_wready;
    wire dbg_mem_b_fire  = mem_bvalid  && mem_bready;

    wire dbg_sram_ar_fire = sram_arvalid && sram_arready;
    wire dbg_sram_r_fire  = sram_rvalid  && sram_rready;
    wire dbg_sram_aw_fire = sram_awvalid && sram_awready;
    wire dbg_sram_w_fire  = sram_wvalid  && sram_wready;
    wire dbg_sram_b_fire  = sram_bvalid  && sram_bready;

    wire dbg_uart_ar_fire = uart_arvalid && uart_arready;
    wire dbg_uart_r_fire  = uart_rvalid  && uart_rready;
    wire dbg_uart_aw_fire = uart_awvalid && uart_awready;
    wire dbg_uart_w_fire  = uart_wvalid  && uart_wready;
    wire dbg_uart_b_fire  = uart_bvalid  && uart_bready;

    wire dbg_clint_ar_fire = clint_arvalid && clint_arready;
    wire dbg_clint_r_fire  = clint_rvalid  && clint_rready;
    wire dbg_clint_aw_fire = clint_awvalid && clint_awready;
    wire dbg_clint_w_fire  = clint_wvalid  && clint_wready;
    wire dbg_clint_b_fire  = clint_bvalid  && clint_bready;

localparam string BULE   = "\033[1;94m";
localparam string GREEN  = "\033[1;92m" ;
localparam string RED    = "\033[1;91m" ;
localparam string PURPLE = "\033[1;95m";
localparam string YELLOW = "\033[1;93m" ;
localparam string RESET  = "\033[0m";


    always @(posedge clock) begin
        if (!reset) begin






            

                if (dbg_mem_ar_fire) begin
                $display("%s[AXI][CPU] AR  addr=0x%08h   len=%0d    size=%0d   burst=%0d   arid=0x%h %s \n", BULE, mem_araddr, mem_arlen, mem_arsize, mem_arburst, mem_arid,RESET);
            end
                
            if (dbg_mem_r_fire) begin
                $display("%s[AXI][CPU] R   data=0x%08h   rresp=%0d  last=%b             rid=0x%h %s\n", GREEN , mem_rdata, mem_rresp, mem_rlast, mem_rid,RESET,);
            end
            if (dbg_mem_aw_fire) begin
                $display("%s[AXI][CPU] AW  addr=0x%08h   len=%0d    size=%0d   burst=%0d   awid=0x%h %s \n", YELLOW, mem_awaddr, mem_awlen, mem_awsize, mem_awburst, mem_awid, RESET);
            end
            if (dbg_mem_w_fire) begin
                $display("%s[AXI][CPU] W   data=0x%08h   strb=%b   last=%b     %s\n", PURPLE, mem_wdata, mem_wstrb, mem_wlast, RESET);
            end
            if (dbg_mem_b_fire) begin
                $display("%s[AXI][CPU] B                     bresp=%0d                     bid=0x%h %s\n", RED, mem_bresp, mem_bid, RESET);
            end
          
            /*
            if (dbg_sram_ar_fire) begin
                $display("[AXI][SRAM] AR  addr=%08h len=%0d size=%0d burst=%0d id=0x%h",  sram_araddr, sram_arlen, sram_arsize, sram_arburst, sram_arid);
            end
            if (dbg_sram_r_fire) begin
                $display("[AXI][SRAM] R   data=%08h resp=%0d last=%d id=0x%h",  sram_rdata, sram_rresp, sram_rlast, sram_rid);
            end
            if (dbg_sram_aw_fire) begin
                $display("[AXI][SRAM] AW  addr=%08h len=%0d size=%0d burst=%0d id=0x%h",  sram_awaddr, sram_awlen, sram_awsize, sram_awburst, sram_awid);
            end
            if (dbg_sram_w_fire) begin
                $display("[AXI][SRAM] W   data=%08h strb=%b last=%d",  sram_wdata, sram_wstrb, sram_wlast);
            end
            if (dbg_sram_b_fire) begin
                $display("[AXI][SRAM] B   resp=%0d id=0x%h",  sram_bresp, sram_bid);
            end
            */
            /*
            if (dbg_uart_ar_fire) begin
                $display("[AXI][UART] AR  addr=%08h len=%0d size=%0d burst=%0d id=0x%h",  uart_araddr, uart_arlen, uart_arsize, uart_arburst, uart_arid);
            end
            if (dbg_uart_r_fire) begin
                $display("[AXI][UART] R   data=%08h resp=%0d last=%d id=0x%h",  uart_rdata, uart_rresp, uart_rlast, uart_rid);
            end
            if (dbg_uart_aw_fire) begin
                $display("[AXI][UART] AW  addr=%08h len=%0d size=%0d burst=%0d id=0x%h",  uart_awaddr, uart_awlen, uart_awsize, uart_awburst, uart_awid);
            end
            if (dbg_uart_w_fire) begin
                $display("[AXI][UART] W   data=%08h strb=%b last=%d",  uart_wdata, uart_wstrb, uart_wlast);
            end
            if (dbg_uart_b_fire) begin
                $display("[AXI][UART] B   resp=%0d id=0x%h",  uart_bresp, uart_bid);
            end
            */

            /*
            if (dbg_clint_ar_fire) begin
                $display("[AXI][CLINT] AR  addr=%08h len=%0d size=%0d burst=%0d id=%0d",  clint_araddr, clint_arlen, clint_arsize, clint_arburst, clint_arid);
            end
            if (dbg_clint_r_fire) begin
                $display("[AXI][CLINT] R   data=%08h resp=%0d last=%b id=%0d",  clint_rdata, clint_rresp, clint_rlast, clint_rid);
            end
            if (dbg_clint_aw_fire) begin
                $display("[AXI][CLINT] AW  addr=%08h len=%0d size=%0d burst=%0d id=%0d",  clint_awaddr, clint_awlen, clint_awsize, clint_awburst, clint_awid);
            end
            if (dbg_clint_w_fire) begin
                $display("[AXI][CLINT] W   data=%08h strb=%1h last=%b",  clint_wdata, clint_wstrb, clint_wlast);
            end
            if (dbg_clint_b_fire) begin
                $display("[AXI][CLINT] B   resp=%0d id=%0d",  clint_bresp, clint_bid);
            end
                */
        end
    end
`endif




    




endmodule
