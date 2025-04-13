#define LIMIT_SWITCH_PIN1 7
#define LIMIT_SWITCH_PIN2 4
#define LIMIT_SWITCH_PIN3 8
#include "switchClass.hpp"
#include "switches.cpp"

void setup() 
{
  Serial.begin(9600);
  pinMode(LIMIT_SWITCH_PIN1, INPUT);
  pinMode(LIMIT_SWITCH_PIN2, INPUT);
  pinMode(LIMIT_SWITCH_PIN3, INPUT);
  LimitSwitch ls;
}

void loop() 
{
  int LIMIT_SWITCH_SIZE= 3;
  int allLimitSwitches[3] = {LIMIT_SWITCH_PIN1, LIMIT_SWITCH_PIN2, LIMIT_SWITCH_PIN3};
  for (unsigned int i = 0; i < LIMIT_SWITCH_SIZE; i++)
  {
    if (digitalRead(allLimitSwitches[i]) == LOW)
    {
      Serial.println("Limit Switch is on.");
    }
    else
    {
      Serial.println("Limit Switch is off.");
    }
  }
} 