//PWM y ADC//
//Autor Borxo García//

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
    Analogico = (5.0/1024)*analogRead(A0);
    Distancia=(1/(0.072*Analogico+0.006))-0.42;
	Val = map(Distancia, 6, 20, 0, 255);
    analogWrite(enable, Val);

    Serial.print(Distancia);
    Serial.print("cm     ");

    Serial.print(Analogico);
    Serial.print("V    ");
	
	Serial.print(Val);
	Serial.println("Rango");
    delay(1000);


    if (Val >= 10)
      {
        digitalWrite(Led, HIGH);
        digitalWrite(Led1, LOW);
      }

    else if (Val < 10)
      {
        digitalWrite(Led1, HIGH);
        digitalWrite(Led, LOW);
      }
  }
