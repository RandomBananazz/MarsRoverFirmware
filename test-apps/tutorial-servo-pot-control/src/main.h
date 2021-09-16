#ifndef MARSROVERFIRMWARE_MAIN_H
#define MARSROVERFIRMWARE_MAIN_H
#include "mbed.h"
#endif  // MARSROVERFIRMWARE_MAIN_H

AnalogIn potVoltageIn(PA_0);
PwmOut servoPwmOut(PA_1);

int main() {

  servoPwmOut.period_ms(20);

  while(1) {
    servoPwmOut.pulsewidth((1 + potVoltageIn.read()/3.3) / 1000);
  }
}