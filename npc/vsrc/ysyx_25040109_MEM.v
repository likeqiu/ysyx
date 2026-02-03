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
    /* verilator lint_off UNUSED */


    

    // dmem read
    input [31:0]      dmem_araddr,
    input             dmem_arvalid,
    output            dmem_arready,
    output reg [31:0] dmem_rdata,
    output reg        dmem_rvalid,
    input             dmem_rready,
    output reg [1:0]  dmem_rresp,

    // dmem write
    input [31:0] dmem_awaddr,
    input        dmem_awvalid,
    output       dmem_awready,
    input [31:0] dmem_wdata,
    input [3:0]  dmem_wstrb,
    input        dmem_wvalid,
    output       dmem_wready,



    output reg [1:0] dmem_bresp,
    output reg       dmem_bvalid,
    input            dmem_bready



`ifdef SYNTHESIS
    ,
    input [31:0] yosys_imem_rdata,
    input [31:0] yosys_dmem_rdata
`endif
);

    localparam  [1:0] RESP_OKAY   = 2'b00;
    localparam  [1:0] RESP_SLVERR = 2'b10;

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
    wire       dmem_ar_fire = dmem_arvalid && dmem_arready;
    wire       dmem_b_fire  = dmem_bvalid  && dmem_bready;

    // ready 赋值
    assign imem_awready = 1'b0;
    assign imem_wready  = 1'b0;
    assign imem_arready = !imem_busy && !imem_rvalid;
    assign dmem_arready = !dmem_r_busy && !dmem_rvalid;
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
        if (imem_ar_fire) begin
`ifndef SYNTHESIS
            imem_rdata = imem_addr_ok ? pmem_read(imem_araddr) : 32'b0;
`else
            imem_rdata = yosys_imem_rdata;
`endif
        end else begin
            imem_rdata = imem_rdata_buf;
        end
    end

    always @(posedge clk) begin
        if (imem_ar_fire) begin
            imem_rdata_buf <= imem_rdata;
        end
    end


    // dmem 读


    always @(*) begin
        if (dmem_ar_fire) begin
`ifndef SYNTHESIS
            dmem_rdata = dmem_raddr_ok ? pmem_read(dmem_araddr) : 32'b0;
`else
            dmem_rdata = yosys_dmem_rdata;
`endif
        end else begin
            dmem_rdata = dmem_rdata_buf;
        end
    end

    always @(posedge clk) begin
        if (dmem_ar_fire) begin
            dmem_rdata_buf <= dmem_rdata;
        end
    end








        always @(posedge clk) begin
        if (rst) begin
            imem_rvalid <= 1'b0;
            imem_busy <= 1'b0;
            imem_delay_cnt <= {{W{1'b0}}};
        end else begin
            if (imem_r_fire) begin
                imem_rvalid <= 1'b0;
            end else if (imem_ar_fire) begin
                imem_busy <= 1'b1;
                imem_delay_cnt <= imem_delay;
                imem_rvalid <= 1'b0;
            end else if (imem_busy) begin
                if (imem_delay_cnt > 0) begin
                    imem_delay_cnt <= imem_delay_cnt - 1;
                    imem_rvalid <= 1'b0;
                end else begin
                    imem_rvalid <= 1'b1;
                    imem_busy <= 1'b0;
                end
            end
        end
    end

    always @(posedge clk) begin
        if (rst) begin
            dmem_rvalid <= 1'b0;
            dmem_r_busy <= 1'b0;
            dmem_delay_cnt <= {{W{1'b0}}};
        end else begin
            if (dmem_r_fire) begin
                dmem_rvalid <= 1'b0;
            end else if (dmem_ar_fire) begin
                dmem_r_busy <= 1'b1;
                dmem_delay_cnt <= dmem_delay;
                dmem_rvalid <= 1'b0;
            end else if (dmem_r_busy) begin
                if (dmem_delay_cnt > 0) begin
                    dmem_delay_cnt <= dmem_delay_cnt - 1;
                    dmem_rvalid <= 1'b0;
                end else begin
                    dmem_rvalid <= 1'b1;
                    dmem_r_busy <= 1'b0;
                end
            end
        end
    end



`ifdef SYNTHESIS
    wire imem_addr_ok  = 1'b1;
    wire dmem_raddr_ok = 1'b1;
    wire dmem_waddr_ok = 1'b1;
`else
    wire imem_addr_ok  = (pmem_read_ok(imem_araddr) != 0);
    wire dmem_raddr_ok = (pmem_read_ok(dmem_araddr) != 0);
    wire dmem_waddr_ok = (pmem_read_ok(dmem_waddr_use) != 0);
`endif

    always @(posedge clk) begin
        if(rst) imem_rresp <= RESP_OKAY;
        else if(imem_ar_fire) imem_rresp <= imem_addr_ok ? RESP_OKAY : RESP_SLVERR; 
    end
    
    always @(posedge clk) begin
        if(rst) dmem_rresp <= RESP_OKAY;
        else if(dmem_ar_fire) dmem_rresp <= dmem_raddr_ok ? RESP_OKAY : RESP_SLVERR;
    end

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
        if (dmem_w_fire) begin
        dmem_bresp <= dmem_waddr_ok ? RESP_OKAY : RESP_SLVERR;
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

        // 保证只有一个未完成写响应
    always @(posedge clk) begin
        if (rst) begin
            dmem_awaddr_valid <= 1'b0;
            dmem_awaddr_latched <= 32'b0;
        end else begin
            if (dmem_aw_fire) begin
                dmem_awaddr_latched <= dmem_awaddr;
            end
            case ({dmem_aw_fire, dmem_w_fire})
                2'b10: dmem_awaddr_valid <= 1'b1;  // 仅地址握手
                2'b01: dmem_awaddr_valid <= 1'b0;  // 仅写数据握手
                2'b11: dmem_awaddr_valid <= 1'b0;  // 同周期完成
                default: dmem_awaddr_valid <= dmem_awaddr_valid;
            endcase
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
