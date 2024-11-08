#pragma once
#include "Piece.h"

class Bishop : public Piece {
        public: 
            Bishop();
            Bishop(int xPos, int yPos, bool color);
            void movePiece(int x, int y) override;
            bool isValid(int xT, int yT);


            string getID() const override {
                return "bishop";
            }
            bool isEmpty() const override {
                return false;
            }
};