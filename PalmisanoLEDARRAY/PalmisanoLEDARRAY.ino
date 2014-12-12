// Classwork: LED Array Assessment
// Marco Palmisano
// All work here is honestly obtained and is my own. 

//Objects in Program
int pins [] = {2, 3, 4, 5, 6, 7, 8, 9};

void patternled() {
  for (int f = 1; f < 10; f++) {
    digitalWrite(pins[f], HIGH); 
  }
    
  for (int h = 8; h > -1; h--) {
    digitalWrite(pins[h], HIGH); 
  }
} 

// digitalwrite(pins[i], HIGH);

// Set up program
void setup() {
  patternled(); 
  
}


// Loop for program
void loop() {
  
} 
