/*
 * control_led_matrix.h
 *
 *  Created on: 27 Sep 2024
 *      Author: HOANG ANH
 */

#ifndef INC_CONTROL_LED_MATRIX_H_
#define INC_CONTROL_LED_MATRIX_H_

#include "main.h"

#define MAX_LED_MATRIX  8

extern int index_led_matrix;
extern uint8_t matrix_buffer[];

void updateLedMatrix(int index);
void displayLedMatrix(int index);

#endif /* INC_CONTROL_LED_MATRIX_H_ */
