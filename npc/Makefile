VSRC = vsrc/top.v vsrc/light.v
CSRC = csrc/water_light.cpp
TOPNAME = top
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""
INC_PATH ?=

include $(NVBOARD_HOME)/scripts/nvboard.mk

all:
	@echo "Write this Makefile by your self."

sim:$(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py constr/light.nxdc auto_bind.cpp
	verilator -Wall --cc --exe --build $^ auto_bind.cpp --trace-fst --top-module top $(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS))


run:
	./obj_dir/V$(TOPNAME) 

look:
	gtkwave waveform.fst	


clean:
	rm -rf obj_dir waveform.fst top.fst.hier auto_bind.cpp

include ../Makefile
