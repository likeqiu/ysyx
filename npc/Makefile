VSRC= vsrc/water_fall_light.v
CSRC=csrc/water_light.cpp
NAME=$(patsubst vsrc/%.v,%,$(VSRC))


all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator --cc $(VSRC) --exe $(CSRC) --trace --trace-fst
	make -j -C obj_dir -f V$(NAME).mk

run:
	./obj_dir/V$(NAME) +trace

look:
	gtkwave $(NAME).fst	

clean:
	rm -rf obj_dir	

include ../Makefile
