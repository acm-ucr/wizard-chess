#include <string>
#include <iostream>
#include <array>
#include <memory>
#include "stockfish.hpp"
using namespace std;

Stockfish::Stockfish() {
}

void Stockfish::intialize() {
    cout << "STARTING" << endl;

    // Send UCI command
    //it will return uciok to confirm that sotckfish confirmed the uci command
    cout << "Sending UCI command...\n";
    cout << sendCommand("uci") << endl;
    //Sending ready command
    cout << "Stockfish initialized in UCI mode." << endl;
    cout << "Sending isready command...\n";
    cout << sendCommand("isready") << endl;
}

string Stockfish::sendCommand(const string& command) {
       // Send command to Stockfish
        fprintf(stockfish, "%s\n", command.c_str());
        fflush(stockfish);

        // Ensure Stockfish is ready
        fprintf(stockfish, "isready\n");
        fflush(stockfish);

        // cout << command << endl;
        // // Read response
        // array<char, 128> buffer;
        string result = command;

        // // This method reads the output of Stockfish
        // while (fgets(buffer.data(), buffer.size(), stockfish) != nullptr) {
        //     cout << "Stockfish Output: " << buffer.data() << endl;
        //     result += buffer.data();
        //     // if (result.find("bestmove") != string::npos) {
        //     //     break; // Stop reading once we get the best move
        //     // }
        // }
        cout << "Result: " << result << endl;
        return result;
}