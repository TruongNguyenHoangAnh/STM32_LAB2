/*
 * control_clock.c
 *
 *  Created on: 30 Sep 2024
 *      Author: HOANG ANH
 */

#include "control_clock.h"
#include "global.h"

int index_led = 0;
int led_buffer [4] = {3, 4, 5, 8};

void updateClockBuffer()
{
	if(hour < 10){
		led_buffer[0] = 0;
		led_buffer[1] = hour;
	}
	if(hour >= 10){
		led_buffer[0] = hour/10;
		led_buffer[1] = hour%10;
	}
	if(minutes < 10){
		led_buffer[2] = 0;
		led_buffer[3] = minutes;
	}
	if(minutes >= 10){
		led_buffer[2] = minutes/10;
		led_buffer[3] = minutes%10;
	}
}
