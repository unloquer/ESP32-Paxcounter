// clang-format off
// upload_speed 115200
// board lolin32

#ifndef _LOLINLITE_H
#define _LOLINLITE_H

#include <stdint.h>

// Hardware related definitions for lolin32lite (without LoRa shield)
#define HAS_DISPLAY 1
#define HAS_LED LED_BUILTIN // on board LED on GPIO5
#define LED_ACTIVE_LOW 1    // Onboard LED is active when pin is LOW

/* #define MY_SDA SDA //21 */
/* #define MY_SCL SCL //22 */
#define MY_DISPLAY_SDA (21)
#define MY_DISPLAY_SCL (22)
#define MY_DISPLAY_RST NOT_A_PIN

// disable brownout detection (avoid unexpected reset on some boards)
#define DISABLE_BROWNOUT 1 // comment out if you want to keep brownout feature

#endif
