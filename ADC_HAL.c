/*
 * ADC_HAL.c
 *
 *  Created on:
 *      Author:
 */

#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include "ADC_HAL.h"

void getSampleJoystick(unsigned *X, unsigned *Y)
{
    // TODO: Associate the results of the the conversion with the particular axis whose voltage input is being sampled.
    // Since the ADC runs in continuous mode; we just need to read the conversion buffers.
    // Associate one with the address of variable X, and the other with the address of variable Y.

    // (I have commented out the function you have to use.)
    // (Uncomment the function, then Ctrl-Left Click through to see the function in the DriverLib.)
    // (Remove these comments once you have structured your code correctly.)

    // ADC14_getResult();
}
