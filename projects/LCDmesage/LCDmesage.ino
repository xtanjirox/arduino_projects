#include <LiquidCrystal_I2C.h>

#include <Wire.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup(){
  lcd.init();
  lcd.backlight();
}

void clearLCDLine(int line)
{               
        lcd.setCursor(0,line);
        for(int n = 0; n < 20; n++) // 20 indicates symbols in line. For 2x16 LCD write - 16
        {
                lcd.print(" ");
        }
}

void loop(){
  lcd.setCursor(4, 0);
  lcd.print("Welcome");
  clearLCDLine(1);
  lcd.setCursor(0, 1);
  lcd.print("LOU BEASTY");
  delay(1000);
  clearLCDLine(1);
  lcd.setCursor(0, 1);  
  lcd.print("LOU KOUKOU");
  delay(1000);
  lcd.clear();
}