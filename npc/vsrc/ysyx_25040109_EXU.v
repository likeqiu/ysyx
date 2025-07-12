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
   

    wire [31:0] alu_a, alu_b;
    wire [31:0] alu_out; 

    
    ysyx_25040109_MuxKeyWithDefault #(3, 7, 32) alu_a_select( 
        .out(alu_a),
        .key(opcode),
        .default_out(rs1_data), 
        .lut({
            7'b0010111, pc,         
            7'b0110111, 32'b0,      
            7'b1101111, pc          
        })
    );

    
    ysyx_25040109_MuxKeyWithDefault #(2,7,32) alu_b_select(
        .out(alu_b),
        .key(opcode),
        .default_out(imm),
        .lut({
            7'b0110011,rs2_data,
            7'b1100011,rs2_data
        })
    );
    assign alu_out = alu_a + alu_b; 


    // 分支/跳转目标计算
    wire [31:0] jal_result      = pc + 4;
    wire [31:0] jal_target      = pc + imm;
    wire [31:0] jalr_target     = (rs1_data + imm) & ~32'h1; //低位清零
    wire [31:0] branch_target   = pc + imm;
  
    wire branch_taken = (opcode == 7'b1100011) && 
                        ( (funct3 == 3'b000 && rs1_data == rs2_data) || // BEQ
                          (funct3 == 3'b001 && rs1_data != rs2_data) || // BNE
                          1'b0); 

    // 结果选择器
    ysyx_25040109_MuxKeyWithDefault #(4, 7, 32) result_select( 
        .out(result),
        .key(opcode),
        .default_out(alu_out),     
        .lut({
            7'b1101111, jal_result, 
            7'b1100111, jal_result, 
            7'b0000011, mem_data,   
            7'b0110011, alu_out     
        })
    );

    // 下一 PC 的选择器
    ysyx_25040109_MuxKeyWithDefault #(3, 7, 32) next_pc_select(
        .out(next_pc),
        .key(opcode),
        .default_out(pc + 4),     
        .lut({
            7'b1101111, jal_target,    
            7'b1100111, jalr_target,   
            7'b1100011, branch_taken ? branch_target : (pc + 4)
        })
    );

    assign rd_addr_out = rd_addr;
    assign reg_write_en_out = reg_write_en;

endmodule

