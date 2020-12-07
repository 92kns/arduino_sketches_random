void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorReading = analogRead(A0);
  int dryThresh = 1023;
  int fullSubmerge = 196;

  int percentMoisture = map(sensorReading, fullSubmerge, dryThresh, 100,0);

  if (percentMoisture > 50){
    Serial.println("stop");
    delay(1000);
    
  } else{
    Serial.println("pls water me");
    delay(1000);
  }

}
