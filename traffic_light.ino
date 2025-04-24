#include <Servo.h>

const int redPin = 2;
const int yellowPin = 3;
const int greenPin = 4;
const int servoPin = 9;

Servo myServo;

void setup() {
    pinMode(redPin, OUTPUT);
    pinMode(yellowPin, OUTPUT);
    pinMode(greenPin, OUTPUT);

    myServo.attach(servoPin);
}

void loop() {
    digitalWrite(yellowPin, LOW);
    digitalWrite(redPin, HIGH);
    myServo.write(0);
    delay(21000);
    digitalWrite(yellowPin, HIGH);
    delay(3000);
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, HIGH);
    myServo.write(90);
    delay(31000); 
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, HIGH);
    digitalWrite(greenPin, LOW);
    delay(3000);
}
