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
// SEGUNDO INTENTO DE CORRECCIÓN DE BOTONES PARA JOYSFUSION
// Basado en pruebas: Pin 6 es OK, Pin 5 es Arriba.
// =================================================================

#define BUTTONS_NUMBER 4

// --- ASIGNACIÓN DE PINES FÍSICOS ---

// Hipótesis: Probamos el Pin 7 para el botón físico de "Atrás".
#define BUTTON_1 7 // Tu Tecla 1 (Física: Atrás)

// CONFIRMADO: El Pin 6 es tu botón de "OK".
#define BUTTON_2 6 // Tu Tecla 2 (Física: OK)

// CONFIRMADO POR DEDUCCIÓN: Tu botón físico de "Arriba" es el Pin 5.
// Lo asignamos aquí para que haga la función de Arriba.
#define BUTTON_3 5 // Tu Tecla 3 (Física: Arriba)

// Hipótesis: Probamos el Pin 8 para el botón físico de "Abajo".
#define BUTTON_4 8 // Tu Tecla 4 (Física: Abajo)

#define BUTTON_STOP 8
#define BUTTON_PULL NRF_GPIO_PIN_PULLUP

#define BUTTONS_ACTIVE_STATE 0

// Lista ordenada de botones
#define BUTTONS_LIST {BUTTON_1, BUTTON_2, BUTTON_3, BUTTON_4}

// --- MAPEO LÓGICO (ESTO NO SE TOCA) ---
// Esto le dice al sistema qué función hace cada botón de la lista de arriba.
#define BSP_BUTTON_0 BUTTON_1 // Función: Atrás / Izquierda
#define BSP_BUTTON_1 BUTTON_2 // Función: OK / Entrar
#define BSP_BUTTON_2 BUTTON_3 // Función: Arriba / Siguiente
#define BSP_BUTTON_3 BUTTON_4 // Función: Abajo / Anterior

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