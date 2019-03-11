#define Led 5
#define Led1 4 
#define enable 3
#define MotorDerecha 9
#define MotorIzquierda 10 



void setup()
	{
		Serial.begin(9600);
		pinMode(Led, OUTPUT);
		pinMode(Led1, OUTPUT);
		pinMode(MotorDerecha, OUTPUT);
		pinMode(MotorIzquierda, OUTPUT);

	}
	
void loop()
	{
		digitalWrite(MotorDerecha, HIGH);
		digitalWrite(MotorIzquierda, LOW);
		int Velocidad = analogRead(A0) / 10;
		analogWrite(enable, Velocidad*2.55);

		Serial.print(Velocidad);
		Serial.println("c");
		delay(100);

		if (Velocidad > 0)
			{
				digitalWrite(Led, HIGH);
				digitalWrite(Led1, LOW);
			}
		else if (Velocidad == 0)
			{
				digitalWrite(Led1, HIGH);
				digitalWrite(Led, LOW);
			}
	}