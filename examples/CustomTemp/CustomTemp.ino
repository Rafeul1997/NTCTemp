#include <NTCTemp.h>

// Advanced constructor:
// NTCTemp(pin, ntcResistance, seriesResistance,
//         betaValue, nominalTemp, adcMax)

// Create custom NTC object
NTCTemp ntc(
  34,     // Analog pin
  10000,  // NTC resistance
  10000,  // Series resistor
  3950,   // Beta coefficient
  25.0,   // Nominal temperature
  4095    // ADC max value
);

void setup() {

  // Start serial communication
  Serial.begin(115200);

  // Print startup message
  Serial.println("Custom NTC Temperature Reading");
}

void loop() {

  // Read Celsius temperature
  float celsius = ntc.getCelsius();

  // Read Fahrenheit temperature
  float fahrenheit = ntc.getFahrenheit();

  // Print Celsius value
  Serial.print("Celsius: ");
  Serial.print(celsius);
  Serial.println(" °C");

  // Print Fahrenheit value
  Serial.print("Fahrenheit: ");
  Serial.println(fahrenheit);

  // Print empty line
  Serial.println();

  // Wait 1 second
  delay(1000);
}
