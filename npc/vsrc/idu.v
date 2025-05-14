module ysyx_25040109_IDU(
    input [31:0] inst,
    output [4:0]  rd_addr,
    output [31:0] imm,
    output reg_wrote_en,
    input [31:0] rs1_data
);

    wire [6:0] opcode=inst[6:0];
    wire [2:0] func3=inst[14:12];
    wire [4:0] rs1=inst[19:15];
    wire [4:0] rd=inst[11:7];
    wire [11:0] imm_i=inst[31:20];

    assign imm={{20{imm_i[11]}},imm_i};
    assign rd_addr=rd;
    assign reg_write_en={opcode == 7'b0010011 && func3==3'b000};


endmodule