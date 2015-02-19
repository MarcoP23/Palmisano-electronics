//Marco Palmisano 
//Mr. Michaud 

#include <Servo.h>

Servo A;
Servo B;

  
  
  


void setup() {
  // Attach Servo 
  A.attach(9);
  B.attach(10);
  
  //Rotate Servo at 0 and 180
  A.write(0);
  delay(2000);
  A.write(90);
  
  B.write(0);
  delay(2000);
  B.write(90);
  
  A.write(180);
  B.write(180);
  delay(4000);
  A.write(90);
  B.write(90);
  
  A.write(0);
  B.write(0);
  delay(3000);
  A.write(90);
  B.write(90);
  
  B.write(180);
  delay(1000);
  B.write(90);
  
  A.write(180);
  delay(1000);
  A.write(90); 
}
  
  void loop() {
    Serial.println(analogRead(0));
    
    if(analogRead(0) > 550) {
      A.write(180);
      B.write(0);
    }
    
    if (analogRead(0) < 550) {
      A.write(90);
      B.write(90); 
    }
    
  } 
  
  
  
  
  
  
  
  

