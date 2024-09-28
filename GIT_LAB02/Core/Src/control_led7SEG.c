/*
 * control_led7SEG.c
 *
 *  Created on: 28 Sep 2024
 *      Author: HOANG ANH
 */


#include "control_led7SEG.h"
#include "main.h"

void Display7SEG(int counter){
	switch (counter) {
	  case 0:
		  	  HAL_GPIO_WritePin(GPIOB, SEG0, GPIO_PIN_RESET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG1, GPIO_PIN_RESET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG2, GPIO_PIN_RESET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG3, GPIO_PIN_RESET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG4, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(GPIOB, SEG5, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(GPIOB, SEG6, GPIO_PIN_SET);
		  break;
	  case 1:
		  	  HAL_GPIO_WritePin(GPIOB, SEG0, GPIO_PIN_SET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG1, GPIO_PIN_RESET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG2, GPIO_PIN_RESET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG3, GPIO_PIN_SET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG4, GPIO_PIN_SET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG5, GPIO_PIN_SET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG6, GPIO_PIN_SET);
		  break;
	  case 2:
		  	  HAL_GPIO_WritePin(GPIOB, SEG0, GPIO_PIN_RESET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG1, GPIO_PIN_RESET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG2, GPIO_PIN_SET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG3, GPIO_PIN_RESET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG4, GPIO_PIN_RESET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG5, GPIO_PIN_SET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG6, GPIO_PIN_RESET);
		  break;
	  case 3:
		  	  HAL_GPIO_WritePin(GPIOB, SEG0, GPIO_PIN_RESET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG1, GPIO_PIN_RESET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG2, GPIO_PIN_RESET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG3, GPIO_PIN_RESET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG4, GPIO_PIN_SET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG5, GPIO_PIN_SET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG6, GPIO_PIN_RESET);
		  break;
	  case 4:
		  	  HAL_GPIO_WritePin(GPIOB, SEG0, GPIO_PIN_SET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG1, GPIO_PIN_RESET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG2, GPIO_PIN_RESET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG3, GPIO_PIN_SET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG4, GPIO_PIN_SET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG5, GPIO_PIN_RESET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG6, GPIO_PIN_RESET);
		  break;
	  case 5:
		  	  HAL_GPIO_WritePin(GPIOB, SEG0, GPIO_PIN_RESET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG1, GPIO_PIN_SET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG2, GPIO_PIN_RESET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG3, GPIO_PIN_RESET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG4, GPIO_PIN_SET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG5, GPIO_PIN_RESET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG6, GPIO_PIN_RESET);
		  break;
	  case 6:
		  	  HAL_GPIO_WritePin(GPIOB, SEG0, GPIO_PIN_RESET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG1, GPIO_PIN_SET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG2, GPIO_PIN_RESET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG3, GPIO_PIN_RESET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG4, GPIO_PIN_RESET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG5, GPIO_PIN_RESET);
		  	  HAL_GPIO_WritePin(GPIOB, SEG6, GPIO_PIN_RESET);
		  break;
	  case 7:
	  	  	  HAL_GPIO_WritePin(GPIOB, SEG0, GPIO_PIN_RESET);
	  	  	  HAL_GPIO_WritePin(GPIOB, SEG1, GPIO_PIN_RESET);
	  	  	  HAL_GPIO_WritePin(GPIOB, SEG2, GPIO_PIN_RESET);
	  	  	  HAL_GPIO_WritePin(GPIOB, SEG3, GPIO_PIN_SET);
	  	  	  HAL_GPIO_WritePin(GPIOB, SEG4, GPIO_PIN_SET);
	  	  	  HAL_GPIO_WritePin(GPIOB, SEG5, GPIO_PIN_SET);
	  	  	  HAL_GPIO_WritePin(GPIOB, SEG6, GPIO_PIN_SET);
	  	  break;
	  case 8:
	  	  	  HAL_GPIO_WritePin(GPIOB, SEG0, GPIO_PIN_RESET);
	  	  	  HAL_GPIO_WritePin(GPIOB, SEG1, GPIO_PIN_RESET);
	  	  	  HAL_GPIO_WritePin(GPIOB, SEG2, GPIO_PIN_RESET);
	  	  	  HAL_GPIO_WritePin(GPIOB, SEG3, GPIO_PIN_RESET);
	  	  	  HAL_GPIO_WritePin(GPIOB, SEG4, GPIO_PIN_RESET);
	  	  	  HAL_GPIO_WritePin(GPIOB, SEG5, GPIO_PIN_RESET);
	  	  	  HAL_GPIO_WritePin(GPIOB, SEG6, GPIO_PIN_RESET);
	  	  break;
	  case 9:
	  	  	  HAL_GPIO_WritePin(GPIOB, SEG0, GPIO_PIN_RESET);
	  	  	  HAL_GPIO_WritePin(GPIOB, SEG1, GPIO_PIN_RESET);
	  	  	  HAL_GPIO_WritePin(GPIOB, SEG2, GPIO_PIN_RESET);
	  	  	  HAL_GPIO_WritePin(GPIOB, SEG3, GPIO_PIN_RESET);
	  	  	  HAL_GPIO_WritePin(GPIOB, SEG4, GPIO_PIN_SET);
	  	  	  HAL_GPIO_WritePin(GPIOB, SEG5, GPIO_PIN_RESET);
	  	  	  HAL_GPIO_WritePin(GPIOB, SEG6, GPIO_PIN_RESET);
	  	  break;
	  }
}

void update7SEG (int index)
{
	switch(index)
	{
		case 0:
			HAL_GPIO_WritePin(GPIOA, EN0, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, EN1, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, EN2, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, EN3, GPIO_PIN_SET);
			Display7SEG(led_buffer[0]);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOA, EN0, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, EN1, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, EN2, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, EN3, GPIO_PIN_SET);
			Display7SEG(led_buffer[1]);
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOA, EN0, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, EN1, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, EN2, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, EN3, GPIO_PIN_SET);
			Display7SEG(led_buffer[2]);
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOA, EN0, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, EN1, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, EN2, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, EN3, GPIO_PIN_RESET);
			Display7SEG(led_buffer[3]);
			break;
		default:
			break;
	}
}
