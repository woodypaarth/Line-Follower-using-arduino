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
  // put your setup code here, to run once:
pinMode(enabler1, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(enabler2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(enabler1, 100);
 analogWrite(enabler2, 100);
 digitalWrite(IN1,HIGH);
 digitalWrite(IN2,LOW);
 digitalWrite(IN3,HIGH);
 digitalWrite(IN4,LOW);
}
