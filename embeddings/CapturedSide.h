#ifndef CAPTUREDSIDE_H
#define CAPTUREDSIDE_H
#include <iostream>
#include <unordered_map>
#include <string>
#include "Piece.h"
#include "Pawn.h"
#include "Bishop.h"
#include "Knight.h"
#include "Queen.h"
#include "King.h"
#include "Rook.h"
using namespace std;

class CapturedSide{
    private:
        unordered_map<string, Piece*> capturedColumn;
        int counterWhite;
        int counterBlack;
        int pawnCounter;

    public:
        CapturedSide();
        void capture(Piece* capturedPiece);
        int retrievePiece(Piece* p);
        void print();
};

#endif
