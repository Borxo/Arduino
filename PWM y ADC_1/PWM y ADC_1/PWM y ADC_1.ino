//PWM y ADC_1//
//Autor Borxo García//
//Licencia de Creative Commons Reconocimiento-NoComercial 4.0 Internacional.//

#define Led 5
#define Led1 4 
#define enable 3
#define MotorDerecha 9
#define MotorIzquierda 10 


float Analogico;
float Distancia;
float Val;


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
	Analogico = (5.0 / 1024)*analogRead(A0);
	Distancia = (1 / (0.072*Analogico + 0.006)) - 0.42;
	Val = map(Distancia, 6, 20, 0, 255);


	Serial.print(Distancia);
	Serial.print("cm     ");

	Serial.print(Analogico);
	Serial.print("V    ");

	Serial.print(Val);
	Serial.println("Rango");
	delay(1000);


	if (Distancia >= 10)
	{
		analogWrite(enable, Val);
		digitalWrite(Led, HIGH);
		digitalWrite(Led1, LOW);
	}

	else if (Distancia < 10)
	{   
		Val = 0,
		analogWrite(enable, Val);
		digitalWrite(Led1, HIGH);
		digitalWrite(Led, LOW);
	}
}
