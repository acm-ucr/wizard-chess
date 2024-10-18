#include <iostream>
using namespace std;
#include "Board.h"

Board::Board() {
    cout << "constructor called" << endl;
    //Pawns
    board[0][1] = pw0;
    board[1][1] = pw1;
    board[2][1] = pw2;
    board[3][1] = pw3;
    board[4][1] = pw4;
    board[5][1] = pw5;
    board[6][1] = pw6;
    board[7][1] = pw7;
    board[0][6] = pb0; 
    board[1][6] = pb1; 
    board[2][6] = pb2; 
    board[3][6] = pb3; 
    board[4][6] = pb4; 
    board[5][6] = pb5;
    board[6][6] = pb6;
    board[7][6] = pb7;

    //Castle(Rooks)
    board[0][0] = cw0; 
    board[7][0] = cw1; 
    board[0][7] = cb0; 
    board[7][7] = cb1;

    //Knights
    board[1][0] = kw0; 
    board[6][0] = kw1; 
    board[1][7] = kb0; 
    board[6][7] = kb1;

    //Bishops
    board[2][0] = bw0; 
    board[5][0] = bw1; 
    board[2][7] = bb0; 
    board[5][7] = bb1;

    //Queen
    board[3][0] = qw;
    board[3][7] = qb;

    //King
    board[4][0] = kw;
    board[4][7] = kb;
}

void Board::resetBoard() {
    //Pawns
    board[0][1] = pw0;
    board[1][1] = pw1;
    board[2][1] = pw2;
    board[3][1] = pw3;
    board[4][1] = pw4;
    board[5][1] = pw5;
    board[6][1] = pw6;
    board[7][1] = pw7;
    board[0][6] = pb0; 
    board[1][6] = pb1; 
    board[2][6] = pb2; 
    board[3][6] = pb3; 
    board[4][6] = pb4; 
    board[5][6] = pb5;
    board[6][6] = pb6;
    board[7][6] = pb7;

    //Castle(Rooks)
    board[0][0] = cw0; 
    board[7][0] = cw1; 
    board[0][7] = cb0; 
    board[7][7] = cb1;

    //Knights
    board[1][0] = kw0; 
    board[6][0] = kw1; 
    board[1][7] = kb0; 
    board[6][7] = kb1;

    //Bishops
    board[2][0] = bw0; 
    board[5][0] = bw1; 
    board[2][7] = bb0; 
    board[5][7] = bb1;

    //Queen
    board[3][0] = qw;
    board[3][7] = qb;

    //King
    board[4][0] = kw;
    board[4][7] = kb;
}

Board::~Board() { 
    cout << "Destructor Called" << endl;
}

Piece Board::getPiece(int first, int second) {
    return board[first][second];
}

void Board::printBoard() {
    cout << "In print board" <<endl;
}

