VSRC = vsrc/top.v vsrc/light.v
CSRC = csrc/water_light.cpp
NAME = top

include $(NVBOARD_HOME)/scripts/nvboard.mk

all:
	@echo "Write this Makefile by your self."

sim:$(NVBOARD_ARCHIVE)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	python $NVBOARD_HOME/scripts/auto_pin_bind.py light.nxdc auto_bind.cpp
	verilator -Wall -MMD --cc --exe --build $(VSRC) $(CSRC) auto_bind.cpp --trace-fst --top-module top


run:
	./obj_dir/V$(NAME) 

look:
	gtkwave waveform.fst	






$(NVBOARD_ARCHIVE):
	$(MAKE) -C $(NVBOARD_HOME) nvboard-archive


clean:
	rm -rf obj_dir waveform.fst top.fst.hier auto_bind.cpp

include ../Makefile
