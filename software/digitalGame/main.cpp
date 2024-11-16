#include <iostream>
#include <string>
#include <array>
#include <cstdio>
#include <memory>
#include "stockfish.hpp"
using namespace std;

string conversionString(string move) {
    string newMove = move.substr(9, 4);
    return newMove;
}

int main() {
    // Path to the Stockfish engine binary
    const char* stockfishPath = "\"C:\\Users\\leaus\\OneDrive\\Important DOcs\\stockfish\\stockfish-windows-x86-64-avx2.exe\"";  // Change this to your Stockfish binary
    Stockfish engine(stockfishPath);


    //USED FOR TESTING: g2g4 e7e5 f2f3 d8h4

    //string move;
    string best;
    string position = "position startpos moves g2g4 e7e5";
    int turns = 0;
    // //engine.sendCommand(position);
    // //WORK IN PROGRESS MAIN
    while (best != "(none)") {
        engine.sendIsReady();
        engine.sendCommand(position); // Send position first
        cout << "Sending 'go depth 25' command..." << endl;
        engine.sendCommand("go depth 25");
        engine.sendIsReady(); // Wait for Stockfish to be ready after sending the go command
        cout << "Retrieving the best move..." << endl;
        best = engine.getBestMove();
        cout << "Best Move: " << best << endl; 
        position += " " + best;
        cout << "Current Moves: " << position << endl;
        ++turns;
    }
    return 0;
}

