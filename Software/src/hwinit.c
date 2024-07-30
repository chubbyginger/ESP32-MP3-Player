#include "main.h"
#include "driver/gpio.h"
#include "driver/i2c.h"
#include "driver/i2s.h"
#include "driver/sdmmc_host.h"
#include "hwinit.h"

void i2c_init() {
    // Initialize I2C on OLED_SDA_PIN and OLED_SCL_PIN
    i2c_config_t conf;
    conf.mode = I2C_MODE_MASTER;
    conf.sda_io_num = OLED_SDA;
    conf.sda_pullup_en = GPIO_PULLUP_ENABLE;
    conf.scl_io_num = OLED_SCL;
    conf.scl_pullup_en = GPIO_PULLUP_ENABLE;
    conf.master.clk_speed = 100000;
    i2c_param_config(I2C_NUM_0, &conf);
    i2c_driver_install(I2C_NUM_0, conf.mode, 0, 0, 0);
}

void gpio_init() {
    // Initialize SD_MODE as output
    gpio_pad_select_gpio(SD_MODE);
    gpio_set_direction(SD_MODE, GPIO_MODE_OUTPUT);
}

void i2s_init() {}

void sdmmc_init() {}