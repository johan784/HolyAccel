# Makefile for BNN Accelerator Verification
# One command: `make` runs the full regression under Verilator.
# From scratch: `make clean && make`.

SIM ?= verilator
TOPLEVEL_LANG ?= verilog

# =========================
# SIMULATOR FLAGS
# =========================
ifeq ($(SIM),verilator)
	# --public-flat-rw : expose internals (state, weight_bank, buffers) to cocotb
	# -Wno-WIDTH       : suppress width pedantry (functionally safe)
	EXTRA_ARGS += --trace --trace-structs --sv --timing -Wno-WIDTH --public-flat-rw
else ifeq ($(SIM),icarus)
	COMPILE_ARGS += -g2012
endif

# =========================
# SOURCES (paths match repo root)
# =========================

PE_VERILOG_SOURCES = \
	fsm_pkg.sv \
	constants_pkg.sv \
	core_processing.sv

CORE_VERILOG_SOURCES = \
	tb_weight_preload.sv \
	fsm_pkg.sv \
	constants_pkg.sv \
	layer_pkg.sv \
	core_processing.sv \
	bnn_core.sv

WRAPPER_VERILOG_SOURCES = \
	$(CORE_VERILOG_SOURCES) \
	axi-lite-wraper.sv

# =========================
# REGRESSION
# =========================

.PHONY: all clean pe_test single_layer_test network_test axi_test

all: pe_test single_layer_test network_test axi_test
	@echo ""
	@echo "=============================="
	@echo "=== FULL REGRESSION PASSED ==="
	@echo "=============================="

clean::
	rm -rf sim_build* results.xml __pycache__ verification/__pycache__ *.vcd

pe_test:
	@echo "--- Running PE Unit Tests ---"
	@+$(MAKE) sim \
	  SIM=$(SIM) \
	  TOPLEVEL=processing_element \
	  VERILOG_SOURCES="$(PE_VERILOG_SOURCES)" \
	  COCOTB_TEST_MODULES="verification.test_pe_unit" \
	  SIM_BUILD="sim_build_pe"

single_layer_test:
	@echo "--- Running Single-Layer Core Tests ---"
	@+$(MAKE) sim \
	  SIM=$(SIM) \
	  TOPLEVEL=bnn_core \
	  VERILOG_SOURCES="$(CORE_VERILOG_SOURCES)" \
	  COCOTB_TEST_MODULES="test_layer_single" \
	  SIM_BUILD="sim_build_core_single"

network_test:
	@echo "--- Running Multi-Layer Network Test ---"
	@+$(MAKE) sim \
	  SIM=$(SIM) \
	  TOPLEVEL=bnn_core \
	  VERILOG_SOURCES="$(CORE_VERILOG_SOURCES)" \
	  COCOTB_TEST_MODULES="test_network_6layer" \
	  SIM_BUILD="sim_build_core_network"

axi_test:
	@echo "--- Running AXI Wrapper Sequencing Test ---"
	@+$(MAKE) sim \
	  SIM=$(SIM) \
	  TOPLEVEL=bnn_axi_wrapper \
	  VERILOG_SOURCES="$(WRAPPER_VERILOG_SOURCES)" \
	  COCOTB_TEST_MODULES="test_axi_seq" \
	  SIM_BUILD="sim_build_axi_wrapper"

COCOTB_REDUCED_LOG_FMT=1
export COCOTB_REDUCED_LOG_FMT

# =========================
# COCOTB FRAMEWORK
# =========================

include $(shell cocotb-config --makefiles)/Makefile.sim

# MUST be after the include and MUST be 'all': cocotb's Makefile.inc sets
# .DEFAULT_GOAL := sim when included, which would otherwise win.
.DEFAULT_GOAL := all