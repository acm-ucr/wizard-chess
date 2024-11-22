#include <iostream>
#include "Rook.h"
#include "Pawn.h"
#include "Piece.h"
#include "Knight.h"
#include "King.h"
#include "Queen.h"
#include "Bishop.h"
#include "Board.h"

using namespace std;

int main() {

    Board b;

    // cout << "Printing Board" << endl;

    // b.printBoard();

    // cout << b.board[0][4]->getID() << endl;

    // cout << b.board[1][4]->getID() << ", " << b.board[3][4]->getID() << endl;

    // cout << b.rangeUp(b.board[1][4]) << endl;

     b.swap(0,0,0,0);

     b.swap(0,0,0,0);

    // cout << b.board[6][4]->getID() << ", " << b.board[4][4]->getID() << ", " << b.board[0][5]->getID() << endl;

     b.printBoard();


    // cout << b.board[0][5]->getID() << ", " << b.simulate225Y(b.board[0][5]) << endl;

    // cout << b.board[1][7]->getID() << ", " << b.board[1][7]->getPositionX() << ", " << b.board[1][7]->getPositionY() << ", " << b.simulateUp(b.board[1][7]) << endl;

    //cout << "hello world" << endl;

    if(b.isCheck(b.kw)){ 
        cout << "check" << endl;
    }
    else{
        cout << "not check" << endl;
    }

    cout << b.board[4][4]->getPosition() << endl;

    return 0;
}