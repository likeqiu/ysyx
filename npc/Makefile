SVSRC=vsrc/CounterModule.sv
VSRC = vsrc/top.v vsrc/ALU.v 
CSRC = csrc/Counter.cpp
NXDC = constr/Counter.nxdc
TOPNAME = top
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""
INC_PATH ?=


include $(NVBOARD_HOME)/scripts/nvboard.mk

all:
	@echo "Write this Makefile by your self."

sim:$(VSRCS) $(CSRC_NVBOARD) $(NVBOARD_ARCHIVE)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $(NXDC) auto_bind.cpp
	verilator  --cc --exe --build --noassert $(SVSRC) $(CSRC) $(NVBOARD_ARCHIVE) auto_bind.cpp --trace-fst $(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS))


waveform:$(VSRCS) $(CSRC_WAVE)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator -Wall --cc --exe --x-assign unique --x-initial unique --build $(VSRC) $(CSRC_WAVE) --trace-fst --top-module top 

run:
	./obj_dir/VCounterModule  +verilator+rand+reset+2

look:
	gtkwave waveform.fst	

.PHONY: verilog
verilog:
	cd chisel-template
	mv $(SV) ../
	mv $(SV) /npc

clean:
	rm -rf obj_dir waveform.fst waveform.fst.hier auto_bind.cpp

include ../Makefile
