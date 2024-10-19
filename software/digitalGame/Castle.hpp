#pragma once
#include "Piece.hpp"

using namespace std;

class Castle : public Piece {
        public: 
            Castle(int xPos, int yPos);
            void movePiece(int x, int y);
};