#include <iostream>
#include "Pawn.h"

int counter = 0;

Pawn::Pawn() : Piece(){}

Pawn::Pawn(int xPos, int yPos, bool color) : Piece(xPos, yPos, color){
  
}

/*string Pawn::getID(){
    return "pawn";
}

bool Pawn::isEmpty(){
    return false;
}*/

void Pawn::movePiece(int xM, int yM){
    if(this->isValid(xM, yM)){
        this->setPositionX(this->getPositionX() + xM);
        this->setPositionY(this->getPositionX() + yM);
        counter++;
    }
}

bool Pawn::isValid(int xT, int yT){

    if(!(this->getPositionX() + xT < 0) && !(this->getPositionX() + xT > 7)){
        if(!(this->getPositionY() + yT < 0) && !(this->getPositionY() + yT > 7)){
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

    return false;
}

bool Pawn::isPromote(int y){
    if(y == 7 || y == 0){
        return true;
    }
    return false;
}