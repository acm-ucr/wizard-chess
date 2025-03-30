#ifndef SETTINGS_H
#define SETTINGS_H

class Settings
{
    public:
        Settings();
        unsigned int diffLevel = 4;
        unsigned int gameModeNum = 1;
        bool whitePlayer_commandType = false;
        bool blackPlayer_commandType = false;
        void setDifflevel(int d);
        void setGamemodeNum(int n);
        ~Settings();
};

#endif
