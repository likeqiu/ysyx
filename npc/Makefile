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

    # LLD_FLAGS 和 LLVM_LIBS_LIST 的定义可以简化或移除，
    # 因为我们将直接使用 llvm-config 的输出来填充 LDFLAGS
    # LLVM_LIB_DIR = $(shell llvm-config-14 --libdir)
    # LLVM_LIBS_LIST = $(shell llvm-config-14 --libs core support mc mcdisassembler target)
    # LLVM_LIBS_LIST += -lLLVMRISCVDisassembler -lLLVMInstPrinter -lLLVMAsmPrinter -lLLVMObject

    CXXFLAGS += -I/usr/include/llvm-14 $(shell llvm-config-14 --cxxflags) -fexceptions

    # === 最重要的修改在这里 ===
    # 直接使用 llvm-config 获取所有库和链接器标志
    # 这会包含 -L/path/to/llvm/lib 和 -lLLVM... 等所有必要的链接标志
    LDFLAGS += $(shell llvm-config-14 --ldflags --libs all)

    # 确保你的 verilator 命令在 -LDFLAGS 后面加上了 $(LDFLAGS) $(LIBS)
    # 如果你的 Makefile 已经有 LIBS 变量，并且在 verilator 命令中使用了它，
    # 则需要确保 LLVM_LIBS_LIST 不再是空的，或者将其内容合并到 LDFLAGS 中
    # 为了避免重复或遗漏，最稳妥的是在 LDFLAGS 中直接包含所有。
    # 鉴于上面已经添加了 --ldflags --libs all，你可能不需要单独的 LIBS 变量了。
    # 如果你的 verilator 命令是这样调用：
    # verilator ... -LDFLAGS $(LDFLAGS) -LDFLAGS $(LIBS) ...
    # 那么将 LIBS 定义为：
    # LIBS :=
    # 这样可以避免重复或混淆

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
	verilator -Wall --cc --exe  --x-assign unique --x-initial unique --build $(SRCS)  --trace-fst --top-module $(TOPNAME) $(addprefix -LDFLAGS , $(LDFLAGS)) $(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -CFLAGS , $(CXXFLAGS))
	

run: waveform
	./obj_dir/V$(TOPNAME) $(IMG)

	

#run:./obj_dir/V$(TOPNAME)  +verilator+rand+reset+2


look:
	gtkwave sim.fst	


clean:
	rm -rf obj_dir waveform.fst waveform.fst.hier auto_bind.cpp

include ../Makefile
