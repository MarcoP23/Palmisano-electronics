// test of Arduino
//Blink by Marco Palmisano

// Pin 13 has onboard LED 
int led = 13;

// Setup runs once when board is activiated
void setup() {
  // pin Pin 13 as output
  pinMode(led, OUTPUT); 
}

// Loop function runs repeatedly while board is on
void loop() {
  digitWrite(led, HIGH);
  delay(1000);
  digitWrite(led, LOW)
  delay(1000);
}
