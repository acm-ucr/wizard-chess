#include <iostream>
#include "Castle.hpp"
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

Castle::Castle(int xPos, int yPos){
    x = xPos;
    y = yPos;
    counter = 0;
}

Castle c(0,0);

int main(){
    int num1;
    int num2;

    cin >> num1;
    cin >> num2;

    cout << c.getPositionX() << " " << c.getPositionY() << endl;
    movePiece(num1, num2);
    cout << c.getPositionX() << " " << c.getPositionY() << endl;
    
}


void movePiece(int xM, int yM){
    if(isValid(xM, yM)){
        c.setPositionX(c.getPositionX() + xM);
        c.setPositionY(c.getPositionY() + yM);
        counter++;
    }
}

bool isValid(int xT, int yT){
    if(xT == 0){
        if(yT < 8 && yT > -8){
            return true;
        }
    }
    else if(y == 0){
        if(xT < 8 && xT > -8){
            return true;
        }
    }

    return false;
}
