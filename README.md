# NTCTemp Library

Universal NTC thermistor temperature library for Arduino-compatible microcontrollers.

---

# Status

![Status](https://img.shields.io/badge/Status-Active-success)

# Version

![Version](https://img.shields.io/badge/Version-1.0.0-blue)

# License

![License](https://img.shields.io/badge/License-MIT-green)

---

# Supported Boards

- Arduino UNO
- Arduino Nano
- Arduino Mega
- Arduino Leonardo
- ESP32
- ESP8266
- Raspberry Pi Pico / RP2040
- STM32
- NRF52
- SAMD Boards
- ATtiny Boards
- Other Arduino-compatible microcontrollers

---

# Features

- Read Celsius temperature
- Read Fahrenheit temperature
- Custom Beta coefficient support
- Custom nominal temperature support
- Custom ADC resolution support
- Lightweight and fast
- Easy to use

---

# Installation

1. Download the library ZIP
2. Extract the ZIP file
3. Move the `NTCTemp` folder to:

```text
Documents/Arduino/libraries/
```

4. Restart Arduino IDE

---

# Basic Example

```cpp
#include <NTCTemp.h>

// NTCTemp(pin, ntcResistance, seriesResistance)
NTCTemp ntc(34, 10000, 10000);

void setup() {

  Serial.begin(115200);
}

void loop() {

  Serial.print("Celsius: ");
  Serial.println(ntc.getCelsius());

  Serial.print("Fahrenheit: ");
  Serial.println(ntc.getFahrenheit());

  delay(1000);
}
```

---

# Advanced Example

```cpp
#include <NTCTemp.h>

// NTCTemp(
//   pin,
//   ntcResistance,
//   seriesResistance,
//   betaValue,
//   nominalTemp,
//   adcMax
// )

NTCTemp ntc(
  34,
  10000,
  10000,
  3950,
  25.0,
  4095
);

void setup() {

  Serial.begin(115200);
}

void loop() {

  Serial.print("Celsius: ");
  Serial.println(ntc.getCelsius());

  Serial.print("Fahrenheit: ");
  Serial.println(ntc.getFahrenheit());

  delay(1000);
}
```

---

# Constructor

```cpp
NTCTemp(
  pin,
  ntcResistance,
  seriesResistance,
  betaValue,
  nominalTemp,
  adcMax
);
```

---

# Circuit Diagram

```text
                 3.3V 
                  |
                  |
               [ NTC ]
                  |
                  +-------> Analog Pin
                  |
             [ Resistor ]
                  |
                  |
                 GND
```

---

# Wiring

| Component | Connection |
|-----------|-------------|
| NTC one side | VCC |
| NTC other side | Analog pin |
| Resistor one side | Analog pin |
| Resistor other side | GND |

Creates a voltage divider circuit.

---

# Default Values

| Parameter | Default |
|-----------|----------|
| Beta Coefficient | 3950 |
| Nominal Temperature | 25°C |
| ADC Max Value | 4095 |

---

# Library Structure

```text
NTCTemp/
│
├── src/
│   ├── NTCTemp.h
│   └── NTCTemp.cpp
│
├── examples/
│   ├── TempRead/
│   │   └── TempRead.ino
│   │
│   └── CustomTemp/
│       └── CustomTemp.ino
│
├── library.properties
├── README.md
├── LICENSE
└── keywords.txt
```

---

# License

MIT License

---

# Author

Abdul Rafeul Mallick

GitHub:
https://github.com/Rafeul1997
