//VERY short testing file for the class - may be updated later, but not for certain.
#include "lcd_horn.h"

int main()
{
	LCD_Thing lcd;
	lcd.writeStringToLine("class works", LINE1);
	delay(3000);
	lcd.ClrLcd(true);
	delay(1000);
	lcd.ClrLcd(false);
	return 0;
}
