#include <iostream>
#include "Pawn.h"

int counter = 0;

void Pawn::movePiece(int xM, int yM){
    if(this->isValid(xM, yM)){
        this->setPositionX(this->getPositionX() + xM);
        this->setPositionY(this->getPositionX() + yM);
        counter++;
    }
}

bool Pawn::isValid(int xT, int yT){

    if(!(this->getPositionX() + xT < 0) && !(this->getPositionX() + xT > 8)){
        if(!(this->getPositionY() + yT < 0) && !(this->getPositionY() + yT > 8)){
            if(xT != 0){
                return false;
            }

            if(counter == 0){
               if(yT == 1 || yT == 2){
                    return true;
                }
                else{
                    return false;
                } 
            }
            else{
                if(yT == 1){
                    return true;
                }
                else{
                    return false;
                }
            } 
        }
    }

}

bool Piece::isEmpty(){return false;}
