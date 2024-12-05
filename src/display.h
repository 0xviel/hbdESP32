#ifndef DISPLAY_H
#define DISPLAY_H

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// LCD
LiquidCrystal_I2C lcd(0x27, 16, 2);

void initDisplay() {
    lcd.init();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Happy Birthday!");
    lcd.setCursor(0, 1);
    lcd.print(nama + " yang ke " + String(usia));
}

#endif
