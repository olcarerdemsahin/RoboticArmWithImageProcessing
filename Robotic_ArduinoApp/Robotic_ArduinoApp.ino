#include <Servo.h>

Servo M1;
Servo M2;

int M1_pin = 2;
int M2_pin = 3;
int lazerPin = 13;

int Th1, Th2, tmp;

void setup() {
  
  Serial.begin(9600);
  pinMode(lazerPin,OUTPUT);

  M1.attach(M1_pin);
  M2.attach(M2_pin);

  pinMode(lazerPin, OUTPUT);
  digitalWrite(lazerPin, HIGH);

}

void loop() {

  if(Serial.available()>=2)
  {
    Th1 = Serial.read();
    Th2 = Serial.read();

    while(Serial.available()) tmp = Serial.read();    
    
        M1.write(Th1);
        M2.write(Th2);

  }
}
