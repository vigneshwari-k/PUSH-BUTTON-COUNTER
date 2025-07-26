#include <LiquidCrystal.h>

// initialize the LCD with the pins: (RS, E, D4, D5, D6, D7)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int buttonPin = 7;
int buttonState = 0;
int lastButtonState = 0;
int counter = 0;

unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);  // use internal pull-up resistor
  lcd.begin(16, 2);                  // initialize 16x2 LCD
  lcd.print("Count: ");
  lcd.setCursor(7, 0);
  lcd.print(counter);
}

void loop() {
  int reading = digitalRead(buttonPin);

  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (reading != buttonState) {
      buttonState = reading;

      // Button is pressed (LOW with INPUT_PULLUP)
      if (buttonState == LOW) {
        counter++;
        lcd.setCursor(0, 0);
        lcd.print("Count: ");
        lcd.setCursor(7, 0);
        lcd.print("    ");          // Clear previous count
        lcd.setCursor(7, 0);
        lcd.print(counter);
      }
    }
  }

  lastButtonState = reading;
}
