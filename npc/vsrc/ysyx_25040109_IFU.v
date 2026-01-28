module ysyx_25040109_IFU (
    input           clk,
    input           rst,

    // 来自 MEM
    input  [31:0]   imem_rdata,
    input           mem_valid,
    output          ifu_ready_to_mem, // ready 给 MEM

    // 去往 IDU
    input           idu_ready,
    output [31:0]   inst_ifu,
    output          ifu_valid_to_idu
);


    ysyx_25040109_hanshake u_ifu_hanshake (
        .clk(clk),
        .rst(rst),
        .imem_rdata(imem_rdata),
        .mem_valid(mem_valid),
        .ifu_ready_to_mem(ifu_ready_to_mem),
        .idu_ready(idu_ready),
        .inst_ifu(inst_ifu),
        .ifu_valid_to_idu(ifu_valid_to_idu)
    );

endmodule
