/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h5xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define B1_EXTI_IRQn EXTI13_IRQn
#define HES_B_Pin GPIO_PIN_2
#define HES_B_GPIO_Port GPIOC
#define HES_B_EXTI_IRQn EXTI2_IRQn
#define HES_C_Pin GPIO_PIN_3
#define HES_C_GPIO_Port GPIOC
#define HES_C_EXTI_IRQn EXTI3_IRQn
#define HES_A_Pin GPIO_PIN_0
#define HES_A_GPIO_Port GPIOA
#define HES_A_EXTI_IRQn EXTI0_IRQn
#define PWM_LS_C_Pin GPIO_PIN_5
#define PWM_LS_C_GPIO_Port GPIOC
#define PWM_LS_B_Pin GPIO_PIN_0
#define PWM_LS_B_GPIO_Port GPIOB
#define PWM_LS_A_Pin GPIO_PIN_13
#define PWM_LS_A_GPIO_Port GPIOB
#define PWM_HS_A_Pin GPIO_PIN_6
#define PWM_HS_A_GPIO_Port GPIOC
#define PWM_HS_B_Pin GPIO_PIN_7
#define PWM_HS_B_GPIO_Port GPIOC
#define PWM_HS_C_Pin GPIO_PIN_9
#define PWM_HS_C_GPIO_Port GPIOC

/* USER CODE BEGIN Private defines */
void perform_BLDC_commutation(uint8_t hes_code, float duty_cycle);
uint8_t read_hall_sensors(void);
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
