#include <iostream>
#include "Board.h"
#include "Piece.h"
#include "Piece.h"
#include "Pawn.h"
#include "Bishop.h"
#include "Knight.h"
#include "Queen.h"
#include "King.h"
#include "Rook.h"


using namespace std;


int eCounter = 0;


Board::Board() : 

// Initialize white pawns
    pw0(0, 1, true), pw1(1, 1, true), pw2(2, 1, true), pw3(3, 1, true), pw4(4, 1, true), pw5(5, 1, true), pw6(6, 1, true), pw7(7, 1, true),
    // Initialize black pawns
    pb0(0, 6, false), pb1(1, 6, false), pb2(2, 6, false), pb3(3, 6, false), pb4(4, 6, false), pb5(5, 6, false), pb6(6, 6, false), pb7(7, 6, false),
    // Initialize white rooks (castles)
    rw0(0, 0, true), rw1(7, 0, true),
    // Initialize black rooks (castles)
    rb0(0, 7, false), rb1(7, 7, false),
    // Initialize white knights
    kw0(1, 0, true), kw1(6, 0, true),
    // Initialize black knights
    kb0(1, 7, false), kb1(6, 7, false),
    // Initialize white bishops
    bw0(2, 0, true), bw1(5, 0, true),
    // Initialize black bishops
    bb0(2, 7, false), bb1(5, 7, false),
    // Initialize queens
    qw(3, 0, true), qb(3, 7, false),
    // Initialize kings
    kw(4, 0, true), kb(4, 7, false),
    // Additional initialization if needed

    // Initialize empty pieces
    e0(0,2), e1(1,2), e2(2,2), e3(3,2), e4(4,2), e5(5,2), e6(6,2), e7(7,2),
    e8(0,3), e9(1,3), e10(2,3), e11(3,3), e12(4,3), e13(5,3), e14(6,3), e15(7,3),
    e16(0,4), e17(1,4), e18(2,4), e19(3,4), e20(4,4), e21(5,4), e22(6,4), e23(7,4),
    e24(0,5), e25(1,5), e26(2,5), e27(3,5), e28(4,5), e29(5,5), e30(6,5), e31(7,5)

{
    cout << "constructor called" << endl;
    
    board[0][2] = &e0;
    board[1][2] = &e1;
    board[2][2] = &e2;
    board[3][2] = &e3;
    board[4][2] = &e4;
    board[5][2] = &e5;
    board[6][2] = &e6;
    board[7][2] = &e7;
    board[0][3] = &e8;
    board[1][3] = &e9;
    board[2][3] = &e10;
    board[3][3] = &e11;
    board[4][3] = &e12;
    board[5][3] = &e13;
    board[6][3] = &e14;
    board[7][3] = &e15;
    board[0][4] = &e16;
    board[1][4] = &e17;
    board[2][4] = &e18;
    board[3][4] = &e19;
    board[4][4] = &e20;
    board[5][4] = &e21;
    board[6][4] = &e22;
    board[7][4] = &e23;
    board[0][5] = &e24;
    board[1][5] = &e25;
    board[2][5] = &e26;
    board[3][5] = &e27;
    board[4][5] = &e28;
    board[5][5] = &e29;
    board[6][5] = &e30;
    board[7][5] = &e31;


    board[0][1] = &pw0;
    board[1][1] = &pw1;
    board[2][1] = &pw2;
    board[3][1] = &pw3;
    board[4][1] = &pw4;
    board[5][1] = &pw5;
    board[6][1] = &pw6;
    board[7][1] = &pw7;
    board[0][6] = &pb0;
    board[1][6] = &pb1;
    board[2][6] = &pb2;
    board[3][6] = &pb3;
    board[4][6] = &pb4;
    board[5][6] = &pb5;
    board[6][6] = &pb6;
    board[7][6] = &pb7;


    //Castle(Rooks)
    board[0][0] = &rw0;
    board[7][0] = &rw1;
    board[0][7] = &rb0;
    board[7][7] = &rb1;


    //Knights
    board[1][0] = &kw0;
    board[6][0] = &kw1;
    board[1][7] = &kb0;
    board[6][7] = &kb1;


    //Bishops
    board[2][0] = &bw0;
    board[5][0] = &bw1;
    board[2][7] = &bb0;
    board[5][7] = &bb1;


    //Queen
    board[3][0] = &qw;
    board[3][7] = &qb;


    //King
    board[4][0] = &kw;
    board[4][7] = &kb;
}


