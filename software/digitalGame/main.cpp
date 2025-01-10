#include <iostream>
#include <string>
#include <array>
#include <cstdio>
#include <memory>
#include "board.h"
#include <fstream>
using namespace std;

int main() {
    //FOR TESTING
    Board b; 

    b.swap(6, 6, 6, 4); //g2g4
    b.swap(4, 1, 4, 3); //e7e5
    b.swap(5, 6, 5, 4); //f2f4
    b.swap(3, 0, 7, 4); //d8h4
    b.printBoard();
    
    cout << b.isCheckMate() << endl;
    // if(b.isCheck()) {
    //     cout << "succ" << endl;
    // }
    // else {
    //     cout << "hell no" << endl;
    // }

    //b.printBoard();

    // // Path to the Stockfish engine binary
    // //USED FOR TESTING: g2g4 e7e5 f2f3 d8h4
    // const char* stockfishPath = "\"C:\\Users\\leaus\\OneDrive\\Important DOcs\\stockfish\\stockfish-windows-x86-64-avx2.exe\"";//This should be the stockfish path to your file
    // Stockfish engine(stockfishPath);
    // engine.clearFiles(); //Clears files to make it easier to process info, program runs extremely slow if info is constantly being put into files

    // string bestMove;
    // string position = "position startpos moves";
    // bool playerTurn = true;
    // string playerMove = "";

    // while (bestMove != "(none)") {
    //     if(playerTurn == true) { //Player's individual moves
    //         //Input moves like g2g4
    //         cout << "Input Your Move: ";
    //         cin >> playerMove;
    //         position += " " + playerMove;
    //         cout << "Current Moves: " << position << endl;
    //     }
    //     else { //Stockfish move
    //         // Send position and search commands
    //         engine.sendCommand(position);

    //         //Set depth to tell stockfish how far to search(the lower the depth, the lower the difficulty)
    //         engine.sendCommand("go depth 100");

    //         // Retrieve the best move
    //         bestMove = engine.getBestMove();
    //         cout << "Best Move: " << bestMove << endl;

    //         // Update position with the best move
    //         position += " " + bestMove;
    //         cout << "Current Moves: " << position << endl;
    //         engine.clearFiles();
    //     }
    //     playerTurn = !playerTurn;
    // }
    // cout << "GAME ENDED (CHECKMATE)" << endl;
    return 0;
}

