#ifndef __VERILOG_INIT_H__
#define __VERILOG_INIT_H__


#ifdef SOC_TOP
#include <VysyxSoCFull.h>
#include <VysyxSoCFull___024root.h>
  typedef VysyxSoCFull VTop;
#else
#include <Vysyx_25040109_top.h>
#include <Vysyx_25040109_top___024root.h>
  typedef Vysyx_25040109_top VTop;
#endif

extern VTop *top;



#include <verilated_fst_c.h>
#include <verilated.h>


extern VerilatedFstC *tfp;
extern vluint64_t sim_time ;

extern "C" void init_verilog(int argc, char **argv);
extern "C" void clear_verilog();

#endif
