#include <NTCTemp.h>

// Basic constructor:
// NTCTemp(pin, ntcResistance, seriesResistance)

// Create NTC object
NTCTemp ntc(34, 10000, 10000);

void setup() {

  // Start serial communication
  Serial.begin(115200);

  // Print startup message
  Serial.println("NTC Temperature Reading");
}

void loop() {

  // Read Celsius temperature
  float celsius = ntc.getCelsius();

  // Read Fahrenheit temperature
  float fahrenheit = ntc.getFahrenheit();

  // Print Celsius value
  Serial.print("Temperature: ");
  Serial.print(celsius);
  Serial.println(" °C");

  // Print Fahrenheit value
  Serial.print("Temperature: ");
  Serial.print(fahrenheit);
  Serial.println(" °F");

  // Print empty line
  Serial.println();

  // Wait 1 second
  delay(1000);
}
