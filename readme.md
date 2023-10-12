# 8-Bit Binary Counter with Arduino
This Arduino project implements an 8-bit binary counter using LEDs to display the binary representation of a decimal count from 0 to 255.
![](https://i.ibb.co/6g9chGt/8-bit-counter-diagram-bb.png)
## Table of Contents

- [Overview](#overview)
- [Hardware Requirements](#hardware-requirements)
- [Arduino Sketch](#arduino-sketch)
- [Usage](#usage)
- [License](#license)

## Overview

This project creates a simple binary counter using Arduino, where eight LEDs represent the eight bits of the binary number. As the count increases from 0 to 255, the LEDs will display the corresponding binary value.

## Hardware Requirements

To build this project, you will need the following components:

- 1 Arduino board (e.g., Arduino Uno)
- 8 LEDs
- 8 current-limiting resistors (usually 220-330 Ohms)
- Jumper wires

## Arduino Sketch

The Arduino sketch (`binary_counter.ino`) provided in this repository is responsible for counting from 0 to 255 in binary and controlling the LEDs accordingly. The main parts of the sketch include:

- Initializing the LED pins in the `setup()` function.
- Counting and converting the decimal number to binary using the `toBinary()` function.
- Updating the LED states in the `loop()` function.

## Usage

1. Clone this repository to your local machine:

   ```bash
   git clone https://github.com/your-username/8-bit-binary-counter.git

2. Install the LEDs according to the wiring diagram above.

3. Connect the Arduino to your machine and upload the code.

4. You can start the count from left to right or right to left depending on the `lightarr[]` elements position.

## License

This project is licensed under the [MIT License](LICENSE) - see the [LICENSE](LICENSE) file for details.