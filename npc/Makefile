VSRC= vsrc/water_fall_light.v 
CSRC=csrc/water_light.cpp
TOP=vsrc/top.v
NAME=top


all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator --cc $(VSRC) $(TOP) --top-module top --exe $(CSRC)  --trace-fst
	make -j -C obj_dir -f V$(NAME).mk

run:
	./obj_dir/V$(NAME) +trace

look:
	gtkwave $(NAME).fst	

clean:
	rm -rf obj_dir top.fst top.fst.hier

include ../Makefile
