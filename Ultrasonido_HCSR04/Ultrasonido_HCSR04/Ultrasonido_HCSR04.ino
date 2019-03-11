int Trigger = 10;
int Echo = 9;
int Ambar = 13;
int Verde = 12;
int Rojo = 11;
long duracion, distancia;
int valor;

void setup() {
	Serial.begin(9600);
	pinMode(Echo, INPUT);
	pinMode(Trigger, OUTPUT);
	pinMode(Rojo, OUTPUT);
	pinMode(Verde, OUTPUT);
	pinMode(Ambar, OUTPUT);
}


void loop()
{
	digitalWrite(Rojo, HIGH);
	digitalWrite(Ambar, LOW);
	digitalWrite(Verde, LOW);

	digitalWrite(Trigger, LOW);
	delayMicroseconds(4);
	digitalWrite(Trigger, HIGH);
	delayMicroseconds(20);
	digitalWrite(Trigger, LOW);

	duracion = pulseIn(Echo, HIGH);
	distancia = duracion * 10 / 292 / 2;
	Serial.println(distancia);
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