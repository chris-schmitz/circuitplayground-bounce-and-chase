#include <Adafruit_CircuitPlayground.h>

unsigned long rangeBottom = 0;
unsigned long currentPointInRange = 0;
long rangeTop = 1000;
long triggerLED_0 = rangeTop * 0;
long triggerLED_1 = rangeTop * .10;
long triggerLED_2 = rangeTop * .20;
long triggerLED_3 = rangeTop * .30;
long triggerLED_4 = rangeTop * .40;
long triggerLED_5 = rangeTop * .50;
long triggerLED_6 = rangeTop * .60;
long triggerLED_7 = rangeTop * .70;
long triggerLED_8 = rangeTop * .80;
long triggerLED_9 = rangeTop * .90;

unsigned long rangeBottom_RIGHT = 0;
unsigned long currentPointInRange_RIGHT = 0;
long rangeTop_RIGHT = 1800;
long triggerLED_0_RIGHT = rangeTop * 0;
long triggerLED_1_RIGHT = rangeTop * .10;
long triggerLED_2_RIGHT = rangeTop * .20;
long triggerLED_3_RIGHT = rangeTop * .30;
long triggerLED_4_RIGHT = rangeTop * .40;
long triggerLED_5_RIGHT = rangeTop * .50;
long triggerLED_6_RIGHT = rangeTop * .60;
long triggerLED_7_RIGHT = rangeTop * .70;
long triggerLED_8_RIGHT = rangeTop * .80;
long triggerLED_9_RIGHT = rangeTop * .90;

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {
  unsigned long currentMillis = millis();
  chase(currentMillis);
  bounce(currentMillis);
}

void chase(long currentMillis) {

  currentPointInRange = currentMillis - rangeBottom;

  if (currentPointInRange >= rangeTop) {
    // CircuitPlayground.clearPixels();
    Serial.println("===================");
    rangeBottom = currentMillis;
    return;
  }

  // ------------------------------------------ //

  if (currentPointInRange <= triggerLED_0) {
    CircuitPlayground.setPixelColor(0, 0, 255, 0);
    Serial.println("LED 0");
    return;
  }

  if (currentPointInRange <= triggerLED_1) {
    CircuitPlayground.setPixelColor(1, 0, 255, 0);
    Serial.println("LED 1");
    return;
  }

  if (currentPointInRange <= triggerLED_2) {
    CircuitPlayground.setPixelColor(2, 0, 255, 0);
    Serial.println("LED 2");
    return;
  }

  if (currentPointInRange <= triggerLED_3) {
    CircuitPlayground.setPixelColor(3, 0, 255, 0);
    Serial.println("LED 3");
    return;
  }

  if (currentPointInRange <= triggerLED_4) {
    CircuitPlayground.setPixelColor(4, 0, 255, 0);
    Serial.println("LED 4");
    return;
  }

  if (currentPointInRange <= triggerLED_5) {
    CircuitPlayground.setPixelColor(0, 0, 0, 0);
    Serial.println("LED 5");
    return;
  }

  if (currentPointInRange <= triggerLED_6) {
    CircuitPlayground.setPixelColor(1, 0, 0, 0);
    Serial.println("LED 6");
    return;
  }

  if (currentPointInRange <= triggerLED_7) {
    CircuitPlayground.setPixelColor(2, 0, 0, 0);
    Serial.println("LED 7");
    return;
  }

  if (currentPointInRange <= triggerLED_8) {
    CircuitPlayground.setPixelColor(3, 0, 0, 0);
    Serial.println("LED 8");
    return;
  }

  if (currentPointInRange <= triggerLED_9) {
    CircuitPlayground.setPixelColor(4, 0, 0, 0);

    Serial.println("LED 9");
    return;
  }
}

void bounce(long currentMillis) {

  currentPointInRange_RIGHT = currentMillis - rangeBottom_RIGHT;


  // ------------------------------------------ //
  if (currentPointInRange_RIGHT >= rangeTop_RIGHT) {
    // CircuitPlayground.clearPixels();
    // CircuitPlayground.setPixelColor(6, 0, 0, 0);

    Serial.println("RIGHT LED OFF");
    rangeBottom_RIGHT = currentMillis;
    return;
  }


  if (currentPointInRange_RIGHT <= triggerLED_0_RIGHT) {
    CircuitPlayground.setPixelColor(6, 0, 255, 0);
    Serial.println("Right LED ON");
    return;
  }

  if (currentPointInRange_RIGHT <= triggerLED_7_RIGHT) {
    CircuitPlayground.setPixelColor(6, 0, 0, 0);
    Serial.println("LED 0");
    return;
  }

  if (currentPointInRange_RIGHT <= triggerLED_9_RIGHT) {
    CircuitPlayground.setPixelColor(6, 0, 255, 0);
    Serial.println("Right LED ON");
    return;
  }


  // if (currentPointInRange_RIGHT <= triggerLED_6_RIGHT) {
  //   CircuitPlayground.setPixelColor(6, 0, 255, 0);
  //   Serial.println("LED 0");
  //   return;
  // }
}