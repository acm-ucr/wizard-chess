#pragma once
#include "Piece.h"

class Bishop : public Piece {
        public: 
            Bishop(int xPos, int yPos);
            void movePiece(int x, int y);
            bool isValid(int xT, int yT);
            string getID(){return "bishop";}
            bool isEmpty(){return false;}
};