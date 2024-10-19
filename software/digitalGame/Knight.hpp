#pragma once
#include "Piece.hpp"

using namespace std;

class Knight : public Piece {
        public: 
            Knight(int xPos, int yPos);
            void movePiece(int x, int y);
};