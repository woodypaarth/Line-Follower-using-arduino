#include <AFMotor.h>

AF_DCMotor motorfl(1, MOTOR12_64KHZ); // create motor #2, 64KHz pwm
AF_DCMotor motorbl(2, MOTOR12_64KHZ);
AF_DCMotor motorbr(3, MOTOR12_64KHZ);
AF_DCMotor motorfr(4, MOTOR12_64KHZ);
void setup() {
  
  
  motorfl.setSpeed(200);
  motorfr.setSpeed(200); 
  motorbl.setSpeed(200); 
  motorbr.setSpeed(200);      // set the speed to 200/255
}

void loop() {
 
  
  motorfl.run(BACKWARD);      
  delay(1000);

  
  motorfr.run(BACKWARD);     
  delay(1000);
   
    motorbl.run(FORWARD);      
  delay(1000);
   
    motorbr.run(FORWARD);      
  delay(1000);

}