#include <iostream>
#include "Bishop.h"

Bishop::Bishop() : Piece(){}

Bishop::Bishop(int xPos, int yPos, bool color) : Piece(xPos, yPos, color){
    
}

void Bishop::movePiece(int xM, int yM){
    //if(this->isValid(xM, yM)){
        this->setPositionX(this->getPositionX() + xM);
        this->setPositionY(this->getPositionY() + yM);
    //}
}

bool Bishop::isValid(int xT, int yT){
    if(!(this->getPositionX() + xT < 0) && !(this->getPositionX() + xT > 7)){
        if(!(this->getPositionY() + yT < 0) && !(this->getPositionY() + yT > 7)){
            if((xT < 8 && xT > -8) && (yT == xT || yT == -xT)){
                    return true;
            }
        }
    }

    return false;
}