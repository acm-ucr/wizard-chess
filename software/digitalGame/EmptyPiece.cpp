#include <iostream>
#include "EmptyPiece.h"

void Empty::movePiece(int xM, int yM){ 
     this->setPositionX(this->getPositionX() + xM);
     this->setPositionY(this->getPositionY() + yM); 
}

bool Piece::isEmpty(){return true;}
