// 최종 수정 : 2018.1.11 이성현 
// led관련 헤더파일 

#ifndef __STM32L0xx_HAL_GPIO_H
#define __STM32L0xx_HAL_GPIO_H

extern "C" {

#include "stm32l0xx_hal_def.h"
#include "stm32l0xx_hal_gpio_ex.h"

void onLed (GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
void offLed (GPIO_TypeDef * GPIOx, uint16_t GPIO_Pin);
}

#endif 
