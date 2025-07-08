#include<verilog_init.h>
#include<verilog.h>
#include<cpu/cpu.h>

#define MAX_INST_TO_PRINT 100



uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0;
static bool g_print_step = false;

extern "C" static void exec_once(){

    top->clk = 0;
    top->eval();
    tfp->dump(sim_time++);
    top->eval();
    tfp->dump(sim_time++);
}

extern "C" static void execute(uint64_t n){
    for (; n > 0;n--){
        if (Verilated::gotFinish())
        {
            npc_state.state = NPC_END;
            return;
        }
        exec_once();
        g_nr_guest_inst++;

        if(npc_state.state != NPC_RUNNING)
        break;
    }
}

extern "C" static void cpu_exec(uint64_t n){
    g_print_step = (n < MAX_INST_TO_PRINT);
    switch (npc_state.state){
    case NPC_END:
    case NPC_ABORT:
    case NPC_QUIT:
        std::cout << " Program execution has ended.To restart the program, exit NEMU and run again."<<endl;
        return;
    default:
        npc_state.state = NPC_RUNNING;
    }

    execute(n);


}
