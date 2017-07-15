#include "Bouncer.h"

#define ORANGE 0xFF6319
#define BLUE 0x3857FB
#define DARKBLUE 0x251F68
#define OFFWHITE 0xE0DFD5
#define GREEN 0xB3DB7F
#define OFF 0x000000

Bouncer::Bouncer(int interval) {
  _rangeTop = interval;
}

void Bouncer::bounce(long currentMillis) {

  _currentPointInRange = currentMillis - _rangeBottom;

  // Trigger new range bottom
  if (_currentPointInRange >= _rangeTop) {

    _rangeBottom = currentMillis;
    return;
  }

  // ------------------------------------------ //
  if (_currentPointInRange <= _trigger_0) {
    CircuitPlayground.setPixelColor(5, ORANGE);

    return;
  }

  if (_currentPointInRange <= _trigger_1) {
    CircuitPlayground.setPixelColor(5, OFF);
    CircuitPlayground.setPixelColor(6, ORANGE);
    return;
  }

  if (_currentPointInRange <= _trigger_2) {
    CircuitPlayground.setPixelColor(6, OFF);
    CircuitPlayground.setPixelColor(7, ORANGE);
    return;
  }

  if (_currentPointInRange <= _trigger_3) {
    CircuitPlayground.setPixelColor(7, OFF);
    CircuitPlayground.setPixelColor(8, ORANGE);
    return;
  }

  if (_currentPointInRange <= _trigger_4) {
    CircuitPlayground.setPixelColor(8, OFF);
    CircuitPlayground.setPixelColor(9, ORANGE);
    if (CircuitPlayground.slideSwitch()) {
      CircuitPlayground.playTone(262, 100, false);
    }
    return;
  }

  if (_currentPointInRange <= _trigger_5) {
    CircuitPlayground.setPixelColor(9, OFF);
    CircuitPlayground.setPixelColor(8, ORANGE);
    return;
  }

  if (_currentPointInRange <= _trigger_6) {
    CircuitPlayground.setPixelColor(8, OFF);
    CircuitPlayground.setPixelColor(7, ORANGE);
    return;
  }

  if (_currentPointInRange <= _trigger_7) {
    CircuitPlayground.setPixelColor(7, OFF);
    CircuitPlayground.setPixelColor(6, ORANGE);
    return;
  }

  if (_currentPointInRange <= _trigger_8) {
    CircuitPlayground.setPixelColor(6, OFF);
    CircuitPlayground.setPixelColor(5, ORANGE);
    return;
  }

  if (_currentPointInRange <= _trigger_9) {
    CircuitPlayground.setPixelColor(5, BLUE);

    if (CircuitPlayground.slideSwitch()) {
      CircuitPlayground.playTone(131, 100, false);
    }
    return;
  }

}
