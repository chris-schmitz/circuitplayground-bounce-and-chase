#include "Chaser.h"

#define ORANGE 0xFF6319
#define BLUE 0x3857FB
#define DARKBLUE 0x251F68
#define OFFWHITE 0xE0DFD5
#define GREEN 0xB3DB7F
#define OFF 0x000000

Chaser::Chaser(int interval) {
  _rangeTop = interval;
}


void Chaser::chase(long currentMillis) {

  _currentPointInRange = currentMillis - _rangeBottom;

  if (_currentPointInRange >= _rangeTop) {
    _rangeBottom = currentMillis;
    return;
  }

  // ------------------------------------------ //

  if (_currentPointInRange <= _trigger_0) {
    CircuitPlayground.setPixelColor(0, DARKBLUE);
    return;
  }

  if (_currentPointInRange <= _trigger_1) {
    CircuitPlayground.setPixelColor(1, DARKBLUE);
    return;
  }

  if (_currentPointInRange <= _trigger_2) {
    CircuitPlayground.setPixelColor(2, DARKBLUE);
    return;
  }

  if (_currentPointInRange <= _trigger_3) {
    CircuitPlayground.setPixelColor(3, DARKBLUE);
    return;
  }

  if (_currentPointInRange <= _trigger_4) {
    CircuitPlayground.setPixelColor(4, DARKBLUE);
    return;
  }

  if (_currentPointInRange <= _trigger_5) {
    CircuitPlayground.setPixelColor(0, OFF);
    return;
  }

  if (_currentPointInRange <= _trigger_6) {
    CircuitPlayground.setPixelColor(1, OFF);
    return;
  }

  if (_currentPointInRange <= _trigger_7) {
    CircuitPlayground.setPixelColor(2, OFF);
    return;
  }

  if (_currentPointInRange <= _trigger_8) {
    CircuitPlayground.setPixelColor(3, OFF);
    return;
  }

  if (_currentPointInRange <= _trigger_9) {
    CircuitPlayground.setPixelColor(4, OFF);
    return;
  }
}