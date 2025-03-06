VSRC = vsrc/top.v vsrc/light.v
CSRC = csrc/water_light.cpp
NAME = top

all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator -Wall --cc --exe --build $(VSRC) $(CSRC) --trace-fst --top-module top

run:
	./obj_dir/V$(NAME) 

look:
	gtkwave $(NAME).fst	

clean:
	rm -rf obj_dir top.fst top.fst.hier

include ../Makefile
