/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "Software_timer.h"
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
TIM_HandleTypeDef htim2;

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_TIM2_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
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

const int MAX_LED = 4;
int index_led = 0;
int led_buffer [4] = {3, 4, 5, 8};
int hour;
int minutes;
int second;
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
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_TIM2_Init();
  /* USER CODE BEGIN 2 */
  HAL_TIM_Base_Start_IT(&htim2);
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  hour = 15;
  minutes = 8;
  second = 50;
  while (1)
  {
    /* USER CODE END WHILE */
	  second ++;
	  if (second >= 60)
	  {
		  second = 0;
	  	  minutes++;
	  }
	  if(minutes >= 60)
	  {
		  minutes = 0;
	  	  hour++;
	  }
	  if(hour >= 24)
	  {
		  hour = 0;
	  }
	  updateClockBuffer();
	  HAL_Delay(1000);
    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief TIM2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM2_Init(void)
{

  /* USER CODE BEGIN TIM2_Init 0 */

  /* USER CODE END TIM2_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};

  /* USER CODE BEGIN TIM2_Init 1 */

  /* USER CODE END TIM2_Init 1 */
  htim2.Instance = TIM2;
  htim2.Init.Prescaler = 7999;
  htim2.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim2.Init.Period = 9;
  htim2.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim2.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim2) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim2, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim2, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM2_Init 2 */

  /* USER CODE END TIM2_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStruct = {0};

	/* GPIO Ports Clock Enable */
		__HAL_RCC_GPIOA_CLK_ENABLE();
		__HAL_RCC_GPIOB_CLK_ENABLE();

	GPIO_InitStruct.Pin = LED_RED|EN0|EN1|EN2|EN3|DOT;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pull = GPIO_NOPULL;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

	GPIO_InitStruct.Pin = SEG0|SEG1|SEG2|SEG3|SEG4|SEG5|SEG6;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pull = GPIO_NOPULL;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
}

/* USER CODE BEGIN 4 */
int counter_7seg = 25;
int counter_led_red = 100;
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
 {
 		counter_led_red--;
	    if (counter_led_red <= 0){
	    	counter_led_red = 100;
	    	HAL_GPIO_TogglePin(GPIOA, LED_RED);
	    	HAL_GPIO_TogglePin(GPIOA, DOT);
	    }

	    counter_7seg--;
	    if (counter_7seg <= 0){
	    	counter_7seg = 25; // Change the period of invoking update 7SEG to 1Hz.
	    	update7SEG(index_led++);
	  }
	    if(index_led == MAX_LED) index_led = 0;
 }
/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
