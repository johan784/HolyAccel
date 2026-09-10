set design bnn_core
set ws /workspace
set pdk $ws/pdk
set plat $ws/orfs_repo/flow/platforms/sky130hd
file mkdir $ws/out

read_lef  $pdk/sky130_fd_sc_hd__max.tlef
read_lef  $pdk/sky130_fd_sc_hd.lef
read_lef  $pdk/sky130_sram_2kbyte_1rw1r_32x512_8.lef
catch { read_gds $pdk/sky130_fd_sc_hd.gds }
catch { read_gds $pdk/sky130_sram_2kbyte_1rw1r_32x512_8.gds }
catch { read_liberty $pdk/sky130_fd_sc_hd__tt_025C_1v80.lib }
catch { read_liberty $pdk/sky130_sram_2kbyte_1rw1r_32x512_8_TT_1p8V_25C.lib }
read_verilog $ws/asic/synthesis/bnn_core.syn.v
link_design $design
read_sdc $ws/asic/synthesis/bnn_core.sdc

source $plat/setRC.tcl

initialize_floorplan -utilization 35 -aspect_ratio 1.0 -core_space 4 -site unithd
source $plat/make_tracks.tcl

if {[catch {macro_placement -halo {30 30} -channel {20 20}} err]} {
  puts "MPL FAILED: $err - using manual columns"
  set blk [ord::get_db_block]
  set da [$blk getDieArea]
  set mw 683100
  set step 446540
  set xL [expr {[$da xMin] + 50000}]
  set xR [expr {[$da xMax] - $mw - 50000}]
  set yL [expr {[$da yMin] + 50000}]
  set yR [expr {[$da yMin] + 50000}]
  set li 0
  foreach inst [$blk getInsts] {
    set nm [$inst getName]
    if {[string match *u_bank0* $nm] || [string match *u_bank1* $nm]} {
      if {$li < 8} {
        $inst setOrigin $xL $yL
        set yL [expr {$yL + $step}]
      } else {
        $inst setOrigin $xR $yR
        set yR [expr {$yR + $step}]
      }
      incr li
      $inst setPlacementStatus FIRM
    }
  }
}

set ::env(TAP_CELL_NAME) sky130_fd_sc_hd__tapvpwrvgnd_1
if {[catch {source $plat/tapcell.tcl} err]} {error "TAPCELL FAILED: $err"}

add_global_connection -net {VDD} -inst_pattern {.*u_bank[01].*} -pin_pattern {^vccd1$} -power
add_global_connection -net {VSS} -inst_pattern {.*u_bank[01].*} -pin_pattern {^vssd1$} -ground
if {[catch {source $plat/pdn.tcl} err]} {error "PDN FAILED: $err"}

catch {
  set blk [ord::get_db_block]
  foreach n [$blk getNets] {
    set t [$n getSigType]
    if {$t eq "GROUND" || $t eq "POWER"} { $n setSpecial }
  }
}

place_pins -hor_layers met3 -ver_layers met2
write_def $ws/out/$design.1_floorplan.def

global_placement -density 0.25 -routability_driven 
detailed_placement
write_def $ws/out/$design.2_place.def

set_max_fanout 128 [current_design]
estimate_parasitics -placement
repair_design -verbose
detailed_placement
write_def $ws/out/$design.2_repaired.def

if {[catch {clock_tree_synthesis -sink_clustering_enable} err]} {
  if {[catch {clock_tree_synthesis} err2]} {puts "CTS SKIPPED: $err2"}
}
catch { set_propagated_clock [all_clocks] }
catch { detailed_placement }
write_def $ws/out/$design.3_cts.def

set ::env(MIN_ROUTING_LAYER) met1
set ::env(MIN_CLK_ROUTING_LAYER) met3
set ::env(MAX_ROUTING_LAYER) met5

source $plat/fastroute.tcl

if {[catch {
  global_route -congestion_report_file $ws/out/$design.congestion.rpt
} err]} {
  error "GRT FAILED: $err"
}

write_def $ws/out/$design.4_global_route.def



if {[catch {
  detailed_route \
    -verbose 1 \
    -output_drc $ws/out/$design.drc.rpt
} err]} {
  error "DRT FAILED: $err"
}
write_def $ws/out/$design.4_route.def

set filler_masters [list \
 sky130_fd_sc_hd__fill_1 \
  sky130_fd_sc_hd__fill_2 \
  sky130_fd_sc_hd__fill_4 \
  sky130_fd_sc_hd__fill_8 \
]

filler_placement -verbose $filler_masters


write_def $ws/out/$design.def

if {[catch {write_gds $ws/out/$design.gds} err]} {
  error "GDS FAILED: $err"
}
puts "=== OPENROAD FLOW COMPLETE ==="
