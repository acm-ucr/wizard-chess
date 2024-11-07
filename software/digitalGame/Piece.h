#pragma once
#include <stdexcept>

using namespace std;

class Piece {
    public:
        Piece();
        Piece(int xPos, int yPos);
        int getPositionX(){return x;}
        int getPositionY(){return y;}
        void setPositionX(int numX){x = numX;}
        void setPositionY(int numY){y = numY;}   
        bool isEmpty(){return true;}  
    
    protected:
        int x;
        int y;
        //int counter;

    private:
        string getID();
};

Piece :: Piece(){
    x = 0;
    y = 0;
    //counter = 0;
}

Piece :: Piece(int xPos, int yPos){
    x = xPos;
    y = yPos;
    //counter = 0;
}