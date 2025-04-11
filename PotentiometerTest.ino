#include <Wire.h>
int Sawmill = 4;
const int roostLED1 = 5;
int sawStatus = 0;

void setup() {
   Wire.begin(); // wake up I2C bus
  Wire.beginTransmission(0x20);
  Wire.write(0x00); // IODIRA register
  Wire.write(0x00); // set entire PORT A as output
  Wire.endTransmission();
  pinMode(roostLED1, OUTPUT);

}

void loop() {

  sawStatus = digitalRead(Sawmill);

  if(sawStatus == LOW)
  {

    digitalWrite(roostLED1, HIGH);

  }
  else if(sawStatus = HIGH)
  {
   digitalWrite(roostLED1,LOW);
  }
}


