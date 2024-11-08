#pragma once
#include "Piece.hpp"

using namespace std;

class Bishop : public Piece {
        public: 
            Bishop(int xPos, int yPos);
            void movePiece(int x, int y);
};