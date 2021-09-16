//
// Created by jason on 2021-09-15.
//
#include "mbed.h"

AnalogIn potVoltageIn(PA_0);
PwmOut servoPwmOut(PA_1);

int main() {

  servoPwmOut.period_ms(20);

  while(1) {
    servoPwmOut.pulsewidth((1 + potVoltageIn.read()/3.3) / 1000);
  }
}