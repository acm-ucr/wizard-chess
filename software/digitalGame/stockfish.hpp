// #include <string>
// #include <iostream>

// class Stockfish {
//     const char* PATH = "C:\\Users\\leaus\\OneDrive\\Important DOcs\\stockfish\\stockfish-windows-x86-64-avx2.exe";

//     public:
//         Stockfish(); // need to start the engine
//         std::string exec(const char* cmd);
// };


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
        // Start the Stockfish engine
        stockfish = _popen(path, "w");
        if (!stockfish) {
            throw std::runtime_error("Failed to start Stockfish!");
        }
    }

    ~Stockfish() {
        if (stockfish) {
            _pclose(stockfish);
        }
    }

    string sendCommand(const std::string& command);
    string exec(const char* cmd);

private:
    FILE* stockfish;
};