#include <Keyboard.h>

const int buttonPin1 = 2;  // Pin number for button 1
const int buttonPin2 = 3;  // Pin number for button 2
const int buttonPin3 = 4;  // Pin number for button 3
const int buttonPin4 = 5;  // Pin number for button 4

void setup() {
  // Set up button pins as inputs
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);
  pinMode(buttonPin4, INPUT_PULLUP);

  // Start the keyboard
  Keyboard.begin();
}

void loop() {
  // Check if button 1 is pressed
  if (digitalRead(buttonPin1) == LOW) {
    // Type your email address
    Keyboard.print("your.email@example.com");
    delay(500);  // Debounce delay
  }

  // Check if button 2 is pressed
  if (digitalRead(buttonPin2) == LOW) {
    // Perform action for button 2
    // Replace the following line with your desired action
    Keyboard.print("Example");  // Example(change as needed)
    delay(500);  // Debounce delay
  }

  // Check if button 3 is pressed
  if (digitalRead(buttonPin3) == LOW) {
    // Perform action for button 3
    // Replace the following line with your desired action
    Keyboard.print("Example");  // Example(change as needed)
    delay(500);  // Debounce delay
  }

  // Check if button 4 is pressed
  if (digitalRead(buttonPin4) == LOW) {
    // Perform action for button 4
    // Replace the following line with your desired action
    Keyboard.print("Example");  // Example(change as needed)
    delay(500);  // Debounce delay
  }
}
