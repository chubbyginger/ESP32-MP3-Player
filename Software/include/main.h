#include "driver/gpio.h"
// Pin definitions here

#ifndef MAIN_H
#define MAIN_H
#endif

#define OLED_SDA 32
#define OLED_SCL 33
#define OLED_ADDR 0x78

#define SDMMC_D0 GPIO_NUM_2
#define SDMMC_D1 GPIO_NUM_4
#define SDMMC_D2 GPIO_NUM_12
#define SDMMC_D3 GPIO_NUM_13
#define SDMMC_CMD GPIO_NUM_15
#define SDMMC_CLK GPIO_NUM_14

#define I2S_DOUT GPIO_NUM_25
#define I2S_LRCLK GPIO_NUM_26
#define I2S_BCLK GPIO_NUM_27
#define SD_MODE GPIO_NUM_5

#define ENC_DT GPIO_NUM_19
#define ENC_CLK GPIO_NUM_21
#define ENC_SW GPIO_NUM_22
#define SW_HOLD GPIO_NUM_18
#define SW_BACK GPIO_NUM_23
