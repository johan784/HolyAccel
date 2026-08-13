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

async def start_clock(dut, period_ns=10):
    """Starts a clock on the dut.clk signal."""
    cocotb.start_soon(Clock(dut.clk, period_ns, units="ns").start())
    await ClockCycles(dut.clk, 2) # Give some time for clock to stabilize

async def reset_core(dut):
    """Applies a standard reset sequence to the DUT."""
    # The DUT could be bnn_core or processing_element, both use rstn
    dut.arstn.value = 0
    await ClockCycles(dut.aclk, 10)
    dut.arstn.value = 1
    await ClockCycles(dut.aclk, 2) # Wait a bit after reset release
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
            f"Neuron_counter: {safe_int(dut.neuron_counter)}, "
            f"Local_neuron_idx: {safe_int(dut.local_neuron_idx)}, "
            f"Act_select: {safe_int(dut.act_select)}, Wt_select: {safe_int(dut.wt_select)}"
        )
    except AttributeError:
        return "core_debug: Not a bnn_core DUT or signals not found."