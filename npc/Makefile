# 基本源文件设置
NPC_HOME ?= /home/zxj17/ysyx-workbench/npc
NPC_HOME := $(abspath $(NPC_HOME))

VSRC = $(wildcard $(NPC_HOME)/vsrc/*.v)
CSRC = $(shell find $(NPC_HOME)/csrc -type f -name '*.c') \
       $(shell find $(NPC_HOME)/csrc -type f -name '*.cpp' -not -path '$(NPC_HOME)/csrc/llvm/*')
SRCS = $(VSRC) $(CSRC)

NXDC = $(NPC_HOME)/constr/mux.nxdc
TOPNAME = ysyx_25040109_top
NAME = riscv32e-npc-interpreter
BUILD_DIR = $(NPC_HOME)/build

INC_PATH = $(shell find $(NPC_HOME)/include -type d) \
           $(NPC_HOME)/csrc/riscv32 \
           /usr/include/llvm-14 \
           /usr/include/llvm-c-14/ \
           $(NPC_HOME)/csrc/riscv32/local-include \
           $(NPC_HOME)/csrc/llvm/
INCFLAGS = $(addprefix -I, $(INC_PATH))
DEBUG ?= 0
ifeq ($(DEBUG),1)
CFLAGS   += -g -Og -fno-omit-frame-pointer -sanitizer
CXXFLAGS += -g -Og -fno-omit-frame-pointer -sanitizer
endif



IMG ?= 
ARGS ?=
ALL ?=



FST = 1







CPU_DEBUG = 1
#SOC_DEBUG = 1
#SOC_TOP = 1
YSYX_SOC_HOME ?= /home/zxj17/ysyx-workbench/ysyxSoC
YSYX_SOC_HOME := $(abspath $(YSYX_SOC_HOME))

NPC_VSRC_SOC = $(filter-out %/ysyx_25040109_top.v %/uart.v,$(VSRC))
YSYX_SOC_PERIP_VSRC = $(shell find $(YSYX_SOC_HOME)/perip -name '*.v')
YSYX_SOC_VSRC = $(YSYX_SOC_HOME)/build/ysyxSoCFull.v $(YSYX_SOC_PERIP_VSRC)
YSYX_SOC_INC_PATH = $(YSYX_SOC_HOME)/perip/uart16550/rtl $(YSYX_SOC_HOME)/perip/spi/rtl
YSYX_SOC_INCFLAGS = $(addprefix -I, $(YSYX_SOC_INC_PATH))

SOC_TOPNAME = ysyxSoCFull
SOC_NAME = riscv32e-npc-ysyxSoC
SOC_OBJ_DIR = $(NPC_HOME)/obj_dir_soc
SOC_CFLAGS = -DSOC_TOP 
SOC_VERILATOR_FLAGS = --timescale "1ns/1ns" --no-timing -DSOC_TOP

VERILATOR_WARN ?= 0
ifeq ($(VERILATOR_WARN),1)
VERILATOR_WALL = -Wall
VERILATOR_WARNFLAGS =
else
VERILATOR_WALL =
VERILATOR_WARNFLAGS = -Wno-lint -Wno-style -Wno-context
endif

SOC_VERILATOR_WARNFLAGS = $(VERILATOR_WARNFLAGS) -Wno-DECLFILENAME -Wno-PINCONNECTEMPTY -Wno-fatal
SOC_VSRC = $(NPC_VSRC_SOC) $(YSYX_SOC_VSRC)

ifeq ($(strip $(SOC_TOP)),)
NPC_TOPNAME = $(TOPNAME)
NPC_NAME = $(NAME)
NPC_OBJ_DIR = $(NPC_HOME)/obj_dir
NPC_VSRC = $(VSRC)
NPC_INCFLAGS_EXTRA =
NPC_VERILATOR_FLAGS =  -DCPU_DEBUG
NPC_VERILATOR_WARNFLAGS = $(VERILATOR_WARNFLAGS)
NPC_CFLAGS_EXTRA = 
else
NPC_TOPNAME = $(SOC_TOPNAME)
NPC_NAME = $(SOC_NAME)
NPC_OBJ_DIR = $(SOC_OBJ_DIR)
NPC_VSRC = $(SOC_VSRC)
NPC_INCFLAGS_EXTRA = $(YSYX_SOC_INCFLAGS)
NPC_VERILATOR_FLAGS = $(SOC_VERILATOR_FLAGS)
NPC_VERILATOR_WARNFLAGS = $(SOC_VERILATOR_WARNFLAGS)
NPC_CFLAGS_EXTRA = $(SOC_CFLAGS)
endif

NPC_SRCS = $(NPC_VSRC) $(CSRC)

#CFLAGS += -DSYNTHESIS

CONFIG_DIFFTEST = y
ifdef CONFIG_DIFFTEST
DIFF_REF_SO = $(NPC_HOME)/tools/build/riscv32-nemu-interpreter-so
ARGS_DIFF = --diff=$(DIFF_REF_SO)
endif

# 基本链接库
LDFLAGS = -lreadline -lhistory -lncurses -lSDL2

include $(NVBOARD_HOME)/scripts/nvboard.mk

ARGS_DIFF ?=

# ===== 动态库方案 =====
# 检查是否需要编译LLVM包装器动态库
LLVM_DIR = $(NPC_HOME)/csrc/llvm
LLVM_WRAPPER_LIB = $(abspath $(LLVM_DIR)/libllvm_wrapper.so)
LLVM_WRAPPER_SRC = $(abspath $(LLVM_DIR)/llvm_wrapper.cpp)
DISASM_OBJ = $(abspath $(LLVM_DIR)/disasm.o)
DISASM_SRC = $(abspath $(LLVM_DIR)/disasm.cpp)

# 检查llvm-config是否可用
LLVM_CONFIG := $(shell which llvm-config-14 2>/dev/null || which llvm-config 2>/dev/null)

ifneq ($(LLVM_CONFIG),)
    # LLVM可用，启用动态库支持
    $(info Found LLVM config: $(LLVM_CONFIG))
    LLVM_AVAILABLE = 1

    # LLVM编译参数（仅用于编译包装器）
    LLVM_CXXFLAGS := $(shell $(LLVM_CONFIG) --cxxflags)
    LLVM_LDFLAGS := $(shell $(LLVM_CONFIG) --ldflags)
    LLVM_LIBS := $(shell $(LLVM_CONFIG) --libs core mc mcdisassembler support)

    # 主程序只需要链接dl库（用于动态加载）
    LDFLAGS += -ldl

    # 将反汇编对象文件加入到源文件中
    CSRC += $(DISASM_OBJ)
else
    $(info LLVM not found, disassembly will use objdump fallback)
    LLVM_AVAILABLE = 0
    LDFLAGS += -ldl
    CSRC += $(DISASM_OBJ)
endif

# 编译LLVM包装器动态库（如果LLVM可用）
$(LLVM_WRAPPER_LIB): $(LLVM_WRAPPER_SRC)
ifeq ($(LLVM_AVAILABLE),1)
	@echo "Building LLVM wrapper library..."
	g++ -shared -fPIC $(LLVM_CXXFLAGS) -o $@ $< $(LLVM_LDFLAGS) $(LLVM_LIBS)
	@echo "LLVM wrapper library built successfully"
else
	@echo "LLVM not available, creating dummy library..."
	@touch $@
endif

# 编译反汇编对象文件
$(DISASM_OBJ): $(DISASM_SRC)
	@echo "Building disassembler object..."
	@mkdir -p $(dir $@)
	g++ -O2 -Wall -fPIC -c -o $@ $< -ldl

# 强制编译规则：确保文件存在
.PHONY: ensure-llvm-deps
ensure-llvm-deps:
	@if [ ! -f $(DISASM_OBJ) ]; then \
		echo "Building missing disasm.o..."; \
		mkdir -p $(LLVM_DIR); \
		g++ -O2 -Wall -fPIC -c -o $(DISASM_OBJ) $(DISASM_SRC) -ldl; \
	fi
ifeq ($(LLVM_AVAILABLE),1)
	@if [ ! -f $(LLVM_WRAPPER_LIB) ]; then \
		echo "Building missing LLVM wrapper library..."; \
		g++ -shared -fPIC $(LLVM_CXXFLAGS) -o $(LLVM_WRAPPER_LIB) $(LLVM_WRAPPER_SRC) $(LLVM_LDFLAGS) $(LLVM_LIBS); \
	fi
endif

# 确保在编译主程序前先编译依赖库
COMPILE_DEPS = $(DISASM_OBJ)
ifeq ($(LLVM_AVAILABLE),1)
    COMPILE_DEPS += $(LLVM_WRAPPER_LIB)
endif

# Verilator 生成/编译分离（waveform）
VERILATE_MK = $(NPC_OBJ_DIR)/V$(NPC_TOPNAME).mk
CSRC_LIST = $(NPC_OBJ_DIR)/csrc.list
VERILATE_DEPS = $(NPC_VSRC) $(CSRC_LIST) $(NPC_HOME)/Makefile

all:
	@echo "Write this Makefile by your self."

# 添加库路径到运行时环境
export LD_LIBRARY_PATH := $(LLVM_DIR):$(LD_LIBRARY_PATH)

$(CSRC_LIST): FORCE
	@mkdir -p $(dir $@)
	@printf "%s\n" $(sort $(CSRC)) > $@.tmp
	@if [ ! -f $@ ] || ! cmp -s $@.tmp $@; then mv $@.tmp $@; else rm -f $@.tmp; fi

FORCE:

sim: $(COMPILE_DEPS) $(VSRC) $(CSRC_NVBOARD) $(NVBOARD_ARCHIVE)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Building simulation with dynamic LLVM support..."
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $(NXDC) $(NPC_HOME)/auto_bind.cpp
	verilator $(VERILATOR_WALL) --cc --exe --build --noassert $(NPC_VERILATOR_FLAGS) $(NPC_VERILATOR_WARNFLAGS) $(VSRC) $(CSRC) $(NVBOARD_ARCHIVE) $(NPC_HOME)/auto_bind.cpp \
		--trace-fst --top-module top \
		$(addprefix -CFLAGS , $(CXXFLAGS)) \
		$(addprefix -LDFLAGS , $(LDFLAGS))

verilate: $(VERILATE_MK)

$(VERILATE_MK): $(VERILATE_DEPS) | ensure-llvm-deps $(COMPILE_DEPS)
	@echo "Generating waveform Verilated sources..."
	verilator $(VERILATOR_WALL) --cc --exe --x-assign unique --x-initial unique $(NPC_SRCS) \
		--trace-fst --top-module $(NPC_TOPNAME) $(NPC_VERILATOR_FLAGS) $(NPC_VERILATOR_WARNFLAGS) -Mdir $(NPC_OBJ_DIR) \
		$(NPC_INCFLAGS_EXTRA) \
		$(addprefix -LDFLAGS , $(LDFLAGS)) \
		$(addprefix -CFLAGS , $(CFLAGS)) \
		$(addprefix -CFLAGS , $(CXXFLAGS) $(INCFLAGS) $(NPC_CFLAGS_EXTRA))

build: $(VERILATE_MK) ensure-llvm-deps $(COMPILE_DEPS)
	@echo "Building waveform with incremental make..."
	$(MAKE) -C $(NPC_OBJ_DIR) -f V$(NPC_TOPNAME).mk
	cp -f $(NPC_OBJ_DIR)/V$(NPC_TOPNAME) $(BUILD_DIR)/$(NPC_NAME)

waveform:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@$(MAKE) build

#$(IMG) /home/zxj17/ysyx-workbench/am-kernels/tests/cpu-tests/tests/output/char-test.bin
run: waveform
	@echo "Setting library path and running..."
	@echo "LD_LIBRARY_PATH=$(LLVM_DIR):$LD_LIBRARY_PATH"
	@echo "$(BUILD_DIR)/$(NPC_NAME) $(ARGS) $(IMG) $(ARGS_DIFF)"
	LD_LIBRARY_PATH=$(LLVM_DIR):$LD_LIBRARY_PATH $(BUILD_DIR)/$(NPC_NAME) $(ARGS)  $(ARGS_DIFF) $(IMG)
	mv $(NPC_HOME)/sim.fst $(NPC_HOME)/$(FST).fst

look:
	gtkwave $(NPC_HOME)/$(FST).fst

# 安装LLVM库到系统路径
install-llvm-lib: $(LLVM_WRAPPER_LIB)
ifeq ($(LLVM_AVAILABLE),1)
	@echo "Installing LLVM wrapper library to system..."
	sudo cp $(LLVM_WRAPPER_LIB) /usr/local/lib/
	sudo ldconfig
	@echo "Library installed. You can now run without setting LD_LIBRARY_PATH"
else
	@echo "LLVM not available, nothing to install"
endif

info:
	@echo "=== Build Configuration ==="
	@echo "LLVM Available: $(LLVM_AVAILABLE)"
ifneq ($(LLVM_CONFIG),)
	@echo "LLVM Config: $(LLVM_CONFIG)"
	@echo "LLVM Version: $(shell $(LLVM_CONFIG) --version)"
endif
	@echo "Source files: $(words $(CSRC))  $(CSRC) C/C++ files, $(words $(VSRC)) Verilog files"
	@echo "Dependencies: $(COMPILE_DEPS)"
	@echo "LD_LIBRARY_PATH will include: $(LLVM_DIR)"
	@echo "INC_PATH: $(INC_PATH)"

check: waveform
	@echo "Verilog : $(VSRC)"
	@echo "\n"
	@echo "C/CPP   : $(CSRC)"
	@echo "\n"
	@echo "INC_PATH: $(INC_PATH)"
	@echo "111"
	@echo "$(ARGS_DIFF)"

clean:
	rm -rf $(NPC_OBJ_DIR) $(NPC_HOME)/waveform.fst $(NPC_HOME)/waveform.fst.hier $(NPC_HOME)/auto_bind.cpp $(NPC_HOME)/*.fst
	rm -f $(LLVM_WRAPPER_LIB) $(DISASM_OBJ)

.PHONY: all sim verilate build waveform run look clean install-llvm-lib info clean-llvm rebuild-llvm FORCE

include $(abspath $(NPC_HOME)/../Makefile)
