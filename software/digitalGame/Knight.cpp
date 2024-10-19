#include <iostream>
#include "Knight.hpp"
using namespace std;

int counter = 0;
int x;
int y;

bool isValid(int xT, int yT);
void movePiece(int xM, int yM);

/*int getPositionX(){return x;}
int getPositionY(){return y;}
void setPositionX(int numX){x = numX;}
void setPositionY(int numY){y = numY;}
*/


Knight::Knight(int xPos, int yPos){
    x = xPos;
    y = yPos;
    counter = 0;
}

Knight k(4,4);

int main(){
    int num1;
    int num2;

    cin >> num1;
    cin >> num2;

    cout << k.getPositionX() << " " << k.getPositionY() << endl;
    movePiece(num1, num2);
    cout << k.getPositionX() << " " << k.getPositionY() << endl;
    
}


void movePiece(int xM, int yM){
    if(isValid(xM, yM)){
        k.setPositionX(k.getPositionX() + xM);
        k.setPositionY(k.getPositionY() + yM);
        counter++;
    }
}

bool isValid(int xT, int yT){
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

    return false;
}
