int  Contador = 0;

#define a 2
#define b 3
#define c 4
#define d 5
#define e 6
#define f 7
#define g 8


void setup()
	{
		Serial.begin(9600);
		pinMode(a, OUTPUT);
		pinMode(b, OUTPUT);
		pinMode(c, OUTPUT);
		pinMode(d, OUTPUT);
		pinMode(e, OUTPUT);
		pinMode(f, OUTPUT);
		pinMode(g, OUTPUT);
		Numero(Contador);
		delay(1000);

	}


void loop()
	{
		for (int i = 0; i < 10; i++)
		{
			Serial.println(Contador);
			Contador = Contador + 1;
			Numero(Contador);
			delay(1000);
		}

		Contador = 0;
	}

void Numero(int Contador)
	{
		switch (Contador)
		{
			case 0:
				digitalWrite(a, HIGH);
				digitalWrite(b, HIGH);
				digitalWrite(c, HIGH);
				digitalWrite(d, HIGH);
				digitalWrite(e, HIGH);
				digitalWrite(f, HIGH);
				digitalWrite(g, LOW);
				break;
			case 1:
				digitalWrite(a, LOW);
				digitalWrite(b, HIGH);
				digitalWrite(c, HIGH);
				digitalWrite(d, LOW);
				digitalWrite(e, LOW);
				digitalWrite(f, LOW);
				digitalWrite(g, LOW);
				break;
			case 2:
				digitalWrite(a, HIGH);
				digitalWrite(b, HIGH);
				digitalWrite(c, LOW);
				digitalWrite(d, HIGH);
				digitalWrite(e, HIGH);
				digitalWrite(f, LOW);
				digitalWrite(g, HIGH);
				break;
			case 3:
				digitalWrite(a, HIGH);
				digitalWrite(b, HIGH);
				digitalWrite(c, HIGH);
				digitalWrite(d, HIGH);
				digitalWrite(e, LOW);
				digitalWrite(f, LOW);
				digitalWrite(g, HIGH);
				break;
			case 4:
				digitalWrite(a, LOW);
				digitalWrite(b, HIGH);
				digitalWrite(c, HIGH);
				digitalWrite(d, LOW);
				digitalWrite(e, LOW);
				digitalWrite(f, HIGH);
				digitalWrite(g, HIGH);
				break;
			case 5:
				digitalWrite(a, HIGH);
				digitalWrite(b, LOW);
				digitalWrite(c, HIGH);
				digitalWrite(d, HIGH);
				digitalWrite(e, LOW);
				digitalWrite(f, HIGH);
				digitalWrite(g, HIGH);
				break;
		case 6:
				digitalWrite(a, HIGH);
				digitalWrite(b, LOW);
				digitalWrite(c, HIGH);
				digitalWrite(d, HIGH);
				digitalWrite(e, HIGH);
				digitalWrite(f, HIGH);
				digitalWrite(g, HIGH);
				break;
		case 7:
				digitalWrite(a, HIGH);
				digitalWrite(b, HIGH);
				digitalWrite(c, HIGH);
				digitalWrite(d, LOW);
				digitalWrite(e, LOW);
				digitalWrite(f, LOW);
				digitalWrite(g, LOW);
				break;
		case 8:
				digitalWrite(a, HIGH);
				digitalWrite(b, HIGH);
				digitalWrite(c, HIGH);
				digitalWrite(d, HIGH);
				digitalWrite(e, HIGH);
				digitalWrite(f, HIGH);
				digitalWrite(g, HIGH);
				break;
		case 9:
				digitalWrite(a, HIGH);
				digitalWrite(b, HIGH);
				digitalWrite(c, HIGH);
				digitalWrite(d, LOW);
				digitalWrite(e, LOW);
				digitalWrite(f, HIGH);
				digitalWrite(g, HIGH);
				break;

		default:
				digitalWrite(a, HIGH);
				digitalWrite(b, HIGH);
				digitalWrite(c, HIGH);
				digitalWrite(d, HIGH);
				digitalWrite(e, HIGH);
				digitalWrite(f, HIGH);
				digitalWrite(g, LOW);
				break;
		}
	}