# PUSH-BUTTON-COUNTER

**COMPANY**: CODTECH IT SOLUTIONS

**NAME**: VIGNESHWARI K

**INTERN ID**:CT04DH911

**DOMAIN**: EMBEDDED SYSTEMS

**DURATION**: 4 WEEKS

**MENTOR**: NEELA SANTHOSH

DESCRIPTION:
This internship project focuses on designing a digital counter system using an Arduino Uno and a 16x2 LCD module, where the count value increments with each press of a push button. The system offers a real-time visual display of the count on the LCD screen.
The hardware configuration includes:
A push button connected to digital pin 7 on the Arduino.
A 10kΩ resistor acting as a pull-down to ensure signal stability.
A 10kΩ potentiometer connected to the LCD's contrast control pin to adjust character visibility.
A 16x2 LCD display interfaced in 4-bit mode using digital pins 2, 3, 4, 5 for data and pins 11 and 12 for control (RS and EN).
The Arduino reads the button input, increments the count upon each valid press, and updates the LCD with the latest count.
CODE DESCRIPTION:
The code starts by including the LiquidCrystal library to facilitate communication with the LCD. The LCD is initialized with the correct pin configuration corresponding to its data and control lines.
The push button is monitored using digital pin 7, with a pull-down resistor ensuring a LOW signal by default. When the button is pressed, the pin reads HIGH. A debouncing delay (e.g., 50 ms) is used to prevent false triggering due to mechanical bouncing.
Each valid button press is detected by comparing the current and previous states of the button. When a valid transition from LOW to HIGH occurs, the counter is incremented. The LCD is cleared before each update to prevent character overlapping, and the updated count is displayed using lcd.print().
APPLICATION:
This push-button counter system provides a simple and effective method to record discrete user interactions or events. Its functionality is highly relevant in the following use cases:
Entry/Exit Counters in public places (e.g., libraries, shops).
Voting/Tally Counters in events or classrooms.
Machine Cycle Monitoring in basic industrial setups.
Experiment Event Logging in laboratories or academic projects.
This project serves as an ideal introductory-level embedded systems task, combining hardware and software integration, input/output device interfacing, real-time display handling, and signal debouncing. It strengthens the understanding of digital electronics, Arduino programming, and embedded control system design.

output

