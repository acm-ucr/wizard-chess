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
    Rook rook;

    cout << "Entering Main" << endl;
    cout << rook.getID() << endl; // prints rook

    Board board;

    cout << "Printing Board" << endl;
    cout << board.getPiece(0, 0).getID() << endl;

    return 0;
}