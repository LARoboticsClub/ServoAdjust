#include <Servo.h>

/*ServoAdjust

Adjusts the angle of a servo to the value read from a potentiometer.

*/

Servo servo;
const int potentiometerPin = A1;

void setup()
{
  servo.attach(A0); /*the Servo is connected to pin A0*/
  pinMode(potentiometerPin, INPUT);
}

void loop()
{
  int potentiometerValue = analogRead(potentiometerPin); /*Read the potentiometer value.*/
  potentiometerValue *= (180 / 1024.0); /*The potentiometer goes from 0 to 1024; the servo
                                          goes from 0 to 180. Scale the value for the servo.*/
  
  servo.write(potentiometerValue);
}
