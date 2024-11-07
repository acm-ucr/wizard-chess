#include <string>
#include <iostream>
#include <array>
#include <memory>
#include "stockfish.hpp"
using namespace std;

Stockfish::Stockfish() {

}

string Stockfish::sendCommand(const std::string& command) {
        // Send command to Stockfish
        fprintf(stockfish, "%s\n", command.c_str());
        fflush(stockfish); // Ensure command is sent immediately

        // Read response
        array<char, 128> buffer;
        string result;

        // This method reads the output of Stockfish
        while (fgets(buffer.data(), buffer.size(), stockfish) != nullptr) {
            result += buffer.data();
            // if (result.find("bestmove") != std::string::npos) {
            //     break; // Stop reading once we get the best move
            // }
        }

        return result;
}

string Stockfish::exec(const char* cmd){ 
    array<char, 128> buffer;
    string result;
    unique_ptr<FILE, decltype(&_pclose)> pipe(_popen(cmd, "r"), _pclose);

    if (!pipe) {
        throw runtime_error("popen() failed!");
    }

    while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
        result += buffer.data();
    }
    
    return result;
}