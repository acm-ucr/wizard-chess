#pragma once
#include "Piece.h"

class Knight : public Piece {
        public: 
            Knight();
            Knight(int xPos, int yPos, bool color);
            void movePiece(int x, int y) override;
            bool isValid(int xT, int yT);


            string getID() const override {
                return "knight";
            }
            bool isEmpty() const override {
                return false;
            }
};