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
    motor1.setSpeed(200);
    motor2.setSpeed(200);
    motor3.setSpeed(200);
    motor4.setSpeed(200);

  }
else if(Sensor_1 >= 0 && Sensor_2 < 0)
  {
    motor1.setSpeed(200);
    motor1.setSpeed(200);
    motor3.run(BACKWARD);
    motor4.run(BACKWARD);

  }
else if(Sensor_1 < 0 && Sensor_2 >= 0)
  {
    motor3.setSpeed(200);
    motor4.setSpeed(200);
    motor1.run(BACKWARD);
    motor2.run(BACKWARD);

  }
else if(Sensor_1 < 0 && Sensor_2 < 0)
  {
    motor1.setSpeed(200);
    motor2.setSpeed(200);
    motor3.setSpeed(200);
    motor4.setSpeed(200);

  }
}