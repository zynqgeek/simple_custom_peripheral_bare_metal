/*****************************************************************************
* Filename:          C:\Xilinx\Projects\zed_first_custom_hw\zed_first_custom_hw.srcs\sources_1\edk\proc_system/drivers/simple_register_v1_00_a/src/simple_register.h
* Version:           1.00.a
* Description:       simple_register Driver Header File
* Date:              Tue Sep 18 00:56:18 2012 (by Create and Import Peripheral Wizard)
*****************************************************************************/

#ifndef SIMPLE_REGISTER_H
#define SIMPLE_REGISTER_H

/***************************** Include Files *******************************/

#include "xbasic_types.h"
#include "xstatus.h"
#include "xil_io.h"

/************************** Constant Definitions ***************************/


/**
 * User Logic Slave Space Offsets
 * -- SLV_REG0 : user logic slave module register 0
 */
#define SIMPLE_REGISTER_USER_SLV_SPACE_OFFSET (0x00000000)
#define SIMPLE_REGISTER_SLV_REG0_OFFSET (SIMPLE_REGISTER_USER_SLV_SPACE_OFFSET + 0x00000000)

/**
 * Software Reset Space Register Offsets
 * -- RST : software reset register
 */
#define SIMPLE_REGISTER_SOFT_RST_SPACE_OFFSET (0x00000100)
#define SIMPLE_REGISTER_RST_REG_OFFSET (SIMPLE_REGISTER_SOFT_RST_SPACE_OFFSET + 0x00000000)

/**
 * Software Reset Masks
 * -- SOFT_RESET : software reset
 */
#define SOFT_RESET (0x0000000A)

/**************************** Type Definitions *****************************/


/***************** Macros (Inline Functions) Definitions *******************/

/**
 *
 * Write a value to a SIMPLE_REGISTER register. A 32 bit write is performed.
 * If the component is implemented in a smaller width, only the least
 * significant data is written.
 *
 * @param   BaseAddress is the base address of the SIMPLE_REGISTER device.
 * @param   RegOffset is the register offset from the base to write to.
 * @param   Data is the data written to the register.
 *
 * @return  None.
 *
 * @note
 * C-style signature:
 * 	void SIMPLE_REGISTER_mWriteReg(Xuint32 BaseAddress, unsigned RegOffset, Xuint32 Data)
 *
 */
#define SIMPLE_REGISTER_mWriteReg(BaseAddress, RegOffset, Data) \
 	Xil_Out32((BaseAddress) + (RegOffset), (Xuint32)(Data))

/**
 *
 * Read a value from a SIMPLE_REGISTER register. A 32 bit read is performed.
 * If the component is implemented in a smaller width, only the least
 * significant data is read from the register. The most significant data
 * will be read as 0.
 *
 * @param   BaseAddress is the base address of the SIMPLE_REGISTER device.
 * @param   RegOffset is the register offset from the base to write to.
 *
 * @return  Data is the data from the register.
 *
 * @note
 * C-style signature:
 * 	Xuint32 SIMPLE_REGISTER_mReadReg(Xuint32 BaseAddress, unsigned RegOffset)
 *
 */
#define SIMPLE_REGISTER_mReadReg(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (RegOffset))


/**
 *
 * Write/Read 32 bit value to/from SIMPLE_REGISTER user logic slave registers.
 *
 * @param   BaseAddress is the base address of the SIMPLE_REGISTER device.
 * @param   RegOffset is the offset from the slave register to write to or read from.
 * @param   Value is the data written to the register.
 *
 * @return  Data is the data from the user logic slave register.
 *
 * @note
 * C-style signature:
 * 	void SIMPLE_REGISTER_mWriteSlaveRegn(Xuint32 BaseAddress, unsigned RegOffset, Xuint32 Value)
 * 	Xuint32 SIMPLE_REGISTER_mReadSlaveRegn(Xuint32 BaseAddress, unsigned RegOffset)
 *
 */
#define SIMPLE_REGISTER_mWriteSlaveReg0(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (SIMPLE_REGISTER_SLV_REG0_OFFSET) + (RegOffset), (Xuint32)(Value))

#define SIMPLE_REGISTER_mReadSlaveReg0(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (SIMPLE_REGISTER_SLV_REG0_OFFSET) + (RegOffset))

/**
 *
 * Reset SIMPLE_REGISTER via software.
 *
 * @param   BaseAddress is the base address of the SIMPLE_REGISTER device.
 *
 * @return  None.
 *
 * @note
 * C-style signature:
 * 	void SIMPLE_REGISTER_mReset(Xuint32 BaseAddress)
 *
 */
#define SIMPLE_REGISTER_mReset(BaseAddress) \
 	Xil_Out32((BaseAddress)+(SIMPLE_REGISTER_RST_REG_OFFSET), SOFT_RESET)

/************************** Function Prototypes ****************************/


/**
 *
 * Run a self-test on the driver/device. Note this may be a destructive test if
 * resets of the device are performed.
 *
 * If the hardware system is not built correctly, this function may never
 * return to the caller.
 *
 * @param   baseaddr_p is the base address of the SIMPLE_REGISTER instance to be worked on.
 *
 * @return
 *
 *    - XST_SUCCESS   if all self-test code passed
 *    - XST_FAILURE   if any self-test code failed
 *
 * @note    Caching must be turned off for this function to work.
 * @note    Self test may fail if data memory and device are not on the same bus.
 *
 */
XStatus SIMPLE_REGISTER_SelfTest(void * baseaddr_p);
/**
*  Defines the number of registers available for read and write*/
#define TEST_AXI_LITE_USER_NUM_REG 1


#endif /** SIMPLE_REGISTER_H */
