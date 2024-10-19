#include <iostream>
#include "Bishop.hpp"
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

Bishop::Bishop(int xPos, int yPos){
    x = xPos;
    y = yPos;
    counter = 0;
}

Bishop b(0,0);

int main(){
    int num1;
    int num2;

    cin >> num1;
    cin >> num2;

    cout << b.getPositionX() << " " << b.getPositionY() << endl;
    movePiece(num1, num2);
    cout << b.getPositionX() << " " << b.getPositionY() << endl;
    
}


void movePiece(int xM, int yM){
    if(isValid(xM, yM)){
        b.setPositionX(b.getPositionX() + xM);
        b.setPositionY(b.getPositionY() + yM);
        counter++;
    }
}

bool isValid(int xT, int yT){
    if((xT < 8 && xT > -8) && (yT == xT || yT == -xT)){
            return true;
    }

    return false;
}
