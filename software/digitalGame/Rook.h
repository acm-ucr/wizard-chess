#pragma once
#include "Piece.h"

class Rook : public Piece {
        public: 
            Rook();
            Rook(int xPos, int yPos, bool isWhite);
            bool isValid(int xT, int yT);
            
            void movePiece(int xM, int yM) override;


            string getID() const  override{
                return "rook";
            }


            bool isEmpty() const override {
                return false;
            }
};