#pragma once
#include "Piece.h"

class Queen : public Piece {
        public: 
            Queen(int xPos, int yPos);
            void movePiece(int x, int y);
            bool isValid(int xT, int yT);  
            string getID(){return "queen";}
            bool isEmpty(){return false;}
};