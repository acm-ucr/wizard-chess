#pragma once
#include "Piece.h"

class Empty : public Piece {
        public: 
            Empty();
            Empty(int xPos, int yPos);
            void movePiece(int x, int y) override;
            bool isValid(int xT, int yT);  


            string getID() const override {
                return "empty";
            }
            bool isEmpty() const override {
                return true;
            }
};