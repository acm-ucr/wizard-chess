#include <iostream>
#include <string>
#include <array>
#include <cstdio>
#include <memory>
#include "stockfish.hpp"
using namespace std;

int main() {
    // Path to the Stockfish engine binary
    const char* stockfishPath = "";  // Change this to your Stockfish binary
    Stockfish engine(stockfishPath); 

    cout << "STARTING" << endl;

    // Send UCI command
    //it will return uciok to confirm that sotckfish confirmed the uci command
    cout << "Sending UCI command...\n";
    cout << engine.sendCommand("uci") << endl;

    // Send isready command
    //it will return readyok to confirm that sotckfish confirmed the ready command
    cout << "Sending isready command...\n";
    cout << engine.sendCommand("isready") << endl;
    // Set up the position
    cout << "Sending position command...\n";
    cout << engine.sendCommand("position startpos moves h2h4") << endl;


    // Request the best move
    cout << "Sending go command...\n";
    cout << engine.sendCommand("go depth 25") << endl;

    return 0;
}