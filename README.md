# ESP32-MP3-Player
ESP32 MP3播放器

## 硬件设计
* MCU采用乐鑫的ESP32系列SoC，高性能Xtensa双核CPU，支持一个核心播放音频，另一核心负责UI。带2.4GHz Wi-Fi，可以连接网络。带蓝牙，将来可以实现蓝牙音频。另外，将来可以利用ESP32 USB Device功能，实现直连电脑读写。
* 音频部分采用Analog Devices的MAX98357，兼顾DAC和功放，支持双声道，可用I<sup>2</sup>S与ESP32通讯。不使用时，可以用使能信号关闭芯片从而提升续航。
* 屏幕采用SSD1306 128x64 OLED, 成本较低，耗电量小，并且手头正好有这种屏幕。坏处是尺寸略小，长时间使用可能烧屏。将来预留升级TFT LCD。
* TF卡存储本地音频文件，通过SD协议与ESP32通信。
* 用微动开关作为按钮，控制UI。
* 使用1S1P锂电池作为供电。注意主电路没有过充过放保护，电池须选用带保护板的版本。

## 软件设计

### 采用的第三方软件
* 采用[ESP-IDF](https://github.com/espressif/esp-idf)框架开发
* [u8g2](https://github.com/olikraus/u8g2)实现OLED显示
* [LVGL for ESP32](https://github.com/lvgl/lv_port_esp32)作为UI框架
* [ESP32-audioI2S](https://github.com/schreibfaul1/ESP32-audioI2S)实现音频播放

感谢以上软件的开发者。