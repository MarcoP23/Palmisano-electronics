//Marco Palmisano
// Mr.Michaud
//All work here is honetly obtained and is my own.

//IMPORTANT: You informed me that i could turn it in as is because of technical errors etc, and recieve no point penalty. 

/*************************************************
/* Public Constants
/*************************************************/
//Notes Defined
int c = 131;

int d = 147;

int e90 = 165;
int f = 175;

int g = 196;

int a = 220;

int b = 247;

int g4 = 392;

int d5 = 587;

int e5 = 659;

int r   =  0;
//---------------------------------------------------------------
int inputPin = 2; //Port the touch sensor is connected to
int val = 0; //Signal it gives out 

//------------------------------------------------
int speaker = 11; //What port the wires will be plugged in to.

int tempo = 1000;
int w = tempo;
int h = w/2;
int q = h/2;
int e = q/2;
int s = e/2;
//--------------------------------------------------

void mario() { //Combination of notes i find intriging
  int lineANotes [] = {d5, r, r, g4, r, r, e5, r, r, a, r, b, r, b, a, r, g4, e5, g4, a, r, f, g4, r, e5, r, c, d, b, r, r};
  int lineARhythm [] = {q, q, q, q, q, q, q, q, q, q, q, q, q, q, q, q, h, h, h, q, q, q, q, q, q, q, q, q, q, q, q};
  
  for(int n = 0; n < 14; n++){
    val = digitalRead(inputPin);
    
    if (val == LOW) {
      
    
    tone(speaker, lineANotes[n], lineARhythm[n]);
    delay(.3*lineARhythm[n]);
    }
  }
}
//-----------------------------------------------------------------



void setup() {
  Serial.begin(9600);
   pinMode(speaker, OUTPUT);
}

void loop() { // Will loop indefinitly. 
  val = digitalRead(inputPin);
  if (val == HIGH) {
    Serial.println("High");
  }
  if (val == LOW) {
    Serial.println("LOW");
  }
  mario();
  
} 
  
