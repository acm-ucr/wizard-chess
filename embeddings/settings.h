#ifndef SETTINGS_H
#define SETTINGS_H

class Settings
{
    public:
        Settings();
        void setDifflevel(int d);
        void setGamemodeNum(int n);
        void setBlackCommand(bool choice);
        void setWhiteCommand(bool choice);
        bool getBlackCommand() const;
        bool getWhiteCommand() const;
        int getDiffLevel() const;
        int getGamemodeNum() const;
        ~Settings();
    private:
        unsigned int diffLevel = 4;
        unsigned int gameModeNum = 1;
        bool whitePlayer_commandType = false;
        bool blackPlayer_commandType = false;
};

#endif
