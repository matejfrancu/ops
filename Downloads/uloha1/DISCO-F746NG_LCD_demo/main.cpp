#include "mbed.h"
#include "stm32746g_discovery_lcd.h"

int zero = 0;
int mid = 120;
int under = 160;
int above = 80;

int main()
{
    BSP_LCD_Init();
    BSP_LCD_LayerDefaultInit(LTDC_ACTIVE_LAYER, LCD_FB_START_ADDRESS);
    BSP_LCD_SelectLayer(LTDC_ACTIVE_LAYER);
    BSP_LCD_Clear(LCD_COLOR_BLACK);

    while (1) {
        BSP_LCD_SetFont(&LCD_DEFAULT_FONT);
        BSP_LCD_SetBackColor(LCD_COLOR_WHITE);
        BSP_LCD_SetTextColor(LCD_COLOR_BLACK);
        BSP_LCD_DisplayStringAt(zero, above, (uint8_t *)"erik", CENTER_MODE);

        BSP_LCD_SetBackColor(LCD_COLOR_GREEN);
        BSP_LCD_SetTextColor(LCD_COLOR_BROWN);
        BSP_LCD_DisplayStringAt(zero, mid, (uint8_t *)"matej", CENTER_MODE);

        BSP_LCD_SetBackColor(LCD_COLOR_RED);
        BSP_LCD_SetTextColor(LCD_COLOR_BLUE);
        BSP_LCD_DisplayStringAt(zero, under, (uint8_t *)"kuba", CENTER_MODE);
    }
}
