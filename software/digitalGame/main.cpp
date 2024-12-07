#include <iostream>
#include <string>
#include <array>
#include <cstdio>
#include <memory>
#include "stockfish.h"
#include <fstream>
#include "Board.h"
using namespace std;

void populateCells(char x1, int y1, char x2, int y2, int i, int turnCnt);

Board game;

int main() {
    /*
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
    */

    //populateCells('e', 2, 'e', 4, 3, 5);

    Board b;
    b.printBoard();

    b.swap(4, 6, 4, 4);

    b.printBoard();

    if(b.isCheck()){
        cout << "success" << endl;
    }
    else{
        cout << "wtf" << endl;
    }

}

// void populateCells(char x1, int y1, char x2, int y2, int i, int turnCnt)
// {
//     // if (turnCnt % 20 == 0)
//     // {
//     //     clearTableWidget();
//     // }
//     bool bCheck = false;
//     bool wCheck = false;
//     if (i == 0) {return;}
//     int row = (turnCnt % 20)/2;
//     int col = turnCnt % 2;
//     // gets the piece type character from game
//     // out initializes to a piece first
//     string out = game.board[y1][game.convertToInt(x1)]->getPosition();

//     cout << out << endl;

//     if (i == 1) {
//         out += x2 + y2;
//         if (col == 0) {
//             if (bCheck == 1) {
//                 out += "+";
//             }
//         }
//         else if (col == 1) {
//             if (wCheck == 1) {
//                 out += "+";
//             }
//         }
//     }
//     else if (i == 2) {
//         out += "x" + to_string(x2) + to_string(y2);
//         if (col == 0) {
//             if (bCheck == 1) {
//                 out += "+";
//             }
//         }
//         else if (col == 1) {
//             if (wCheck == 1) {
//                 out += "+";
//             }
//         }
//     }
//     //tableWidget->setItem(row, col, new QTableWidgetItem(QString::fromStdString(out)));

//     cout << out << endl;
// }



