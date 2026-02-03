module ysyx_25040109_MEM (
    input clk,
    input rst,

    // imem
    input [31:0] imem_araddr,
    input        imem_arvalid,
    output       imem_arready,
    output reg [31:0] imem_rdata,
    output reg   imem_rvalid,
    input        imem_rready,
    output reg [1:0]  imem_rresp,
    input [3:0] imem_arid,
    output [3:0] imem_rid,
    output       imem_rlast,
    input [7:0]  imem_arlen,
    input [2:0]  imem_arsize,
    input [1:0]  imem_arburst,

    /* verilator lint_off UNUSED */
    input [31:0] imem_awaddr,
    input        imem_awvalid,
    output       imem_awready,
    input [31:0] imem_wdata,
    input [3:0]  imem_wstr,
    output       imem_wready,
    input        imem_wvalid,
    input        imem_bready,
    output       imem_bvalid,
    output [1:0] imem_bresp,
    input [3:0]  imem_awid,
    input        imem_wlast,
    output [3:0] imem_bid,
    /* verilator lint_off UNUSED */


    

    // dmem read
    input [31:0]      dmem_araddr,
    input             dmem_arvalid,
    output            dmem_arready,
    output reg [31:0] dmem_rdata,
    output reg        dmem_rvalid,
    input             dmem_rready,
    output reg [1:0]  dmem_rresp,
    input [3:0] dmem_arid,
    output [3:0] dmem_rid,
    output       dmem_rlast,
    input [7:0]  dmem_arlen,
    input [2:0]  dmem_arsize,
    input [1:0]  dmem_arburst,

    // dmem write
    input [31:0] dmem_awaddr,
    input        dmem_awvalid,
    output       dmem_awready,
    input [3:0]  dmem_awid,
    input [7:0]  dmem_awlen,
    input [2:0]  dmem_awsize,
    input [1:0]  dmem_awburst,
    input [31:0] dmem_wdata,
    input [3:0]  dmem_wstrb,
    input        dmem_wvalid,
    output       dmem_wready,
    input        dmem_wlast,



    output reg [1:0] dmem_bresp,
    output reg       dmem_bvalid,
    output [3:0]     dmem_bid,
    input            dmem_bready



`ifdef SYNTHESIS
    ,
    input [31:0] yosys_imem_rdata,
    input [31:0] yosys_dmem_rdata
`endif
);

    reg [3:0] imem_arid_latched;
    reg [3:0] dmem_arid_latched;
    reg [3:0] dmem_awid_latched;
    reg [31:0] imem_araddr_reg;
    reg [7:0]  imem_arlen_cnt;
    reg [2:0]  imem_arsize_reg;
    reg [1:0]  imem_arburst_reg;
    reg        imem_burst_active;
    reg        imem_burst_ok;
    reg [31:0] dmem_araddr_reg;
    reg [7:0]  dmem_arlen_cnt;
    reg [2:0]  dmem_arsize_reg;
    reg [1:0]  dmem_arburst_reg;
    reg        dmem_burst_active;
    reg        dmem_burst_ok;
    reg [7:0]  dmem_awlen_cnt;
    reg [2:0]  dmem_awsize_reg;
    reg [1:0]  dmem_awburst_reg;
    reg        dmem_aw_burst_ok;
    reg        dmem_wlast_err;


    always @(posedge clk) begin
        if(rst)begin
            imem_arid_latched <= 4'b0;
            dmem_arid_latched <= 4'b0;
            dmem_awid_latched <= 4'b0;
        end else begin
            if (imem_ar_fire) imem_arid_latched <= imem_arid;
            if (dmem_ar_fire) dmem_arid_latched <= dmem_arid;
            if (dmem_aw_fire) dmem_awid_latched <= dmem_awid;
        end
    end


    assign imem_rid = imem_arid_latched;
    assign dmem_rid = dmem_arid_latched;
    assign imem_rlast = imem_rvalid && (imem_arlen_cnt == 8'd0);
    assign dmem_rlast = dmem_rvalid && (dmem_arlen_cnt == 8'd0);
    assign dmem_bid = dmem_awid_latched;
    assign imem_bid = 4'b0;

    /* verilator lint_off UNUSED */
    wire [3:0] imem_awid_unused = imem_awid;
    wire imem_wlast_unused = imem_wlast;
    /* verilator lint_on UNUSED */


    localparam  [1:0] RESP_OKAY   = 2'b00;
    localparam  [1:0] RESP_SLVERR = 2'b10;
    localparam  [1:0] BURST_FIXED = 2'b00;
    localparam  [1:0] BURST_INCR  = 2'b01;
    localparam  [1:0] BURST_WRAP  = 2'b10;

    wire imem_burst_ok_w = ((imem_arburst == BURST_INCR) || (imem_arburst == BURST_FIXED)) && (imem_arsize <= 3'b010);
    wire dmem_burst_ok_w = ((dmem_arburst == BURST_INCR) || (dmem_arburst == BURST_FIXED)) && (dmem_arsize <= 3'b010);
    wire dmem_aw_burst_ok_w = ((dmem_awburst == BURST_INCR) || (dmem_awburst == BURST_FIXED)) && (dmem_awsize <= 3'b010);

    function [31:0] burst_next_addr;
        input [31:0] addr;
        input [2:0]  size;
        input [1:0]  burst;
        begin
            case (burst)
                BURST_FIXED: burst_next_addr = addr;
                BURST_INCR:  burst_next_addr = addr + (32'd1 << size);
                BURST_WRAP:  burst_next_addr = addr + (32'd1 << size);
                default:     burst_next_addr = addr + (32'd1 << size);
            endcase
        end
    endfunction

    // 写地址缓冲
    reg [31:0] dmem_awaddr_latched;
    reg        dmem_awaddr_valid;
    wire [31:0] dmem_waddr_use = dmem_awaddr_valid ? dmem_awaddr_latched : dmem_awaddr;

    // 握手 fire
    wire       imem_r_fire  = imem_rvalid  && imem_rready;
    wire       imem_ar_fire = imem_arvalid && imem_arready;
    wire       dmem_r_fire  = dmem_rvalid  && dmem_rready;
    wire       dmem_aw_fire = dmem_awvalid && dmem_awready;
    wire       dmem_w_fire  = dmem_wvalid  && dmem_wready;
    wire [7:0] dmem_awlen_use = dmem_aw_fire ? dmem_awlen : dmem_awlen_cnt;
    wire [2:0] dmem_awsize_use = dmem_aw_fire ? dmem_awsize : dmem_awsize_reg;
    wire [1:0] dmem_awburst_use = dmem_aw_fire ? dmem_awburst : dmem_awburst_reg;
    wire       dmem_aw_burst_ok_use = dmem_aw_fire ? dmem_aw_burst_ok_w : dmem_aw_burst_ok;
    wire       dmem_wlast_err_this = dmem_w_fire && ((dmem_wlast && (dmem_awlen_use != 8'd0)) || (!dmem_wlast && (dmem_awlen_use == 8'd0)));
    wire       dmem_wlast_err_comb = dmem_wlast_err || dmem_wlast_err_this;
    wire       dmem_w_last_fire = dmem_w_fire && (dmem_wlast || (dmem_awlen_use == 8'd0));
    wire       dmem_ar_fire = dmem_arvalid && dmem_arready;
    wire       dmem_b_fire  = dmem_bvalid  && dmem_bready;

    // ready 赋值
    assign imem_awready = 1'b0;
    assign imem_wready  = 1'b0;
    assign imem_arready = !imem_burst_active && !imem_busy && !imem_rvalid;
    assign dmem_arready = !dmem_burst_active && !dmem_r_busy && !dmem_rvalid;
    assign dmem_awready = !dmem_awaddr_valid && !dmem_bvalid;
    assign dmem_wready  = (dmem_awaddr_valid || dmem_aw_fire) && !dmem_bvalid;

    // valid 赋值
    assign imem_bvalid  = 1'b0;
    assign imem_bresp   = RESP_OKAY;


    `ifndef SYNTHESIS
    import "DPI-C" function int pmem_read(input int raddr);
    import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);
    import "DPI-C" function int pmem_read_ok(input int addr);


    reg [7:0]  dmem_wstrb_ext;
    reg [31:0] dmem_wdata_aligned;

    // 写掩码 + 对齐数据
    always @(*) begin
        dmem_wstrb_ext = {4'b0, dmem_wstrb};
        dmem_wdata_aligned = dmem_wdata << {dmem_waddr_use[1:0], 3'b000};
    end
`endif

//这里很浪费，时刻都在调用




    reg [31:0] imem_rdata_buf;
    reg [31:0] dmem_rdata_buf;

    always @(*) begin
        imem_rdata = imem_rdata_buf;
        dmem_rdata = dmem_rdata_buf;
    end








    always @(posedge clk) begin
        if (rst) begin
            imem_rvalid <= 1'b0;
            imem_busy <= 1'b0;
            imem_delay_cnt <= {{W{1'b0}}};
            imem_burst_active <= 1'b0;
            imem_arlen_cnt <= 8'd0;
            imem_araddr_reg <= 32'b0;
            imem_arsize_reg <= 3'b0;
            imem_arburst_reg <= 2'b0;
            imem_burst_ok <= 1'b1;
            imem_rresp <= RESP_OKAY;
            imem_rdata_buf <= 32'b0;
        end else begin
            if (imem_ar_fire) begin
                imem_burst_active <= 1'b1;
                imem_araddr_reg <= imem_araddr;
                imem_arlen_cnt <= imem_arlen;
                imem_arsize_reg <= imem_arsize;
                imem_arburst_reg <= imem_arburst;
                imem_burst_ok <= imem_burst_ok_w;
                imem_busy <= 1'b1;
                imem_delay_cnt <= imem_delay;
                imem_rvalid <= 1'b0;
`ifndef SYNTHESIS
                imem_rdata_buf <= (pmem_read_ok(imem_araddr) != 0) ? pmem_read(imem_araddr) : 32'b0;
                imem_rresp <= ((pmem_read_ok(imem_araddr) != 0) && imem_burst_ok_w) ? RESP_OKAY : RESP_SLVERR;
`else
                imem_rdata_buf <= yosys_imem_rdata;
                imem_rresp <= RESP_OKAY;
`endif
            end else begin
                if (imem_busy) begin
                    if (imem_delay_cnt > 0) begin
                        imem_delay_cnt <= imem_delay_cnt - 1;
                        imem_rvalid <= 1'b0;
                    end else begin
                        imem_rvalid <= 1'b1;
                        imem_busy <= 1'b0;
                    end
                end
                if (imem_r_fire) begin
                    imem_rvalid <= 1'b0;
                    if (imem_burst_active) begin
                        if (imem_arlen_cnt == 8'd0) begin
                            imem_burst_active <= 1'b0;
                        end else begin
                            imem_arlen_cnt <= imem_arlen_cnt - 1'b1;
                            imem_araddr_reg <= burst_next_addr(imem_araddr_reg, imem_arsize_reg, imem_arburst_reg);
                            imem_busy <= 1'b1;
                            imem_delay_cnt <= imem_delay;
`ifndef SYNTHESIS
                            imem_rdata_buf <= (pmem_read_ok(burst_next_addr(imem_araddr_reg, imem_arsize_reg, imem_arburst_reg)) != 0) ?
                                               pmem_read(burst_next_addr(imem_araddr_reg, imem_arsize_reg, imem_arburst_reg)) : 32'b0;
                            imem_rresp <= ((pmem_read_ok(burst_next_addr(imem_araddr_reg, imem_arsize_reg, imem_arburst_reg)) != 0) && imem_burst_ok) ?
                                           RESP_OKAY : RESP_SLVERR;
`else
                            imem_rdata_buf <= yosys_imem_rdata;
                            imem_rresp <= RESP_OKAY;
`endif
                        end
                    end
                end
            end
        end
    end

    always @(posedge clk) begin
        if (rst) begin
            dmem_rvalid <= 1'b0;
            dmem_r_busy <= 1'b0;
            dmem_delay_cnt <= {{W{1'b0}}};
            dmem_burst_active <= 1'b0;
            dmem_arlen_cnt <= 8'd0;
            dmem_araddr_reg <= 32'b0;
            dmem_arsize_reg <= 3'b0;
            dmem_arburst_reg <= 2'b0;
            dmem_burst_ok <= 1'b1;
            dmem_rresp <= RESP_OKAY;
            dmem_rdata_buf <= 32'b0;
        end else begin
            if (dmem_ar_fire) begin
                dmem_burst_active <= 1'b1;
                dmem_araddr_reg <= dmem_araddr;
                dmem_arlen_cnt <= dmem_arlen;
                dmem_arsize_reg <= dmem_arsize;
                dmem_arburst_reg <= dmem_arburst;
                dmem_burst_ok <= dmem_burst_ok_w;
                dmem_r_busy <= 1'b1;
                dmem_delay_cnt <= dmem_delay;
                dmem_rvalid <= 1'b0;
`ifndef SYNTHESIS
                dmem_rdata_buf <= (pmem_read_ok(dmem_araddr) != 0) ? pmem_read(dmem_araddr) : 32'b0;
                dmem_rresp <= ((pmem_read_ok(dmem_araddr) != 0) && dmem_burst_ok_w) ? RESP_OKAY : RESP_SLVERR;
`else
                dmem_rdata_buf <= yosys_dmem_rdata;
                dmem_rresp <= RESP_OKAY;
`endif
            end else begin
                if (dmem_r_busy) begin
                    if (dmem_delay_cnt > 0) begin
                        dmem_delay_cnt <= dmem_delay_cnt - 1;
                        dmem_rvalid <= 1'b0;
                    end else begin
                        dmem_rvalid <= 1'b1;
                        dmem_r_busy <= 1'b0;
                    end
                end
                if (dmem_r_fire) begin
                    dmem_rvalid <= 1'b0;
                    if (dmem_burst_active) begin
                        if (dmem_arlen_cnt == 8'd0) begin
                            dmem_burst_active <= 1'b0;
                        end else begin
                            dmem_arlen_cnt <= dmem_arlen_cnt - 1'b1;
                            dmem_araddr_reg <= burst_next_addr(dmem_araddr_reg, dmem_arsize_reg, dmem_arburst_reg);
                            dmem_r_busy <= 1'b1;
                            dmem_delay_cnt <= dmem_delay;
`ifndef SYNTHESIS
                            dmem_rdata_buf <= (pmem_read_ok(burst_next_addr(dmem_araddr_reg, dmem_arsize_reg, dmem_arburst_reg)) != 0) ?
                                               pmem_read(burst_next_addr(dmem_araddr_reg, dmem_arsize_reg, dmem_arburst_reg)) : 32'b0;
                            dmem_rresp <= ((pmem_read_ok(burst_next_addr(dmem_araddr_reg, dmem_arsize_reg, dmem_arburst_reg)) != 0) && dmem_burst_ok) ?
                                           RESP_OKAY : RESP_SLVERR;
`else
                            dmem_rdata_buf <= yosys_dmem_rdata;
                            dmem_rresp <= RESP_OKAY;
`endif
                        end
                    end
                end
            end
        end
    end


`ifdef SYNTHESIS
    wire dmem_waddr_ok = 1'b1;
`else
    wire dmem_waddr_ok = (pmem_read_ok(dmem_waddr_use) != 0);
`endif

    // 新增状态：dmem_b_busy + dmem_b_delay_cnt
    always @(posedge clk) begin
    if (rst) begin
        dmem_bvalid <= 1'b0;
        dmem_bresp  <= RESP_OKAY;
        dmem_b_busy <= 1'b0;
        dmem_b_delay_cnt <= {dmem_b_delay_wideth{1'b0}};
    end else begin
        if (dmem_b_fire) begin
        dmem_bvalid <= 1'b0;
        end

        // 写数据握手后启动延迟
        if (dmem_w_last_fire) begin
        dmem_bresp <= (dmem_waddr_ok && dmem_aw_burst_ok_use && !dmem_wlast_err_comb) ? RESP_OKAY : RESP_SLVERR;
        if (dmem_b_delay != 0) begin
            dmem_b_busy <= 1'b1;
            dmem_b_delay_cnt <= dmem_b_delay;
        end else begin
            dmem_bvalid <= 1'b1;
        end
        end

        // 延迟计数
        if (dmem_b_busy) begin
        if (dmem_b_delay_cnt != 0)
            dmem_b_delay_cnt <= dmem_b_delay_cnt - 1'b1;
        else begin
            dmem_bvalid <= 1'b1;
            dmem_b_busy <= 1'b0;
        end
        end
    end
    end




    always @(posedge clk) begin
        if (!rst) begin
            if (dmem_w_fire) begin
`ifndef SYNTHESIS
                if (dmem_waddr_ok &&  dmem_wstrb_ext != 8'b0) begin
                    pmem_write(dmem_waddr_use, dmem_wdata_aligned, dmem_wstrb_ext);
                end
`endif
            end
        end
    end

        // 保证只有一个未完成写响应，并支持突发写
    always @(posedge clk) begin
        if (rst) begin
            dmem_awaddr_valid <= 1'b0;
            dmem_awaddr_latched <= 32'b0;
            dmem_awlen_cnt <= 8'd0;
            dmem_awsize_reg <= 3'b0;
            dmem_awburst_reg <= 2'b0;
            dmem_aw_burst_ok <= 1'b1;
            dmem_wlast_err <= 1'b0;
        end else begin
            if (dmem_aw_fire) begin
                dmem_awaddr_latched <= dmem_awaddr;
                dmem_awaddr_valid <= 1'b1;
                dmem_awlen_cnt <= dmem_awlen;
                dmem_awsize_reg <= dmem_awsize;
                dmem_awburst_reg <= dmem_awburst;
                dmem_aw_burst_ok <= dmem_aw_burst_ok_w;
                dmem_wlast_err <= 1'b0;
            end
            if (dmem_w_fire && (dmem_awaddr_valid || dmem_aw_fire)) begin
                if (dmem_awlen_use != 8'd0) begin
                    dmem_awlen_cnt <= dmem_awlen_use - 1'b1;
                end else begin
                    dmem_awlen_cnt <= 8'd0;
                end
                if (dmem_wlast_err_this) begin
                    dmem_wlast_err <= 1'b1;
                end
                if (dmem_w_last_fire) begin
                    dmem_awaddr_valid <= 1'b0;
                end else begin
                    dmem_awaddr_latched <= burst_next_addr(dmem_waddr_use, dmem_awsize_use, dmem_awburst_use);
                end
            end
        end
    end




    
        
    /* verilator lint_off UNUSED */
    localparam W = 5;
    localparam dmem_w_delya_wideth = 5;
    localparam dmem_aw_delay_wideth = 5;
    localparam dmem_b_delay_wideth = 5;

    reg       dmem_r_busy;
    reg       imem_busy;

    reg       dmem_w_busy;
    reg       dmem_b_busy;
    reg       dmem_aw_busy;

    wire [W-1:0] imem_delay;
    wire [W-1:0] dmem_delay;
    wire [dmem_w_delya_wideth-1:0]   dmem_w_delay;
    wire [dmem_aw_delay_wideth-1:0]  dmem_aw_delay;
    wire [dmem_b_delay_wideth-1:0]  dmem_b_delay;

    wire      imem_delay_en;
    wire      dmem_delay_en;
    wire      dmem_w_delay_en;
    wire      dmem_aw_delay_en;
    wire      dmem_b_delay_en;

    reg [W-1:0] imem_delay_cnt;
    reg [W-1:0] dmem_delay_cnt;
    reg [dmem_w_delya_wideth-1:0]   dmem_w_delay_cnt;
    reg [dmem_aw_delay_wideth-1:0]  dmem_aw_delay_cnt;
    reg [dmem_b_delay_wideth-1:0]  dmem_b_delay_cnt;

    assign  imem_delay_en    = 1'b1;
    assign  dmem_delay_en    = 1'b1;    
    assign  dmem_w_delay_en  = 1'b1;
    assign  dmem_aw_delay_en = 1'b1;    
    assign  dmem_b_delay_en = 1'b1;



    lfsr #(.W(W),.POLY(5'h12),.SEED(5'h1)) ifsr_imem(
        .rst(rst),
        .clk(clk),
        .en(imem_delay_en),
        .q(imem_delay)
    );

    lfsr #(.W(W),.POLY(5'h10),.SEED(5'h1)) ifsr_dmem(
        .rst(rst),
        .clk(clk),
        .en(dmem_delay_en),
        .q(dmem_delay)
    );

        lfsr #(.W(dmem_w_delya_wideth),.POLY(5'h12),.SEED(5'h1)) ifsr_dmem_w(
        .rst(rst),
        .clk(clk),
        .en(dmem_w_delay_en),
        .q(dmem_w_delay)
    );
        lfsr #(.W(dmem_aw_delay_wideth),.POLY(5'h12),.SEED(5'h1)) ifsr_dmem_aw(
        .rst(rst),
        .clk(clk),
        .en(dmem_aw_delay_en),
        .q(dmem_aw_delay)
    );
        lfsr #(.W(dmem_b_delay_wideth),.POLY(5'h12),.SEED(5'h1)) ifsr_dmem_b(
        .rst(rst),
        .clk(clk),
        .en(dmem_b_delay_en),
        .q(dmem_b_delay)
    );

    /* verilator lint_off UNUSED */
    always @(posedge clk) begin
        if(!rst)begin
            if(imem_awvalid)begin
                $fatal("imem AWVALID must stay 0");
            end

            if(imem_wvalid)begin
                $fatal("imem WVALID must stay 0");
            end
        end
    end
endmodule
