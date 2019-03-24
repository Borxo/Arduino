//PWM y ADC_1//
//Autor Borxo Garc�a//

#define Led 5
#define Led1 4 
#define enable 3
#define MotorDerecha 9
#define MotorIzquierda 10 


float Analogico;
float Control;
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
	Control = (1 / (0.072*Analogico + 0.006)) - 0.42;
	Val = map(Control, 4, 20, 0, 255);
	

	Serial.print(Control);
	Serial.print("cm     ");

	Serial.print(Analogico);
	Serial.println("V    ");

	Serial.print(Val);
	Serial.println("V Convertido");
	delay(1000);


	if (Val >= 8)
	{
		analogWrite(enable, Control);
		digitalWrite(Led, HIGH);
		digitalWrite(Led1, LOW);
	}

	else if (Val <=5)
	{
		digitalWrite(Led1, HIGH);
		digitalWrite(Led, LOW);
	}
