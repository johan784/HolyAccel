# Representative regional DRC results — `bnn_core`

**Run date:** 2026-09-08 (IST)  
**Layout checked:** `out/bnn_core_final.gds`  
**GDS timestamp:** 2026-09-07 12:03:12 IST  
**GDS SHA-256:** `7d49b8030a12b0ef496b97680919ebc0c35aa258de82a4f74101c79e0d036346`

## What was checked

Five non-cutting 500 um × 500 um windows were checked with KLayout. The deck used `region_overlap(...)`, so an entire shape is included when it overlaps a window; no wires were artificially cut at the window boundary.

The runset enabled **BEOL** (metal and via rules) and **OFFGRID** checks. **FEOL was disabled**, so this is not a complete transistor-layer DRC run. These windows are representative debugging evidence, not a replacement for one full-chip signoff DRC run or for LVS.

The runs were intentionally single-threaded with 250 um internal tiles and a 2 um tile border, which kept peak memory below 2.3 GB and avoided the prior out-of-memory failure.

## Regions and results

| Region | Window (um) | Runtime | Peak memory | Marker total | Marker categories |
|---|---:|---:|---:|---:|---|
| Center logic | (1500, 1500)–(2000, 2000) | 269.9 s | 1916 MB | 2 | `m1.6`: 2 |
| Upper core | (1500, 2750)–(2000, 3250) | 235.8 s | 1894 MB | 2 | `li.3`: 1; `m1.6`: 1 |
| Lower core | (1500, 500)–(2000, 1000) | 225.1 s | 1902 MB | 1 | `m1.6`: 1 |
| Left SRAM side | (400, 1500)–(900, 2000) | 357.4 s | 2279 MB | 528,255 | `li.1`: 19,735; `li.3`: 380,712; `li.5`: 9,766; `ct.4`: 19,502; `m1.4`: 98,475; `m1.6`: 2; `m2.4`: 63 |
| Right SRAM side | (3000, 1500)–(3500, 2000) | 540.2 s | 2220 MB | 430,406 | `li.1`: 16,407; `li.3`: 308,800; `li.5`: 7,906; `li.6`: 156; `ct.1`: 472; `ct.4`: 15,913; `m1.4`: 80,225; `m1.6`: 4; `m2.4`: 51; `via.1a`: 472 |

## Interpretation

1. **The core-logic windows are encouraging.** They produced only five total markers across three samples. Four are `m1.6`, a minimum M1-area rule; the remaining one is `li.3`, a minimum local-interconnect spacing rule.
2. **The SRAM-side windows are not clean under this generic KLayout deck.** The very large marker counts are concentrated in LI/M1/contact rules (`li.3`, `m1.4`, `ct.4`), which is characteristic of checking dense hard-macro/library layout with a generic deck that may not include the macro/library-specific exemptions and context used to sign off those cells.
3. **Do not call the chip externally DRC-clean yet.** OpenROAD detail routing reported zero internal routing violations, which is valuable routing evidence. These KLayout spot checks are valuable external geometry evidence. A full, foundry-qualified DRC deck and full-chip run are still required before any tapeout claim.
4. **LVS remains separate and has not been run.** DRC asks whether geometry obeys manufacturing rules; LVS asks whether the final layout connects the same circuit as the intended netlist.

## Generated artifacts

- `out/drc_region_center.lyrdb`
- `out/drc_region_upper_core.lyrdb`
- `out/drc_region_lower_core.lyrdb`
- `out/drc_region_left_sram_side.lyrdb`
- `out/drc_region_right_sram_side.lyrdb`
- Corresponding `*.log` files for the four batch-run regions.

## Sensible next step

For a portfolio/LinkedIn post, accurately say the accelerator completed OpenROAD routing with **0 detailed-router violations** and that you performed **representative external KLayout BEOL/OFFGRID DRC checks**. Do not claim full-chip DRC- or LVS-clean until those signoff runs are completed with the appropriate deck and resources.
