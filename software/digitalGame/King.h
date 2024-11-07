#pragma once
#include "Piece.h"

class King : public Piece {
        public: 
            King(int xPos, int yPos);
            void movePiece(int x, int y);
            bool isValid(int xT, int yT);
            string getID(){return "king";}
            bool isEmpty(){return false;}
};