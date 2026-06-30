#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);
unsigned long previous = 0;
int interval = 1000;
int counter = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("OVRSR Engine started");
}

void loop() {
  // put your main code here, to run repeatedly:
  if (millis() - previous >= interval) {
    previous = millis();
    Serial.println("one second");
  }
  Serial.println("Running...");
  Serial.print("Counter: ");
  Serial.println(counter++);
  counter;
  delay(1000);
}
