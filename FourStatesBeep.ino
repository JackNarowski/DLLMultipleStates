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
  if (sensorvalue > 500){
    analogWrite(LED, 100);
    analogWrite(Buzzer, 100);
    delay(100);
    analogWrite(Buzzer,0);
    delay(100);

  }
  else if (sensorvalue > 300){
    analogWrite(LED,100);
    analogWrite(Buzzer, 100);
    delay(300);
    analogWrite(Buzzer,0);
    delay(300);
    
  }
  else if (sensorvalue > 100){
    analogWrite(LED,100);
    analogWrite(Buzzer, 100);
    delay(800);
    analogWrite(Buzzer,0);
    delay(800);

    
  }
    else if (sensorvalue < 100){
    analogWrite(LED,0);
   
  }
  delay(100);
}
