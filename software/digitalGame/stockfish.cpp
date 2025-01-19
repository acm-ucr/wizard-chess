#include <string>
#include <iostream>
#include <array>
#include <memory>
#include "stockfish.h"
#include <future>
#include <fstream>

using namespace std;

Stockfish::Stockfish() {}

void Stockfish::clearFiles() {
    // Open sfcmds.txt in truncation mode to clear its contents
    ofstream cmdFile("sfcmds.txt", ios::trunc);
    if (!cmdFile.is_open()) {
        throw runtime_error("Failed to open sfcmds.txt for clearing!");
    }
    cmdFile.close(); // File is cleared when closed

    // Open sfoutput.txt in truncation mode to clear its contents
    ofstream outputFile("sfoutput.txt", ios::trunc); //ios::trunc will auto delete any info inside file once opened
    if (!outputFile.is_open()) {
        throw runtime_error("Failed to open sfoutput.txt for clearing!");
    }
    outputFile.close(); // File is cleared when closed

    cout << "Files cleared successfully." << endl;
} 


//Sends commands for stockfish to process
void Stockfish::sendCommand(const string& command) {
    ofstream cmdFile("sfcmds.txt", std::ios::app); // Open file in append mode
    if (!cmdFile.is_open()) {
        throw runtime_error("Failed to open command file!");
    }

    // Write the command to the file
    cmdFile<< "isready" << "\n";
    cmdFile << command << "\n";
    cmdFile.close();
    cout << "Command sent to Stockfish: " << command << endl;
}


//This function calcualtes the best moves
string Stockfish::getBestMove() {
    //Read and return the response

    int moveStart;
    int moveEnd;
    int bestMovePos;

    //Launch stockfish and uses files of sfcmds as input and sfoutput as output for stockfish commands and data
    system((string("\"") + stockfishPath + "\" < sfcmds.txt > sfoutput.txt").c_str());



    // Read the output file to find the best move
    ifstream outputFile("sfoutput.txt");
    if (!outputFile.is_open()) {
        throw runtime_error("Failed to open output file!");
    }

    string moveLine; //acts as the line that extracts the while string starting at bestmove
    string bestMove; //stores the actual best move
    while (getline(outputFile, moveLine)) {
        cout << "Read from Stockfish: " << moveLine << endl;
        bestMovePos = moveLine.find("bestmove");
        if (bestMovePos != string::npos) { //Checks is move is not found then just 
            moveStart = bestMovePos + 9; // Skip "bestmove "
            moveEnd = moveLine.find(' ', moveStart); //Start moveEnd from after movestart and go until space
            if (moveEnd == string::npos) { //Checks if a move is not found, then just use the length
                moveEnd = moveLine.length();
            }
            bestMove = moveLine.substr(moveStart, moveEnd - moveStart);
            break;
        }
    }
    outputFile.close();

    if (bestMove.empty()) {
        cout << "Failed to find best move!" << endl;
    }
    return bestMove;
}