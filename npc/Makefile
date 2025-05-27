VSRC = $(wildcard vsrc/*.v)
CSRC = $(wildcard csrc/*.cpp) $(wildcard csrc/*.c)
HSRC = $(wildcard csrc/*.h)
SRCS=  $(VSRC) $(CSRC) 
NXDC = constr/mux.nxdc
TOPNAME = ysyx_25040109_top
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""
CFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""
INC_PATH ?=
IMG ?=

LDFLAGS=-lreadline -lhistory -lncurses

include $(NVBOARD_HOME)/scripts/nvboard.mk





# LLVM 相关的编译和链接选项
CONFIG_ITRACE=y # 明确开启 ITRACE

ifdef CONFIG_ITRACE
    # 使用 llvm-config-14 明确指定版本，确保路径正确
    LLVM_INCLUDE_DIR = $(shell llvm-config-14 --includedir)
    LLVM_LIB_DIR = $(shell llvm-config-14 --libdir)
    # LLVM 需要链接的库：对于 GCC 来说，通常和 Clang 类似，但需要确保所有依赖都列出
    # --libs 输出的是 -lNAME 格式，将其直接加入 LIBS 列表
    # --ldflags 通常会包含 -L 和额外的链接器参数，我们手动拆分以更精细控制
    LLVM_LIBS_LIST = $(shell llvm-config-14 --libs core support mc mcdisassembler target) # 减少列表，只包含常用且必要的
    # 这里添加 llvm-config --libs 可能不会自动带上 -lLLVMRISCVDisassembler，需要手动添加
    # 实际测试中，可能需要增加其他 LLVM 组件库，如：InstPrinter, AsmPrinter, Object
    LLVM_LIBS_LIST += -lLLVMRISCVDisassembler
    LLVM_LIBS_LIST += -lLLVMInstPrinter -lLLVMAsmPrinter -lLLVMObject

    # 将 LLVM 头文件路径加入 CXXFLAGS (因为 disasm.cpp 是 C++ 代码)
    CXXFLAGS += -I$(LLVM_INCLUDE_DIR)

    # 将 LLVM 库路径加入 LDFLAGS
    LDFLAGS += -L$(LLVM_LIB_DIR)
    # 将 LLVM 库列表加入 LIBS 变量
    LIBS += $(LLVM_LIBS_LIST)
endif

all:
	@echo "Write this Makefile by your self."

sim:$(VSRC) $(CSRC_NVBOARD) $(NVBOARD_ARCHIVE)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $(NXDC) auto_bind.cpp
	verilator  --cc --exe --build --noassert $(VSRC) $(CSRC) $(NVBOARD_ARCHIVE) auto_bind.cpp --trace-fst --top-module top $(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS))

#$(addprefix -CFLAGS , $(CXXFLAGS)),$(addprefix -LDFLAGS , $(LDFLAGS))编译器和链接器参数

waveform: 
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator -Wall --cc --exe  --x-assign unique --x-initial unique --build $(SRCS)  --trace-fst --top-module $(TOPNAME) $(addprefix -LDFLAGS , $(LDFLAGS)) $(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -CXXFLAGS , $(CXXFLAGS))


run: waveform
	./obj_dir/V$(TOPNAME) $(IMG)

#run:./obj_dir/V$(TOPNAME)  +verilator+rand+reset+2


look:
	gtkwave sim.fst	


#clean:
#	rm -rf obj_dir waveform.fst waveform.fst.hier auto_bind.cpp

include ../Makefile
