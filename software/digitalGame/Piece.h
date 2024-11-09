#pragma once
#ifndef PIECE_H
#define PIECE_H

#include <stdexcept>

using namespace std;

class Piece {
    public:
        Piece();
        Piece(int xPos, int yPos);
        Piece(int xPos, int yPos, bool color);
        int getPositionX(){return x;}
        int getPositionY(){return y;}
        void setPositionX(int numX){x = numX;}
        void setPositionY(int numY){y = numY;}   
        
        virtual bool isEmpty() const {
            return true;
        }
        virtual string getID() const {
            return "hehehaw";
        }
        virtual void movePiece(int x, int y){
            setPositionX(x);
            setPositionY(y);
        }
    
    private:
        int x;
        int y;
        bool isWhite;
        //int counter;v

};

#endif