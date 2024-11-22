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

string Piece::getPosition(){
    string coordinate = getCharPositionX() + to_string(getPositionY());
    return coordinate;
}

string Piece::getCharPositionX(){
    if(x == 0){
        return "a";
    }
    else if(x == 1){
        return "b";
    }
    else if(x == 2){
        return "c";
    }
    else if(x == 3){
        return "d";
    }
    else if(x == 4){
        return "e";
    }
    else if(x == 5){
        return "f";
    }
    else if(x == 6){
        return "g";
    }
    else if(x == 7){
        return "h";
    }
}

/*string Piece::getID(){
    return "hehehaw";
}

bool Piece::isEmpty(){
    return true;
}*/