void Board::resetBoard() {

    board[0][2] = &e0;
    board[1][2] = &e1;
    board[2][2] = &e2;
    board[3][2] = &e3;
    board[4][2] = &e4;
    board[5][2] = &e5;
    board[6][2] = &e6;
    board[7][2] = &e7;
    board[0][3] = &e8;
    board[1][3] = &e9;
    board[2][3] = &e10;
    board[3][3] = &e11;
    board[4][3] = &e12;
    board[5][3] = &e13;
    board[6][3] = &e14;
    board[7][3] = &e15;
    board[0][4] = &e16;
    board[1][4] = &e17;
    board[2][4] = &e18;
    board[3][4] = &e19;
    board[4][4] = &e20;
    board[5][4] = &e21;
    board[6][4] = &e22;
    board[7][4] = &e23;
    board[0][5] = &e24;
    board[1][5] = &e25;
    board[2][5] = &e26;
    board[3][5] = &e27;
    board[4][5] = &e28;
    board[5][5] = &e29;
    board[6][5] = &e30;
    board[7][5] = &e31;


    board[0][1] = &pw0;
    board[1][1] = &pw1;
    board[2][1] = &pw2;
    board[3][1] = &pw3;
    board[4][1] = &pw4;
    board[5][1] = &pw5;
    board[6][1] = &pw6;
    board[7][1] = &pw7;
    board[0][6] = &pb0;
    board[1][6] = &pb1;
    board[2][6] = &pb2;
    board[3][6] = &pb3;
    board[4][6] = &pb4;
    board[5][6] = &pb5;
    board[6][6] = &pb6;
    board[7][6] = &pb7;


    //Castle(Rooks)
    board[0][0] = &rw0;
    board[7][0] = &rw1;
    board[0][7] = &rb0;
    board[7][7] = &rb1;


    //Knights
    board[1][0] = &kw0;
    board[6][0] = &kw1;
    board[1][7] = &kb0;
    board[6][7] = &kb1;


    //Bishops
    board[2][0] = &bw0;
    board[5][0] = &bw1;
    board[2][7] = &bb0;
    board[5][7] = &bb1;


    //Queen
    board[3][0] = &qw;
    board[3][7] = &qb;


    //King
    board[4][0] = &kw;
    board[4][7] = &kb;
}


Board::~Board() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            delete board[i][j]; // Delete the individual piece
        }
        //delete[] board[i]; // Delete the row
    }
    //delete[] board; // Delete the board itself


    cout << "Destructor Called" << endl;
}


Piece Board::getPiece(int first, int second) {
    cout << "ENTERING" << endl;
    cout << (*board[first][second]).getID() <<endl;
    cout << "EXITING" << endl;

    return *board[first][second];
}

void Board::printBoard() {
    cout << "In print board" <<endl;
}


