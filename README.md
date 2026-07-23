#README.md

1. Banner
2. Project Overview
3. Motivation
4. System Architecture
5. Repository Structure
6. Accelerator Architecture
7. Descriptor-Based Execution
8. Hardware Pipeline
9. Memory Map
10. Verification
11. Build Instructions
12. Current Features
13. Future Roadmap
14. References


# RISC-V Binary Neural Network Accelerator

A configurable hardware accelerator for Binary Neural Network (BNN) inference,
implemented in SystemVerilog and integrated into a custom PicoRV32-based SoC.

The project explores software-programmable AI acceleration through descriptor-based
execution, modular RTL design, and memory-mapped hardware control.
Project Goals
## Project Goals

The objective of this project is to design a reusable AI accelerator rather than
a fixed-function neural network implementation.

The architecture focuses on:

- Descriptor-driven execution
- Modular RTL
- AXI4-Lite software configuration
- Binary Neural Network inference
- Multi-layer execution
- FPGA deployment
- Future ASIC portability
Architecture
                    PicoRV32 CPU
                          │
                    AXI4-Lite Master
                          │
                  AXI Interconnect
                          │
          ┌───────────────┴────────────────┐
          │                                │
          ▼                                ▼
    Instruction RAM                 BNN AXI Wrapper
                                            │
                  ┌─────────────────────────┴────────────────────┐
                  │                                              │
                  │ Control Registers                            │
                  │ Descriptor Memory                            │
                  │ Status Registers                             │
                  └─────────────────────────┬────────────────────┘
                                            │
                                  current_desc
                                            │
                                            ▼
                                      BNN Core FSM
                                            │
                                     Processing Elements
                                            │
                                      Output Memory
Project Components
Explain each module.
Example:
## PicoRV32

Acts as the software host processor.

Responsibilities:

- Configure accelerator
- Populate descriptor table
- Start inference
- Monitor completion
## BNN AXI Wrapper

The AXI wrapper forms the software-visible interface of the accelerator.

Responsibilities

- AXI4-Lite Slave
- Descriptor storage
- Control registers
- Status registers
- Interface between firmware and execution engine

The wrapper does not execute neural network computations.
## BNN Core

The execution engine of the accelerator.

Responsibilities

- Execute one neural network layer
- Fetch descriptor
- Configure working registers
- Schedule processing elements
- Generate memory addresses
- Advance layer index
Descriptor Architecture
This deserves an entire section.
Firmware

↓

Layer Descriptors

↓

AXI Wrapper

↓

Descriptor Table

↓

current_desc

↓

CONFIGURE_LAYER

↓

Execution
Then explain:
Each layer is described by
Input address
Weight address
Threshold address
Number of input words
Number of output neurons
Software programs the complete descriptor table before inference begins.
The execution engine autonomously processes each descriptor without further CPU intervention.
Processing Flow
CPU

↓

Populate Descriptor Table

↓

START

↓

Layer 0

↓

Layer 1

↓

Layer 2

↓

DONE
Repository Structure
rtl/

    bnn_core.sv
    bnn_axi_wrapper.sv
    processing_element.sv
    ...

tb/

firmware/

docs/

README.md
Current Features
## Current Features

- RV32I Host Processor (PicoRV32)
- SystemVerilog RTL
- Binary Processing Elements
- Multi-state Controller FSM
- Descriptor-based execution architecture
- AXI4-Lite configuration interface
- Modular processing pipeline
- Cocotb / Verilator verification environment
Verification
Explain
RTL

↓

Verilator

↓

Cocotb

↓

Python Tests

↓

Waveform Analysis
Future Work
This is where I'd mention ideas such as:
## Future Work

### Near-Term

- Descriptor memory integration
- AXI address decoder refinement
- Interrupt support
- Double buffering
- Performance benchmarking

### Medium-Term

- DMA-based memory transfers
- INT8 and INT4 datapaths
- Convolutional neural network support
- Model compiler from PyTorch

### Long-Term

- FPGA implementation
- ASIC-oriented synthesis exploration
- Open-source physical design exploration using the SkyWater 130 nm PDK and OpenLane/OpenROAD flow
- Evaluate feasibility for platforms such as TinyTapeout, subject to area and resource constraints
