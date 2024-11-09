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
    //cout << "Hello, World!" << endl;

    // Board b;

    Rook rook;

    cout << "Entering Main" << endl;

    cout << rook.getID() << endl;

    return 0;
}