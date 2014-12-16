//Marco Palmisano
//Lab 02
//Mr. Michaud
//Objects in Program
// All work here is honestly obtained and is my own. 
//-------------------------------------------------
int pins [] = {2, 3, 4, 5, 6, 7, 8, 9};
//-------------------------------------------------
// Count up and apply voltage to a singular light all the way to 8, then count back down. 
void patternled() {
  for (int f = -1; f < 8; f++) {
    digitalWrite(pins[f], HIGH);
   delay(250);
    digitalWrite(pins[f], LOW); 
  }
    
  for (int h = 7; h > -1; h--) {
    digitalWrite(pins[h], HIGH); 
    delay(250);
    digitalWrite(pins[h], LOW); 
  }
} 
//-------------------------------------------------
// Skips lights by two, similar to (patternled). 
void guessthepattern() {
  for (int q = 7; q > -1; q-=2) {
    digitalWrite(pins[q], HIGH);
   delay(250); 
    digitalWrite(pins[q], LOW); 
    delay(250); 
  }
    
  for (int s = 7; s > -1; s-=2) {
    digitalWrite(pins[s], HIGH); 
    delay(250);
    digitalWrite(pins[s], LOW); 
    delay(250); 
  }
} 
//-------------------------------------------------
// All 8 lights are given voltage, but actually only 1 at a time, its so fast it appears to be going on at 1. 
void lightinstant() {
  for (int t = 0; t < 8; t++) {
    digitalWrite(pins[t], HIGH);
  }
    delay(500);
  
   for (int t = 0; t < 8; t++) {
    digitalWrite(pins[t], LOW);
   }
    delay(500); 
  
  for (int t = 0; t < 8; t++) {
    digitalWrite(pins[t], HIGH);
  }
    delay(500);
  
   for (int t = 0; t < 8; t++) {
    digitalWrite(pins[t], LOW);
   }
    
    delay(500); 
  for (int t = 0; t < 8; t++) {
    digitalWrite(pins[t], HIGH);
  }
    delay(500);
  
   for (int t = 0; t < 8; t++) {
    digitalWrite(pins[t], LOW);
   }
    delay(500); 
  
}
//-------------------------------------------
// Similar to that on a musical electronic, the lughts all light up  one by one, then light down one by one. 
void lightupdown() {
  for (int j = 0; j < 8; j++) {
    digitalWrite(pins[j], HIGH);
    delay(150); 
  }
 for (int z = 7; z > -1; z--) {
  digitalWrite(pins[z], LOW);
 delay(150);
 }
 for (int j = 0; j < 8; j++) {
    digitalWrite(pins[j], HIGH);
    delay(150); 
  }
 for (int z = 7; z > -1; z--) {
  digitalWrite(pins[z], LOW);
 delay(150);
 }
 for (int j = 0; j < 8; j++) {
    digitalWrite(pins[j], HIGH);
    delay(150); 
  }
 for (int z = 7; z > -1; z--) {
  digitalWrite(pins[z], LOW);
 delay(150);
 }
}
  
// digitalwrite(pins[i], HIGH);

// Set up program
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);   
  
  patternled(); 
  guessthepattern(); 
  lightinstant();
  lightupdown();   
}


// Loop for program
void loop() {
  //patternled();
  //guessthepattern();
  //lightinstant();
  
  
} 
