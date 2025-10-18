module mem(
    input rst,
    input clk,
    
    input in_valid,
    input in_ready,
    output out_valid,
    output out_ready,

    output reg [31:0] data,
    input  [31:0] ifu_addr 
);

    reg full;
    wire in_fire  = out_ready && in_valid;
    wire out_fire = out_valid && in_ready;

    assign out_valid = full;
    assign out_ready = !full || in_ready;

    `ifndef SYNTHESIS
    import "DPI-C" function void verilog_pmem_read(input int addr, output int data);
    `endif 

    always @(posedge clk) begin
        if(rst)begin
            data <= 32'h0;
            full <= 1'b0;
        end else begin
            if(in_fire)begin
            data <= data + 32'h1;
        end 
        
        case({in_fire,out_fire})
        2'b10:full <= 1'b1;
        2'b11:full <= 1'b1;
        2'b01:full <= 1'b0;
        default:;
        endcase
    end

    end





endmodule