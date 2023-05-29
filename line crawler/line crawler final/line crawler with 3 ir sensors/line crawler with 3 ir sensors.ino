int enabler1 = 5;
  int IN1 = 6;
  int IN2 = 7;
  int IN3 = 9;
  int IN4 = 8;
  int enabler2 = 10;
  int motorspeed = 120;
  int analogr = 11;
  int analogl = 3;
  int analog3 = 2;
  int sensor1;
  int sensor2;
  int i;
void setup() {
  Serial.begin(9600);
  pinMode(enabler1, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(enabler2, OUTPUT);

  pinMode(analogl, INPUT);
  pinMode(analogr, INPUT);
  pinMode(analog3, INPUT);
  }
  
void loop(){
  sensor1 = digitalRead(2);
  
  if(sensor1 == 1)
    {
      analogWrite(enabler1, 120);
      analogWrite(enabler2, 120);
      digitalWrite(IN1,HIGH);
      digitalWrite(IN2,LOW);
      digitalWrite(IN3,HIGH);
      digitalWrite(IN4,LOW);
    }

  else if(sensor1 == 0 )
    {
      digitalRead(analogl);
      digitalRead(analogr);
      
      if(analogl== 0 && analogr == 0)
        {
          analogWrite(enabler1, 120);
          analogWrite(enabler2, 120);
          digitalWrite(IN1,HIGH);
          digitalWrite(IN2,LOW);
          digitalWrite(IN3,HIGH);
          digitalWrite(IN4,LOW);
        }
      
      else if(analogl == 1 && analogr ==0)
        {
          analogWrite(enabler1, 120);
          analogWrite(enabler2, 120);
          digitalWrite(IN1, LOW);
          digitalWrite(IN2, HIGH);
          digitalWrite(IN3, HIGH);
          digitalWrite(IN4, LOW);
        }

      else if(analogl == 0 && analogr ==1)
        {
          analogWrite(enabler1, 120);
          analogWrite(enabler2, 120);
          digitalWrite(IN1, HIGH);
          digitalWrite(IN2, LOW);
          digitalWrite(IN3, LOW);
          digitalWrite(IN4, HIGH);
        }

      else if(analogl == 1 && analogr == 1)
        {
          do
            {
              for(i = 100, i< 255, i++)
                {
                  analogWrite(enabler1, i);
                  analogWrite(enabler2, -i);
                  digitalWrite(IN1,HIGH);
                  digitalWrite(IN2,HIGH);
                  digitalWrite(IN3,HIGH);
                  digitalWrite(IN4,HIGH);                  
                }
            }      
        }    
    }
}
