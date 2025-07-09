#include <isa.h>
#include <memory/paddr.h>
#include<verilog_init.h>


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

#ifndef CONFIG_TARGET_AM
#include <getopt.h>

void sdb_set_batch_mode();

static char *img_file = NULL;

static long load_img(){
    if(img_file == NULL){
        Log("No image is given. Use the default build-in image.");
        return 4096;
    }

    FILE *fp = fopen(img_file, "rb");
    Assert(fp, "Can not open %s", img_file);

    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);


    fseek(fp, 0, SEEK_SET);
    int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
    assert(ret == 1);
    
    fclose(fp);
    return size;
}

static int parse_args(int argc,char *argv[]){
    const struct option table[] = {
        {0,0,NULL,0},
    };
    if(argc>1){
    img_file = argv[1];
    }


    return 0;
}



void init_monitor(int argc, char *argv[])
{
    parse_args(argc, argv);

    long img_size = load_img();
    init_verilog(argc,argv);
    // init_sdb();
    init_mem();
    welcome();
}

#else // CONFIG_TARGET_AM
static long load_img()
{
    extern char bin_start, bin_end;
    size_t size = &bin_end - &bin_start;
    Log("img size = %ld", size);
    memcpy(guest_to_host(RESET_VECTOR), &bin_start, size);
    return size;
}

void am_init_monitor()
{
    init_rand();
    init_mem();
    init_isa();
    load_img();
    IFDEF(CONFIG_DEVICE, init_device());
    welcome();
}
#endif