/*
  LED Blink Test for Arduino Uno R4 Minima
  
  Blinks the onboard LED with 0.5 second intervals.
  
  This code is compatible with Arduino Uno R4 Minima and uses the built-in LED.
*/

void setup() {
  // Initialize the built-in LED pin as an output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(LED_BUILTIN, HIGH);
  
  // Wait for 500 milliseconds (0.5 seconds)
  delay(500);
  
  // Turn the LED off
  digitalWrite(LED_BUILTIN, LOW);
  
  // Wait for 500 milliseconds (0.5 seconds)
  delay(500);
}