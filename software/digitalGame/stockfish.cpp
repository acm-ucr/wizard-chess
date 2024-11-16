#include <string>
#include <iostream>
#include <array>
#include <memory>
#include "stockfish.hpp"
#include <future>
using namespace std;

Stockfish::Stockfish() {
}
 

//Possibly won't ever use this function
void Stockfish::intialize() {
    cout << "STARTING" << endl; 


    // Send UCI command
    //it will return uciok to confirm that sotckfish confirmed the uci command
    sendUciOk();



    //Sending ready command
    //It will return readyok to confirm stockfish ready
    sendIsReady();
}


//Sends commands for stockfish to process
void Stockfish::sendCommand(const string& command) {
        sendIsReady();
        fprintf(stockfish, "%s\n", command.c_str()); //Prints command to stockfish file
        fflush(stockfish);

        // fputs((command + "\n").c_str(), stockfish);
}


//This function calcualtes the best moves
//PROBLEM: It's now only reading up to a certain point and not the whole 
//strings of data.
string Stockfish::getBestMove() {
      // Read and return the response
        string result;
        array<char, 512> buffer;
        int moveStart;
        int moveEnd; 
        int bestMovePos = 0;
        //PROBLEM THE BUFFER IS RETURNING NULLPTER
        fgets(buffer.data(), buffer.size(), stockfish);

        while (buffer.data() != nullptr) {
            result += buffer.data();

            // Print the current response chunk for debugging
            cout << "Read from Stockfish: " << buffer.data() << endl;
            // Print the full accumulated result so far
            cout << "Accumulated result:\n" << result << endl;

            // Check if we received "bestmove" in the response
            bestMovePos = result.find("bestmove");


            cout << "\"bestmove\" found at position: " << bestMovePos << endl;

            // Extract the best move from the response
            moveStart = bestMovePos + 9; // "bestmove " is 9 characters long including the space after
            moveEnd = result.find(' ', moveStart); //Start moveEnd from after movestart and go until space
            string bestMove = result.substr(moveStart, moveEnd - moveStart);

            cout << "Extracted best move: " << bestMove << endl;

            return bestMove;
        }


        if (fgets(buffer.data(), buffer.size(), stockfish) == nullptr) {
            if (feof(stockfish)) {
                cerr << "End of file reached on Stockfish stream." << endl;
            }
            if (ferror(stockfish)) {
                cerr << "Error occurred while reading from Stockfish stream." << endl;
            }
        }

        fflush(stockfish); //Flushes stream to accept new data for stockfish
        return result;
}



void Stockfish::sendUciOk() {

    cout << "Sending UCI command...\n";
    fprintf(stockfish, "uci\n");
    fflush(stockfish);
}


void Stockfish::sendIsReady() {
    cout << "Send isReady command...\n";
    fprintf(stockfish, "isready\n");
    fflush(stockfish);
}
