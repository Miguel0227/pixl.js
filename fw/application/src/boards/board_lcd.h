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

// =================================================================
// TERCER INTENTO - LA VENCIDA
// Lógica corregida según tus pruebas:
// Pin 8 detectado en Botón 1. Pin 7 asignado por descarte a Botón 4.
// =================================================================

#define BUTTONS_NUMBER 4

// --- ASIGNACIÓN DE PINES FÍSICOS CORREGIDA ---

// CORRECCIÓN: Tu botón 1 (Físico) es el Pin 8.
// Le asignamos la función lógica BUTTON_1 (que el sistema usa para "Atrás")
#define BUTTON_1 8 // Tecla 1: Ahora será ATRÁS

// CONFIRMADO: OK sigue siendo Pin 6.
#define BUTTON_2 6 // Tecla 2: OK

// CONFIRMADO: ARRIBA sigue siendo Pin 5.
#define BUTTON_3 5 // Tecla 3: ARRIBA

// CORRECCIÓN: Por descarte, tu botón 4 (Físico) es el Pin 7.
// Le asignamos la función lógica BUTTON_4 (que el sistema usa para "Abajo")
#define BUTTON_4 7 // Tecla 4: Ahora será ABAJO

#define BUTTON_STOP 8
#define BUTTON_PULL NRF_GPIO_PIN_PULLUP

#define BUTTONS_ACTIVE_STATE 0

// Lista ordenada
#define BUTTONS_LIST {BUTTON_1, BUTTON_2, BUTTON_3, BUTTON_4}

// --- MAPEO LÓGICO ---
#define BSP_BUTTON_0 BUTTON_1 // Atrás
#define BSP_BUTTON_1 BUTTON_2 // OK
#define BSP_BUTTON_2 BUTTON_3 // Arriba
#define BSP_BUTTON_3 BUTTON_4 // Abajo

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