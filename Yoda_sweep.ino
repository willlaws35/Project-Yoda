/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo, myservo1, myservo2, ServoTest ; 
int pos = 0;   

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo1.attach(10);
  myservo2.attach(11);
  ServoTest.attach(6);
  myservo.write(90);
  delay(20);
  myservo1.write(90);
  delay(20);
  myservo2.write(90);
  delay(100);
  ServoTest.write(90); 
}

void loop() {
  for (pos = 50; pos <= 130; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
      delay(10);
    myservo1.write(pos);
      delay(10);
    myservo2.write(pos);
    delay(10);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 130; pos >= 50; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
      delay(10);
    myservo1.write(pos);
      delay(10);
    myservo2.write(pos);
    delay(10);                       // waits 15ms for the servo to reach the position
  }
}
