# Default to Verilator since your snippet uses it, but Icarus works too
SIM ?= verilator
TOPLEVEL_LANG = verilog
.DEFAULT_GOAL := sim
# Keep simulator products separate when switching between the SoC and bnn_core
# test targets; otherwise cocotb can reuse a binary for the wrong top level.
SIM_BUILD ?= sim_build/$(TOPLEVEL)

# Enable tracing for Surfer (.vcd or .fst output)
ifeq ($(SIM),verilator)
    EXTRA_ARGS += --trace --trace-structs --sv --timing
else ifeq ($(SIM),icarus)
    # Icarus specific flags if you switch
    COMPILE_ARGS += -g2012 
endif

# =========================
# SOURCES
# =========================

# Point directly to your new clean SoC files
VERILOG_SOURCES = \
   fsm_pkg.sv \
   constants_pkg.sv \
   layer_pkg.sv \
   core_processing.sv \
   picorv32.v \
   top_soc.sv \
   axi-lite-wraper.sv \
   bnn_core.sv \
 


# =========================
# TOP LEVEL HARDWARE MODULE
# =========================

TOPLEVEL = top_soc

# =========================
# PYTHON TEST MODULE
# =========================

# This tells Cocotb to look for verification/test_soc.py by default.
MODULE = verification.test_soc

CORE_VERILOG_SOURCES = fsm_pkg.sv constants_pkg.sv layer_pkg.sv core_processing.sv bnn_core.sv

.PHONY: core-test
core-test:
	$(MAKE) TOPLEVEL=bnn_core SIM_BUILD=sim_build/bnn_core \
		MODULE='verification.test_reset,verification.test_popcount,verification.test_random,verification.test_latency,verification.test_controller_pe' \
		VERILOG_SOURCES='$(CORE_VERILOG_SOURCES)' SIM=$(SIM)

# =========================
# COCOTB FRAMEWORK
# =========================

include $(shell cocotb-config --makefiles)/Makefile.sim
