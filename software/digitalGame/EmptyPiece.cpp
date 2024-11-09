#include <iostream>
#include "EmptyPiece.h"

Empty::Empty() : Piece(){}

Empty::Empty(int xPos, int yPos) : Piece(xPos, yPos){
    
}

/*string Empty::getID(){
    return "empty";
}

bool Empty::isEmpty(){
    return true;
}*/

void Empty::movePiece(int xM, int yM){ 
     this->setPositionX(this->getPositionX() + xM);
     this->setPositionY(this->getPositionY() + yM); 
}
