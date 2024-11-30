#include <iostream>
#include <string>
#include <array>
#include <cstdio>
#include <memory>
#include "stockfish.h"
#include <fstream>
#include "Board.h"
using namespace std;

int main() {
    
    // // Path to the Stockfish engine binary
    // //USED FOR TESTING: g2g4 e7e5 f2f3 d8h4
    const char* stockfishPath = "STOCKFISH PATH HERE"; //This should be the stockfish path to your file
    Stockfish engine(stockfishPath);
    engine.clearFiles(); //Clears files to make it easier to process info, program runs extremely slow if info is constantly being put into files

    string bestMove;
    string position = "position startpos moves";
    bool playerTurn = true;
    string playerMove = "";

    while (bestMove != "(none)") {
        if(playerTurn == true) { //Player's individual moves
            //Input moves like g2g4
            cout << "Input Your Move: ";
            cin >> playerMove;
            position += " " + playerMove;
            cout << "Current Moves: " << position << endl;
        }
        else { //Stockfish move
            // Send position and search commands
            engine.sendCommand(position);

            //Set depth to tell stockfish how far to search(the lower the depth, the lower the difficulty)
            engine.sendCommand("go depth 100");

            // Retrieve the best move
            bestMove = engine.getBestMove();
            cout << "Best Move: " << bestMove << endl;

            // Update position with the best move
            position += " " + bestMove;
            cout << "Current Moves: " << position << endl;
            engine.clearFiles();
        }
        playerTurn = !playerTurn;
    }
    cout << "GAME ENDED (CHECKMATE)" << endl;
    return 0;


}

