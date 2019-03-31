//Blink//
//Autor Borxo García 
//Licencia de Creative Commons Reconocimiento-NoComercial 4.0 Internacional.//

#define led  13
#define led1  12

void setup()
	{
		pinMode(led, OUTPUT);
		pinMode(led1, OUTPUT);
	}


void loop()
	{
		digitalWrite(led, HIGH);
		digitalWrite(led1, LOW);
		delay(1000);

		digitalWrite(led, LOW);
		digitalWrite(led1, HIGH);
		delay(1000);
	}
