#pragma once
#include "Piece.h"

class King : public Piece {
        public: 
            King();
            King(int xPos, int yPos, bool color);
            void movePiece(int x, int y) override;
            bool isValid(int xT, int yT);


            string getID() const override {
                return "king";
            }

            bool isEmpty() const override {
                return false;
            }
};