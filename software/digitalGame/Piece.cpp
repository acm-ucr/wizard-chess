#include "Piece.h"

Piece :: Piece(){
    x = 0;
    y = 0;
    //counter = 0;
}

Piece :: Piece(int xPos, int yPos, bool color){
    x = xPos;
    y = yPos;
    isWhite = color;

    //counter = 0;
}

Piece::Piece(int xPos, int yPos){
    x = xPos;
    y = yPos;
}

/*string Piece::getID(){
    return "hehehaw";
}

bool Piece::isEmpty(){
    return true;
}*/