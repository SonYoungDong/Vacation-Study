#include "stm32l0xx_hal.h"

void LED_ON()
{
  HAL_GPIO_TogglePin(GREEN_LED_GPIO_Port, GREEN_LED_Pin);
}