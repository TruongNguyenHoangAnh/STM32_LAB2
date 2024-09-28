/*
 * Software_timer.c
 *
 *  Created on: Sep 25, 2024
 *      Author: HOANG ANH
 */

#include "Software_timer.h"


int TICK = 10;

//use run time a clock
int timer_flag0 = 0;
int timer_counter0 = 0;

//use control 7-SEG
int timer_flag1 = 0;
int timer_counter1 = 0;

//use control LED_RED and DOT
int timer_flag2 = 0;
int timer_counter2 = 0;

//use control led_matrix
int timer_flag3;
int timer_counter3;

void setTimer0(int duration){
	timer_flag0 = 0;
	timer_counter0 = duration / TICK;
}

void setTimer1(int duration){
	timer_flag1 = 0;
	timer_counter1 = duration / TICK;
}

void setTimer2(int duration){
	timer_flag2 = 0;
	timer_counter2 = duration / TICK;
}

void setTimer3(int duration){
	timer_flag3 = 0;
	timer_counter3 = duration / TICK;
}

void timerRun(){
		if(timer_counter0 > 0){
			timer_counter0--;
		if(timer_counter0 <= 0){
			timer_flag0 = 1;
			}
		}

		if(timer_counter1 > 0){
			timer_counter1--;
		if(timer_counter1 <= 0){
			timer_flag1 = 1;
			}
		}

		if(timer_counter2 > 0){
			timer_counter2--;
		if(timer_counter2 <= 0){
			timer_flag2 = 1;
			}
		}

		if(timer_counter3 > 0){
			timer_counter3--;
		if(timer_counter3 <= 0){
			timer_flag3 = 1;
			}
		}
}
