#include <iostream>
#include "Knight.h"

Knight::Knight() : Piece(){}

Knight::Knight(int xPos, int yPos, bool color) : Piece(xPos, yPos, color){
    
}

/*string Knight::getID(){
    return "knight";
}

bool Knight::isEmpty(){
    return false;
}*/

void Knight::movePiece(int xM, int yM){

    if(this->isValid(xM, yM)){
        this->setPositionX(this->getPositionX() + xM);
        this->setPositionY(this->getPositionY() + yM);
    }
}

bool Knight::isValid(int xT, int yT){

    if(!(this->getPositionX() + xT < 0) && !(this->getPositionX() + xT > 8)){
        if(!(this->getPositionY() + yT < 0) && !(this->getPositionY() + yT > 8)){
            if(xT == 1){
                if(yT == 2 || yT == -2){
                    return true;
                }
            }
            else if(xT == 2){
                if(yT == 1 || yT == -1){
                    return true;
                }
            }
            else if(xT == -1){
                if(yT == 2 || yT == -2){
                    return true;
                }
            }
            else if(xT == -2){
                if(yT == 1 || yT == -1){
                    return true;
                }
            }
        }
    }

    return false;
}

