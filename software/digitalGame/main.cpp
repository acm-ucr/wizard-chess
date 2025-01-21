#include <iostream>
#include <string>
#include <array>
#include <cstdio>
#include <memory>
#include <fstream>
//#include "stockfish.h"
#include "Board.h"
using namespace std;


int main() {
    Board b;
    b.printBoard();
    b.playGame();
    if(b.isCheck()){
        cout << "success" << endl;
    }
    else {
        cout << "failure" << endl;
    }
    return 0;
}