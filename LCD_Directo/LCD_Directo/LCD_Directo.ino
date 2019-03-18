#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

#define led  8
#define led1  9
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

		//lcd.home();
		lcd.begin(16, 2);
		lcd.setCursor(3, 1);
		lcd.print("Verde");
		digitalWrite(led1, HIGH);
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