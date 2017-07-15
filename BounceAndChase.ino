#include <Adafruit_CircuitPlayground.h>
#include "Chaser.h"
#include "Bouncer.h"

Chaser chaser(2000);
Bouncer bouncer(1300);

void setup() {
  // Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {
  unsigned long currentMillis = millis();
  chaser.chase(currentMillis);
  bouncer.bounce(currentMillis);
}


