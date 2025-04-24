<<<<<<< HEAD
#include <Servo.h>

const int redPin = 2;
const int yellowPin = 3;
const int greenPin = 4;
const int servoPin = 9;

Servo myServo;
=======
const int redPin = 7;
const int yellowPin = 8;
const int greenPin = 9;
>>>>>>> origin/main

void setup() {
    pinMode(redPin, OUTPUT);
    pinMode(yellowPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
<<<<<<< HEAD

    myServo.attach(servoPin);
}

void loop() {
    digitalWrite(yellowPin, LOW);
    digitalWrite(redPin, HIGH);
    myServo.write(0);
=======
}

void loop() {
    digitalWrite(redPin, HIGH);
>>>>>>> origin/main
    delay(21000);
    digitalWrite(yellowPin, HIGH);
    delay(3000);
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, HIGH);
<<<<<<< HEAD
    myServo.write(90);
=======
>>>>>>> origin/main
    delay(31000); 
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, HIGH);
    digitalWrite(greenPin, LOW);
    delay(3000);
}
