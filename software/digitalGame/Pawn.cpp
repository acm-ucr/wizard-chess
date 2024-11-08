#include <iostream>
#include "Pawn.hpp"
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

Pawn::Pawn(int xPos, int yPos){
    x = xPos;
    y = yPos;
    counter = 0;
}

Pawn p(0,0);

int main(){
    int num1;
    int num2;

    cin >> num1;
    cin >> num2;

    cout << p.getPositionX() << " " << p.getPositionY() << endl;
    movePiece(num1, num2);
    cout << p.getPositionX() << " " << p.getPositionY() << endl;
    
}


void movePiece(int xM, int yM){
    if(isValid(xM, yM)){
        p.setPositionX(p.getPositionX() + xM);
        p.setPositionY(p.getPositionX() + yM);
        counter++;
    }
}

bool isValid(int xT, int yT){
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
