// Marco Palmisano
// Lab 01

// Functions
//--------------------------------------------------------------------------------------
void function1() {
  Serial.println("I am an Arduino and I communicate at 9600 Baud rate.  Ports 0 and 1 are used for serial communication. Serial communication works well for debugging and monitoring sensor values during the execution of a program");
  
}
//-----------------------------------------------------------------------------------
void printhappy(String name) { //Example function made in class
  String result = "Happy Birthday" + name;
  Serial.println(result);
}
//--------------------------------------------------------------------------------- 
 float computeArea(float wid, float hei) { //Example function made in class {
   float area = wid*hei;
   return area; 
 } 
//---------------------------------------------------------------------------------
void function2a(int x, int y) {
  float result = (x/2)*y;
  Serial.println(result);
  
}
//---------------------------------------------------------------------------
void function2b(int x, int y) {
  float result = (2*x + x*y);
  Serial.println(result);
}
//------------------------------------------------------------------------------------
void function3() {
  Serial.println("My favorite movie characters are:  ");
  String gospels [] = {"Han Solo", "Luke Skywalker", "Shrek", "Donkey", "Ginger Bread Man"};
  for (int p = 4; p > -1; p--) {
    Serial.println(gospels[p]);
  }
}
//------------------------------------------------------------------------------------
void function4() {
  int pins [] = {1, 2, 3 , 4, 5, 6, 7, 8};
  
  for (int g = 0; g < 8; g++) {
    Serial.println(pins[g]);
  }
  for (int a = 7; a > -1; a--) {
    Serial.println(pins[a]);
  }
  for (int f = 1; f < 8; f+=2){
    Serial.println(pins[f]);
  }
  for (int c = 0; c < 8; c+=2) {
    Serial.println(pins[c]);
  }
  for (int k = 6; k > -1; k-=2) {
    Serial.println(pins[k]);
  }
  for (int j = 7; j > 0; j-=2) {
    Serial.println(pins[j]);
  }
  
}
//-----------------------------------------------------
void function5() {
  String pins [] = {"C", "D", "E", "F", "G", "A", "B", "C"};
  
  for (int w = 0; w < 8; w++) {
    Serial.println(pins[w]);
  }
  for (int r = 7; r > -1; r--) {
    Serial.println(pins[r]);
  }
}
//------------------------------------------------------
void printFibo(int n) {
  int fibo = 0;
  int prev = 0;
  int cur = 1;
  
  for (int i = 0; i < n; i++) {
    fibo = prev + cur;
    Serial.println(fibo);
    prev=cur;
    cur=fibo;
  }
  
}
//--------------------------------------------------
float findproduct (int a, int b) {
  float c = (a*6.02)*1000/b; 
  return c; 
}
//--------------------------------------------------
// Wild Numbers
void function8() {
  for (int i = 0; i < 100000; i++) {
    Serial.println(i*10);
  }
}
// A: I expect the numbers in the serial port to be -1-99999 
// B: It goes from -1 - 99999 at a rapid pace with an increase of 1 each time it moves up a #.
// C. This happens becuase its an (i++) which means it moves up by 1 each and can be changed by maybe changing the ( i < #) 
//----------------------------------------------------
void function9() {
  int sum = 0;
  for(int i = 0; i < 1000; i++) {
    if((i%3==0) || (i%5==0)) {
      sum + i;
    }
    }  
  Serial.println(sum);
  }
//-----------------------------------------------------
void function10() {
  String words [] = {"soccer", "lemonade", "teacher", "house", "Arduino"};
  String result = "";
  for (int i = 0; i < 5; i++) {
    int index = (int)random(5); 
    result += words[index] + " "; 
  }
    Serial.println(result); 
    
  
}
void setup() {
  Serial.begin(9600); //Start serial communication
  Serial.println("Hello Marco");
  Serial.println(findproduct(35, 16)); 
 
  function1();  
  function2a(120, 512);
  function2b(97, 32); 
  function3();
  function4(); 
  function5();
  printFibo(10);
  //function8(); 
  function9; 
  function10(); 
  
  
} //end setup

void loop() {
  
  
} //end loop
