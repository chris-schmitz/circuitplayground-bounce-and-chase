#ifndef BOUNCER_H
#define BOUNCER_H

#include <Adafruit_CircuitPlayground.h>

class Bouncer
{
  public:
    Bouncer(int interval = 1000);

    // methods
    void bounce(long currentMillis);

    private:
      // member variables
      unsigned long _rangeBottom = 0;
      unsigned long _currentPointInRange = 0;
      long _rangeTop = 1400;
      long _trigger_0 = _rangeTop * 0;
      long _trigger_1 = _rangeTop * .10;
      long _trigger_2 = _rangeTop * .20;
      long _trigger_3 = _rangeTop * .30;
      long _trigger_4 = _rangeTop * .40;
      long _trigger_5 = _rangeTop * .50;
      long _trigger_6 = _rangeTop * .60;
      long _trigger_7 = _rangeTop * .70;
      long _trigger_8 = _rangeTop * .80;
      long _trigger_9 = _rangeTop * .90;
};

#endif