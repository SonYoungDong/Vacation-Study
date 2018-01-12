// 최종 수정 : 2018.1.11 이성현 
// led를 관련 .c 파일 led.h파일과 관련이 있음 

#include "stm32l0xx_hal.h"

#ifdef HAL_GPIO_MODULE_ENABLED

#define GPIO_MODE             ((uint32_t)0x00000003U)
#define EXTI_MODE             ((uint32_t)0x10000000U)
#define GPIO_MODE_IT          ((uint32_t)0x00010000U)
#define GPIO_MODE_EVT         ((uint32_t)0x00020000U)
#define RISING_EDGE           ((uint32_t)0x00100000U) 
#define FALLING_EDGE          ((uint32_t)0x00200000U) 
#define GPIO_OUTPUT_TYPE      ((uint32_t)0x00000010U)

#define GPIO_NUMBER           ((uint32_t)16U)

void onLed (GPIO_TypeDef * GPIOx, uint16_t GPIO_Pin) {
	
	assert_param(IS_GPIO_PIN_AVAILABLE(GPIOx, GPIO_Pin));
	
	GPIOx->BSRR = GPIO_Pin;
}

void offLed (GPIO_TypeDef * GPIOx, uint16_t GPIO_Pin) {
	
	assert_param(IS_GPIO_PIN_AVAILABLE(GPIOx, GPIO_Pin));
	
	GPIOx -> BRR = GPIO_Pin;
}

#endif /* HAL_GPIO_MODULE_ENABLED */