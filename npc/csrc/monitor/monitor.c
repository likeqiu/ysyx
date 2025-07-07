#include <isa.h>
#include <memory/paddr.h>


void init_rand();
void init_log(const char *log_file);
void init_mem();
void init_device();
void init_sdb();

static void welcome()
{
    Log("Trace: %s", MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
    IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
                            "to record the trace. This may lead to a large log file. "
                            "If it is not necessary, you can disable it in menuconfig"));
    Log("Build time: %s, %s", __TIME__, __DATE__);
    printf("Welcome to %s-npc!\n", ANSI_FMT(str(riscv32), ANSI_FG_YELLOW ANSI_BG_RED));
    printf("For help, type \"help\"\n");
}

void sdb_set_batch_mode();


void init_monitor(int argc, char *argv[])
{
    
    
    //init_sdb();
    welcome();
}
