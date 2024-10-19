#pragma once
#include "Piece.hpp"

using namespace std;

class Pawn : public Piece {
        public: 
            Pawn(int xPos, int yPos);
            void movePiece(int x, int y);
};