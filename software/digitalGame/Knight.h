#pragma once
#include "Piece.h"

class Knight : public Piece {
        public: 
            Knight(int xPos, int yPos);
            void movePiece(int x, int y);
            bool isValid(int xT, int yT);
            string getID(){return "knight";}
            bool isEmpty(){return false;}
};