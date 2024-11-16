#include <iostream>
#include <string>
#include <array>
#include <cstdio>
#include <memory>
#include <stdexcept>
using namespace std;

class Stockfish {
    
public:
    Stockfish();

    Stockfish(const char* path) {
        cout << "STARTING STOCKFISH" << endl;
        stockfish = _popen(path, "r+"); //or w+ 
        if (!stockfish) {
            throw std::runtime_error("Failed to start Stockfish!");
        }
        // // Disable buffering
        //setbuf(stockfish, nullptr);

        // Initialize Stockfish in UCI mode
        //Note:before every run of stockfish, make sure to run a isready command
        fprintf(stockfish, "uci\n");
        fflush(stockfish);
    }

    ~Stockfish() {
        // if (stockfish) {
            _pclose(stockfish);
        //}
    }

    void sendCommand(const std::string& command);
    string getBestMove();
    void intialize();
    void sendIsReady();
    void sendUciOk();

    private:
        FILE* stockfish;
};