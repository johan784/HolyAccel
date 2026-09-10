# SKY130 physical-design flow

This directory records the experimental physical implementation of `bnn_core` with Yosys, OpenROAD, KLayout, the Sky130 HD standard-cell library, and 16 instances of `sky130_sram_2kbyte_1rw1r_32x512_8`.

## Directory map

- `synthesis/`: Yosys synthesis recipe, clock constraint, SRAM black-box declaration, and flip-flop mapping helper.
- `openroad/`: full-core and processing-element floorplanning, placement, clock-tree synthesis, global routing, detailed routing, filler placement, DEF, and GDS scripts.
- `reports/`: compact metrics, congestion output, and the representative regional KLayout DRC report.
- `signoff/`: experimental local copies of the KLayout decks used while investigating memory-constrained DRC/LVS. They retain their upstream headers and licensing.

## Reproducing the main flow

The scripts intentionally do not vendor the PDK or OpenROAD Flow Scripts. Place the required technology files under `pdk/` and an ORFS checkout under `orfs_repo/`. The main flow expects the project root to be mounted at `/workspace` inside the container.

Required PDK filenames:

```text
pdk/sky130_fd_sc_hd__max.tlef
pdk/sky130_fd_sc_hd.lef
pdk/sky130_fd_sc_hd.gds
pdk/sky130_fd_sc_hd__tt_025C_1v80.lib
pdk/sky130_sram_2kbyte_1rw1r_32x512_8.lef
pdk/sky130_sram_2kbyte_1rw1r_32x512_8.gds
pdk/sky130_sram_2kbyte_1rw1r_32x512_8_TT_1p8V_25C.lib
```

From the repository root, synthesize the ASIC variant:

```bash
yosys -s asic/synthesis/bnn_core.ys
```

Then run OpenROAD in an environment where the repository is `/workspace`:

```bash
openroad /workspace/asic/openroad/bnn_core_flow.tcl
```

Generated netlists, DEF/GDS files, PDK copies, logs, and tool checkouts are intentionally ignored because they are large and reproducible.

## Result and limitations

The recorded run reached zero OpenROAD detailed-router violations. External KLayout checks were limited to representative regions because full-chip DRC exceeded the available memory. Full-chip, foundry-qualified DRC and LVS remain incomplete, so this work must not be described as tapeout-ready.

The macro-mapped RTL elaborates successfully with Verilator, and the processing-element Cocotb suite passes 7/7 tests. The older core/system Cocotb tests still target the pre-macro behavioral weight array and therefore are not presented as verification of this SRAM-backed branch.
