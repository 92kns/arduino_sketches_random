
#include <Stepper.h>

#define STEPS 100

Stepper stepper(STEPS, 8, 9, 10, 11);

int previous = 0;

void setup()
{
// Set the motor at a speed of 90 steps per minute
stepper.setSpeed(90);
Serial.begin(9600);
}
void loop()
{
int val = analogRead(0); // Get sensor readings
int stepval = val - previous;
//Serial.println(-stepval);
//Serial.println("hey");
//Serial.println(stepval);
stepper.step(-1000);// 
previous = val;// 
}
