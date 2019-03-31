//Ultrasonidos_HCSR04//
//Autor Borxo García//
//Licencia de Creative Commons Reconocimiento-NoComercial 4.0 Internacional.//

#define Trigger  3
#define Echo  2
#define Rojo  7
#define Ambar  8
#define Verde  9

long duracion;
int distancia;


void setup() 
	{
		Serial.begin(9600);
		pinMode(Echo, INPUT);
		pinMode(Trigger, OUTPUT);
		pinMode(Rojo, OUTPUT);
		pinMode(Verde, OUTPUT);
		pinMode(Ambar, OUTPUT);
		digitalWrite(Trigger, LOW);
		delayMicroseconds(40);
	}


void loop()
	{
		digitalWrite(Rojo, HIGH);
		digitalWrite(Ambar, LOW);
		digitalWrite(Verde, LOW);

		digitalWrite(Trigger, LOW);
		delayMicroseconds(4);
		digitalWrite(Trigger, HIGH);
		delayMicroseconds(10);
		digitalWrite(Trigger, LOW);

		duracion = pulseIn(Echo, HIGH);
		distancia = duracion/58;
		Serial.print(distancia);
		Serial.println("cm");
		delay(1000);

		if (distancia <= 20)
			{
				digitalWrite(Rojo, HIGH);
				delay(5000);
				digitalWrite(Rojo, LOW);
				digitalWrite(Verde, HIGH);
				delay(10000);
				digitalWrite(Verde, LOW);
				for (int i = 0; i < 4; i++)
					{
						digitalWrite(Ambar, HIGH);
						delay(500);
						digitalWrite(Ambar, LOW);
						delay(500);
					}
			}

	}
