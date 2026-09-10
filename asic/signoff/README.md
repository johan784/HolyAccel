# Signoff experiments

These KLayout decks are retained as debugging records from the external DRC/LVS investigation:

- `sky130hd_probe.lydrc` checks one 500 µm × 500 µm region with 250 µm internal tiles and one worker thread.
- `sky130hd_tiled.lydrc` is the attempted tiled full-layout DRC configuration.
- `sky130hd_bnn_blackbox.lylvs` is the experimental LVS extraction deck.

The DRC decks are local derivatives of the ORFS Sky130 KLayout deck and keep the upstream license header. The LVS experiment also depended on a locally normalized standard-cell CDL and a generated reference SPICE netlist; those generated/vendor files are deliberately not committed.

The regional DRC results are useful engineering evidence, but none of these files establishes foundry signoff. Full-chip DRC and LVS remain pending.
