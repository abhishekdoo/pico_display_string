/**
 * @license
 * Copyright (c) 2023, Abhishek Mishra
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

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
