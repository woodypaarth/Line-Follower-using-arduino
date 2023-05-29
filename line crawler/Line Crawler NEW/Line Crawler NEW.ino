
int Rsensor;
int Lsensor;
void setup() {

pinMode(10,OUTPUT);


pinMode(9,OUTPUT); //RIGHT SIDE WHEELS
pinMode(8,OUTPUT);

pinMode(7,OUTPUT); // LEFT SIDE WHEELS
pinMode(6,OUTPUT);

pinMode(5,OUTPUT);

pinMode(A0,INPUT);  // RIGHT SENSOR
pinMode(A1,INPUT);  // LEFT SENSOR

Serial.begin(9600);
}

void loop() {
  
  
  Rsensor=analogRead(A0);
  Lsensor=analogRead(A1);
 
  Serial.println("Right Sensor");
  Serial.println(A0);
  
  Serial.println("Left Sensor");
  Serial.println(A1);

  delay(1000);
  

    

}
