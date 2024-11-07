#pragma once
#include "Piece.h"

class Empty : public Piece {
        public: 
            Empty();
            Empty(int xPos, int yPos);
            void movePiece(int x, int y);
            bool isValid(int xT, int yT);  
            string getID(){return "empty";}
            bool isEmpty(){return true;}
};