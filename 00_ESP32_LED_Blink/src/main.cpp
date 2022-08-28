#include <Arduino.h>

#define LED 2   // PINO PARA O LED DA PLACA 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH);
  Serial.println("LED IS ON");
  delay(200);

  digitalWrite(LED, LOW);
  Serial.println("LED IS OFF");
  delay(200);
}