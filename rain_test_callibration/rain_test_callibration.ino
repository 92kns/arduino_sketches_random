void setup() {
  Serial.begin(9600);
  
}

void loop(){
  int sensorReading = analogRead(A0);
  int dryThresh = 1023;
  int fullSubmerge = 196;

  int percentMoisture = map(sensorReading, fullSubmerge,dryThresh,100,0);
  if (percentMoisture> 50){
    Serial.println("rain is detected");
    Serial.println(percentMoisture);
  }
  else{
    Serial.println("no rain");
    Serial.println(percentMoisture);
  }
}

