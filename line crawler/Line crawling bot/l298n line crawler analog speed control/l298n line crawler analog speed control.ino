// variable declaration
int enabler1 = 10;
  int IN1 = 9;
  int IN2 = 8;
  int IN3 = 7;
  int IN4 = 6;
  int enabler2 = 5;
  int motorspeed = 180;
  int analog1 = A0;
  int analog2 = A1;
  int sensor1;
  int sensor2;
////////////////////////////////////////////////////////////
void setup() {
  Serial.begin(9600);

//pin setup
  
  pinMode(enabler1, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(enabler2, OUTPUT);

  pinMode(analog1, INPUT);
  pinMode(analog2, INPUT);
  }
/////////////////////////////////////////////////////////  
void loop(){
  //sensor setup
  sensor1 = analogRead(A0);
  sensor2 = analogRead(A1);
 
// movement conditions

//BOTH WHITE 
if(sensor1 <= 100 && sensor2 <= 100)
          {
            analogWrite(enabler1, 100);
            analogWrite(enabler2, 100);
            digitalWrite(IN1,HIGH);
            digitalWrite(IN2,LOW);
            digitalWrite(IN3,HIGH);
            digitalWrite(IN4,LOW);
          }

//Turn Right
else if(sensor2 <= 100 && sensor1 >= 870)
          {
            analogWrite(enabler1, 100);
            analogWrite(enabler2, 100);
            digitalWrite(IN1,HIGH);
            digitalWrite(IN2,LOW);
            digitalWrite(IN3,LOW);
            digitalWrite(IN4,HIGH);
          }

//TURN LEFT
else if(sensor1 <= 100 && sensor2 >= 870)
          {
            analogWrite(enabler1, 100);
            analogWrite(enabler2, 100);
            digitalWrite(IN1,LOW);
            digitalWrite(IN2,HIGH);
            digitalWrite(IN3,HIGH);
            digitalWrite(IN4,LOW);
          }

  }