#include <Wire.h>
int coverMice = 8;
const int roostLED1 = 5;

void setup() {
   Wire.begin(); // wake up I2C bus
  Wire.beginTransmission(0x20);
  Wire.write(0x00); // IODIRA register
  Wire.write(0x00); // set entire PORT A as output
  Wire.endTransmission();
  pinMode(coverMice,INPUT);
  pinMode(roostLED1, OUTPUT);

}

void loop() {

  if(digitalRead(coverMice) == HIGH)
  {
    digitalWrite(roostLED1, HIGH);

  }
  else{
    digitalWrite(roostLED1, LOW);
  }
}

