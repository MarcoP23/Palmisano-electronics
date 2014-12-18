//Marco Palmisano 
// Piezo Music

// Define Speaker Port:
int speaker = 11;

//Variable rhythm:

int tempo = 1000;
int w = tempo;
int h = w/2;
int q = h/2; 
int e = q/2;
int s = e/2; 

// Pitches of C

int c4 = 261;
int d4 = 293;
int e4 = 330;
int f4 = 350; 
int g4 = 392;
int an4 = 440; 
int b4 = 494;
int c5 = 523; 

void scaleUP () {
 int scale [] = {c4, d4, e4, f4, g4, an4, b4, c5};

  for (int n = 0; n < 8; n++ ) {
   tone(speaker, scale[n], q);
  delay(q);
  } 
}
void twinkle1() {
  int lineANotes [] = {c4, c4, g4, an4, an4, g4, f4, f4, e4, e4, d4, c4};
  int lineARhythm [] = {q, q, q, q, q, q, h, q, q, q, q, q, h};
 
 for (int n = 0; n < 14; n++) {
  tone(speaker, lineANotes[n], lineARhythm[n]);
  delay(lineARhythm[n]);
 } 
}
void twinkle2() {
  int lineANotes [] = {g4, g4, f4, f4, e4, e4, d4, g4, g4, f4, f4, e4, e4, d4};
  int lineARhythm [] = {q, q, q, q, q, q, h, q, q, q, q, q, q, h};
  
  for (int n = 0; n < 14; n++) {
  tone(speaker, lineANotes[n], lineARhythm[n]);
  delay(lineARhythm[n]);
  }
} 


void setup() {
  pinMode(speaker, OUTPUT);
  
  
}

void loop() {
  //scaleUP(); 
  twinkle1();
  twinkle2();
  twinkle1();  
}
