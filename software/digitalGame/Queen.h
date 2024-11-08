#pragma once
#include "Piece.h"

class Queen : public Piece {
        public: 
            Queen();
            Queen(int xPos, int yPos, bool color);
            void movePiece(int x, int y) override;
            bool isValid(int xT, int yT);  


            string getID() const override {
                return "queen";
            }

            bool isEmpty() const override {
                return false;
            }
};