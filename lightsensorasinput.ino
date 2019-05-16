int Lightsensor = A1;
int LED = 11;
int Buzzer = 10;

int sensorvalue = 0;

void setup() {
  pinMode(Lightsensor, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(Buzzer, OUTPUT);
}

void loop() {
  sensorvalue = analogRead(Lightsensor);
  if (sensorvalue > 200){
    analogWrite(LED, 100);
    analogWrite(Buzzer, 100);
    
  }
  else if (sensorvalue > 100){
    analogWrite(LED,100);
    analogWrite(Buzzer, 0);
    
  }
  else if (sensorvalue < 100){
    analogWrite(LED,0);
    analogWrite(Buzzer,0);
    
  }
  delay(2000);
}
