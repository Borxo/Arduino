
#define Led 5
#define Led1 4 
#define enable 3
#define MotorDerecha 9
#define MotorIzquierda 10 
#define enable 3


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
    float Velocidad = (5.0/1024)*analogRead(A0);
    float Control=(1/(0.072*Velocidad+0.006))-0.42;
    analogWrite(enable, Control);

    Serial.print(Control);
    Serial.print("cm     ");
    Serial.print(Velocidad);
    Serial.println("V");
    delay(1000);

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
