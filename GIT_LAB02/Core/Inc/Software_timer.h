/*
 * Software_timer.h
 *
 *  Created on: Sep 25, 2024
 *      Author: HOANG ANH
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int TICK;

//use run time a clock
extern int timer_flag0;
extern int timer_counter0;

//use control 7-SEG
extern int timer_flag1;
extern int timer_counter1;

//use control LED_RED and DOT
extern int timer_flag2;
extern int timer_counter2;

//use control led_matrix
extern int timer_flag3;
extern int timer_counter3;

//use control led_matrix shift left
extern int timer_flag4;
extern int timer_counter4;

void setTimer0(int duration);
void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void setTimer4(int duration);

void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
