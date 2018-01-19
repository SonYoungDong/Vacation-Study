#include "main.h"
#include "stm32l0xx_hal.h"

void led_on(void) {
    HAL_GPIO_TogglePin(GREEN_LED_GPIO_Port, GREEN_LED_Pin);
}
