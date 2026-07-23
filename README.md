<div align="center">

# RISC-V Binary Neural Network (BNN) Accelerator

### Descriptor-Based AI Accelerator in SystemVerilog

*A configurable Binary Neural Network inference accelerator integrated with a PicoRV32 RISC-V processor through an AXI4-Lite interface.*

![Status](https://img.shields.io/badge/Status-Active%20Development-blue)
![Language](https://img.shields.io/badge/SystemVerilog-RTL-orange)
![CPU](https://img.shields.io/badge/CPU-PicoRV32-green)
![License](https://img.shields.io/badge/License-MIT-yellow)

</div>

---

# Overview

This project implements a **software-programmable Binary Neural Network (BNN) accelerator** built completely in **SystemVerilog RTL**.

Unlike fixed-function AI accelerators, this design follows a **descriptor-based execution model**, where the RISC-V processor programs an entire neural network before execution begins. The accelerator then executes each layer autonomously without requiring CPU intervention between layers.

The long-term objective is to evolve this project from a Binary Neural Network accelerator into a scalable low-precision AI accelerator supporting INT8, INT4 and convolutional workloads.

---

# Project Goals

- Build a configurable Binary Neural Network accelerator
- Integrate with a custom PicoRV32 SoC
- Design a reusable descriptor-based execution engine
- Learn production-style RTL design methodology
- Develop a modular architecture that can evolve toward FPGA and ASIC implementations

---

# System Architecture

```
                         PicoRV32 CPU
                              │
                      AXI4-Lite Master
                              │
                      AXI Interconnect
                              │
          ┌───────────────────┴────────────────────┐
          │                                        │
          ▼                                        ▼
 Instruction / Data RAM                     BNN AXI Wrapper
                                                    │
        ┌───────────────────────────────────────────┴────────────────────────┐
        │                                                                    │
        │  Control Registers                                                 │
        │      • START                                                       │
        │      • STATUS                                                      │
        │      • NUM_LAYERS                                                  │
        │                                                                    │
        │  Descriptor Memory                                                 │
        │      • Layer 0                                                     │
        │      • Layer 1                                                     │
        │      • Layer 2                                                     │
        │      • ...                                                         │
        └──────────────────────────────────┬─────────────────────────────────┘
                                           │
                                     current_desc
                                           │
                                           ▼
                                      BNN Core FSM
                                           │
                         ┌─────────────────┴────────────────┐
                         │                                  │
                         ▼                                  ▼
                 Address Generation                Processing Elements
                         │                                  │
                         └─────────────────┬────────────────┘
                                           │
                                           ▼
                                   Output Activation RAM
```

---

# Execution Flow

Unlike traditional software-controlled accelerators, the CPU configures the complete neural network before inference starts.

```
Firmware

        │

        ▼

Generate Layer Descriptors

        │

        ▼

Write Descriptor Table
through AXI4-Lite

        │

        ▼

BNN AXI Wrapper

        │

        ▼

START

        │

        ▼

Layer 0

↓

Layer 1

↓

Layer 2

↓

...

↓

DONE
```

Once started, the hardware executes every layer autonomously.

---

# Descriptor-Based Architecture

Each neural network layer is represented by a descriptor containing all information required for execution.

```
Layer Descriptor

+---------------------------+
| Input Base Address        |
+---------------------------+
| Weight Base Address       |
+---------------------------+
| Threshold Base Address    |
+---------------------------+
| Number of Input Words     |
+---------------------------+
| Number of Output Neurons  |
+---------------------------+
```

The AXI wrapper stores every descriptor inside a descriptor table.

The BNN core requests one descriptor at a time using its current layer index.

```
Descriptor Table

Layer 0

↓

Layer 1

↓

Layer 2

↓

...

↓

current_desc

↓

BNN Core
```

This keeps the execution engine completely independent from software configuration.

---

# Hardware Modules

## PicoRV32

Acts as the host processor responsible for:

- Configuring the accelerator
- Programming descriptor memory
- Starting inference
- Monitoring completion

---

## AXI4-Lite Wrapper

The wrapper provides the software-visible interface.

Responsibilities include:

- AXI4-Lite slave interface
- Control registers
- Status registers
- Descriptor storage
- Descriptor lookup
- Interface between firmware and execution engine

The wrapper **does not perform neural network computation**.

---

## BNN Core

The BNN Core is the execution engine.

Responsibilities include:

- Fetching layer descriptors
- Configuring execution registers
- Scheduling processing elements
- Address generation
- Layer sequencing
- Multi-layer execution

---

## Processing Elements

Each Processing Element performs Binary Neural Network computations using XNOR-Popcount operations.

Multiple PEs execute in parallel to improve inference throughput.

---

# Repository Structure

```
.
├── rtl/
│   ├── bnn_core.sv
│   ├── bnn_axi_wrapper.sv
│   ├── processing_element.sv
│   ├── memory.sv
│   ├── controller.sv
│   └── ...
│
├── firmware/
│
├── tb/
│
├── docs/
│
└── README.md
```

---

# Current Features

- PicoRV32 Host Processor
- SystemVerilog RTL Design
- AXI4-Lite Accelerator Interface
- Descriptor-Based Layer Scheduling
- Multi-Layer Execution Architecture
- Modular Processing Elements
- FSM-Based Controller
- Cocotb Verification
- Verilator Simulation

---

# Design Philosophy

This project follows a modular hardware architecture inspired by modern AI accelerators.

The design separates software configuration from hardware execution.

- Firmware describes the neural network.
- The AXI wrapper stores configuration data.
- The BNN core performs execution.
- Processing elements perform computation.

This separation allows future architectural improvements without redesigning the execution engine.

---

# Verification

Current verification flow:

```
RTL

↓

Verilator

↓

Cocotb

↓

Python Testbench

↓

Waveform Analysis
```

Each module is verified independently before integration.

---

# Future Roadmap

### Near-Term

- Complete descriptor memory implementation
- Improve AXI register map
- Interrupt support
- Performance benchmarking
- FPGA deployment

### Medium-Term

- DMA engine
- Double buffering
- AXI Master interface
- INT8 inference support
- INT4 inference support
- Convolution support

### Long-Term

- PyTorch model compiler
- Automated descriptor generation
- FPGA optimization
- ASIC-oriented implementation
- Physical design exploration using the SkyWater SKY130 PDK with OpenLane/OpenROAD
- Evaluate a reduced configuration suitable for TinyTapeout

---

# Learning Objectives

This project is primarily intended as an exploration of modern computer architecture and AI hardware design.

Topics explored include:

- Computer Architecture
- RTL Design
- SystemVerilog
- AXI4-Lite
- Hardware/Software Co-design
- Binary Neural Networks
- FPGA Design
- Verification Methodologies
- RISC-V SoC Design

---

# References

- PicoRV32
- RISC-V ISA Specification
- Google TPU v1
- Eyeriss
- FINN
- AXI4-Lite Specification

---

## License

MIT License

---

<div align="center">

**Built using SystemVerilog • PicoRV32 • Cocotb • Verilator**

</div>
