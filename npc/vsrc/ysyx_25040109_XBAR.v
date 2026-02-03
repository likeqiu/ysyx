module ysyx_25040109_XBAR (
    input clk,
    input rst,

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

    // downstream: sram
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

    // downstream: uart
    output       u_arvalid,
    input        u_arready,
    output [31:0] u_araddr,
    input        u_rvalid,
    output       u_rready,
    input [31:0] u_rdata,
    input [1:0]  u_rresp,
    output [3:0] u_arid,
    input [3:0]  u_rid,
    input         u_rlast,
    output [7:0] u_arlen,
    output [2:0] u_arsize,
    output [1:0] u_arburst,

    output       u_awvalid,
    input        u_awready,
    output [31:0] u_awaddr,
    output [3:0] u_awid,
    output       u_wvalid,
    input        u_wready,
    output [31:0] u_wdata,
    output [3:0]  u_wstrb,
    output        u_wlast,
    input        u_bvalid,
    output       u_bready,
    input [1:0]  u_bresp,
    input [3:0]  u_bid,
    output [7:0] u_awlen,
    output [2:0] u_awsize,
    output [1:0] u_awburst,

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
    assign u_arid = in_arid;
    assign c_arid = in_arid;
    assign s_arlen = in_arlen;
    assign s_arsize = in_arsize;
    assign s_arburst = in_arburst;
    assign u_arlen = in_arlen;
    assign u_arsize = in_arsize;
    assign u_arburst = in_arburst;
    assign c_arlen = in_arlen;
    assign c_arsize = in_arsize;
    assign c_arburst = in_arburst;

    assign in_rid = rd_err ? 4'b0 : 
                    (rd_target == T_SRAM ? s_rid :
                     rd_target == T_UART ? u_rid :
                     rd_target == T_CLINT? c_rid : 4'b0);

    assign in_rlast = rd_err ? err_rlast :
                      (rd_target == T_SRAM ? s_rlast :
                       rd_target == T_UART ? u_rlast :
                       rd_target == T_CLINT? c_rlast   : 1'b0);

    reg err_rlast;
    reg [7:0] err_rlen_cnt;

    /* verilator lint_off UNUSED */
    localparam [1:0] RESP_OKAY   = 2'b00;
        /* verilator lint_off UNUSED */
    localparam [1:0] RESP_DECERR = 2'b11;//未命中任何设备


    localparam [31:0] SRAM_ADDR_BEGIN   = 32'h80000000;
    localparam [31:0] SRAM_ADDR_END     = 32'h87ffffff ;
    localparam [31:0] UART_ADDR_BEGIN   = 32'h10000000;
    localparam [31:0] UART_ADDR_END     = 32'h10000008;
    localparam [31:0] CLINT_LO_ADDR     = 32'h10010000;
    localparam [31:0] CLINT_HI_ADDR     = 32'h10010004;

    //目标
    localparam [1:0] T_SRAM = 2'd0;
    localparam [1:0] T_UART = 2'd1;
    localparam [1:0] T_CLINT= 2'd2 ;
    localparam [1:0] T_INV  = 2'd3;


    localparam [1:0] ST_IDLE = 2'd0;//AR
    localparam [1:0] ST_RD   = 2'd1;//读数据返回态
    localparam [1:0] ST_WR   = 2'd2;//(AW+W)
    localparam [1:0] ST_B    = 2'd3;

    reg [1:0] state;
    reg [1:0] rd_target;
    reg [1:0] wr_target;
    reg       rd_err;
    reg       wr_err;
    reg       aw_done;
    reg       w_done;
    reg       err_rvalid;
    reg       err_bvalid;

    wire ar_simple_ok    = (in_arlen == 8'd0) && (in_arsize == 3'b010) && (in_arburst == 2'b01);
    wire aw_simple_ok    = (in_awlen == 8'd0) && (in_awsize == 3'b010) && (in_awburst == 2'b01);
    wire hit_ar_uart     = (in_araddr[31:0] >= UART_ADDR_BEGIN && in_araddr[31:0] <= UART_ADDR_END) && ar_simple_ok;
    wire hit_ar_sram     = (in_araddr[31:0] >= SRAM_ADDR_BEGIN && in_araddr[31:0] <= SRAM_ADDR_END);
    wire hit_ar_clint    = ((in_araddr[31:0] == CLINT_LO_ADDR) || (in_araddr[31:0] == CLINT_HI_ADDR)) && ar_simple_ok ;
    wire hit_aw_uart     = (in_awaddr[31:0] >= UART_ADDR_BEGIN && in_awaddr[31:0] <= UART_ADDR_END) && aw_simple_ok;
    wire hit_aw_sram     = (in_awaddr[31:0] >= SRAM_ADDR_BEGIN  && in_awaddr[31:0] <= SRAM_ADDR_END);
    wire hit_aw_clint    = ((in_awaddr[31:0] == CLINT_LO_ADDR) || (in_awaddr[31:0] == CLINT_HI_ADDR)) && aw_simple_ok;


    wire in_ar_fire = in_arvalid && in_arready;
    wire in_aw_fire = in_awvalid && in_awready;
    wire in_w_fire  = in_wvalid  && in_wready;
    wire in_r_fire  = in_rvalid  && in_rready;
    wire in_b_fire  = in_bvalid  && in_bready;

    assign in_arready = (state == ST_IDLE && !in_awvalid) ?
                        (hit_ar_sram ? s_arready :
                        hit_ar_uart ? u_arready :
                        hit_ar_clint ? c_arready : 1'b1) : 1'b0;

    assign in_awready = (state == ST_IDLE) ?
                        (hit_aw_sram ? s_awready :
                        hit_aw_uart ? u_awready :
                        hit_aw_clint ? c_awready : 1'b1) : 1'b0;

    assign in_wready  = (state == ST_WR) ?
                        (wr_err ? 1'b1 :
                        (wr_target == T_SRAM ? s_wready :
                         wr_target == T_UART ? u_wready :
                         wr_target == T_CLINT ? c_wready : 1'b0)) : 1'b0;

    assign s_arvalid = (state == ST_IDLE && !in_awvalid && in_arvalid && hit_ar_sram);
    assign u_arvalid = (state == ST_IDLE && !in_awvalid && in_arvalid && hit_ar_uart);
    assign c_arvalid = (state == ST_IDLE && !in_awvalid && in_arvalid && hit_ar_clint);
    assign s_araddr  = in_araddr;
    assign u_araddr  = in_araddr;
    assign c_araddr  = in_araddr;

    assign s_awvalid = (state == ST_IDLE && in_awvalid && hit_aw_sram);
    assign u_awvalid = (state == ST_IDLE && in_awvalid && hit_aw_uart);
    assign c_awvalid = (state == ST_IDLE && in_awvalid && hit_aw_clint);
    assign s_awaddr  = in_awaddr;
    assign u_awaddr  = in_awaddr;
    assign c_awaddr  = in_awaddr;
    assign s_awid    = in_awid;
    assign u_awid    = in_awid;
    assign c_awid    = in_awid;
    assign s_awlen   = in_awlen;
    assign s_awsize  = in_awsize;
    assign s_awburst = in_awburst;
    assign u_awlen   = in_awlen;
    assign u_awsize  = in_awsize;
    assign u_awburst = in_awburst;
    assign c_awlen   = in_awlen;
    assign c_awsize  = in_awsize;
    assign c_awburst = in_awburst;

    assign s_wvalid = (state == ST_WR && !wr_err && wr_target == T_SRAM) ? in_wvalid : 1'b0;
    assign u_wvalid = (state == ST_WR && !wr_err && wr_target == T_UART) ? in_wvalid : 1'b0;
    assign c_wvalid = (state == ST_WR && !wr_err && wr_target == T_CLINT) ? in_wvalid : 1'b0;
    assign s_wdata  = in_wdata;
    assign u_wdata  = in_wdata;
    assign c_wdata  = in_wdata;
    assign s_wstrb  = in_wstrb;
    assign u_wstrb  = in_wstrb;
    assign c_wstrb  = in_wstrb;
    assign s_wlast  = in_wlast;
    assign u_wlast  = in_wlast;
    assign c_wlast  = in_wlast;

    assign s_rready = (state == ST_RD && !rd_err && rd_target == T_SRAM) ? in_rready : 1'b0;
    assign u_rready = (state == ST_RD && !rd_err && rd_target == T_UART) ? in_rready : 1'b0;
    assign c_rready = (state == ST_RD && !rd_err && rd_target == T_CLINT) ? in_rready : 1'b0;

    assign s_bready = (state == ST_B && !wr_err && wr_target == T_SRAM) ? in_bready : 1'b0;
    assign u_bready = (state == ST_B && !wr_err && wr_target == T_UART) ? in_bready : 1'b0;
    assign c_bready = (state == ST_B && !wr_err && wr_target == T_CLINT) ? in_bready : 1'b0;

    assign in_rvalid = (state == ST_RD) ?
                       (rd_err ? err_rvalid :
                       (rd_target == T_SRAM ? s_rvalid :
                        rd_target == T_UART ? u_rvalid :
                        rd_target == T_CLINT ? c_rvalid : 1'b0)) : 1'b0;
    assign in_rdata  = rd_err ? 32'b0 :
                       (rd_target == T_SRAM ? s_rdata :
                        rd_target == T_UART ? u_rdata :
                        rd_target == T_CLINT ? c_rdata : 32'b0);
    assign in_rresp  = rd_err ? RESP_DECERR :
                       (rd_target == T_SRAM ? s_rresp :
                        rd_target == T_UART ? u_rresp :
                        rd_target == T_CLINT ? c_rresp : RESP_DECERR);

    assign in_bvalid = (state == ST_B) ?
                       (wr_err ? err_bvalid :
                       (wr_target == T_SRAM ? s_bvalid :
                        wr_target == T_UART ? u_bvalid :
                        wr_target == T_CLINT ? c_bvalid : 1'b0)) : 1'b0;
    assign in_bresp  = wr_err ? RESP_DECERR :
                       (wr_target == T_SRAM ? s_bresp :
                        wr_target == T_UART ? u_bresp :
                        wr_target == T_CLINT ? c_bresp : RESP_DECERR);
    assign in_bid    = wr_err ? 4'b0 :
                       (wr_target == T_SRAM ? s_bid :
                        wr_target == T_UART ? u_bid :
                        wr_target == T_CLINT ? c_bid : 4'b0);

    always @(posedge clk) begin
        if (rst) begin
            state <= ST_IDLE;
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
        end else begin
            case (state)
                ST_IDLE: begin
                    err_rvalid <= 1'b0;
                    err_bvalid <= 1'b0;
                    err_rlast  <= 1'b0;
                    err_rlen_cnt <= 8'd0;
                    aw_done <= 1'b0;
                    w_done <= 1'b0;
                    if (in_awvalid) begin
                        if (in_aw_fire) begin
                            wr_target <= hit_aw_sram ? T_SRAM :
                                         hit_aw_uart ? T_UART :
                                         hit_aw_clint ? T_CLINT : T_INV;
                            wr_err <= !(hit_aw_sram || hit_aw_uart || hit_aw_clint);
                            aw_done <= 1'b1;
                            state <= ST_WR;
                        end
                    end else if (in_arvalid) begin
                        if (in_ar_fire) begin
                            rd_target <= hit_ar_sram ? T_SRAM :
                                         hit_ar_uart ? T_UART :
                                         hit_ar_clint ? T_CLINT : T_INV;
                            rd_err <= !(hit_ar_sram || hit_ar_uart || hit_ar_clint);
                            if (!(hit_ar_sram || hit_ar_uart || hit_ar_clint)) begin
                                err_rvalid <= 1'b1;
                                err_rlen_cnt <= in_arlen;
                                err_rlast <= (in_arlen == 8'd0);
                            end
                            state <= ST_RD;
                        end
                    end
                end
                ST_RD: begin
                    if (rd_err) begin
                        if (in_r_fire) begin
                            if (err_rlen_cnt == 8'd0) begin
                                err_rvalid <= 1'b0;
                                err_rlast  <= 1'b0;
                                state <= ST_IDLE;
                            end else begin
                                err_rlen_cnt <= err_rlen_cnt - 1'b1;
                                err_rlast <= (err_rlen_cnt == 8'd1);
                            end
                        end
                    end else begin
                        if ((rd_target == T_SRAM && s_rvalid && in_rready && s_rlast) ||
                            (rd_target == T_UART && u_rvalid && in_rready && u_rlast) ||
                            (rd_target == T_CLINT && c_rvalid && in_rready && c_rlast)) begin
                            state <= ST_IDLE;
                        end
                    end
                end
                ST_WR: begin
                    if (in_w_fire && in_wlast) begin
                        w_done <= 1'b1;
                    end
                    if (aw_done && w_done) begin
                        if (wr_err) begin
                            err_bvalid <= 1'b1;
                        end
                        state <= ST_B;
                    end
                end
                ST_B: begin
                    if (wr_err) begin
                        if (in_b_fire) begin
                            err_bvalid <= 1'b0;
                            state <= ST_IDLE;
                        end
                    end else begin
                        if ((wr_target == T_SRAM && s_bvalid && in_bready) ||
                            (wr_target == T_UART && u_bvalid && in_bready) ||
                            (wr_target == T_CLINT && c_bvalid && in_bready)) begin
                            state <= ST_IDLE;
                        end
                    end
                end
                default: state <= ST_IDLE;
            endcase
        end
    end

endmodule
