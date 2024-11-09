#include <iostream>
#include <string>
#include <array>
#include <cstdio>
#include <memory>
#include "stockfish.hpp"
using namespace std;

int main() {
    // Path to the Stockfish engine binary
    const char* stockfishPath = "\"C:\\Users\\leaus\\OneDrive\\Important DOcs\\stockfish\\stockfish-windows-x86-64-avx2.exe\"";  // Change this to your Stockfish binary
    Stockfish engine(stockfishPath);
    engine.intialize(); 

    //e7e5 f2f3 d8h4

    string move;
    string position = "position startpos moves g2g4";
    //engine.sendCommand(position);
    //WORK IN PROGRESS MAIN
    while(true) {
        cin >> move;
        position = position + " "  + move;
        engine.sendCommand("go depth 35");
        engine.sendCommand(position);
        cout << "Current Moves: " << position << endl;
    }

    return 0;
}

