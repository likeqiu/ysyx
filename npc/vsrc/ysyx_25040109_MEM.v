module ysyx_25040109_MEM (
    input clk,
    input rst,

    // imem
    input [31:0] imem_araddr,
    input imem_arvalid,
    output imem_arready,
    output reg [31:0] imem_rdata,
    output reg imem_rvalid,
    input imem_rready,

    // dmem read
    input [31:0] dmem_araddr,
    input dmem_arvalid,
    output dmem_arready,
    output reg [31:0] dmem_rdata,
    output reg dmem_rvalid,
    input dmem_rready,

    // dmem write
    input [31:0] dmem_awaddr,
    input dmem_awvalid,
    output dmem_awready,
    input [31:0] dmem_wdata,
    input [3:0] dmem_wmask,
    input dmem_wen,
    input dmem_wvalid,
    output dmem_wready

`ifdef SYNTHESIS
    ,
    input [31:0] yosys_imem_rdata,
    input [31:0] yosys_dmem_rdata
`endif
);

    // 写地址缓冲
    reg [31:0] dmem_awaddr_latched;
    reg        dmem_awaddr_valid;
    wire       dmem_aw_fire = dmem_awvalid && dmem_awready;
    wire       dmem_w_fire  = dmem_wvalid && dmem_wready;
    

`ifndef SYNTHESIS
    import "DPI-C" function int pmem_read(input int raddr);
    import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);

    reg [7:0] dmem_wmask_ext;
    reg [31:0] dmem_wdata_aligned;

    // 写掩码 + 对齐数据
    always @(*) begin
        dmem_wmask_ext = {4'b0, dmem_wmask};
        dmem_wdata_aligned = dmem_wdata << {dmem_waddr_use[1:0], 3'b000};
    end
`endif

    // 延迟模拟

    reg imem_busy;
    reg [1:0] imem_delay_cnt;

    reg dmem_busy;
    reg [1:0] dmem_delay_cnt;

    // imem 读
    reg [31:0] imem_rdata_buf;
    wire   imem_ar_fire = imem_arvalid && imem_arready;
    assign imem_arready = !imem_busy && !imem_rvalid;

    always @(*) begin
        if (imem_ar_fire) begin
`ifndef SYNTHESIS
            imem_rdata = pmem_read(imem_araddr);
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

    always @(posedge clk) begin
        if (rst) begin
            imem_rvalid <= 1'b0;
            imem_busy <= 1'b0;
            imem_delay_cnt <= 2'b0;
        end else begin
            if (imem_rvalid && imem_rready) begin
                imem_rvalid <= 1'b0;
            end else if (imem_ar_fire) begin
                imem_busy <= 1'b1;
                imem_delay_cnt <= 2'd1;
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

    // dmem 读
    reg [31:0] dmem_rdata_buf;
    wire dmem_ar_fire = dmem_arvalid && dmem_arready;
    assign dmem_arready = !dmem_busy && !dmem_rvalid;

    always @(*) begin
        if (dmem_ar_fire) begin
`ifndef SYNTHESIS
            dmem_rdata = pmem_read(dmem_araddr);
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
            dmem_rvalid <= 1'b0;
            dmem_busy <= 1'b0;
            dmem_delay_cnt <= 2'b0;
        end else begin
            if (dmem_rvalid && dmem_rready) begin
                dmem_rvalid <= 1'b0;
            end else if (dmem_ar_fire) begin
                dmem_busy <= 1'b1;
                dmem_delay_cnt <= 2'd1;
                dmem_rvalid <= 1'b0;
            end else if (dmem_busy) begin
                if (dmem_delay_cnt > 0) begin
                    dmem_delay_cnt <= dmem_delay_cnt - 1;
                    dmem_rvalid <= 1'b0;
                end else begin
                    dmem_rvalid <= 1'b1;
                    dmem_busy <= 1'b0;
                end
            end
        end
    end

    // dmem 写
    assign dmem_awready = !dmem_awaddr_valid;
    assign dmem_wready  = dmem_awaddr_valid || dmem_aw_fire;
    wire [31:0] dmem_waddr_use = dmem_awaddr_valid ? dmem_awaddr_latched : dmem_awaddr;

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

    always @(posedge clk) begin
        if (!rst) begin
            if (dmem_wvalid && dmem_wready && dmem_wen) begin
`ifndef SYNTHESIS
                if (dmem_wmask_ext != 8'b0) begin
                    pmem_write(dmem_waddr_use, dmem_wdata_aligned, dmem_wmask_ext);
                end
`endif
            end
        end
    end

endmodule
