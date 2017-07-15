#include <Adafruit_CircuitPlayground.h>
#include "Chaser.h"


// Break this state machine logic out into a class and instantiate two instances
// instead of duplicating it like this.

unsigned long rangeBottom_B= 0;
unsigned long currentPointInRange_B = 0;
long rangeTop_B = 1400;
long trigger_0_B = rangeTop_B * 0;
long trigger_1_B = rangeTop_B * .10;
long trigger_2_B = rangeTop_B * .20;
long trigger_3_B = rangeTop_B * .30;
long trigger_4_B = rangeTop_B * .40;
long trigger_5_B = rangeTop_B * .50;
long trigger_6_B = rangeTop_B * .60;
long trigger_7_B = rangeTop_B * .70;
long trigger_8_B = rangeTop_B * .80;
long trigger_9_B = rangeTop_B * .90;


#define ORANGE 0xFF6319
#define BLUE 0x3857FB
#define DARKBLUE 0x251F68
#define OFFWHITE 0xE0DFD5
#define GREEN 0xB3DB7F
#define OFF 0x000000

Chaser chaser(2000);

void setup() {
  // Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {
  unsigned long currentMillis = millis();
  chaser.chase(currentMillis);
  bounce(currentMillis);
}



void bounce(long currentMillis) {

  currentPointInRange_B = currentMillis - rangeBottom_B;

  // Trigger new range bottom
  if (currentPointInRange_B >= rangeTop_B) {

    rangeBottom_B = currentMillis;
    return;
  }

  // ------------------------------------------ //
  if (currentPointInRange_B <= trigger_0_B) {
    CircuitPlayground.setPixelColor(5, ORANGE);
    return;
  }

  if (currentPointInRange_B <= trigger_1_B) {
    CircuitPlayground.setPixelColor(5, OFF);
    CircuitPlayground.setPixelColor(6, ORANGE);
    return;
  }

  if (currentPointInRange_B <= trigger_2_B) {
    CircuitPlayground.setPixelColor(6, OFF);
    CircuitPlayground.setPixelColor(7, ORANGE);
    return;
  }

  if (currentPointInRange_B <= trigger_3_B) {
    CircuitPlayground.setPixelColor(7, OFF);
    CircuitPlayground.setPixelColor(8, ORANGE);
    return;
  }

  if (currentPointInRange_B <= trigger_4_B) {
    CircuitPlayground.setPixelColor(8, OFF);
    CircuitPlayground.setPixelColor(9, ORANGE);
    return;
  }

  if (currentPointInRange_B <= trigger_5_B) {
    CircuitPlayground.setPixelColor(9, OFF);
    CircuitPlayground.setPixelColor(8, ORANGE);
    return;
  }

  if (currentPointInRange_B <= trigger_6_B) {
    CircuitPlayground.setPixelColor(8, OFF);
    CircuitPlayground.setPixelColor(7, ORANGE);
    return;
  }

  if (currentPointInRange_B <= trigger_7_B) {
    CircuitPlayground.setPixelColor(7, OFF);
    CircuitPlayground.setPixelColor(6, ORANGE);
    return;
  }

  if (currentPointInRange_B <= trigger_8_B) {
    CircuitPlayground.setPixelColor(6, OFF);
    CircuitPlayground.setPixelColor(5, ORANGE);
    return;
  }

  if (currentPointInRange_B <= trigger_9_B) {
    CircuitPlayground.setPixelColor(5, BLUE);
    return;
  }

}