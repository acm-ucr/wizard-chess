#pragma once
#include "Piece.hpp"

using namespace std;

class Queen : public Piece {
        public: 
            Queen(int xPos, int yPos);
            void movePiece(int x, int y);
};