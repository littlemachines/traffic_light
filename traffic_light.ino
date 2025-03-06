const int redPin = 7;
const int yellowPin = 8;
const int greenPin = 9;

void setup() {
    pinMode(redPin, OUTPUT);
    pinMode(yellowPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
}

void loop() {
    digitalWrite(redPin, HIGH);
    delay(21000);
    digitalWrite(yellowPin, HIGH);
    delay(3000);
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, HIGH);
    delay(31000); 
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, HIGH);
    digitalWrite(greenPin, LOW);
    delay(3000);
}
