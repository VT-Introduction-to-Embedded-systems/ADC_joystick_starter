#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include "initialize.h"
#include "GPIO_HAL.h"
#include "ADC_HAL.h"
#include "ADC_joystick_main.h"

int main(void)
{
    unsigned vx, vy;
    joystickLR currentLR;
    joystickUD currentUD;

    initialize();

    while(1)
    {
        // Get a value from the joystick.
        getSampleJoystick(&vx, &vy);

        // TODO:  Compare the returned x and y values to the proper thresholds to set the current left-right and up-down status.
        if(vx < LEFT_THRESHOLD)

        // Use the current left-right and up-down status to set the LEDs on the LaunchPad and BoosterPack.
        ModifyLEDColor(currentLR, currentUD);
    }
}

// TODO: Map the position of the joystick to some displayed LED value on LP LED1, LP LED2, and/or BP RGB LED.
// Choose a different LED status for each combination of joystick positions. (Hint: there are nine.)
// Challenge! Do it with a single switch-case structure.

void ModifyLEDColor(joystickLR lr, joystickUD ud)
{

}
