/*
  LED Blink Test for Arduino Uno R4 Minima
  
  Blinks the onboard LED with 2 second intervals.
  
  This code is compatible with Arduino Uno R4 Minima and uses the built-in LED.
*/

void setup() {
  // Initialize the built-in LED pin as an output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(LED_BUILTIN, HIGH);
  
  // Wait for 2000 milliseconds (2 seconds)
  delay(2000);
  
  // Turn the LED off
  digitalWrite(LED_BUILTIN, LOW);
  
  // Wait for 2000 milliseconds (2 seconds)
  delay(2000);
}