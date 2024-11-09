#include <iostream>
#include "Rook.h"


Rook::Rook() : Piece(){
    cout << "HELLO WORLD" << endl;
}

Rook::Rook(int xPos, int yPos, bool color) : Piece(xPos, yPos, color){
    cout << "PARAMETERIZED CONSTRUCTOR" << endl;
}

/*string Rook::getID(){
    return "rook";
}

bool Rook::isEmpty(){
    return false;
}*/

void Rook::movePiece(int xM, int yM){
    if(this->isValid(xM, yM)){
        this->setPositionX(this->getPositionX() + xM);
        this->setPositionY(this->getPositionY() + yM);
    }
}

// int rangeMinX(){
    
// }

// int rangeMaxX(){

// }

// int rangeMinY(){

// }

// int rangeMaxY(){

// }

bool Rook::isValid(int xT, int yT){

    if(!(this->getPositionX() + xT < 0) && !(this->getPositionX() + xT > 8)){
        if(!(this->getPositionY() + yT < 0) && !(this->getPositionY() + yT > 8)){
            if(xT == 0){
                if(yT < 8 && yT > -8){
                    return true;
                }
            }
            else if(yT == 0){
                if(xT < 8 && xT > -8){
                    return true;
                }
            }
        }
    }

    return false;
}