VSRC = $(wildcard vsrc/*.v)
CSRC = $(wildcard csrc/*.cpp)
SRCS=  $(VSRC) $(CSRC)
NXDC = constr/mux.nxdc
TOPNAME = ysyx_25040109_top
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""
INC_PATH ?=
IMG ?=

LDFLAGS=-lreadline -lhistory -lncurses

include $(NVBOARD_HOME)/scripts/nvboard.mk


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
	verilator -Wall --cc --exe  --x-assign unique --x-initial unique --build $(SRCS)  --trace-fst --top-module $(TOPNAME) $(addprefix -LDFLAGS , $(LDFLAGS))


run: waveform
	./obj_dir/V$(TOPNAME) $(IMG)

#run:./obj_dir/V$(TOPNAME)  +verilator+rand+reset+2


look:
	gtkwave sim.fst	


#clean:
#	rm -rf obj_dir waveform.fst waveform.fst.hier auto_bind.cpp

include ../Makefile
