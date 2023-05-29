#include<AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

void setup() {
  Serial.begin(9600);

}

void loop() {
  
  
  //Starts the sensor to check for values
  int Sensor_1 = analogRead(A0);
  int Sensor_2 = analogRead(A1);
  

  //To start the motors
if(Sensor_1 >= 0 && Sensor_2 >= 0)
  {
    motor1.run(FORWARD);
    motor2.run(FORWARD);
    motor3.run(FORWARD);
    motor4.run(FORWARD);

  }
else if(Sensor_1 >= 0 && Sensor_2 < 0)
  {
    motor1.run(FORWARD);
    motor2.run(FORWARD);
    motor3.run(BACKWARD);
    motor4.run(BACKWARD);

  }
else if(Sensor_1 < 0 && Sensor_2 >= 0)
  {
    motor3.run(FORWARD);
    motor4.run(FORWARD);
    motor1.run(BACKWARD);
    motor2.run(BACKWARD);

  }
else if(Sensor_1 < 0 && Sensor_2 < 0)
  {
    motor1.run(FORWARD);
    motor2.run(FORWARD);
    motor3.run(FORWARD);
    motor4.run(FORWARD);

  }
}
