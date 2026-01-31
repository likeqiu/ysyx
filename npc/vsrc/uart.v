module uart(
        /* verilator lint_off UNUSED */
    input clk,
    input rst,

    input            arvalid,
    output           arready,
    input  [31:0]    araddr,
    output reg       rvalid,
    input            rready,
    output reg [31:0]rdata,
    output reg [1:0] rresp,

    input            awvalid,
    output           awready,
    input [31:0]     awaddr,

    input            wvalid,
    output           wready,
    input [31:0]     wdata,
    input [3:0]      wstrb,
 
    output reg       bvalid,
    input            bready,
    output reg [1:0] bresp


);  
    localparam [1:0] RESP_OK = 2'b00;

    reg aw_seen;
    reg w_seen;
    reg [31:0] wdata_latched;

    reg [31:0] awaddr_latched;


    wire ar_fire = arvalid && arready;
    wire r_fire  = rvalid  && rready;
    wire aw_fire = awvalid && awready;
    wire w_fire  = wvalid  && wready;
    wire b_fire  = bvalid  && bready;


    assign arready = !rvalid;
    assign awready = !bvalid && !aw_seen;
    assign wready  = !bvalid && !w_seen;
 

    wire [31:0] wdata_use = w_fire ? wdata : wdata_latched;

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
        end
        if(w_fire) begin
            w_seen <= 1'b1;
            wdata_latched <= wdata;
        end

        if(!bvalid && ((aw_seen || aw_fire) && (w_seen || w_fire)))begin
            bvalid <= 1'b1;
            bresp  <= RESP_OK;
            aw_seen<= 1'b0;
            w_seen <= 1'b0;
            $write("%c",wdata_use[7:0]);
        end
    end
    end






    /* verilator lint_off UNUSED */



endmodule
