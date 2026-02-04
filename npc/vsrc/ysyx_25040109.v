module ysyx_25040109 (
    input  clock,
    input  reset,
    input  io_interrupt,


    input         io_master_awready,
    output        io_master_awvalid,
    output [3:0]  io_master_awid,
    output [31:0] io_master_awaddr,
    output [7:0]  io_master_awlen,
    output [2:0]  io_master_awsize,
    output [1:0]  io_master_awburst,
    input         io_master_wready,
    output        io_master_wvalid,
    output [31:0] io_master_wdata,
    output [3:0]  io_master_wstrb,
    output        io_master_wlast,
    output        io_master_bready,
    input         io_master_bvalid,
    input  [3:0]  io_master_bid,
    input  [1:0]  io_master_bresp,
    input         io_master_arready,
    output        io_master_arvalid,
    output [3:0]  io_master_arid,
    output [31:0] io_master_araddr,
    output [7:0]  io_master_arlen,
    output [2:0]  io_master_arsize,
    output [1:0]  io_master_arburst,
    output        io_master_rready,
    input         io_master_rvalid,
    input  [3:0]  io_master_rid,
    input  [31:0] io_master_rdata,
    input  [1:0]  io_master_rresp,
    input         io_master_rlast
);

    /* verilator lint_off UNUSED */
    wire _unused_interrupt = io_interrupt;
    /* verilator lint_on UNUSED */

    // imem
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
    wire [3:0]  imem_arid;
    wire [3:0]  imem_rid;
    wire        imem_rlast;

    /* verilator lint_off UNUSED */
    // imem write (unused)
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

    // dmem
    wire [31:0] dmem_araddr;
    wire        dmem_arvalid;
    wire        dmem_arready;
    wire [31:0] dmem_rdata;
    wire        dmem_rvalid;
    wire        dmem_rready;
    wire [1:0]  dmem_rresp;
    wire [3:0]  dmem_arid;
    wire [3:0]  dmem_rid;
    wire        dmem_rlast;
    wire [7:0]  dmem_arlen;
    wire [2:0]  dmem_arsize;
    wire [1:0]  dmem_arburst;

    wire        dmem_awvalid;
    wire        dmem_awready;
    wire [31:0] dmem_awaddr;
    wire [3:0]  dmem_awid;
    wire        dmem_wvalid;
    wire        dmem_wready;
    wire [31:0] dmem_wdata;
    wire [3:0]  dmem_wstrb;
    wire        dmem_wlast;
    wire [1:0]  dmem_bresp;
    wire [3:0]  dmem_bid;
    wire        dmem_bvalid;
    wire        dmem_bready;
    wire [7:0]  dmem_awlen;
    wire [2:0]  dmem_awsize;
    wire [1:0]  dmem_awburst;

    // arbiter <-> SoC AXI master
    wire        mem_arvalid;
    wire        mem_arready;
    wire [31:0] mem_araddr;
    wire        mem_rvalid;
    wire        mem_rready;
    wire [31:0] mem_rdata;
    wire [1:0]  mem_rresp;
    wire [3:0]  mem_arid;
    wire [3:0]  mem_rid;
    wire        mem_rlast;
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
    wire        mem_bvalid;
    wire        mem_bready;
    wire [1:0]  mem_bresp;
    wire [3:0]  mem_bid;
    wire [7:0]  mem_awlen;
    wire [2:0]  mem_awsize;
    wire [1:0]  mem_awburst;

    // unused imem write channel inputs
    assign imem_awready = 1'b0;
    assign imem_wready  = 1'b0;
    assign imem_bvalid  = 1'b0;
    assign imem_bresp   = 2'b00;
    assign imem_bid     = 4'b0;

    /* verilator lint_off UNUSED */
    wire [31:0] dbg_inst;
    wire [31:0] dbg_pc;
    wire [31:0] dbg_a0_out;
    wire        dbg_inst_wb_complete;
    wire        dbg_is_load;
    wire        dbg_is_store;
    wire        dbg_is_ecall;
    wire [6:0]  dbg_opcode;
    /* verilator lint_on UNUSED */

    // CPU
    ysyx_25040109_CPU cpu (
        .clk(clock),
        .rst(reset),
        .p_count_number(32'b0),

        .imem_arvalid(imem_arvalid),
        .imem_arready(imem_arready),
        .imem_rvalid(imem_rvalid),
        .imem_rready(imem_rready),
        .imem_araddr(imem_araddr),
        .imem_rdata(imem_rdata),
        .imem_rresp(imem_rresp),
        .imem_awaddr(imem_awaddr),
        .imem_awvalid(imem_awvalid),
        .imem_awready(imem_awready),
        .imem_wdata(imem_wdata),
        .imem_wstr(imem_wstr),
        .imem_wready(imem_wready),
        .imem_wvalid(imem_wvalid),
        .imem_bready(imem_bready),
        .imem_bvalid(imem_bvalid),
        .imem_bresp(imem_bresp),
        .imem_awid(imem_awid),
        .imem_wlast(imem_wlast),
        .imem_bid(imem_bid),
        .imem_arlen(imem_arlen),
        .imem_arsize(imem_arsize),
        .imem_arburst(imem_arburst),
        .imem_arid(imem_arid),
        .imem_rid(imem_rid),
        .imem_rlast(imem_rlast),

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

        .dmem_awvalid(dmem_awvalid),
        .dmem_awready(dmem_awready),
        .dmem_awaddr(dmem_awaddr),
        .dmem_awid(dmem_awid),
        .dmem_wvalid(dmem_wvalid),
        .dmem_wready(dmem_wready),
        .dmem_wdata(dmem_wdata),
        .dmem_wstrb(dmem_wstrb),
        .dmem_wlast(dmem_wlast),
        .dmem_bresp(dmem_bresp),
        .dmem_bid(dmem_bid),
        .dmem_bvalid(dmem_bvalid),
        .dmem_bready(dmem_bready),
        .dmem_awlen(dmem_awlen),
        .dmem_awsize(dmem_awsize),
        .dmem_awburst(dmem_awburst),

        .inst(dbg_inst),
        .pc(dbg_pc),
        .a0_out(dbg_a0_out),
        .inst_wb_complete(dbg_inst_wb_complete),
        .is_load_out(dbg_is_load),
        .is_store_out(dbg_is_store),
        .is_ecall_out(dbg_is_ecall),
        .opcode_out(dbg_opcode)
    );

    // arbiter: imem + dmem -> single AXI master
    arbiter u_arbiter (
        .clk(clock),
        .rst(reset),

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
        .mem_arid(mem_arid),
        .mem_rid(mem_rid),
        .mem_rlast(mem_rlast),
        .mem_arlen(mem_arlen),
        .mem_arsize(mem_arsize),
        .mem_arburst(mem_arburst),
        .mem_awlen(mem_awlen),
        .mem_awsize(mem_awsize),
        .mem_awburst(mem_awburst)
    );

    // Map arbiter AXI to SoC io_master
    assign io_master_arvalid = mem_arvalid;
    assign mem_arready       = io_master_arready;
    assign io_master_araddr  = mem_araddr;
    assign io_master_arid    = mem_arid;
    assign io_master_arlen   = mem_arlen;
    assign io_master_arsize  = mem_arsize;
    assign io_master_arburst = mem_arburst;
    assign mem_rvalid        = io_master_rvalid;
    assign io_master_rready  = mem_rready;
    assign mem_rdata         = io_master_rdata;
    assign mem_rresp         = io_master_rresp;
    assign mem_rid           = io_master_rid;
    assign mem_rlast         = io_master_rlast;

    assign io_master_awvalid = mem_awvalid;
    assign mem_awready       = io_master_awready;
    assign io_master_awaddr  = mem_awaddr;
    assign io_master_awid    = mem_awid;
    assign io_master_awlen   = mem_awlen;
    assign io_master_awsize  = mem_awsize;
    assign io_master_awburst = mem_awburst;

    assign io_master_wvalid  = mem_wvalid;
    assign mem_wready        = io_master_wready;
    assign io_master_wdata   = mem_wdata;
    assign io_master_wstrb   = mem_wstrb;
    assign io_master_wlast   = mem_wlast;

    assign mem_bvalid        = io_master_bvalid;
    assign io_master_bready  = mem_bready;
    assign mem_bresp         = io_master_bresp;
    assign mem_bid           = io_master_bid;

endmodule
