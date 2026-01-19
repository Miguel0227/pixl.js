#ifndef BOARD_LCD_H
#define BOARD_LCD_H

#define LEDS_NUMBER 1

#define LED_START 31
#define LED_1 31
#define LED_STOP 31

#define LEDS_ACTIVE_STATE 0

#define LEDS_INV_MASK LEDS_MASK

#define LEDS_LIST {LED_1}

#define BSP_LED_0 LED_1

// ==========================================
// CORRECCIÓN DE BOTONES PARA JOYSFUSION (4 TECLAS)
// ==========================================

// 1. Cambiamos la cantidad de botones a 4
#define BUTTONS_NUMBER 4

#define BUTTON_START 5

// 2. Aquí asignamos los PINES físicos.
// He reordenado los números basándome en tu problema para intentar corregir el orden.
// Si no quedan perfectos a la primera, solo tienes que cambiar estos números (5, 6, 7, 8) de lugar.

#define BUTTON_1 5 // Tu Tecla 1 (Antes iba arriba, intentaremos que sea Atrás)
#define BUTTON_2 6 // Tu Tecla 2 (OK - Esta estaba bien)
#define BUTTON_3 8 // Tu Tecla 3 (Antes iba abajo. Probamos el PIN 8 aquí)
#define BUTTON_4 7 // Tu Tecla 4 (La que estaba muerta. Probamos el PIN 7 aquí)

#define BUTTON_STOP 8
#define BUTTON_PULL NRF_GPIO_PIN_PULLUP

#define BUTTONS_ACTIVE_STATE 0

// 3. Agregamos el BUTTON_4 a la lista
#define BUTTONS_LIST {BUTTON_1, BUTTON_2, BUTTON_3, BUTTON_4}

// 4. Asignamos los botones lógicos
#define BSP_BUTTON_0 BUTTON_1
#define BSP_BUTTON_1 BUTTON_2
#define BSP_BUTTON_2 BUTTON_3
#define BSP_BUTTON_3 BUTTON_4

// display config
// #define OLED_SCREEN
// #define OLED_SH1106

#define LCD_SCREEN
#define LCD_ST7567

// screen drivers
#define LCD_CS_PIN 27
#define LCD_RESET_PIN 29
#define LCD_BL_PIN 30
#define LCD_DC_PIN 28 // green wire (DC)
#define LCD_DEFAULT_CONTRAST 128

// VFS driver
// #define VFS_LFS_ENABLE
#define VFS_SPIFFS_ENABLE

#define NRFX_SPIM_SCK_PIN 26  // yellow wire (CLK)
#define NRFX_SPIM_MOSI_PIN 25 // blue wire (DIN)
#define NRFX_SPIM_MISO_PIN 19 // blue wire (DIN)

// flash
#define FLASH_CS_PIN 18

// Power
#define CHRG_PIN 3
#define ADC_PIN 2

// APP
#define APP_LEGLAMIIBO_ENABLE
// #define APP_PLAYER_ENABLE
#if defined(INTERNAL_ENABLE)
#undef APP_LEGLAMIIBO_ENABLE
#endif

// Game
// #define APP_GAME_ENABLE
#endif