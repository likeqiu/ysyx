SBT ?= sbt
SITE = "runMain updown.add"
TEST = "testOnly updown.AddModuleSpec"
BUILD_DIR ?= /home/zxj17/ysyx-workbench/npc/chisel-template/build
OUT_DIR ?= .

.PHONY: clean compile package run test sv

clean:
	rm -rf target/ project/target/

run:
	$(SBT) $(SITE)

test:
	$(SBT) $(TEST)

sv:
	@if [ -z "$(MAIN)" ]; then echo "usage: make sv MAIN=updown.HelloWord [OUT_DIR=.]"; exit 1; fi
	$(SBT) "runMain $(MAIN)"
	@mkdir -p "$(BUILD_DIR)"
	@mv -f "$(OUT_DIR)"/*.sv "$(BUILD_DIR)"/