void Board::updateBoard(){
    *board[pw0.getPositionX()][pw0.getPositionY()] = pw0;
    *board[pw1.getPositionX()][pw1.getPositionY()] = pw1;
    *board[pw2.getPositionX()][pw2.getPositionY()] = pw2;
    *board[pw3.getPositionX()][pw3.getPositionY()] = pw3;
    *board[pw4.getPositionX()][pw4.getPositionY()] = pw4;
    *board[pw5.getPositionX()][pw5.getPositionY()] = pw5;
    *board[pw6.getPositionX()][pw6.getPositionY()] = pw6;
    *board[pw7.getPositionX()][pw7.getPositionY()] = pw7;
    *board[pb0.getPositionX()][pb0.getPositionY()] = pb0;
    *board[pb1.getPositionX()][pb1.getPositionY()] = pb1;
    *board[pb2.getPositionX()][pb2.getPositionY()] = pb2;
    *board[pb3.getPositionX()][pb3.getPositionY()] = pb3;
    *board[pb4.getPositionX()][pb4.getPositionY()] = pb4;
    *board[pb5.getPositionX()][pb5.getPositionY()] = pb5;
    *board[pb6.getPositionX()][pb6.getPositionY()] = pb6;
    *board[pb7.getPositionX()][pb7.getPositionY()] = pb7;


    //Castle(Rooks)
    *board[rw0.getPositionX()][rw0.getPositionY()] = rw0;
    *board[rw1.getPositionX()][rw1.getPositionY()] = rw1;
    *board[rb0.getPositionX()][rb0.getPositionY()] = rb0;
    *board[rb1.getPositionX()][rb1.getPositionY()] = rb1;


    //Knights
    *board[kw0.getPositionX()][kw0.getPositionY()] = kw0;
    *board[kw1.getPositionX()][kw0.getPositionY()] = kw1;
    *board[kb0.getPositionX()][kb0.getPositionY()] = kb0;
    *board[kb1.getPositionX()][kb0.getPositionY()] = kb1;


    //Bishops
    *board[bw0.getPositionX()][bw0.getPositionY()] = bw0;
    *board[bw1.getPositionX()][bw1.getPositionY()] = bw1;
    *board[bb0.getPositionX()][bb0.getPositionY()] = bb0;
    *board[bb1.getPositionX()][bb1.getPositionY()] = bb1;


    //Queen
    *board[qw.getPositionX()][qw.getPositionY()] = qw;
    *board[qb.getPositionX()][qb.getPositionY()] = qb;


    //King
    *board[kw.getPositionX()][kw.getPositionY()] = kw;
    *board[kb.getPositionX()][kb.getPositionY()] = kb;
}


bool Board::takePiece(int newX, int newY){
    if(!(board[newX][newY]->isEmpty())){
        return true;
    }
    return false;
}


void Board::swap(int oldX, int oldY, int newX, int newY){
    if(!takePiece(newX, newY)){
        Piece *temp = board[oldX][oldY];


        board[oldX][oldY]->setPositionX(newX);
        board[oldX][oldY]->setPositionY(newY);


        board[newX][newY]->setPositionX(oldX);
        board[newX][newY]->setPositionY(oldY);


        board[oldX][oldY] = board[newX][newY];
        board[newX][newY] = temp;
        //updateBoard();
    }
    else{
        Empty spawnE(oldX, oldY);
        //spawnE.setPositionX(oldX);
        //spawnE.setPositionY(oldY);
       
        //emptyPieces.push_back(spawnE);


        board[oldX][oldY]->setPositionX(newX);
        board[oldX][oldY]->setPositionY(newY);


        board[newX][newY] = board[oldX][oldY];
        board[oldX][oldY] = new Empty(oldX, oldY);
       // updateBoard();
       // eCounter++;
    }


}


void Board::promote(Pawn *p, Piece *piece){
    if(p->getPositionY() == 7 || p->getPositionY() == 0){
        board[p->getPositionX()][p->getPositionY()] = piece;
    }
    /*return false;


    if(p.isPromote(p.getPositionY())){
        board[p.getPositionX()][p.getPositionY()] = piece;
    }*/
}

Board Board::getUpdatedBoard(){
    Piece newBoard[8][8];
    updateBoard();
    


}

/*int Board::rangeMinX(Piece p){
    int counterX = p.getPositionX();
    int counterY = p.getPositionY();
    p.movePiece(1, 1);
    while(p.getPositionX() != ){

    }

}

int Board::rangeMaxX(Piece p){

}

int Board::rangeMinY(Piece p){

}

int Board::rangeMaxY(Piece p){

}*/

/*int main(){
    // Board b;

    Rook rook;

    cout << "Entering Main" << endl;

    cout << rook.getID() << endl;
}*/
