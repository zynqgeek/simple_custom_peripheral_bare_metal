##############################################################################
## Filename:          C:\Xilinx\Projects\zed_first_custom_hw\zed_first_custom_hw.srcs\sources_1\edk\proc_system/drivers/simple_register_v1_00_a/data/simple_register_v2_1_0.tcl
## Description:       Microprocess Driver Command (tcl)
## Date:              Tue Sep 18 00:56:18 2012 (by Create and Import Peripheral Wizard)
##############################################################################

#uses "xillib.tcl"

proc generate {drv_handle} {
  xdefine_include_file $drv_handle "xparameters.h" "simple_register" "NUM_INSTANCES" "DEVICE_ID" "C_BASEADDR" "C_HIGHADDR" 
}
