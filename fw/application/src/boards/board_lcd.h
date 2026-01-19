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

// =================================================================
// SOLUCIÓN FINAL - MAPA CRUZADO (7 y 8)
// Lógica:
// Botón 1 (Atrás) = PIN 7 (Detectado porque activaba la función asignada al 7)
// Botón 2 (OK)    = PIN 6 (Correcto)
// Botón 3 (Arriba)= PIN 5 (Correcto)
// Botón 4 (Abajo) = PIN 8 (Por descarte)
// =================================================================

#define BUTTONS_NUMBER 4
#define BUTTON_START 5 // Ajustamos el rango de escaneo
#define BUTTON_STOP 8

// --- ASIGNACIÓN DE PINES ---

/*

ATRAS = Pin 7

OK = Pin 6

ARRIBA = Pin 5

ABAJO = Pin 4


BSP_BUTTON_3 = Tecla Atrás

BSP_BUTTON_1 = Tecla OK

BSP_BUTTON_2 = Tecla Arriba

BSP_BUTTON_0 = Tecla abajo



*/

#define BUTTON_1 5 // Tecla 1: ATRÁS (Pin 8)
#define BUTTON_2 6 // Tecla 2: OK    (Pin 6)
#define BUTTON_3 7 // Tecla 3: ARRIBA(Pin 7)
#define BUTTON_4 8 // Tecla 4: ABAJO (Pin 5)

#define BUTTON_PULL NRF_GPIO_PIN_PULLUP
#define BUTTONS_ACTIVE_STATE 0

// Lista ordenada
#define BUTTONS_LIST {BUTTON_1, BUTTON_2, BUTTON_3, BUTTON_4}

// --- MAPEO DE FUNCIONES ---
#define BSP_BUTTON_0 BUTTON_1 // Función Atrás
#define BSP_BUTTON_1 BUTTON_2 // Función OK
#define BSP_BUTTON_2 BUTTON_3 // Función Arriba
#define BSP_BUTTON_3 BUTTON_4 // Función Abajo

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