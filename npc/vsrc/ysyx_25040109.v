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
    input         io_master_rlast,

    output        io_slave_awready,
    input         io_slave_awvalid,
    input  [3:0]  io_slave_awid,
    input  [31:0] io_slave_awaddr,
    input  [7:0]  io_slave_awlen,
    input  [2:0]  io_slave_awsize,
    input  [1:0]  io_slave_awburst,
    output        io_slave_wready,
    input         io_slave_wvalid,
    input  [31:0] io_slave_wdata,
    input  [3:0]  io_slave_wstrb,
    input         io_slave_wlast,
    input         io_slave_bready,
    output        io_slave_bvalid,
    output [3:0]  io_slave_bid,
    output [1:0]  io_slave_bresp,
    output        io_slave_arready,
    input         io_slave_arvalid,
    input  [3:0]  io_slave_arid,
    input  [31:0] io_slave_araddr,
    input  [7:0]  io_slave_arlen,
    input  [2:0]  io_slave_arsize,
    input  [1:0]  io_slave_arburst,
    input         io_slave_rready,
    output        io_slave_rvalid,
    output [3:0]  io_slave_rid,
    output [31:0] io_slave_rdata,
    output [1:0]  io_slave_rresp,
    output        io_slave_rlast
);

    /* verilator lint_off UNUSED */
    wire _unused_interrupt = io_interrupt;
    wire _unused_slave = &{
        io_slave_awvalid,
        io_slave_awid,
        io_slave_awaddr,
        io_slave_awlen,
        io_slave_awsize,
        io_slave_awburst,
        io_slave_wvalid,
        io_slave_wdata,
        io_slave_wstrb,
        io_slave_wlast,
        io_slave_bready,
        io_slave_arvalid,
        io_slave_arid,
        io_slave_araddr,
        io_slave_arlen,
        io_slave_arsize,
        io_slave_arburst,
        io_slave_rready
    };
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

    // clint <-> xbar
    wire        clint_arvalid;
    wire        clint_arready;
    wire [31:0] clint_araddr;
    wire        clint_rvalid;
    wire        clint_rready;
    wire [31:0] clint_rdata;
    wire [1:0]  clint_rresp;
    wire [3:0]  clint_arid;
    wire [3:0]  clint_rid;
    wire        clint_rlast;
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
    wire        clint_bvalid;
    wire        clint_bready;
    wire [1:0]  clint_bresp;
    wire [3:0]  clint_bid;
    wire [7:0]  clint_awlen;
    wire [2:0]  clint_awsize;
    wire [1:0]  clint_awburst;

    // SoC write channel from xbar (before AW/W joiner)
    wire        soc_awvalid;
    wire        soc_awready;
    wire [31:0] soc_awaddr;
    wire [3:0]  soc_awid;
    wire [7:0]  soc_awlen;
    wire [2:0]  soc_awsize;
    wire [1:0]  soc_awburst;
    wire        soc_wvalid;
    wire        soc_wready;
    wire [31:0] soc_wdata;
    wire [3:0]  soc_wstrb;
    wire        soc_wlast;
    wire        soc_bvalid;
    wire        soc_bready;
    wire [1:0]  soc_bresp;
    wire [3:0]  soc_bid;

    // AW/W joiner to satisfy AXI4RAM same-cycle handshake
    reg         soc_aw_buf_valid;
    reg         soc_w_buf_valid;
    reg         soc_wr_inflight;
    reg [31:0]  soc_aw_buf_addr;
    reg [3:0]   soc_aw_buf_id;
    reg [7:0]   soc_aw_buf_len;
    reg [2:0]   soc_aw_buf_size;
    reg [1:0]   soc_aw_buf_burst;
    reg [31:0]  soc_w_buf_data;
    reg [3:0]   soc_w_buf_strb;
    reg         soc_w_buf_last;
    wire        soc_aw_accept = soc_awvalid && soc_awready;
    wire        soc_w_accept  = soc_wvalid && soc_wready;
    wire        soc_issue_req = soc_aw_buf_valid && soc_w_buf_valid && !soc_wr_inflight;
    wire        soc_aw_fire   = io_master_awvalid && io_master_awready;
    wire        soc_w_fire    = io_master_wvalid && io_master_wready;
    wire        soc_b_fire    = io_master_bvalid && io_master_bready;

    assign soc_awready = !soc_aw_buf_valid && !soc_wr_inflight;
    assign soc_wready  = !soc_w_buf_valid && !soc_wr_inflight;

    assign io_master_awvalid = soc_issue_req;
    assign io_master_awaddr  = soc_aw_buf_addr;
    assign io_master_awid    = soc_aw_buf_id;
    assign io_master_awlen   = soc_aw_buf_len;
    assign io_master_awsize  = soc_aw_buf_size;
    assign io_master_awburst = soc_aw_buf_burst;
    assign io_master_wvalid  = soc_issue_req;
    assign io_master_wdata   = soc_w_buf_data;
    assign io_master_wstrb   = soc_w_buf_strb;
    assign io_master_wlast   = soc_w_buf_last;
    assign io_master_bready  = soc_bready;

    assign soc_bvalid = soc_wr_inflight ? io_master_bvalid : 1'b0;
    assign soc_bresp  = io_master_bresp;
    assign soc_bid    = io_master_bid;

    always @(posedge clock) begin
        if (reset) begin
            soc_aw_buf_valid <= 1'b0;
            soc_w_buf_valid <= 1'b0;
            soc_wr_inflight <= 1'b0;
        end else begin
            if (soc_aw_accept) begin
                soc_aw_buf_valid <= 1'b1;
                soc_aw_buf_addr  <= soc_awaddr;
                soc_aw_buf_id    <= soc_awid;
                soc_aw_buf_len   <= soc_awlen;
                soc_aw_buf_size  <= soc_awsize;
                soc_aw_buf_burst <= soc_awburst;
            end
            if (soc_w_accept) begin
                soc_w_buf_valid <= 1'b1;
                soc_w_buf_data  <= soc_wdata;
                soc_w_buf_strb  <= soc_wstrb;
                soc_w_buf_last  <= soc_wlast;
            end
            if (soc_issue_req && soc_aw_fire && soc_w_fire) begin
                soc_aw_buf_valid <= 1'b0;
                soc_w_buf_valid <= 1'b0;
                soc_wr_inflight <= 1'b1;
            end
            if (soc_wr_inflight && soc_b_fire) begin
                soc_wr_inflight <= 1'b0;
            end
        end
    end


    

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
        .clock(clock),
        .reset(reset),
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
        .clock(clock),
        .reset(reset),

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

    // xbar: CLINT vs SoC
    clint_soc_xbar u_clint_soc_xbar (
        .clock(clock),
        .reset(reset),

        // upstream: from arbiter
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

        // downstream: SoC
        .s_arvalid(io_master_arvalid),
        .s_arready(io_master_arready),
        .s_araddr(io_master_araddr),
        .s_rvalid(io_master_rvalid),
        .s_rready(io_master_rready),
        .s_rdata(io_master_rdata),
        .s_rresp(io_master_rresp),
        .s_arid(io_master_arid),
        .s_rid(io_master_rid),
        .s_rlast(io_master_rlast),
        .s_arlen(io_master_arlen),
        .s_arsize(io_master_arsize),
        .s_arburst(io_master_arburst),

        .s_awvalid(soc_awvalid),
        .s_awready(soc_awready),
        .s_awaddr(soc_awaddr),
        .s_awid(soc_awid),
        .s_wvalid(soc_wvalid),
        .s_wready(soc_wready),
        .s_wdata(soc_wdata),
        .s_wstrb(soc_wstrb),
        .s_wlast(soc_wlast),
        .s_bvalid(soc_bvalid),
        .s_bready(soc_bready),
        .s_bresp(soc_bresp),
        .s_bid(soc_bid),
        .s_awlen(soc_awlen),
        .s_awsize(soc_awsize),
        .s_awburst(soc_awburst),

        // downstream: CLINT
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

    // CLINT
    clint u_clint (
        .clock(clock),
        .reset(reset),

        .arvalid(clint_arvalid),
        .arready(clint_arready),
        .araddr(clint_araddr),
        .arlen(clint_arlen),
        .arsize(clint_arsize),
        .arburst(clint_arburst),
        .rvalid(clint_rvalid),
        .rready(clint_rready),
        .rdata(clint_rdata),
        .rresp(clint_rresp),
        .arid(clint_arid),
        .rid(clint_rid),
        .rlast(clint_rlast),

        .awvalid(clint_awvalid),
        .awready(clint_awready),
        .awaddr(clint_awaddr),
        .awid(clint_awid),
        .awlen(clint_awlen),
        .awsize(clint_awsize),
        .awburst(clint_awburst),
        .wvalid(clint_wvalid),
        .wready(clint_wready),
        .wdata(clint_wdata),
        .wstrb(clint_wstrb),
        .wlast(clint_wlast),
        .bvalid(clint_bvalid),
        .bready(clint_bready),
        .bresp(clint_bresp),
        .bid(clint_bid)
    );

    // unused AXI4 slave interface outputs
    assign io_slave_awready  = 1'b0;
    assign io_slave_wready   = 1'b0;
    assign io_slave_bvalid   = 1'b0;
    assign io_slave_bid      = 4'b0;
    assign io_slave_bresp    = 2'b00;
    assign io_slave_arready  = 1'b0;
    assign io_slave_rvalid   = 1'b0;
    assign io_slave_rid      = 4'b0;
    assign io_slave_rdata    = 32'b0;
    assign io_slave_rresp    = 2'b00;
    assign io_slave_rlast    = 1'b0;


    // AXI握手调试输出
    wire dbg_mem_ar_fire = mem_arvalid && mem_arready;
    wire dbg_mem_r_fire  = mem_rvalid  && mem_rready;
    wire dbg_mem_aw_fire = mem_awvalid && mem_awready;
    wire dbg_mem_w_fire  = mem_wvalid  && mem_wready;
    wire dbg_mem_b_fire  = mem_bvalid  && mem_bready; 

    wire dbg_soc_ar_fire = io_master_arvalid && io_master_arready;
    wire dbg_soc_r_fire  = io_master_rvalid  && io_master_rready;
    wire dbg_soc_aw_fire = io_master_awvalid && io_master_awready;
    wire dbg_soc_w_fire  = io_master_wvalid && io_master_wready;
    wire dbg_soc_b_fire  = io_master_bvalid && io_master_bready;

localparam string BULE   = "\033[1;94m";
localparam string GREEN  = "\033[1;92m" ;
localparam string RED    = "\033[1;91m" ;
localparam string PURPLE = "\033[1;95m";
localparam string YELLOW = "\033[1;93m" ;
localparam string RESET  = "\033[0m";

    always @(posedge clock) begin
        if (!reset) begin






            
/*
 
                if (dbg_mem_ar_fire) begin
                $display("%s[AXI][CPU] AR  addr=0x%08h   len=%0d      size=%0d   burst=%0d   arid=0x%h %s \n", BULE, mem_araddr, mem_arlen, mem_arsize, mem_arburst, mem_arid, RESET);
            end

            if (dbg_mem_r_fire) begin
                $display("%s[AXI][CPU] R   data=0x%08h   rresp=%0d    last=%d             rid=0x%h %s\n", GREEN , mem_rdata, mem_rresp, mem_rlast, mem_rid, RESET);
            end
            if (dbg_mem_aw_fire) begin
                $display("%s[AXI][CPU] AW  addr=0x%08h   len=%0d      size=%0d   burst=%0d   awid=0x%h %s \n", YELLOW, mem_awaddr, mem_awlen, mem_awsize, mem_awburst, mem_awid, RESET);
            end
            if (dbg_mem_w_fire) begin
                $display("%s[AXI][CPU] W   data=0x%08h   strb=%b  last=%d     %s\n", PURPLE, mem_wdata, mem_wstrb, mem_wlast, RESET);
            end
            if (dbg_mem_b_fire) begin
                $display("%s[AXI][CPU] B                     bresp=%0d                     bid=0x%h %s\n", RED, mem_bresp, mem_bid, RESET);
            end
*/


/*          
            if (dbg_soc_ar_fire) begin
                $display("%s[AXI][SOC] AR  addr=0x%08h   len=%0d      size=%0d   burst=%0d   arid=0x%h %s \n", BULE, io_master_araddr, io_master_arlen, io_master_arsize, io_master_arburst, io_master_arid, RESET);
            end
            if (dbg_soc_r_fire) begin
                $display("%s[AXI][SOC] R   data=0x%08h   rresp=%0d    last=%d             rid=0x%h %s\n", GREEN , io_master_rdata, io_master_rresp, io_master_rlast, io_master_rid, RESET);
            end
            if (dbg_soc_aw_fire) begin
                $display("%s[AXI][SOC] AW  addr=0x%08h   len=%0d      size=%0d   burst=%0d   awid=0x%h %s \n", YELLOW, io_master_awaddr, io_master_awlen, io_master_awsize, io_master_awburst, io_master_awid, RESET);
            end
            if (dbg_soc_w_fire) begin
                $display("%s[AXI][SOC] W   data=0x%08h   strb=%b  last=%d     %s\n", PURPLE, io_master_wdata, io_master_wstrb, io_master_wlast, RESET);
            end
            if (dbg_soc_b_fire) begin
                $display("%s[AXI][SOC] B                     bresp=%0d                       bid=0x%h %s\n", RED, io_master_bresp, io_master_bid, RESET);
            end
  
            

*/

        end
        
    end


endmodule
