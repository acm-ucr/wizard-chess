#include "settings.h"

Settings::Settings() {}
void Settings::setDifflevel(int d) {diffLevel = d;}
void Settings::setGamemodeNum(int n) {gameModeNum = n;}
void Settings::setBlackCommand(bool choice) {blackPlayer_commandType = choice;}
void Settings::setWhiteCommand(bool choice) {whitePlayer_commandType = choice;}
bool Settings::getBlackCommand() const {return blackPlayer_commandType;}
bool Settings::getWhiteCommand() const {return whitePlayer_commandType;}
int Settings::getDiffLevel() const {return diffLevel;}
int Settings::getGamemodeNum() const {return gameModeNum;}
