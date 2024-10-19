#pragma once
#include "Piece.hpp"

using namespace std;

class King : public Piece {
        public: 
            King(int xPos, int yPos);
            void movePiece(int x, int y);
};