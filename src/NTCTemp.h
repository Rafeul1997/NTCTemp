#ifndef NTCTEMP_H
#define NTCTEMP_H

#include <Arduino.h>

class NTCTemp {

  public:

    NTCTemp(uint8_t pin,
            float ntcResistance,
            float seriesResistance,
            float betaValue = 3950,
            float nominalTemp = 25.0,
            int adcMax = 4095);

    float getCelsius();
    float getFahrenheit();

  private:

    uint8_t _pin;

    float _ntcResistance;
    float _seriesResistance;
    float _betaValue;
    float _nominalTemp;

    int _adcMax;
};

#endif
