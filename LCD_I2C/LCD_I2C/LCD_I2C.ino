//LCD_I2C//
//Autor Borxo García//

#include <LiquidCrystal.h>
#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include <LCD.h>

//LiquidCrystal_I2C lcd(Dirección,E, RW, RS, D4, D3, D2, D1, D0, Estado);
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

#define led  8
#define led1 9
#define ButtonA  10
#define ButtonB  11

int ValorA;
int ValorB;

void setup()
	{
		pinMode(ButtonA, INPUT);
		pinMode(ButtonB, INPUT);
		pinMode(led, OUTPUT);
		pinMode(led1, OUTPUT);

		//lcd.begin(16,2);
		lcd.home();
		lcd.begin(16, 2);
		lcd.setCursor(3, 1);
		lcd.print("Verde");
		delay(1000);
	}


void loop() 
	{

		ValorA = digitalRead(ButtonA);
		ValorB = digitalRead(ButtonB);

		if (ValorA == HIGH)
			{
				lcd.clear();
				lcd.setCursor(3, 1);
				lcd.print("Rojo");
				digitalWrite(led, HIGH);
				digitalWrite(led1, LOW);
			}

	if (ValorB == HIGH)
		{
			lcd.clear();
			lcd.setCursor(3, 1);
			lcd.print("Verde");
			digitalWrite(led, LOW);
			digitalWrite(led1, HIGH);
		}

	}
