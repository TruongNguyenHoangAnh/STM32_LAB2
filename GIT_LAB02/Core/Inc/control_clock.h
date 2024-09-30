/*
 * control_clock.h
 *
 *  Created on: 30 Sep 2024
 *      Author: HOANG ANH
 */
#ifndef INC_CONTROL_CLOCK_H_
#define INC_CONTROL_CLOCK_H_
#include "main.h"

#define MAX_LED 	 4
extern int index_led;
extern int led_buffer[];

void updateClockBuffer();

#endif /* INC_CONTROL_CLOCK_H_ */
