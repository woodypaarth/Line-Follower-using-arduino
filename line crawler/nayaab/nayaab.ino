int enabler1 = 5;
  int IN1 = 6;
  int IN2 = 7;
  int IN3 = 9;
  int IN4 = 8;
  int enabler2 = 10;
  int motorspeed = 120;
  int analog1 = 11;
  int analog2 = 3;
  int sensor1;
  int sensor2;
void setup() {
  Serial.begin(9600);
  pinMode(enabler1, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(enabler2, OUTPUT);

  pinMode(analog1, INPUT);
  pinMode(analog2, INPUT);
  }
  
  void loop(){
  sensor1 = digitalRead(11);
  sensor2 = digitalRead(3);
 
if(sensor1 == 0  && sensor2 == 0){
 analogWrite(enabler1, 120);
 analogWrite(enabler2, 120);
 digitalWrite(IN1,HIGH);
 digitalWrite(IN2,LOW);
 digitalWrite(IN3,HIGH);
 digitalWrite(IN4,LOW);
}

else if(sensor2 == 0 && sensor1 == 1){
  analogWrite(enabler1, 120);
  analogWrite(enabler2, 120);
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);

}

else if(sensor1 == 0 && sensor2 == 1){
  analogWrite(enabler1, 120);
  analogWrite(enabler2, 120);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  
}

else if(sensor1 == 1  && sensor2 == 1){
 analogWrite(enabler1, 120);
 analogWrite(enabler2, 120);
 digitalWrite(IN1,HIGH);
 digitalWrite(IN2,LOW);
 digitalWrite(IN3,HIGH);
 digitalWrite(IN4,LOW);
}
  }