#include <iostream>
#include <string>
#include <array>
#include <cstdio>
#include <memory>
#include <fstream>
//#include "stockfish.h"
#include "Board.h"
using namespace std;


int main() {
    // // Path to the Stockfish engine binary
    // //USED FOR TESTING: g2g4 e7e5 f2f3 d8h4
    // const char* stockfishPath = "\"C:\\Users\\Alton\\stockfish\\stockfish-windows-x86-64-avx2.exe\""; //This should be the stockfish path to your file
    // Stockfish engine(stockfishPath);
    // engine.clearFiles(); //Clears files to make it easier to process info, program runs extremely slow if info is constantly being put into files

    // string bestMove;
    // string position = "position startpos moves";
    // bool playerTurn = true;
    // string playerMove = "";

    // while (bestMove != "(none)") {
    //     // if(playerTurn == true) { //Player's individual moves
    //     //     //Input moves like g2g4
    //     //     cout << "Input Your Move: ";
    //     //     cin >> playerMove;
    //     //     position += " " + playerMove;
    //     //     cout << "Current Moves: " << position << endl;
    //     // }
    //     // else { //Stockfish move

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
    //     // }
    //     // playerTurn = !playerTurn;
    // }
    // cout << "GAME ENDED (CHECKMATE)" << endl;
    //return 0;
    
    Board b;
    b.printBoard();
    b.playGame();

    // b.swap(6, 1, 6, 3); //g2g4
    // b.printBoard();
    // b.swap(4, 6, 4, 4); //e7e5
    // b.printBoard();
    // b.swap(5, 1, 5, 3); //f2f4
    // b.printBoard();
    // b.swap(3, 7, 7, 3); //d8h4
    //b.swap(3, 6, 3, 5);
    //b.printBoard();

    if(b.isCheck()){
        cout << "success" << endl;
    }
    else {
        cout << "failure" << endl;
    }
    return 0;
}