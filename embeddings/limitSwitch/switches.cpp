#include "switchClass.hpp"
#define LIMIT_SWITCH_X_L 7
#define LIMIT_SWITCH_X_R 4
#define LIMIT_SWITCH_R 8

bool LimitSwitch::getSwitchValue(int pin) 
{
    return digitalRead(pin);
}