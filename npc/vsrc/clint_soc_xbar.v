module clint_soc_xbar (
    input clock,
    input reset,

    // upstream
    input        in_arvalid,
    output       in_arready,
    input [31:0] in_araddr,
    output       in_rvalid,
    input        in_rready,
    output [31:0] in_rdata,
    output [1:0]  in_rresp,
    input [3:0]  in_arid,
    output  [3:0] in_rid,
    output        in_rlast, 
    input [7:0]  in_arlen,
    input [2:0]  in_arsize,
    input [1:0]  in_arburst,

    input        in_awvalid,
    output       in_awready,
    input [31:0] in_awaddr,
    input [3:0]  in_awid,
    input        in_wvalid,
    output       in_wready,
    input [31:0] in_wdata,
    input [3:0]  in_wstrb,
    input        in_wlast,
    output       in_bvalid,
    input        in_bready,
    output [1:0] in_bresp,
    output [3:0] in_bid,
    input [7:0]  in_awlen,
    input [2:0]  in_awsize,
    input [1:0]  in_awburst,

    // downstream: soc
    output       s_arvalid,
    input        s_arready,
    output [31:0] s_araddr,
    input        s_rvalid,
    output       s_rready,
    input [31:0] s_rdata,
    input [1:0]  s_rresp,
    output [3:0] s_arid,
    input [3:0] s_rid,
    input       s_rlast,
    output [7:0] s_arlen,
    output [2:0] s_arsize,
    output [1:0] s_arburst,

    output       s_awvalid,
    input        s_awready,
    output [31:0] s_awaddr,
    output [3:0] s_awid,
    output       s_wvalid,
    input        s_wready,
    output [31:0] s_wdata,
    output [3:0]  s_wstrb,
    output        s_wlast,
    input        s_bvalid,
    output       s_bready,
    input [1:0]  s_bresp,
    input [3:0]  s_bid,
    output [7:0] s_awlen,
    output [2:0] s_awsize,
    output [1:0] s_awburst,
    

    output       c_arvalid,
    input        c_arready,
    output [31:0] c_araddr,
    input        c_rvalid,
    output       c_rready,
    input [31:0] c_rdata,
    input [1:0]  c_rresp,
    output [3:0] c_arid,
    input [3:0]  c_rid,
    input        c_rlast,
    output [7:0] c_arlen,
    output [2:0] c_arsize,
    output [1:0] c_arburst,


    output       c_awvalid,
    input        c_awready,
    output [31:0] c_awaddr,
    output [3:0] c_awid,
    output       c_wvalid,
    input        c_wready,
    output [31:0] c_wdata,
    output [3:0]  c_wstrb,
    output        c_wlast,
    input        c_bvalid,
    output       c_bready,
    input [1:0]  c_bresp,
    input [3:0]  c_bid,
    output [7:0] c_awlen,
    output [2:0] c_awsize,
    output [1:0] c_awburst
);

    assign s_arid = in_arid;
    assign c_arid = in_arid;
    assign s_arlen = in_arlen;
    assign s_arsize = in_arsize;
    assign s_arburst = in_arburst;
    assign c_arlen = in_arlen;
    assign c_arsize = in_arsize;
    assign c_arburst = in_arburst;

    assign in_rid = rd_err ? rd_id_latched : 
                    (rd_target == T_SRAM ? s_rid :
                     rd_target == T_CLINT? c_rid : 4'b0);

    assign in_rlast = rd_err ? err_rlast :
                      (rd_target == T_SRAM ? s_rlast :
                       rd_target == T_CLINT? c_rlast   : 1'b0);

    reg err_rlast;
    reg [7:0] err_rlen_cnt;
    reg [3:0] rd_id_latched;
    reg [3:0] wr_id_latched;

    /* verilator lint_off UNUSED */
    localparam [1:0] RESP_OKAY   = 2'b00;
        /* verilator lint_off UNUSED */
    localparam [1:0] RESP_DECERR = 2'b11;//未命中任何设备


    localparam [31:0] CLINT_LO_ADDR     = 32'h10010000;
    localparam [31:0] CLINT_HI_ADDR     = 32'h10010004;

    //目标
    localparam [1:0] T_SRAM = 2'd0;
    localparam [1:0] T_CLINT= 2'd2 ;
    localparam [1:0] T_INV  = 2'd3;


    
    localparam [1:0] RD_IDLE  = 2'd0;
    localparam [1:0] RD_RESP  = 2'd1;
    localparam [1:0] WR_IDLE  = 2'd0;
    localparam [1:0] WR_DATA  = 2'd1;
    localparam [1:0] WR_RESP  = 2'd2;
    reg [1:0] rd_state;
    reg [1:0] wr_state;
    reg [1:0] rd_target;
    reg [1:0] wr_target;
    reg       rd_err;
    reg       wr_err;
    reg       aw_done;
    reg       w_done;
    reg       err_rvalid;
    reg       err_bvalid;
    reg       rd_pending;
    reg       wr_pending;

    wire ar_simple_ok    = (in_arlen == 8'd0) && (in_arsize == 3'b010) && (in_arburst == 2'b01);
    wire aw_simple_ok    = (in_awlen == 8'd0) && (in_awsize == 3'b010) && (in_awburst == 2'b01);
    wire ar_is_clint  = ((in_araddr == CLINT_LO_ADDR) || (in_araddr == CLINT_HI_ADDR));
    wire aw_is_clint  = ((in_awaddr == CLINT_LO_ADDR) || (in_awaddr == CLINT_HI_ADDR));
    wire hit_ar_clint = ar_is_clint && ar_simple_ok;
    wire hit_aw_clint = aw_is_clint && aw_simple_ok;
    wire hit_ar_soc   = !ar_is_clint;  // all non-CLINT goes to SoC
    wire hit_aw_soc   = !aw_is_clint;



    wire in_ar_fire = in_arvalid && in_arready;
    wire in_aw_fire = in_awvalid && in_awready;
    wire in_w_fire  = in_wvalid  && in_wready;
    wire in_r_fire  = in_rvalid  && in_rready;
    wire in_b_fire  = in_bvalid  && in_bready;

    assign in_arready = (rd_state == RD_IDLE) ?
                        (hit_ar_soc ? s_arready :
                        hit_ar_clint ? c_arready : 1'b1) : 1'b0;

    assign in_awready = (wr_state == WR_IDLE) ?
                        (hit_aw_soc ? s_awready :
                        hit_aw_clint ? c_awready : 1'b1) : 1'b0;

    assign in_wready  = (wr_state == WR_DATA) ?
                        (wr_err ? 1'b1 :
                        (wr_target == T_SRAM ? s_wready :
                         wr_target == T_CLINT ? c_wready : 1'b0)) : 1'b0;

    assign s_arvalid = (rd_state == RD_IDLE && in_arvalid && hit_ar_soc);
    assign c_arvalid = (rd_state == RD_IDLE && in_arvalid && hit_ar_clint);
    assign s_araddr  = in_araddr;
    assign c_araddr  = in_araddr;

    assign s_awvalid = (wr_state == WR_IDLE && in_awvalid && hit_aw_soc);
    assign c_awvalid = (wr_state == WR_IDLE && in_awvalid && hit_aw_clint);
    assign s_awaddr  = in_awaddr;
    assign c_awaddr  = in_awaddr;
    assign s_awid    = in_awid;
    assign c_awid    = in_awid;
    assign s_awlen   = in_awlen;
    assign s_awsize  = in_awsize;
    assign s_awburst = in_awburst;
    assign c_awlen   = in_awlen;
    assign c_awsize  = in_awsize;
    assign c_awburst = in_awburst;

    assign s_wvalid = (wr_state == WR_DATA && !wr_err && wr_target == T_SRAM) ? in_wvalid : 1'b0;
    assign c_wvalid = (wr_state == WR_DATA && !wr_err && wr_target == T_CLINT) ? in_wvalid : 1'b0;
    assign s_wdata  = in_wdata;
    assign c_wdata  = in_wdata;
    assign s_wstrb  = in_wstrb;
    assign c_wstrb  = in_wstrb;
    assign s_wlast  = in_wlast;
    assign c_wlast  = in_wlast;

    assign s_rready = (rd_state == RD_RESP && !rd_err && rd_target == T_SRAM) ? in_rready : 1'b0;
    assign c_rready = (rd_state == RD_RESP && !rd_err && rd_target == T_CLINT) ? in_rready : 1'b0;

    assign s_bready = (wr_state == WR_RESP && !wr_err && wr_target == T_SRAM) ? in_bready : 1'b0;
    assign c_bready = (wr_state == WR_RESP && !wr_err && wr_target == T_CLINT) ? in_bready : 1'b0;

    assign in_rvalid = (rd_state == RD_RESP && rd_pending) ?
                       (rd_err ? err_rvalid :
                       (rd_target == T_SRAM ? s_rvalid :
                        rd_target == T_CLINT ? c_rvalid : 1'b0)) : 1'b0;
    assign in_rdata  = rd_err ? 32'b0 :
                       (rd_target == T_SRAM ? s_rdata :
                        rd_target == T_CLINT ? c_rdata : 32'b0);
    assign in_rresp  = rd_err ? RESP_DECERR :
                       (rd_target == T_SRAM ? s_rresp :
                        rd_target == T_CLINT ? c_rresp : RESP_DECERR);

    assign in_bvalid = (wr_state == WR_RESP && wr_pending) ?
                       (wr_err ? err_bvalid :
                       (wr_target == T_SRAM ? s_bvalid :
                        wr_target == T_CLINT? c_bvalid : 1'b0)) : 1'b0;
    assign in_bresp  = wr_err ? RESP_DECERR :
                       (wr_target == T_SRAM ? s_bresp :
                        wr_target == T_CLINT ? c_bresp : RESP_DECERR);
    assign in_bid    = wr_err ? wr_id_latched :
                       (wr_target == T_SRAM ? s_bid :
                        wr_target == T_CLINT ? c_bid : 4'b0);

    always @(posedge clock) begin
        if (reset) begin
            rd_state <= RD_IDLE;
            wr_state <= WR_IDLE;
            rd_target <= T_INV;
            wr_target <= T_INV;
            rd_err <= 1'b0;
            wr_err <= 1'b0;
            aw_done <= 1'b0;
            w_done <= 1'b0;
            err_rvalid <= 1'b0;
            err_bvalid <= 1'b0;
            err_rlast  <= 1'b0;
            err_rlen_cnt <= 8'd0;
            rd_id_latched <= 4'b0;
            wr_id_latched <= 4'b0;
            rd_pending <= 1'b0;
            wr_pending <= 1'b0;
        end else begin
            // Read FSM
            case (rd_state)
                RD_IDLE: begin
                    err_rvalid <= 1'b0;
                    err_rlast  <= 1'b0;
                    err_rlen_cnt <= 8'd0;
                    if (in_ar_fire) begin
                        rd_target <= hit_ar_soc ? T_SRAM :
                                     hit_ar_clint ? T_CLINT : T_INV;
                        rd_err <= !(hit_ar_soc  || hit_ar_clint);
                        rd_id_latched <= in_arid;
                        rd_pending <= 1'b1;

                        if (!(hit_ar_soc  || hit_ar_clint)) begin
                            err_rvalid <= 1'b1;
                            err_rlen_cnt <= in_arlen;
                            err_rlast <= (in_arlen == 8'd0);
                        end
                        rd_state <= RD_RESP;
                    end
                end
                RD_RESP: begin
                    if (rd_err) begin
                        if (in_r_fire) begin
                            if (err_rlen_cnt == 8'd0) begin
                                err_rvalid <= 1'b0;
                                err_rlast  <= 1'b0;
                                rd_pending <= 1'b0;
                                rd_state <= RD_IDLE;
                            end else begin
                                err_rlen_cnt <= err_rlen_cnt - 1'b1;
                                err_rlast <= (err_rlen_cnt == 8'd1);
                            end
                        end
                    end else begin
                        if (in_r_fire && in_rlast) begin
                            rd_pending <= 1'b0;
                            rd_state <= RD_IDLE;
                        end
                    end
                end
                default: rd_state <= RD_IDLE;
            endcase

            // Write FSM
            case (wr_state)
                WR_IDLE: begin
                    err_bvalid <= 1'b0;
                    aw_done <= 1'b0;
                    w_done <= 1'b0;
                    if (in_aw_fire) begin
                        wr_target <= hit_aw_soc ? T_SRAM :
                                     hit_aw_clint ? T_CLINT : T_INV;
                        wr_err <= !(hit_aw_soc || hit_aw_clint);
                        wr_id_latched <= in_awid;
                        aw_done <= 1'b1;
                        wr_state <= WR_DATA;
                    end
                end
                WR_DATA: begin
                    if (in_w_fire && in_wlast) begin
                        w_done <= 1'b1;
                    end
                    if (aw_done && w_done) begin
                        if (wr_err) begin
                            err_bvalid <= 1'b1;
                        end
                        wr_pending <= 1'b1;
                        wr_state <= WR_RESP;
                    end
                end
                WR_RESP: begin
                    if (in_b_fire) begin
                        err_bvalid <= 1'b0;
                        wr_pending <= 1'b0;
                        wr_state <= WR_IDLE;
                    end
                end
                default: wr_state <= WR_IDLE;
            endcase
        end
    end

endmodule
