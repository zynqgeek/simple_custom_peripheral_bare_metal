######################################################
#
# XPS Tcl API script generated by PlanAhead
#
######################################################

proc _main_ {} {
  cd "C:/Xilinx/Projects/zed_first_custom_hw/zed_first_custom_hw.srcs/sources_1/edk/proc_system"
  if { [ catch {xload xmp proc_system.xmp} result ] } {
    exit 10
  }
  run drc
  return $result
}

# Run DRC
if { [catch {_main_} result] } {
  exit -1
}

# Check return status and exit
if { [string length $result] == 0 } {
  exit 0
} else {
  exit $result
}
