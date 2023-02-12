#include "main.h"

#include "LCD_Driver.h"
#include "LCD_Touch.h"
#include "LCD_GUI.h"
#include "LCD_Bmp.h"
#include "DEV_Config.h"
#include <stdio.h>
#include "hardware/watchdog.h"
#include "pico/stdlib.h"

int main(void)
{
    System_Init();
    LCD_SCAN_DIR  lcd_scan_dir = SCAN_DIR_DFT;
    LCD_Init(lcd_scan_dir,800);
	TP_Init(lcd_scan_dir);
    GUI_Clear(WHITE);
    GUI_DisString_EN(10, 10, "Shobha Mishra!!!", &Font12, YELLOW, BLUE);
    GUI_DisString_EN(10, 30, "Abhishek Mishra!!!", &Font12, WHITE, BLACK);
    GUI_DisString_EN(10, 50, "Ranjana Mishra!!!", &Font12, WHITE, RED);
    GUI_DisString_EN(10, 70, "Aditya Mishra!!!", &Font12, WHITE, BLUE);
    
    while(true)
    {

    }
    return 0;
}
