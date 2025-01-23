#include <iostream>
#include <string>
#include <array>
#include <cstdio>
#include <memory>
#include <stdexcept>
#include <fstream>
using namespace std;

class Stockfish {
    
public:
    Stockfish();
    Stockfish(const char* path) {
        cout << "STARTING STOCKFISH" << endl;
        ofstream cmdFile("sfcmds.txt", ios::app); // Open file in append mode
        if (!cmdFile.is_open()) {
            throw runtime_error("Failed to open command file!");
        }
        //Sending UCI command
        cmdFile << stockfish << "\n";
        cmdFile << "uci" << "\n";
        cmdFile.close();
        stockfishPath = path;
    }

    void sendCommand(const std::string& command);
    string getBestMove();
    void clearFiles();
    private:
        FILE* stockfish;
        const char* stockfishPath; // Path to Stockfish executable
};