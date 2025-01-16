#pragma once
#include "Piece.h"

class Pawn : public Piece {
        public: 
            Pawn();
            Pawn(int xPos, int yPos, bool color);
            void movePiece(int x, int y) override;
            bool isValid(int xT, int yT);

            int getMoveCounter() override;
            void setMoveCounter(int num) override;

            string getID() const override {
                return "pawn";
            }
            bool isEmpty() const override {
                return false;
            }

            bool isPromote(int y);
        
        private:
            int pawnCounter;
};