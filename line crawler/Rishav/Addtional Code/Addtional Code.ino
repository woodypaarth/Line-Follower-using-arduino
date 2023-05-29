 int L1motor=6;
 int L2motor=7;
 int R1motor=8;
 int R2motor=9;

 
 int Lsensor=3;
 int Rsensor=11;

 int Enabler=5;
 int Final=10;
 int Mspeed=255;

void setup() {
 
pinMode(L1motor,OUTPUT);                   // LEFT MOTOR POSITIVE PIN
pinMode(L2motor,OUTPUT);                   

pinMode(R1motor,OUTPUT);                  // RIGHT MOTOR POSITIVE PIN
pinMode(R2motor,OUTPUT);

pinMode(Lsensor,INPUT);
pinMode(Rsensor,INPUT);



}

void loop() {

  if(digitalRead(Lsensor)==LOW) 
  {
    
    analogWrite(L1motor,Mspeed);
    analogWrite(L2motor,0);

    analogWrite(R1motor,0);
    analogWrite(R2motor,Mspeed);    }
  

if(digitalRead(Lsensor)==HIGH && digitalRead(Rsensor)==HIGH)


    {   
    analogWrite(L1motor,Mspeed);
    analogWrite(L2motor,0);

    analogWrite(R1motor,Mspeed);
    analogWrite(R2motor,0);
    
  }


    if(digitalRead(Rsensor)==LOW)
  {
    
    analogWrite(L1motor,0);
    analogWrite(L2motor,Mspeed);

    analogWrite(R1motor,Mspeed);
    analogWrite(R2motor,0);
  }

  else{

       
    analogWrite(L1motor,Mspeed);
    analogWrite(L2motor,0);

    analogWrite(R1motor,Mspeed);
    analogWrite(R2motor,0);
    
  }
}
