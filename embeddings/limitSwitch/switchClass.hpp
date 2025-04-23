#define LIMIT_SWITCH_X_L_DEFAULT 7
#define LIMIT_SWITCH_X_R 4
#define LIMIT_SWITCH_R 8

class LimitSwitch 
{
  private:
    int LIMIT_SWITCH_SIZE = 3;
    int switches[3] = {LIMIT_SWITCH_X_L_DEFAULT, LIMIT_SWITCH_X_R, LIMIT_SWITCH_R};
  public:
    // create a constructor that takes in an array of values or 3 separate values for each
    bool getSwitchValue(int pin);
};

