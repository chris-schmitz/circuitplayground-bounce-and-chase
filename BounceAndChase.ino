#include <Adafruit_CircuitPlayground.h>
#include "Chaser.h"
#include "Bouncer.h"

Chaser chaser(3000);
Bouncer bouncer(1300);

void setup() {
  // Serial.begin(9600);
  CircuitPlayground.begin();

  OCR0A = 0xAF;
  TIMSK0 |= _BV(OCIE0A);
}

SIGNAL(TIMER0_COMPA_vect) {
  unsigned long currentMillis = millis();

  if (CircuitPlayground.slideSwitch()) {
    chaser.chase(currentMillis);
    bouncer.bounce(currentMillis);
  } else {
    CircuitPlayground.clearPixels();
  }
}

void loop() {
  if(CircuitPlayground.leftButton()){
    CircuitPlayground.playTone(131, 10);
  }
  if(CircuitPlayground.rightButton()){
    CircuitPlayground.playTone(262, 10);
  }
}