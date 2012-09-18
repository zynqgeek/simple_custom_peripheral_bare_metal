TABLE OF CONTENTS
  1) Peripheral Summary
  2) Description of Generated Files
  3) Location to documentation of dependent libraries
================================================================================
*                             1) Peripheral Summary                            *
================================================================================
Peripheral Summary:

  XPS project / EDK repository               : C:\Xilinx\Projects\zed_first_custom_hw\zed_first_custom_hw.srcs\sources_1\edk\proc_system
  logical library name                       : simple_register_v1_00_a
  top name                                   : simple_register
  version                                    : 1.00.a
  type                                       : AXI4LITE slave
  features                                   : slave attachment
                                               mir/rst register
                                               user s/w registers

Address Block for User Logic and IPIF Predefined Services

  user logic slave space                     : C_BASEADDR + 0x00000000
                                             : C_BASEADDR + 0x000000FF
  software reset space                       : C_BASEADDR + 0x00000100
                                             : C_BASEADDR + 0x000001FF


================================================================================
*                          2) Description of Generated Files                   *
================================================================================
- HDL source file(s)

  hdl/vhdl/simple_register.vhd

    This is the template file for your peripheral's top design entity. It
    configures and instantiates the corresponding design units in the way you
    indicated in the wizard GUI and hooks it up to the stub user logic where
    the actual functionalites should get implemented. You are not expected to
    modify this template file except certain marked places for adding user
    specific generics and ports.

  vhdl/user_logic.vhd

    This is the template file for the stub user logic design entity, either in
    VHDL or Verilog, where the actual functionalities should get implemented.
    Some sample code snippet may be provided for demonstration purpose.

- XPS interface file(s)

  data/simple_register_v2_1_0.mpd

    This Microprocessor Peripheral Description file contains information of the
    interface of your peripheral, so that other EDK tools can recognize your
    peripheral.

  data/simple_register_v2_1_0.pao

    This Peripheral Analysis Order file defines the analysis order of all the HDL
    source files that are used to compile your peripheral.

- Driver source file(s)

  src/simple_register.h

    This is the software driver header template file, which contains address offset of
    software addressable registers in your peripheral, as well as some common masks and
    simple register access macros or function declaration.

  src/simple_register.c

    This is the software driver source template file, to define all applicable driver
    functions.

  src/simple_register_selftest.c

    This is the software driver self test example file, which contain self test example
    code to test various hardware features of your peripheral.

  src/Makefile

    This is the software driver makefile to compile drivers.

- Driver interface file(s)
-user needs to add these to repositories path in SDK (Xilinx Tools-->Repositories)

  data/simple_register_v2_1_0.mdd

    This is the Microprocessor Driver Definition file.

  data/simple_register_v2_1_0.tcl

    This is the Microprocessor Driver Command file.

- Other misc file(s)

  devl/ipwiz.opt

    This is the option setting file for the wizard batch mode, which should
    generate the same result as the wizard GUI mode.

  devl/README.txt

    This README file for your peripheral.

  devl/ipwiz.log

    This is the log file by operating on this wizard.


================================================================================
*          3) Location to documentation of dependent libraries                 *
*                                                                              *
*   In general, the documentation is located under:                            *
*   $XILINX_EDK/hw/XilinxProcessorIPLib/pcores/$libName/doc                    *
*                                                                              *
================================================================================
proc_common_v3_00_a
	No documentation for this library

axi_lite_ipif_v1_01_a
	C:\Xilinx\Projects\zed_first_custom_hw\zed_first_custom_hw.srcs\sources_1\edk\proc_system\C:\Xilinx\14.2\ISE_DS\EDK\hw\XilinxProcessorIPLib\pcores\axi_lite_ipif_v1_01_a\doc\axi_lite_ipif_ds765.pdf

