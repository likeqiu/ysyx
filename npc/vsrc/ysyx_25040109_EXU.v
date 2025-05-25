module ysyx_25040109_EXU (
    input [31:0] rs1_data,
    input [31:0] rs2_data,
    input [31:0] imm,
    input reg_write_en,
    input [4:0] rd_addr,
    input [31:0] pc,
    input [6:0] opcode,
    input [2:0] funct3,
    input [31:0] mem_data,
    output [31:0] result,
    output [4:0] rd_addr_out,
    output reg_write_en_out,
    output [31:0] next_pc
);

    wire is_auipc = (opcode == 7'b0010111);
    wire is_lui = (opcode == 7'b0110111);
    wire is_jal = (opcode == 7'b1101111);
    wire is_jalr = (opcode == 7'b1100111 && funct3 == 3'b000);
    wire is_addi = (opcode == 7'b0010011 && funct3 == 3'b000);
    wire is_lw = (opcode == 7'b0000011 && funct3 == 3'b010);
    wire is_branch = (opcode == 7'b1100011 && funct3 == 3'b000);

    
  
    wire [31:0] alu_a,alu_b,alu_out;

    ysyx_25040109_MuxKeyWithDefault #(3,7,32) alu_a_select(
        .out(alu_a),
        .key(opcode),
        .defalut_out(rs1_data),
        .lut({
            7'b0010111, pc,        // auipc
            7'b0110111, 32'b0,     // lui
            7'b1101111, pc         // jal
        })
    );

 
    assign alu_b = imm;
    assign alu_out=alu_a+alu_b;

    wire [31:0] jal_result, jal_target, jalr_target, branch_target;
    assign jal_result = pc + 4;                    // jal/jalr 返回地址
    assign jal_target = pc + imm;                  // jal 目标地址
    assign jalr_target = (rs1_data + imm) & ~32'h1; // jalr 目标地址
    assign branch_target = pc + imm;               // beq 目标地址
    wire branch_taken = is_branch && (rs1_data == rs2_data); // 分支条件

    ysyx_25040109_MuxKeyWithDefault #(3,7,32) result_select(
        .out(result),
        .key(opcode),
        .default_out(alu_out),
        .lut({
            7'b1101111,jal_result,
            7'b1100111,jal_result,
            7'b0000011,mem_data
        })
    );


    ysyx_25040109_MuxKeyWithDefalut #(3,7,32) next_pc_select(
        .out(next_pc),
        .key(opcode),
        .defalut_out(pc+4),
        .lut({
            7'b1101111,jal_target,
            7'b1100111,jalr_target,
            7'b1100011,branch_taken ? branch_target : pc+4
        })
    );

    assign rd_addr_out=rd_addr;
    assign reg_write_en_out=reg_write_en;



endmodule
