VSRC = vsrc/top.v vsrc/light.v
CSRC = csrc/water_light.cpp
NAME = top

include $(NVBOARD_HOME)/scripts/nvboard.mk
CFLAGS = -I$(NVBOARD_HOME)/usr/include
CXXFLAGS = -I$(NVBOARD_HOME)/usr/include `sdl2-config --cflags`
LDFLAGS = -L$(NVBOARD_HOME)/build -lnvboard `sdl2-config --libs` -lSDL2_image

all:
	@echo "Write this Makefile by your self."

sim:$(NVBOARD_ARCHIVE)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator  -CFLAGS "$(CFLAGS)" -CXXFLAGS "$(CXXFLAGS)" -LDFLAGS "$(LDFLAGS)" -Wall --cc --exe  --build $(VSRC) $(CSRC) auto_bind.cpp --trace-fst --top-module top


run:
	./obj_dir/V$(NAME) 

look:
	gtkwave waveform.fst	





auto_bind:
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py constr/light.nxdc auto_bind.cpp


$(NVBOARD_ARCHIVE):
	$(MAKE) -C $(NVBOARD_HOME) nvboard-archive


clean:
	rm -rf obj_dir waveform.fst top.fst.hier auto_bind.cpp

include ../Makefile
