#include<verilog_init.h>
#include<verilog.h>
#include<cpu/cpu.h>
#include<cpu/decode.h>
#include<cpu/difftest.h>
#include<reg.h>
#include<memory/paddr.h>


void device_update();

CPU_state cpu = {};
Decode lastest_decode = {
    .pc   = cpu.pc,
    .snpc = cpu.pc + 4,
    .logbuf = {},
};



#define MAX_INST_TO_PRINT 100

// 检查是否需要跳过差分测试
static bool should_skip_difftest() {
    bool need_skip = false;

    // 检查 Load/Store 指令是否访问 MMIO
    if (top->is_load_out || top->is_store_out) {
        paddr_t addr = top->is_load_out ? top->dmem_raddr_out : top->dmem_waddr_out;
        if (!in_pmem(addr)) {
            need_skip = true;  // MMIO 访问需要跳过
        }
    }

    // CSR 指令需要跳过
    if (top->opcode_out == 0b1110011) {
        need_skip = true;
    }

    // ECALL 指令需要跳过
    if (top->is_ecall_out) {
        need_skip = true;
    }

    return need_skip;
}

static void trace_and_difftest(Decode *_this,vaddr_t dnpc)
{
    // 只在指令完成时进行差分测试
    if (top->inst_wb_complete) {
        #ifdef CONFIG_DIFFTEST
        if (should_skip_difftest()) {
            // 需要跳过：将 DUT 状态同步到 REF
            difftest_skip_ref();
        } else {
            // 正常差分测试

            difftest_step(_this->pc, dnpc);
        }
        #endif
    }

#ifdef CONFIG_WATCHPOINT
    extern int monitor_point(uint32_t cpu_pc);

    if (monitor_point(cpu.pc))
    {
        npc_state.state = NPC_STOP;
    }

#endif
}

uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0;
static bool g_print_step = false;
 
static void exec_once(){

    
    top->clk = 0;
    top->eval();
    tfp->dump(sim_time++);
    top->clk = 1;
    top->eval();
    tfp->dump(sim_time++);
}

static void execute(uint64_t n)
{
    for (; n > 0;n--){
        if (Verilated::gotFinish())
        {
            npc_state.state = NPC_END;
            return;
        }

     //   clint_update_mtime();
        exec_once();
        g_nr_guest_inst++;
        trace_and_difftest(&lastest_decode ,cpu.pc);

        if(npc_state.state != NPC_RUNNING)
        break;

         IFDEF(CONFIG_DEVICE, device_update());
    }
}

void cpu_exec(uint64_t n){
    
    g_print_step = (n < MAX_INST_TO_PRINT);
    switch (npc_state.state){
    case NPC_END:
    case NPC_ABORT:
    case NPC_QUIT:
        std::cout << " Program execution has ended.To restart the program, exit NEMU and run again."<<std::endl;
        return;
    default:
        npc_state.state = NPC_RUNNING;
    }

    top->p_count_number = n > 1000000 ? MAX_INST_TO_PRINT + 1 : n;
    execute(n);


}
 
