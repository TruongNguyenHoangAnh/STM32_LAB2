/*
 * control_led_matrix.c
 *
 *  Created on: 30 Sep 2024
 *      Author: HOANG ANH
 */

#include "control_led_matrix.h"

int index_led_matrix = 0;
uint8_t matrix_buffer[8] =  {0x3c,0x7e,0xc3,0xc3,0xff,0xff,0xc3,0xc3};
void displayLedMatrix(int index){
    HAL_GPIO_WritePin(GPIOA, ENM0, (index & 1));
    index = index >> 1;
    HAL_GPIO_WritePin(GPIOA, ENM1, (index & 1));
    index = index >> 1;
    HAL_GPIO_WritePin(GPIOA, ENM2, (index & 1));
    index = index >> 1;
    HAL_GPIO_WritePin(GPIOA, ENM3, (index & 1));
    index = index >> 1;
    HAL_GPIO_WritePin(GPIOA, ENM4, (index & 1));
    index = index >> 1;
    HAL_GPIO_WritePin(GPIOA, ENM5, (index & 1));
    index = index >> 1;
    HAL_GPIO_WritePin(GPIOA, ENM6, (index & 1));
    index = index >> 1;
    HAL_GPIO_WritePin(GPIOA, ENM7, (index & 1));
    index = index >> 1;
}

void updateLedMatrix(int index){
	switch(index){
	case 0:
		HAL_GPIO_WritePin(GPIOB, ROW1|ROW2|ROW3|ROW4|ROW5|ROW6|ROW7, 0);
		HAL_GPIO_WritePin(GPIOB, ROW0, 1);
		displayLedMatrix(matrix_buffer[index]);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOB, ROW0|ROW2|ROW3|ROW4|ROW5|ROW6|ROW7, 0);
		HAL_GPIO_WritePin(GPIOB, ROW1, 1);
		displayLedMatrix(matrix_buffer[index]);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOB, ROW0|ROW1|ROW3|ROW4|ROW5|ROW6|ROW7, 0);
		HAL_GPIO_WritePin(GPIOB, ROW2, 1);
		displayLedMatrix(matrix_buffer[index]);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOB, ROW0|ROW1|ROW2|ROW4|ROW5|ROW6|ROW7, 0);
		HAL_GPIO_WritePin(GPIOB, ROW3, 1);
		displayLedMatrix(matrix_buffer[index]);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOB, ROW0|ROW1|ROW2|ROW3|ROW5|ROW6|ROW7, 0);
		HAL_GPIO_WritePin(GPIOB, ROW4, 1);
		displayLedMatrix(matrix_buffer[index]);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOB, ROW0|ROW1|ROW2|ROW3|ROW4|ROW6|ROW7, 0);
		HAL_GPIO_WritePin(GPIOB, ROW5, 1);
		displayLedMatrix(matrix_buffer[index]);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOB, ROW0|ROW1|ROW2|ROW3|ROW4|ROW5|ROW7, 0);
		HAL_GPIO_WritePin(GPIOB, ROW6, 1);
		displayLedMatrix(matrix_buffer[index]);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOB, ROW0|ROW1|ROW2|ROW3|ROW4|ROW5|ROW6, 0);
		HAL_GPIO_WritePin(GPIOB, ROW7, 1);
		displayLedMatrix(matrix_buffer[index]);
		break;
	default:
		break;
	}
}

void updateMatrixbuffer(){
	for (int i = 0; i < MAX_LED_MATRIX; ++i) {
		matrix_buffer[i] = (matrix_buffer[i] >> 1) | ((matrix_buffer[i] & 1) << 7);
	}
}
