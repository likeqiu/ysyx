module ysyx_25040109_IDU (
    input [31:0] inst,
    output [4:0] rd_addr,
    output [31:0] imm,
    output reg_write_en,
    input [31:0] rs1_data,
    output [31:0] rs1_data_out
);
    wire [6:0] opcode = inst[6:0];
    wire [2:0] funct3 = inst[14:12];
    wire [4:0] rs1 = inst[19:15];
    wire [4:0] rd = inst[11:7];
    wire [11:0] imm_i = inst[31:20];
    wire [19:0] imm_u=inst[31:12];
    wire [20:1] imm_j={inst[31],inst[19:12],inst[20],inst[30:21]};   

    wire [31:0] imm_i_ext={{20{imm_i[11]}},imm_i};
    wire [31:0] imm_u_ext={imm_u,12'b0};
    wire [31:0] imm_j_ext = {{11{imm_j[20]}},imm_j,1'b0};


    assign imm = (opcode==7'b0010111 || opcode==7'b0110111) ? imm_u_ext : (opcode==7'b1101111)  ?  imm_j_ext : imm_i_ext;
    assign rd_addr = rd;

    assign reg_write_en = 
    (opcode == 7'b0010011 && funct3 == 3'b000) ||  // addi
    (opcode == 7'b0010111) || // auipc
    (opcode == 7'b0110111) || // lui
    (opcode == 7'b1101111) || // jal
    (opcode == 7'b1100111 && funct3==3'b000); // jalr
    assign rs1_data_out = rs1_data;
    /* verilator lint_off UNUSEDSIGNAL */
    wire [4:0] rs1; // 保留 rs1
    /* verilator lint_on UNUSEDSIGNAL */
endmodule


