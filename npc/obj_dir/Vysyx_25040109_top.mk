# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vysyx_25040109_top.mk

default: Vysyx_25040109_top

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vysyx_25040109_top
# Module prefix (from --prefix)
VM_MODPREFIX = Vysyx_25040109_top
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-MMD \
	-O3 \
	-I/usr/include/SDL2 \
	-D_REENTRANT \
	-I/home/zxj17/ysyx-workbench/npc/include \
	-I/home/zxj17/ysyx-workbench/npc/include/memory \
	-I/home/zxj17/ysyx-workbench/npc/include/cpu \
	-I/home/zxj17/ysyx-workbench/npc/include/generated \
	-I/home/zxj17/ysyx-workbench/npc/include/device \
	-I/home/zxj17/ysyx-workbench/npc/csrc/riscv32 \
	-I/usr/include/llvm-14 \
	-I/usr/include/llvm-c-14/ \
	-I/home/zxj17/ysyx-workbench/npc/csrc/riscv32/local-include \
	-I/home/zxj17/ysyx-workbench/npc/csrc/llvm/ \
	-I/home/zxj17/ysyx-workbench/nvboard/usr/include \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	/home/zxj17/ysyx-workbench/npc/csrc/llvm/disasm.o \
	-lz \
	-lreadline \
	-lhistory \
	-lncurses \
	-lSDL2 \
	-lSDL2 \
	-lSDL2_image \
	-lSDL2_ttf \
	-ldl \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	cpu-exec \
	dut \
	device \
	map \
	mmio \
	keyboard \
	serial \
	timer \
	vga \
	hostcall \
	init \
	paddr \
	vaddr \
	monitor \
	expr \
	mtrace \
	sdb \
	watchpoint \
	npc-main \
	dut_t \
	reg \
	log \
	state \
	timer_u \
	verilog-main \
	verilog \
	verilog_exec \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/zxj17/ysyx-workbench/npc/csrc \
	/home/zxj17/ysyx-workbench/npc/csrc/cpu \
	/home/zxj17/ysyx-workbench/npc/csrc/cpu/difftest \
	/home/zxj17/ysyx-workbench/npc/csrc/device \
	/home/zxj17/ysyx-workbench/npc/csrc/device/io \
	/home/zxj17/ysyx-workbench/npc/csrc/engine \
	/home/zxj17/ysyx-workbench/npc/csrc/engine/interpreter \
	/home/zxj17/ysyx-workbench/npc/csrc/memory \
	/home/zxj17/ysyx-workbench/npc/csrc/monitor \
	/home/zxj17/ysyx-workbench/npc/csrc/monitor/sdb \
	/home/zxj17/ysyx-workbench/npc/csrc/riscv32 \
	/home/zxj17/ysyx-workbench/npc/csrc/utils \
	/home/zxj17/ysyx-workbench/npc/csrc/verilog \


### Default rules...
# Include list of all generated classes
include Vysyx_25040109_top_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

cpu-exec.o: /home/zxj17/ysyx-workbench/npc/csrc/cpu/cpu-exec.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
dut.o: /home/zxj17/ysyx-workbench/npc/csrc/cpu/difftest/dut.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
device.o: /home/zxj17/ysyx-workbench/npc/csrc/device/device.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
map.o: /home/zxj17/ysyx-workbench/npc/csrc/device/io/map.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mmio.o: /home/zxj17/ysyx-workbench/npc/csrc/device/io/mmio.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
keyboard.o: /home/zxj17/ysyx-workbench/npc/csrc/device/keyboard.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
serial.o: /home/zxj17/ysyx-workbench/npc/csrc/device/serial.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
timer.o: /home/zxj17/ysyx-workbench/npc/csrc/device/timer.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
vga.o: /home/zxj17/ysyx-workbench/npc/csrc/device/vga.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
hostcall.o: /home/zxj17/ysyx-workbench/npc/csrc/engine/hostcall.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
init.o: /home/zxj17/ysyx-workbench/npc/csrc/engine/interpreter/init.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
paddr.o: /home/zxj17/ysyx-workbench/npc/csrc/memory/paddr.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
vaddr.o: /home/zxj17/ysyx-workbench/npc/csrc/memory/vaddr.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
monitor.o: /home/zxj17/ysyx-workbench/npc/csrc/monitor/monitor.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
expr.o: /home/zxj17/ysyx-workbench/npc/csrc/monitor/sdb/expr.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mtrace.o: /home/zxj17/ysyx-workbench/npc/csrc/monitor/sdb/mtrace.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sdb.o: /home/zxj17/ysyx-workbench/npc/csrc/monitor/sdb/sdb.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
watchpoint.o: /home/zxj17/ysyx-workbench/npc/csrc/monitor/sdb/watchpoint.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
npc-main.o: /home/zxj17/ysyx-workbench/npc/csrc/npc-main.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
dut_t.o: /home/zxj17/ysyx-workbench/npc/csrc/riscv32/dut_t.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
reg.o: /home/zxj17/ysyx-workbench/npc/csrc/riscv32/reg.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
log.o: /home/zxj17/ysyx-workbench/npc/csrc/utils/log.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
state.o: /home/zxj17/ysyx-workbench/npc/csrc/utils/state.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
timer_u.o: /home/zxj17/ysyx-workbench/npc/csrc/utils/timer_u.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
verilog-main.o: /home/zxj17/ysyx-workbench/npc/csrc/verilog-main.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
verilog.o: /home/zxj17/ysyx-workbench/npc/csrc/verilog/verilog.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
verilog_exec.o: /home/zxj17/ysyx-workbench/npc/csrc/verilog/verilog_exec.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
Vysyx_25040109_top: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
