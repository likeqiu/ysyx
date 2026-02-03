module uart(
        /* verilator lint_off UNUSED */
    input clk,
    input rst,

    input            arvalid,
    output           arready,
    input  [31:0]    araddr,
    input  [7:0]     arlen,
    input  [2:0]     arsize,
    input  [1:0]     arburst,
    output reg       rvalid,
    input            rready,
    output reg [31:0]rdata,
    output reg [1:0] rresp,
    input [3:0] arid,
    output [3:0] rid,
    output rlast,

    input            awvalid,
    output           awready,
    input [31:0]     awaddr,
    input [3:0]      awid,
    input [7:0]      awlen,
    input [2:0]      awsize,
    input [1:0]      awburst,

    input            wvalid,
    output           wready,
    input [31:0]     wdata,
    input [3:0]      wstrb,
    input            wlast,
 
    output reg       bvalid,
    input            bready,
    output reg [1:0] bresp,
    output [3:0]     bid


);  

    reg [3:0] arid_latched;
    always @(posedge  clk) begin
        if(rst) arid_latched <= 4'b0;
        else if(ar_fire) arid_latched <= arid;
    end

    assign rid = arid_latched;
    assign rlast = rvalid;
    /* verilator lint_off UNUSED */
    wire [7:0] arlen_unused = arlen;
    wire [2:0] arsize_unused = arsize;
    wire [1:0] arburst_unused = arburst;
    wire [7:0] awlen_unused = awlen;
    wire [2:0] awsize_unused = awsize;
    wire [1:0] awburst_unused = awburst;
    /* verilator lint_on UNUSED */

    localparam [1:0] RESP_OK = 2'b00;

    reg aw_seen;
    reg w_seen;
    reg [31:0] wdata_latched;

    /* verilator lint_off UNUSEDSIGNAL */
    reg [31:0] awaddr_latched;
    /* verilator lint_on UNUSEDSIGNAL */
    reg [3:0]  awid_latched;


    wire ar_fire = arvalid && arready;
    wire r_fire  = rvalid  && rready;
    wire aw_fire = awvalid && awready;
    wire w_fire  = wvalid  && wready;
    wire b_fire  = bvalid  && bready;


    assign arready = !rvalid;
    assign awready = !bvalid && !aw_seen;
    assign wready  = !bvalid && !w_seen;
 

    /* verilator lint_off UNUSEDSIGNAL */
    wire [31:0] wdata_use = w_fire ? wdata : wdata_latched;
    /* verilator lint_on UNUSEDSIGNAL */

    always @(posedge clk) begin
        if(rst)begin
        rvalid <= 1'b0;
        rdata  <= 32'b0;
        rresp  <= RESP_OK;
        bvalid <= 1'b0;
        bresp  <= RESP_OK;
        aw_seen<= 1'b0;
        w_seen <= 1'b0;
        wdata_latched <= 32'b0;
        awaddr_latched<= 32'b0;
        awid_latched <= 4'b0;
        
    end else begin
        if(r_fire) rvalid <= 1'b0;
        if(ar_fire) begin
            rvalid <= 1'b1;
            rdata  <= 32'b0;
            rresp  <= RESP_OK;
        end 

        if(b_fire) bvalid <= 1'b0;
        if(aw_fire) begin
            aw_seen <= 1'b1;
            awaddr_latched <= awaddr;
            awid_latched <= awid;
        end
        if(w_fire && wlast) begin
            w_seen <= 1'b1;
            wdata_latched <= wdata;
        end

        if(!bvalid && ((aw_seen || aw_fire) && (w_seen || w_fire)))begin
            bvalid <= 1'b1;
            bresp  <= RESP_OK;
            aw_seen<= 1'b0;
            w_seen <= 1'b0;
            $write("%c",wdata_use[7:0]);
            $fflush();
        end
    end
    end

    assign bid = awid_latched;





    /* verilator lint_off UNUSED */



endmodule
