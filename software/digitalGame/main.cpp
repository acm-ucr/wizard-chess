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

    cout << "Printing Board" << endl;

    b.printBoard();

    cout << b.board[4][0]->getID() << endl;

    cout << b.board[4][1]->getID() << ", " << b.board[4][3]->getID() << endl;

    cout << b.rangeUp(b.board[4][1]) << endl;

    b.swap(4, 1, 4, 3);

    cout << b.board[4][1]->getID() << ", " << b.board[4][3]->getID() << ", " << b.board[5][0]->getID() << endl;

    b.printBoard();


    cout << b.rangeMinXDiag315(b.board[5][0]) << endl;

    // if(b.isCheck(b.kw)){
    //     cout << "check" << endl;
    // }
    // else{
    //     cout << "not check" << endl;
    // }

    return 0;
}