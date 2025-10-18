module ysyx_25040109_LSU (
    input clk,
    input rst,
    input [31:0] addr,
    input [31:0] store_data,
    input [2:0] funct3,
    input is_load,
    input is_store,
    input inst_invalid,
    input stall,
`ifdef SYNTHESIS
    input [31:0] yosys_store_load,
`endif
    output reg [31:0] load_data,
    output store_enable
);

    reg [31:0] mem_data;

`ifndef SYNTHESIS
    import "DPI-C" function void verilog_pmem_read(input int addr, output int data);
    import "DPI-C" function void verilog_pmem_write(input int addr, input int data, input int len);
`endif

    wire store_valid = is_store && !inst_invalid && !stall;
    assign store_enable = store_valid;

    always @(*) begin
        if (is_load) begin
`ifndef SYNTHESIS
            verilog_pmem_read(addr, mem_data);
`else
            mem_data = yosys_store_load;
`endif
            case (funct3)
                3'b000: load_data = {{24{mem_data[7]}}, mem_data[7:0]};
                3'b001: load_data = {{16{mem_data[15]}}, mem_data[15:0]};
                3'b010: load_data = mem_data;
                3'b100: load_data = {24'b0, mem_data[7:0]};
                3'b101: load_data = {16'b0, mem_data[15:0]};
                default: load_data = 32'b0;
            endcase
        end else begin
            mem_data = 32'h0;
            load_data = 32'b0;
        end
    end

    always @(posedge clk) begin
        if (!rst && store_valid) begin
            case (funct3)
                3'b000: begin
`ifndef SYNTHESIS
                    verilog_pmem_write(addr, store_data, 1);
`endif
                end
                3'b001: begin
`ifndef SYNTHESIS
                    verilog_pmem_write(addr, store_data, 2);
`endif
                end
                3'b010: begin
`ifndef SYNTHESIS
                    verilog_pmem_write(addr, store_data, 4);
`endif
                end
                default: begin
                end
            endcase
        end
    end

endmodule
