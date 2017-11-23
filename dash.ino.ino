//dash.ino standard firmwork v0.1
//2017 TEAM A72
//

#include "Dash.h"

//initialize io pins
static int redPin = 9;
static int greenPin = 6;
static int bluePin = 5;

//initialize variables
int pCount = 1;

Dash dash;//Create an object Dash name dash

void setup() {
  //setup pin modes
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(7, OUTPUT); //speaker
  pinMode(12, INPUT); //switch port
  //for debugging
  Serial.begin(9600);//set bit rate to 9600
  Serial.print("I say... Hey... Hey... Hey START DASH! ");
  Serial.print("Welcome to dash.ino debug mode\n\n");
  Serial.print("==================");
  //start up with Honoka Kousaka's orange
  Serial.print("Starting up with Honoka Kousaka's orange...\n");
  dash.setLED();
  Serial.print("Ready to work.\n");
}
void loop() { // an auto loop version of main function.
  if (digitalRead(12) == HIGH) {
    Serial.print("pushed!\n");
    tone(7, 520, 200);                          //Play a 520hz tone at pin 7
    dash.setLED();                               //switch LED color.
    delay("500");
}
