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

    input        in_awvalid,
    output       in_awready,
    input [31:0] in_awaddr,
    input        in_wvalid,
    output       in_wready,
    input [31:0] in_wdata,
    input [3:0]  in_wstrb,
    output       in_bvalid,
    input        in_bready,
    output [1:0] in_bresp,

    // downstream: sram
    output       s_arvalid,
    input        s_arready,
    output [31:0] s_araddr,
    input        s_rvalid,
    output       s_rready,
    input [31:0] s_rdata,
    input [1:0]  s_rresp,

    output       s_awvalid,
    input        s_awready,
    output [31:0] s_awaddr,
    output       s_wvalid,
    input        s_wready,
    output [31:0] s_wdata,
    output [3:0]  s_wstrb,
    input        s_bvalid,
    output       s_bready,
    input [1:0]  s_bresp,

    // downstream: uart
    output       u_arvalid,
    input        u_arready,
    output [31:0] u_araddr,
    input        u_rvalid,
    output       u_rready,
    input [31:0] u_rdata,
    input [1:0]  u_rresp,

    output       u_awvalid,
    input        u_awready,
    output [31:0] u_awaddr,
    output       u_wvalid,
    input        u_wready,
    output [31:0] u_wdata,
    output [3:0]  u_wstrb,
    input        u_bvalid,
    output       u_bready,
    input [1:0]  u_bresp
);

    /* verilator lint_off UNUSED */
    localparam [1:0] RESP_OKAY   = 2'b00;
        /* verilator lint_off UNUSED */
    localparam [1:0] RESP_DECERR = 2'b11;//未命中任何设备

    //目标
    localparam [1:0] T_SRAM = 2'd0;
    localparam [1:0] T_UART = 2'd1;
    localparam [1:0] T_INV  = 2'd2;


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

    wire hit_ar_uart = (in_araddr[31:12] == 20'h10000);
    wire hit_ar_sram = (in_araddr[31:24] == 8'h80);
    wire hit_aw_uart = (in_awaddr[31:12] == 20'h10000);
    wire hit_aw_sram = (in_awaddr[31:24] == 8'h80);

    wire in_ar_fire = in_arvalid && in_arready;
    wire in_aw_fire = in_awvalid && in_awready;
    wire in_w_fire  = in_wvalid  && in_wready;
    wire in_r_fire  = in_rvalid  && in_rready;
    wire in_b_fire  = in_bvalid  && in_bready;

    assign in_arready = (state == ST_IDLE && !in_awvalid) ?
                        (hit_ar_sram ? s_arready :
                        hit_ar_uart ? u_arready : 1'b1) : 1'b0;

    assign in_awready = (state == ST_IDLE) ?
                        (hit_aw_sram ? s_awready :
                        hit_aw_uart ? u_awready : 1'b1) : 1'b0;

    assign in_wready  = (state == ST_WR) ?
                        (wr_err ? 1'b1 :
                        (wr_target == T_SRAM ? s_wready : u_wready)) : 1'b0;

    assign s_arvalid = (state == ST_IDLE && !in_awvalid && in_arvalid && hit_ar_sram);
    assign u_arvalid = (state == ST_IDLE && !in_awvalid && in_arvalid && hit_ar_uart);
    assign s_araddr  = in_araddr;
    assign u_araddr  = in_araddr;

    assign s_awvalid = (state == ST_IDLE && in_awvalid && hit_aw_sram);
    assign u_awvalid = (state == ST_IDLE && in_awvalid && hit_aw_uart);
    assign s_awaddr  = in_awaddr;
    assign u_awaddr  = in_awaddr;

    assign s_wvalid = (state == ST_WR && !wr_err && wr_target == T_SRAM) ? in_wvalid : 1'b0;
    assign u_wvalid = (state == ST_WR && !wr_err && wr_target == T_UART) ? in_wvalid : 1'b0;
    assign s_wdata  = in_wdata;
    assign u_wdata  = in_wdata;
    assign s_wstrb  = in_wstrb;
    assign u_wstrb  = in_wstrb;

    assign s_rready = (state == ST_RD && !rd_err && rd_target == T_SRAM) ? in_rready : 1'b0;
    assign u_rready = (state == ST_RD && !rd_err && rd_target == T_UART) ? in_rready : 1'b0;

    assign s_bready = (state == ST_B && !wr_err && wr_target == T_SRAM) ? in_bready : 1'b0;
    assign u_bready = (state == ST_B && !wr_err && wr_target == T_UART) ? in_bready : 1'b0;

    assign in_rvalid = (state == ST_RD) ?
                       (rd_err ? err_rvalid :
                       (rd_target == T_SRAM ? s_rvalid : u_rvalid)) : 1'b0;
    assign in_rdata  = rd_err ? 32'b0 :
                       (rd_target == T_SRAM ? s_rdata : u_rdata);
    assign in_rresp  = rd_err ? RESP_DECERR :
                       (rd_target == T_SRAM ? s_rresp : u_rresp);

    assign in_bvalid = (state == ST_B) ?
                       (wr_err ? err_bvalid :
                       (wr_target == T_SRAM ? s_bvalid : u_bvalid)) : 1'b0;
    assign in_bresp  = wr_err ? RESP_DECERR :
                       (wr_target == T_SRAM ? s_bresp : u_bresp);

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
        end else begin
            case (state)
                ST_IDLE: begin
                    err_rvalid <= 1'b0;
                    err_bvalid <= 1'b0;
                    aw_done <= 1'b0;
                    w_done <= 1'b0;
                    if (in_awvalid) begin
                        if (in_aw_fire) begin
                            wr_target <= hit_aw_sram ? T_SRAM :
                                         hit_aw_uart ? T_UART : T_INV;
                            wr_err <= !(hit_aw_sram || hit_aw_uart);
                            aw_done <= 1'b1;
                            state <= ST_WR;
                        end
                    end else if (in_arvalid) begin
                        if (in_ar_fire) begin
                            rd_target <= hit_ar_sram ? T_SRAM :
                                         hit_ar_uart ? T_UART : T_INV;
                            rd_err <= !(hit_ar_sram || hit_ar_uart);
                            if (!(hit_ar_sram || hit_ar_uart)) begin
                                err_rvalid <= 1'b1;
                            end
                            state <= ST_RD;
                        end
                    end
                end
                ST_RD: begin
                    if (rd_err) begin
                        if (in_r_fire) begin
                            err_rvalid <= 1'b0;
                            state <= ST_IDLE;
                        end
                    end else begin
                        if ((rd_target == T_SRAM && s_rvalid && in_rready) ||
                            (rd_target == T_UART && u_rvalid && in_rready)) begin
                            state <= ST_IDLE;
                        end
                    end
                end
                ST_WR: begin
                    if (in_w_fire) begin
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
                            (wr_target == T_UART && u_bvalid && in_bready)) begin
                            state <= ST_IDLE;
                        end
                    end
                end
                default: state <= ST_IDLE;
            endcase
        end
    end

endmodule
