#pragma once
#include "Piece.h"

class Rook : public Piece {
        public: 
            Rook(int xPos, int yPos);
            void movePiece(int x, int y);
            bool isValid(int xT, int yT);
            string getID(){return "rook";}
            bool isEmpty(){return false;}
};