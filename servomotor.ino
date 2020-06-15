#include <Servo.h>

Servo myservo1;
Servo myservo2;// create servo object to control a servo
// twelve servo objects can be created on most boards


void setup() {
  myservo1.attach(11); 
  myservo2.attach(10); // attaches the servo on GIO2 to the servo object
}

void loop() {
  int pos;

  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo1.write(pos); 
    myservo2.write(pos); // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo1.write(pos);  
    myservo2.write(pos);// tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}

