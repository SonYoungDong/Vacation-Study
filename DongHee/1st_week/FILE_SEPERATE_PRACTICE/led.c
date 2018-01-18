#include "stm32l0xx_hal.h"

void ledOn()
{
	HAL_GPIO_WritePin(GPIOA, led_Pin, GPIO_PIN_SET);
}
