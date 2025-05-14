module ysyx_25040109_EXU(
    input [31:0] rs1_data,
    input [31:0] imm,
    input reg_write_en,
    output [31:0] result,
    input [4:0] rd_addr,
    output [4:0] rd_addr_out,
    output reg_write_en_out 
);
    assign result = rs1_data + imm;
    assign rd_addr_out=rd_addr;
    assign reg_write_en_out=reg_write_en;


endmodule

