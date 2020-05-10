int sensorPin = A0;    // select the input pin for the potentiometer
int redLedPin = 9;      // select the pin for the red LED
int yellowLedPin = 10;      // select the pin for the yellow LED
int greenLedPin = 11;      // select the pin for the green LED

int sensorValue = 0;  // variable to store the value coming from the sensor

void setup()
{
  pinMode(redLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);

  Serial.begin(9600);
}



void loop()
{
  Serial.println(analogRead(A0));
  sensorValue = analogRead(A0);

  if (sensorValue >= 0 and sensorValue < 85) {
    digitalWrite(redLedPin, HIGH);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(greenLedPin, LOW);
  } else if (sensorValue >= 85 and sensorValue < 170) {
    digitalWrite(redLedPin, LOW);
    digitalWrite(yellowLedPin, HIGH);
    digitalWrite(greenLedPin, LOW);
  } else {
    digitalWrite(redLedPin, LOW);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(greenLedPin, HIGH);
  }
}
