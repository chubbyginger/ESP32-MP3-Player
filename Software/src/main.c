#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "sdkconfig.h"
// #include "u8g2.h"
#include "main.h"
#include "hwinit.h"
#include "oled.h"

void app_main() {
    i2c_init();
    gpio_init();
    i2s_init();
    sdmmc_init();
}