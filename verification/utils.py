import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ClockCycles

# FSM states from fsm_pkg.sv (assuming default enum encoding)
RESET = 0
CONFIG_LAYER = 1
IDLE = 2
WAIT = 3
FETCH_ACTIVATIONS = 4
INITIAL_FETCH_WEIGHTS = 5
FETCH_THRESHOLDS = 6
COMPUTE = 7
LOAD_OUTPUT = 8
READY = 9

def get_clk(dut):
    return getattr(dut, "clk", None) or getattr(dut, "aclk", None)

def get_rst(dut):
    return getattr(dut, "rstn", None) or getattr(dut, "aresetn", None)

async def start_clock(dut, period_ns=10):
    """Starts a clock on the DUT's clock signal."""
    clk_handle = get_clk(dut)
    cocotb.start_soon(Clock(clk_handle, period_ns, unit="ns").start())
    await ClockCycles(clk_handle, 2) # Give some time for clock to stabilize

async def reset_core(dut):
    """Applies a standard reset sequence to the DUT."""
    clk_handle = get_clk(dut)
    rst_handle = get_rst(dut)
    
    rst_handle.value = 0
    await ClockCycles(clk_handle, 10)
    rst_handle.value = 1
    await ClockCycles(clk_handle, 2) # Wait a bit after reset release
    dut._log.info("DUT Reset Complete.")

def safe_int(signal):
    """Safely converts a cocotb signal value to an integer, handling 'X'."""
    try:
        return int(signal.value)
    except ValueError:
        return 0 # Default to 0 for 'X' or 'Z' states

def core_debug(dut):
    """Returns a debug string for bnn_core state."""
    # This function is specific to bnn_core, so it assumes dut is bnn_core
    try:
        state_name = {
            0: "RESET", 1: "CONFIG_LAYER", 2: "IDLE", 3: "WAIT",
            4: "FETCH_ACTIVATIONS", 5: "INITIAL_FETCH_WEIGHTS",
            6: "FETCH_THRESHOLDS", 7: "COMPUTE", 8: "LOAD_OUTPUT", 9: "READY"
        }.get(safe_int(dut.state), "UNKNOWN")
        return (
            f"State: {state_name} ({safe_int(dut.state)}), "
            f"Busy: {safe_int(dut.busy)}, Done: {safe_int(dut.done)}, "
            f"Word_idx: {safe_int(dut.word_idx)}, "
            f"Neuron_counter: {safe_int(dut.neuron_counter)}"
        )
    except AttributeError:
        return "core_debug: Not a bnn_core DUT or signals not found."