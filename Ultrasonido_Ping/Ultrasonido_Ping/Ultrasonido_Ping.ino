//Ultrasonido_PING//
//Autor Borxo García//

#define ping  2
#define Rojo  7
#define Ambar  8
#define Verde  9
long duracion, distancia;

void setup()
	{
		Serial.begin(9600);
		pinMode(Rojo, OUTPUT);
		pinMode(Ambar, OUTPUT);
		pinMode(Verde, OUTPUT);
	}


void loop()
	{
		pinMode(ping, OUTPUT);
		digitalWrite(ping, LOW);
		delayMicroseconds(2);

		digitalWrite(ping, HIGH);
		delayMicroseconds(10);

		digitalWrite(ping, LOW);

		pinMode(ping, INPUT);
		duracion = pulseIn(ping, HIGH);
		distancia = duracion * 0.01723;

		digitalWrite(Rojo, HIGH);
		Serial.print(distancia);
		Serial.println("cm");
		delay(1000);

		if (distancia <= 70)
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
