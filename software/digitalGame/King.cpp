#include <iostream>
#include "King.h"

void King::movePiece(int xM, int yM){
    if(this->isValid(xM, yM)){
        this->setPositionX(this->getPositionX() + xM);
        this->setPositionY(this->getPositionY() + yM);
    }
}

bool King::isValid(int xT, int yT){

    if(!(this->getPositionX() + xT < 0) && !(this->getPositionX() + xT > 8)){
        if(!(this->getPositionY() + yT < 0) && !(this->getPositionY() + yT > 8)){
            if(xT == 0){
                if(yT == 1 || yT == -1){
                    return true;
                }
            }
            else if(y == 0){
                if(xT == 1 || xT == -1){
                    return true;
                }
            }
            else if((xT == 1 || xT  == -1) && (yT == xT || yT == -xT)){
                    return true;
            }
        }
    }

    return false;
}

bool Piece::isEmpty(){return false;}