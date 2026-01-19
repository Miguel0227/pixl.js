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
// SOLUCIÓN FINAL - MAPEO FÍSICO REAL
// =================================================================

#define BUTTONS_NUMBER 4

// --- ¡CORRECCIÓN IMPORTANTE! ---
// El escaneo debe empezar en 4 porque tu botón ABAJO es el Pin 4.
// Antes empezaba en 5, por eso el botón de abajo estaba "muerto".
#define BUTTON_START 4
#define BUTTON_STOP 7

// --- ASIGNACIÓN DE PINES (Tus hallazgos reales) ---
// Asignamos nombres claros para no confundirnos con números

#define PIN_ARRIBA 5 // Tu botón físico 3
#define PIN_OK 6     // Tu botón físico 2
#define PIN_ATRÁS 7  // Tu botón físico 1
#define PIN_ABAJO 4  // Tu botón físico 4

// Asignamos esos pines a las variables del sistema
#define BUTTON_1 PIN_ARRIBA
#define BUTTON_2 PIN_OK
#define BUTTON_3 PIN_ABAJO
#define BUTTON_4 PIN_ATRÁS

#define BUTTON_PULL NRF_GPIO_PIN_PULLUP
#define BUTTONS_ACTIVE_STATE 0

// --- LA LISTA ORDENADA (El orden aquí define el índice 0, 1, 2, 3) ---
#define BUTTONS_LIST {BUTTON_1, BUTTON_2, BUTTON_3, BUTTON_4}

// --- MAPEO DE FUNCIONES LÓGICAS ---
// Aquí conectamos la lógica del software con tus pines

// El sistema llama "Button 0" a la función de SUBIR/IZQUIERDA
#define BSP_BUTTON_0 BUTTON_1 // Conectado a Pin 5 (Arriba)

// El sistema llama "Button 1" a la función de OK/ENTER
#define BSP_BUTTON_1 BUTTON_2 // Conectado a Pin 6 (OK)

// El sistema llama "Button 2" a la función de BAJAR/DERECHA
#define BSP_BUTTON_2 BUTTON_3 // Conectado a Pin 4 (Abajo)

// El sistema llama "Button 3" a la función de ATRÁS/CANCELAR
#define BSP_BUTTON_3 BUTTON_4 // Conectado a Pin 7 (Atrás)

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