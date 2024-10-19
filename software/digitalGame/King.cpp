#include <iostream>
#include "King.hpp"
using namespace std;

int counter = 0;
int x = 0;
int y = 0;

bool isValid(int xT, int yT);
void movePiece(int xM, int yM);

/*int getPositionX(){return x;}
int getPositionY(){return y;}
void setPositionX(int numX){x = numX;}
void setPositionY(int numY){y = numY;}
*/

King::King(int xPos, int yPos){
    x = xPos;
    y = yPos;
    counter = 0;
}

King k(0,0);

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

    return false;
}
