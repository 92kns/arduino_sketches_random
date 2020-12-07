void setup() {
  Serial.begin(9600);
  
}

void loop(){
  int sensorReading = analogRead(A0);
  if (sensorReading > 0){
    Serial.println("rain is detected");
  }
  else{
    Serial.println("no rain");
  }
}

