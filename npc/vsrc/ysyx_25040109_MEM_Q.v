module ysyx_25040109_MEM_Q (
    input clock,
    input reset,

    // 单端口存储器接口（来自交叉开关）
    input        mem_arvalid,
    output       mem_arready,
    input [31:0] mem_araddr,
    output [31:0] mem_rdata,
    output       mem_rvalid,
    input        mem_rready,
    output [1:0]  mem_rresp,
    input [3:0]   mem_arid,
    output [3:0] mem_rid,
    output        mem_rlast,
    input [7:0]   mem_arlen,
    input [2:0]   mem_arsize,
    input [1:0]   mem_arburst,

    input        mem_awvalid,
    output       mem_awready,
    input [31:0] mem_awaddr,
    input [3:0]  mem_awid,
    input        mem_wvalid,
    output       mem_wready,
    input [31:0] mem_wdata,
    input [3:0]  mem_wstrb,
    input        mem_wlast,
    output       mem_bvalid,
    input        mem_bready,
    output [1:0] mem_bresp,
    output [3:0] mem_bid,
    input [7:0]  mem_awlen,
    input [2:0]  mem_awsize,
    input [1:0]  mem_awburst

`ifdef SYNTHESIS
    ,
    input [31:0] yosys_mem_rdata
`endif
);

    // Read queue (depth 1)
    reg        rdq_valid;
    reg [31:0] rdq_araddr;
    reg [3:0]  rdq_arid;
    reg [7:0]  rdq_arlen;
    reg [2:0]  rdq_arsize;
    reg [1:0]  rdq_arburst;

    // Write queue (depth 1, AW/W captured)
    reg        wrq_aw_valid;
    reg        wrq_w_valid;
    reg [31:0] wrq_awaddr;
    reg [3:0]  wrq_awid;
    reg [7:0]  wrq_awlen;
    reg [2:0]  wrq_awsize;
    reg [1:0]  wrq_awburst;
    reg [31:0] wrq_wdata;
    reg [3:0]  wrq_wstrb;
    reg        wrq_wlast;

    reg        rd_inflight;
    reg        wr_inflight;
    reg        rd_ar_done;
    reg        wr_aw_done;
    reg        wr_w_done;
    reg        last_grant; // 0:read last, 1:write last

    wire wrq_full = wrq_aw_valid && wrq_w_valid;


    wire can_accept_ar = !rdq_valid && !rd_inflight;
    wire can_accept_aw = !wrq_aw_valid && !wrq_w_valid && !wr_inflight;
    wire can_accept_w  = (wrq_aw_valid || (mem_awvalid && mem_awready)) && !wrq_w_valid && !wr_inflight;

    assign mem_arready = can_accept_ar;
    assign mem_awready = can_accept_aw;
    assign mem_wready  = can_accept_w;

    // Internal memory interface
    wire        m_arvalid;
    wire        m_arready;
    wire [31:0] m_araddr;
    wire [7:0]  m_arlen;
    wire [2:0]  m_arsize;
    wire [1:0]  m_arburst;
    wire [3:0]  m_arid;
    wire        m_rvalid;
    wire        m_rready;
    wire [31:0] m_rdata;
    wire [1:0]  m_rresp;
    wire [3:0]  m_rid;
    wire        m_rlast;

    wire        m_awvalid;
    wire        m_awready;
    wire [31:0] m_awaddr;
    wire [3:0]  m_awid;
    wire [7:0]  m_awlen;
    wire [2:0]  m_awsize;
    wire [1:0]  m_awburst;
    wire        m_wvalid;
    wire        m_wready;
    wire [31:0] m_wdata;
    wire [3:0]  m_wstrb;
    wire        m_wlast;
    wire        m_bvalid;
    wire        m_bready;
    wire [1:0]  m_bresp;
    wire [3:0]  m_bid;

    // only one inflight to MEM at a time
    always @(posedge clock) begin
        if (reset) begin
            rdq_valid <= 1'b0;
            wrq_aw_valid <= 1'b0;
            wrq_w_valid <= 1'b0;
            rd_inflight <= 1'b0;
            wr_inflight <= 1'b0;
            rd_ar_done <= 1'b0;
            wr_aw_done <= 1'b0;
            wr_w_done <= 1'b0;
            last_grant <= 1'b0;
        end else begin
            // Capture read request
            if (mem_arvalid && mem_arready) begin
                rdq_valid  <= 1'b1;
                rdq_araddr <= mem_araddr;
                rdq_arid   <= mem_arid;
                rdq_arlen  <= mem_arlen;
                rdq_arsize <= mem_arsize;
                rdq_arburst<= mem_arburst;
            end

            // Capture write address
            if (mem_awvalid && mem_awready) begin
                wrq_aw_valid <= 1'b1;
                wrq_awaddr   <= mem_awaddr;
                wrq_awid     <= mem_awid;
                wrq_awlen    <= mem_awlen;
                wrq_awsize   <= mem_awsize;
                wrq_awburst  <= mem_awburst;
            end

            // Capture write data
            if (mem_wvalid && mem_wready) begin
                wrq_w_valid <= 1'b1;
                wrq_wdata   <= mem_wdata;
                wrq_wstrb   <= mem_wstrb;
                wrq_wlast   <= mem_wlast;
            end

            // Dispatch to MEM when idle
            if (!rd_inflight && !wr_inflight) begin
                if (rdq_valid && wrq_full) begin
                    if (last_grant) begin
                        rd_inflight <= 1'b1;
                        rd_ar_done <= 1'b0;
                        last_grant <= 1'b0;
                    end else begin
                        wr_inflight <= 1'b1;
                        wr_aw_done <= 1'b0;
                        wr_w_done <= 1'b0;
                        last_grant <= 1'b1;
                    end
                end else if (rdq_valid) begin
                    rd_inflight <= 1'b1;
                    rd_ar_done <= 1'b0;
                    last_grant <= 1'b0;
                end else if (wrq_full) begin
                    wr_inflight <= 1'b1;
                    wr_aw_done <= 1'b0;
                    wr_w_done <= 1'b0;
                    last_grant <= 1'b1;
                end
            end

            // Read inflight tracking
            if (rd_inflight && !rd_ar_done && m_arvalid && m_arready) begin
                rd_ar_done <= 1'b1;
            end
            if (rd_inflight && m_rvalid && m_rready && m_rlast) begin
                rd_inflight <= 1'b0;
                rd_ar_done <= 1'b0;
                rdq_valid <= 1'b0;
            end

            // Write inflight tracking
            if (wr_inflight && !wr_aw_done && m_awvalid && m_awready) begin
                wr_aw_done <= 1'b1;
            end
            if (wr_inflight && !wr_w_done && m_wvalid && m_wready && m_wlast) begin
                wr_w_done <= 1'b1;
            end
            if (wr_inflight && m_bvalid && m_bready) begin
                wr_inflight <= 1'b0;
                wr_aw_done <= 1'b0;
                wr_w_done <= 1'b0;
                wrq_aw_valid <= 1'b0;
                wrq_w_valid <= 1'b0;
            end
        end
    end

    // Drive internal MEM signals
    assign m_arvalid = rd_inflight && !rd_ar_done;
    assign m_araddr  = rdq_araddr;
    assign m_arid    = rdq_arid;
    assign m_arlen   = rdq_arlen;
    assign m_arsize  = rdq_arsize;
    assign m_arburst = rdq_arburst;

    assign m_awvalid = wr_inflight && !wr_aw_done;
    assign m_awaddr  = wrq_awaddr;
    assign m_awid    = wrq_awid;
    assign m_awlen   = wrq_awlen;
    assign m_awsize  = wrq_awsize;
    assign m_awburst = wrq_awburst;

    assign m_wvalid  = wr_inflight && !wr_w_done;
    assign m_wdata   = wrq_wdata;
    assign m_wstrb   = wrq_wstrb;
    assign m_wlast   = wrq_wlast;

    // Forward responses to upstream only when inflight
    assign mem_rvalid = rd_inflight ? m_rvalid : 1'b0;
    assign mem_rdata  = rd_inflight ? m_rdata  : 32'b0;
    assign mem_rresp  = rd_inflight ? m_rresp  : 2'b0;
    assign mem_rid    = rd_inflight ? m_rid    : 4'b0;
    assign mem_rlast  = rd_inflight ? m_rlast  : 1'b0;
    assign m_rready   = rd_inflight && mem_rready;

    assign mem_bvalid = wr_inflight ? m_bvalid : 1'b0;
    assign mem_bresp  = wr_inflight ? m_bresp  : 2'b0;
    assign mem_bid    = wr_inflight ? m_bid    : 4'b0;
    assign m_bready   = wr_inflight && mem_bready;

    // Unused imem ports
    /* verilator lint_off UNUSED */
    wire        imem_arready_unused;
    wire [31:0] imem_rdata_unused;
    wire        imem_rvalid_unused;
    wire [1:0]  imem_rresp_unused;
    wire [3:0]  imem_rid_unused;
    wire        imem_rlast_unused;
    wire        imem_awready_unused;
    wire        imem_wready_unused;
    wire        imem_bvalid_unused;
    wire [1:0]  imem_bresp_unused;
    wire [3:0]  imem_bid_unused;
    /* verilator lint_on UNUSED */

    // Instantiate the original MEM using dmem port
    ysyx_25040109_MEM mem (
        .clock(clock),
        .reset(reset),

        // imem unused
        .imem_araddr(32'b0),
        .imem_arvalid(1'b0),
        .imem_arready(imem_arready_unused),
        .imem_rdata(imem_rdata_unused),
        .imem_rvalid(imem_rvalid_unused),
        .imem_rready(1'b0),
        .imem_rresp(imem_rresp_unused),
        .imem_arid(4'b0),
        .imem_rid(imem_rid_unused),
        .imem_rlast(imem_rlast_unused),
        .imem_arlen(8'b0),
        .imem_arsize(3'b0),
        .imem_arburst(2'b0),

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
        .imem_awid(4'b0),
        .imem_wlast(1'b0),
        .imem_bid(imem_bid_unused),

        // dmem mapped to internal signals
        .dmem_araddr(m_araddr),
        .dmem_arvalid(m_arvalid),
        .dmem_arready(m_arready),
        .dmem_rdata(m_rdata),
        .dmem_rvalid(m_rvalid),
        .dmem_rready(m_rready),
        .dmem_rresp(m_rresp),
        .dmem_arid(m_arid),
        .dmem_rid(m_rid),
        .dmem_rlast(m_rlast),
        .dmem_arlen(m_arlen),
        .dmem_arsize(m_arsize),
        .dmem_arburst(m_arburst),

        .dmem_awaddr(m_awaddr),
        .dmem_awvalid(m_awvalid),
        .dmem_awready(m_awready),
        .dmem_awid(m_awid),
        .dmem_awlen(m_awlen),
        .dmem_awsize(m_awsize),
        .dmem_awburst(m_awburst),
        .dmem_wdata(m_wdata),
        .dmem_wstrb(m_wstrb),
        .dmem_wvalid(m_wvalid),
        .dmem_wready(m_wready),
        .dmem_wlast(m_wlast),

        .dmem_bresp(m_bresp),
        .dmem_bvalid(m_bvalid),
        .dmem_bready(m_bready),
        .dmem_bid(m_bid)

`ifdef SYNTHESIS
        ,
        .yosys_imem_rdata(32'b0),
        .yosys_dmem_rdata(yosys_mem_rdata)
`endif
    );

endmodule
