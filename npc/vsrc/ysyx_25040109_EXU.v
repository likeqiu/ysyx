module ysyx_25040109_EXU (
    input [31:0] rs1_data,
    input [31:0] imm,
    input reg_write_en,
    input [4:0] rd_addr,
    input [31:0] pc,
    input [6:0] opcode,
    output [31:0] result,
    output [4:0] rd_addr_out,
    output reg_write_en_out
);

    wire  is_auipc = (opcode==7'b0010111);
    wire  is_lui   = (opcode==7'b0110111);
    wire is_jal   = (opcode==7'b1101111);
    wire  is_jalr  = (opcode==7'b1100111); 

    
    wire [31:0] alu_a=is_auipc ? pc : (is_lui ? 0 : rs1_data);//标记以下，如果程序有问题可能是这
    wire [31:0] alu_b=imm;
    wire [31:0] alu_out =alu_a + alu_b;

    wire [31:0] jal_result=pc+4;

    assign result = (is_jal || is_jalr) ? jal_result : alu_out;
    assign rd_addr_out = rd_addr;
    assign reg_write_en_out = reg_write_en;
endmodule
