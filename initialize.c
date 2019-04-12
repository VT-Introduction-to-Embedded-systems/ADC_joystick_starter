/*
 * initialize.c
 *
 *  Created on:
 *      Author:
 */
#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include "initialize.h"

void initialize()
{
    initLaunchpad();
    initGPIO();
    initADC();
    initJoystick();
    startADC();
}

void initLaunchpad()
{
    // Stop Watchdog Timer.
    WDT_A_hold(WDT_A_BASE);
}
void initGPIO()
{
    // TODO (But only technically): You have written this GPIO init code many times.
    // Go and get it from another place where you have written it.

    // Configure LaunchPad LED1

    // Configure LaunchPad LED2 (RGB)

    // Configure BoosterPack LED (RGB)

}
// Initializing the ADC
void initADC()
{
    ADC14_enableModule();
    // This sets the conversion clock to 3MHz
    ADC14_initModule(ADC_CLOCKSOURCE_ADCOSC, ADC_PREDIVIDER_1, ADC_DIVIDER_1, ADC_NOROUTE);
    // This configures the ADC to store output results in ADC_MEM0 up to ADC_MEM1. Each conversion will thus use two channels.
    ADC14_configureMultiSequenceMode(ADC_MEM0, ADC_MEM1, true);
    // This configures the ADC in manual conversion mode. The software will start each conversion.
    ADC14_enableSampleTimer(ADC_AUTOMATIC_ITERATION);
}
// Interfacing the Joystick with the ADC
void initJoystick()
{
    // This selects the appropriate GPIO pin as analog input A15 (Joystick X), which is multiplexed on GPIO port P6, pin PIN0
    GPIO_setAsPeripheralModuleFunctionInputPin(GPIO_PORT_P6, GPIO_PIN0, GPIO_PRIMARY_MODULE_FUNCTION);
    // This configures ADC_MEM0 to store the result from input channel A15 in non-differential input mode (only a single input pin)
    // The reference for Vref- and Vref+ are VSS and VCC respectively
    ADC14_configureConversionMemory(ADC_MEM0, ADC_VREFPOS_AVCC_VREFNEG_VSS, ADC_INPUT_A15, ADC_NONDIFFERENTIAL_INPUTS);

    // TODO: In a manner consistent with what is demonstrated above, select the GPIO pin for Joystick Y.

    // TODO: In a manner consistent with what is demonstrated above, configure the appropriate memory address to store the result from Joystick Y.

}
void startADC()
{
   // Starts the ADC with the first conversion in repeat-mode; subsequent conversions run automatically
   ADC14_enableConversion();
   ADC14_toggleConversionTrigger();
}
