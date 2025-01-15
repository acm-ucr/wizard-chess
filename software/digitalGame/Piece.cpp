#include "Piece.h"

Piece::Piece(){
    x = 0;
    y = 0;
    counter = 0;
}

int Piece::getMoveCounter(){
    return counter;
}

void Piece::setMoveCounter(int num){
    counter += num;
}

Piece::Piece(int xPos, int yPos, bool color){
    x = xPos;
    y = yPos;
    isWhite = color;
    counter = 0;
}

Piece::Piece(int xPos, int yPos){
    x = xPos;
    y = yPos;
}

string Piece::getPosition(){
    string coordinate = getCharPositionX() + to_string(getPositionY() + 1);
    return coordinate;
}

int Piece::convertToInt(char x){
    if(x == 'a'){
        return 0;
    }
    else if(x == 'b'){
        return 1;
    }
    else if(x == 'c'){
        return 2;
    }
    else if(x == 'd'){
        return 3;
    }
    else if(x == 'e'){
        return 4;
    }
    else if(x == 'f'){
        return 5;
    }
    else if(x == 'g'){
        return 6;
    }
    else if(x == 'h'){
        return 7;
    }
    return this->x;
}
// int Piece::convertToInt(char x){
//     if(x == 'a'){
//         return 0;
//     }
//     else if(x == 'b'){
//         return 1;
//     }
//     else if(x == 'c'){
//         return 2;
//     }
//     else if(x == 'd'){
//         return 3;
//     }
//     else if(x == 'e'){
//         return 4;
//     }
//     else if(x == 'f'){
//         return 5;
//     }
//     else if(x == 'g'){
//         return 6;
//     }
//     else if(x == 'h'){
//         return 7;
//     }
//     else{
//         return this->x;
//     }
// }

string Piece::getCharPositionX(){
    if(x == 0){
        return "a";
    }
    else if(x == 1){
        return "b";
    }
    else if(x == 2){
        return "c";
    }
    else if(x == 3){
        return "d";
    }
    else if(x == 4){
        return "e";
    }
    else if(x == 5){
        return "f";
    }
    else if(x == 6){
        return "g";
    }
    else if(x == 7){
        return "h";
    }
}

/*string Piece::getID(){
    return "hehehaw";
}

bool Piece::isEmpty(){
    return true;
}*/
