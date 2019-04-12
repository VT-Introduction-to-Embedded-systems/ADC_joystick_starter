/*
 * ADC_joystick_main.h
 *
 *  Created on:
 *      Author:
 */

#ifndef ADC_JOYSTICK_MAIN_H_
#define ADC_JOYSTICK_MAIN_H_

// This typedef wil allow you to associate a variable that keeps track of the joystick position with a set of directions for that axis.
typedef enum {LEFT, CENTERLR, RIGHT} joystickLR;
typedef enum {UP, CENTERUD, DOWN} joystickUD;

// TODO: Choose thresholds for left, right up, and down that will allow for a center "dead zone" around the nominal middle value of the ADC out.
// Choose your values based on how much you want to move the joystick away from center for it to register as being in some direction.

#define LEFT_THRESHOLD      0x0
#define RIGHT_THRESHOLD     0x0
#define DOWN_THRESHOLD      0x0
#define UP_THRESHOLD        0x0

void ModifyLEDColor(joystickLR lr, joystickUD ud);

#endif /* ADC_JOYSTICK_MAIN_H_ */
