#include <ezButton.h>

#define motorX1 2
#define motorX2 3
#define motorY 4

#define motorX1Dir 5
#define motorX2Dir 6
#define motorYDir 7

ezButton limitSwitch1(9);  // create ezButton object that attach to pin 7;
ezButton limitSwitch2(10);
ezButton limitSwitch3(11);

void step(int motorStep, int steps, int delayTime){
    for(int i = 0; i < steps; i++){
        digitalWrite(motorStep, HIGH);
        delay(delayTime);
        digitalWrite(motorStep, LOW);
        delay(delayTime);
    }
}

void setup() {
  Serial.begin(9600);
  limitSwitch1.setDebounceTime(50); // set debounce time to 50 milliseconds
  limitSwitch2.setDebounceTime(50);
  limitSwitch3.setDebounceTime(50);

  pinMode(motorX1, OUTPUT);
  pinMode(motorX2, OUTPUT);
  pinMode(motorY, OUTPUT);

  pinMode(motorX1Dir, OUTPUT);
  pinMode(motorX2Dir, OUTPUT);
  pinMode(motorYDir, OUTPUT);

  digitalWrite(8, LOW);
}

void loop() {
  limitSwitch1.loop(); // MUST call the loop() function first
  limitSwitch2.loop();
  limitSwitch3.loop();

  if(limitSwitch1.isPressed())
    Serial.println("The limit switch 1: UNTOUCHED -> TOUCHED");

  if(limitSwitch2.isPressed())
    Serial.println("The limit switch 2: UNTOUCHED -> TOUCHED");

  if(limitSwitch3.isPressed())
    Serial.println("The limit switch 3: UNTOUCHED -> TOUCHED");

  if(limitSwitch1.isReleased() || limitSwitch2.isReleased() || limitSwitch3.isReleased())
    Serial.println("The limit switch: TOUCHED -> UNTOUCHED");

  int state1 = limitSwitch1.getState();
  int state2 = limitSwitch2.getState();
  int state3 = limitSwitch3.getState();

  if(state1 == HIGH)
    step(motorX1, 1, 10);
  else
    Serial.println("The limit switch: TOUCHED");

  if(state2 == HIGH)
    step(motorX2, 1, 10);
  else
    Serial.println("The limit switch: TOUCHED");

  if(state3 == HIGH)
    step(motorY, 1, 10);
  else
    Serial.println("The limit switch: TOUCHED");
}