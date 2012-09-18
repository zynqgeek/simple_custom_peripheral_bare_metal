
/*
 * helloworld.c: simple test application
 */

#include <stdio.h>
#include "platform.h"

#include "simple_register.h"

#define SIMPLE_REGISTER_BASE_ADDRESS 0x64800000
#define REGISTER_0 0

int main()
{
	// our variables that we will be using to read and write to our hardware register
	int current_value;
	int write_value = 123456789;
	int read_value = 0;

    init_platform();


    printf("Application Loaded.\r\n\r\n\r\n");

    printf("Getting current register value ... ");

    // read out the current value from our peripheral, at register zero
    current_value = SIMPLE_REGISTER_mReadReg(
    					SIMPLE_REGISTER_BASE_ADDRESS,
    					REGISTER_0
    					);

    printf("Done.\r\n");

    printf("Register value = %i\r\n\r\n",current_value);

    printf("Writing %i to the hardware register ... ", write_value);

    // write our value to our peripheral at register 0
    SIMPLE_REGISTER_mWriteReg(
    		SIMPLE_REGISTER_BASE_ADDRESS,
    		REGISTER_0,
    		write_value
    		);

    printf(" Done.\r\n");

    printf("Reading register value ... ");

    // read out the current value from our peripheral, at register zero
	read_value = SIMPLE_REGISTER_mReadReg(
						SIMPLE_REGISTER_BASE_ADDRESS,
						REGISTER_0
						);

    printf("Done.\r\n");

    printf("Register value = %i\r\n\r\n",read_value);

    printf("Exiting Application, ta ta!\r\n");

    cleanup_platform();

    return 0;
}
