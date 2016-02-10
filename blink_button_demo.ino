/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */
const int LedPin = 7;
const int ButtonPin = 5;
long LedDelay = 500;
long LedTime = 0;
int buttonstate = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  pinMode(LedPin, OUTPUT);
  pinMode(ButtonPin, INPUT);
  LedTime = millis();
}

// the loop function runs over and over again forever

void loop() {
  if (millis() - LedTime > LedDelay)
  {
    Serial.println("light is changing");
    digitalWrite(LedPin, !digitalRead(LedPin));   // turn the LED on (HIGH is the voltage level)
    LedTime = millis();
  }
    
    buttonstate = digitalRead(ButtonPin);
    Serial.println("button is ");
    Serial.println(buttonstate);
}
