#include "NTCTemp.h"
#include <math.h>

NTCTemp::NTCTemp(uint8_t pin,
                 float ntcResistance,
                 float seriesResistance,
                 float betaValue,
                 float nominalTemp,
                 int adcMax) {

  _pin = pin;

  _ntcResistance = ntcResistance;
  _seriesResistance = seriesResistance;

  _betaValue = betaValue;
  _nominalTemp = nominalTemp;

  _adcMax = adcMax;
}

float NTCTemp::getCelsius() {

  int adcValue = analogRead(_pin);

  if (adcValue == 0) {
    return -999;
  }

  float resistance =
      _seriesResistance / ((_adcMax / (float)adcValue) - 1.0);

  float steinhart;

  steinhart = resistance / _ntcResistance;
  steinhart = log(steinhart);
  steinhart /= _betaValue;
  steinhart += 1.0 / (_nominalTemp + 273.15);
  steinhart = 1.0 / steinhart;
  steinhart -= 273.15;

  return steinhart;
}

float NTCTemp::getFahrenheit() {

  float celsius = getCelsius();

  return (celsius * 9.0 / 5.0) + 32.0;
}
