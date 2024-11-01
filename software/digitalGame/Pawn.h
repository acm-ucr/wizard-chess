#pragma once
#include "Piece.h"

class Pawn : public Piece {
        public: 
            Pawn(int xPos, int yPos);
            void movePiece(int x, int y);
            bool isValid(int xT, int yT);
            string getID(){return "pawn";}
            bool isEmpty(){return false;}
};