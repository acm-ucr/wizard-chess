#pragma once
#include <stdexcept>

using namespace std;

class Piece {
    public:
        Piece();
        Piece(int xPos, int yPos);
        void movePiece(int xM, int yM) { throw std::runtime_error("Not implemented"); }
        int getPositionX(){return x;}
        int getPositionY(){return y;}
        void setPositionX(int numX){x = numX;}
        void setPositionY(int numY){y = numY;}
        bool isValid(int xT, int yT);     
    
    protected:
        int x;
        int y;
        int counter;
};

Piece :: Piece(){
    x = 0;
    y = 0;
    counter = 0;
}

Piece :: Piece(int xPos, int yPos){
    x = xPos;
    y = yPos;
    counter = 0;
}