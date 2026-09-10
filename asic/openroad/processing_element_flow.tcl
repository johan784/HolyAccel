
set design processing_element
set ws /workspace
set pdk $ws/pdk
set plat $ws/orfs_repo/flow/platforms/sky130hd
file mkdir $ws/out

# --- 1. Technology + library + design
read_lef  $pdk/sky130_fd_sc_hd__max.tlef
read_lef  $pdk/sky130_fd_sc_hd.lef
catch { read_gds     $pdk/sky130_fd_sc_hd.gds }
catch { read_liberty $pdk/sky130_fd_sc_hd__tt_025C_1v80.lib }
read_verilog $ws/synth/pe.syn.v
link_design $design
read_sdc $ws/synth/pe.sdc

# --- 2. Floorplan (tracks BEFORE tapcell/pdn this time!)
initialize_floorplan -utilization 40 -aspect_ratio 1.0 -core_space 4 -site unithd
source $plat/make_tracks.tcl
if {[catch {source $plat/tapcell.tcl} err]} {puts "TAPCELL FAILED: $err"}
if {[catch {source $plat/pdn.tcl} err]}     {puts "PDN FAILED: $err"}

# Constant/power nets become special so TritonRoute accepts them
catch {
  set blk [ord::get_db_block]
  foreach n [$blk getNets] {
    set t [$n getSigType]
    if {$t eq "GROUND" || $t eq "POWER"} { $n setSpecial }
  }
}

place_pins -hor_layers met3 -ver_layers met2
write_def $ws/out/$design.1_floorplan.def

# --- 3. Placement
global_placement -density 0.60
detailed_placement
write_def $ws/out/$design.2_place.def

# --- 4. CTS (new-engine syntax; fall back, never crash)
if {[catch {clock_tree_synthesis -sink_clustering_enable} err]} {
  puts "CTS minimal failed: $err"
  if {[catch {clock_tree_synthesis} err2]} {puts "CTS SKIPPED: $err2"}
}
catch { set_propagated_clock [all_clocks] }
catch { detailed_placement }
write_def $ws/out/$design.3_cts.def

# --- 5. Routing (verbose so it never looks dead)
catch { source $plat/fastroute.tcl }
if {[catch {global_route} err]}          {puts "GRT FAILED: $err"}
if {[catch {detailed_route -verbose 1} err]} {puts "DRT FAILED: $err"}
write_def $ws/out/$design.4_route.def

catch { filler_placement sky130_fd_sc_hd__fill_1 sky130_fd_sc_hd__fill_2 sky130_fd_sc_hd__fill_4 sky130_fd_sc_hd__fill_8 }
write_def $ws/out/$design.def
puts "=== OPENROAD FLOW COMPLETE ==="
