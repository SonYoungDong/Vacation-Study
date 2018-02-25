#include "led.h"

void led_on(void) {
    HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
}