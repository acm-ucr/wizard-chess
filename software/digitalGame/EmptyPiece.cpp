#include <iostream>
#include "EmptyPiece.h"

Empty::Empty() : Piece(){}

Empty::Empty(int xPos, int yPos, bool color) : Piece(xPos, yPos, color){
    
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
