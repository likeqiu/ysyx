module arbiter (
    input  wire        clock,
    input  wire        reset,

    // IFU 读通道
    input  wire        imem_arvalid,
    output wire        imem_arready,
    input  wire [31:0] imem_araddr,
    output wire        imem_rvalid,
    input  wire        imem_rready,
    output wire [31:0] imem_rdata,
    output wire [1:0]  imem_rresp,
    input  wire  [3:0] imem_arid,
    output wire  [3:0] imem_rid,
    output             imem_rlast,
    input  wire [7:0]  imem_arlen,
    input  wire [2:0]  imem_arsize,
    input  wire [1:0]  imem_arburst,

    // LSU 读通道
    input  wire        dmem_arvalid,
    output wire        dmem_arready,
    input  wire [31:0] dmem_araddr,
    output wire        dmem_rvalid,
    input  wire        dmem_rready,
    output wire [31:0] dmem_rdata,
    output wire [1:0]  dmem_rresp,
    input  wire [3:0]  dmem_arid,
    output wire [3:0]  dmem_rid,
    output wire        dmem_rlast,
    input  wire [7:0]  dmem_arlen,
    input  wire [2:0]  dmem_arsize,
    input  wire [1:0]  dmem_arburst,

    // LSU 写通道
    input  wire        dmem_awvalid,
    output wire        dmem_awready,
    input  wire [31:0] dmem_awaddr,
    input  wire [3:0]  dmem_awid,
    input  wire        dmem_wvalid,
    output wire        dmem_wready,
    input  wire [31:0] dmem_wdata,
    input  wire [3:0]  dmem_wstrb,
    input  wire        dmem_wlast,
    output wire        dmem_bvalid,
    input  wire        dmem_bready,
    output wire [1:0]  dmem_bresp,
    output wire [3:0]  dmem_bid,
    input  wire [7:0]  dmem_awlen,
    input  wire [2:0]  dmem_awsize,
    input  wire [1:0]  dmem_awburst,

    // 存储器侧（单端口）
    output wire        mem_arvalid,
    input  wire        mem_arready,
    output wire [31:0] mem_araddr,
    input  wire        mem_rvalid,
    output wire        mem_rready,
    input  wire [31:0] mem_rdata,
    input  wire [1:0]  mem_rresp,

    output wire        mem_awvalid,
    input  wire        mem_awready,
    output wire [31:0] mem_awaddr,
    output wire [3:0]  mem_awid,
    output wire        mem_wvalid,
    input  wire        mem_wready,
    output wire [31:0] mem_wdata,
    output wire [3:0]  mem_wstrb,
    output wire        mem_wlast,
    input  wire        mem_bvalid,
    output wire        mem_bready,
    input  wire [1:0]  mem_bresp,
    input  wire [3:0]  mem_bid,
    output wire [3:0]  mem_arid,
    input  wire [3:0]  mem_rid,
    input              mem_rlast,
    output wire [7:0]  mem_arlen,
    output wire [2:0]  mem_arsize,
    output wire [1:0]  mem_arburst,
    output wire [7:0]  mem_awlen,
    output wire [2:0]  mem_awsize,
    output wire [1:0]  mem_awburst
);

    // Read arbitration
    localparam [2:0] RD_IDLE   = 3'd0;
    localparam [2:0] RD_IFU_AR = 3'd1;
    localparam [2:0] RD_IFU_R  = 3'd2;
    localparam [2:0] RD_LSU_AR = 3'd3;
    localparam [2:0] RD_LSU_R  = 3'd4;

    reg [2:0] rd_state, rd_state_n;

    // Write channel state
    localparam [1:0] WR_IDLE = 2'd0;
    localparam [1:0] WR_AW   = 2'd1;
    localparam [1:0] WR_W    = 2'd2;
    localparam [1:0] WR_B    = 2'd3;

    reg [1:0] wr_state, wr_state_n;

    wire ar_fire = mem_arvalid && mem_arready;
    wire r_fire  = mem_rvalid  && mem_rready && mem_rlast;
    wire aw_fire = mem_awvalid && mem_awready;
    wire w_fire  = mem_wvalid  && mem_wready && mem_wlast;
    wire b_fire  = mem_bvalid  && mem_bready;

    // Read address routing
    assign mem_arvalid = (rd_state == RD_IFU_AR) ? imem_arvalid :
                         (rd_state == RD_LSU_AR) ? dmem_arvalid :
                         1'b0;
    assign mem_araddr  = (rd_state == RD_IFU_AR) ? imem_araddr :
                         (rd_state == RD_LSU_AR) ? dmem_araddr :
                         32'b0;
    assign mem_arid    = (rd_state == RD_IFU_AR) ? imem_arid :
                         (rd_state == RD_LSU_AR) ? dmem_arid : 4'b0;
    assign mem_arlen   = (rd_state == RD_IFU_AR) ? imem_arlen :
                         (rd_state == RD_LSU_AR) ? dmem_arlen : 8'b0;
    assign mem_arsize  = (rd_state == RD_IFU_AR) ? imem_arsize :
                         (rd_state == RD_LSU_AR) ? dmem_arsize : 3'b0;
    assign mem_arburst = (rd_state == RD_IFU_AR) ? imem_arburst :
                         (rd_state == RD_LSU_AR) ? dmem_arburst : 2'b0;

    // Read ready back to masters
    assign imem_arready = (rd_state == RD_IFU_AR) ? mem_arready : 1'b0;
    assign dmem_arready = (rd_state == RD_LSU_AR) ? mem_arready : 1'b0;

    // Read response routing
    assign imem_rvalid = (rd_state == RD_IFU_R) ? mem_rvalid : 1'b0;
    assign imem_rdata  = (rd_state == RD_IFU_R) ? mem_rdata  : 32'b0;
    assign imem_rresp  = (rd_state == RD_IFU_R) ? mem_rresp  : 2'b0;
    assign imem_rid    = (rd_state == RD_IFU_R) ? mem_rid    : 4'b0;
    assign imem_rlast  = (rd_state == RD_IFU_R) ? mem_rlast  : 1'b0;

    assign dmem_rvalid = (rd_state == RD_LSU_R) ? mem_rvalid : 1'b0;
    assign dmem_rdata  = (rd_state == RD_LSU_R) ? mem_rdata  : 32'b0;
    assign dmem_rresp  = (rd_state == RD_LSU_R) ? mem_rresp  : 2'b0;
    assign dmem_rid    = (rd_state == RD_LSU_R) ? mem_rid    : 4'b0;
    assign dmem_rlast  = (rd_state == RD_LSU_R) ? mem_rlast  : 1'b0;

    assign mem_rready  = (rd_state == RD_IFU_R) ? imem_rready :
                         (rd_state == RD_LSU_R) ? dmem_rready : 1'b0;

    // Write channel routing (LSU only)
    assign mem_awvalid = (wr_state == WR_AW) ? dmem_awvalid : 1'b0;
    assign mem_awaddr  = (wr_state == WR_AW) ? dmem_awaddr : 32'b0;
    assign mem_awid    = (wr_state == WR_AW) ? dmem_awid : 4'b0;
    assign mem_awlen   = (wr_state == WR_AW) ? dmem_awlen : 8'b0;
    assign mem_awsize  = (wr_state == WR_AW) ? dmem_awsize : 3'b0;
    assign mem_awburst = (wr_state == WR_AW) ? dmem_awburst : 2'b0;

    assign mem_wvalid = (wr_state == WR_W) ? dmem_wvalid : 1'b0;
    assign mem_wdata  = (wr_state == WR_W) ? dmem_wdata : 32'b0;
    assign mem_wstrb  = (wr_state == WR_W) ? dmem_wstrb : 4'b0;
    assign mem_wlast  = (wr_state == WR_W) ? dmem_wlast : 1'b0;

    // Write ready back to LSU
    assign dmem_awready = (wr_state == WR_AW) ? mem_awready : 1'b0;
    assign dmem_wready  = (wr_state == WR_W) ? mem_wready  : 1'b0;

    // Write response routing
    assign dmem_bvalid = (wr_state == WR_B) ? mem_bvalid : 1'b0;
    assign dmem_bresp  = (wr_state == WR_B) ? mem_bresp  : 2'b0;
    assign dmem_bid    = (wr_state == WR_B) ? mem_bid    : 4'b0;
    assign mem_bready  = (wr_state == WR_B) ? dmem_bready : 1'b0;

    // Read state machine
    always @(*) begin
        rd_state_n = rd_state;
        case (rd_state)
            RD_IDLE: begin
                if (dmem_arvalid) rd_state_n = RD_LSU_AR;
                else if (imem_arvalid) rd_state_n = RD_IFU_AR;
            end
            RD_IFU_AR: begin
                if (ar_fire) rd_state_n = RD_IFU_R;
            end
            RD_IFU_R: begin
                if (r_fire) rd_state_n = RD_IDLE;
            end
            RD_LSU_AR: begin
                if (ar_fire) rd_state_n = RD_LSU_R;
            end
            RD_LSU_R: begin
                if (r_fire) rd_state_n = RD_IDLE;
            end
            default: rd_state_n = RD_IDLE;
        endcase
    end

    // Write state machine
    always @(*) begin
        wr_state_n = wr_state;
        case (wr_state)
            WR_IDLE: begin
                if (dmem_awvalid) wr_state_n = WR_AW;
            end
            WR_AW: begin
                if (aw_fire) wr_state_n = WR_W;
            end
            WR_W: begin
                if (w_fire) wr_state_n = WR_B;
            end
            WR_B: begin
                if (b_fire) wr_state_n = WR_IDLE;
            end
            default: wr_state_n = WR_IDLE;
        endcase
    end

    always @(posedge clock) begin
        if (reset) begin
            rd_state <= RD_IDLE;
            wr_state <= WR_IDLE;
        end else begin
            rd_state <= rd_state_n;
            wr_state <= wr_state_n;
        end
    end

endmodule
