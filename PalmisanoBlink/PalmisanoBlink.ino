//Marco Palmisano 
// LED Blink Program

//My Functions

void blink() {
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(9, LOW);
  delay(1000);
} 

// setup function
void setup() {
  pinMode(9, OUTPUT);
}

// loop function
void loop() {
  blink();
  
}
