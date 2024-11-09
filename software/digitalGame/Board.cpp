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


Board::Board(){
    //cout << "constructor called" << endl;
    board.resize(8);
    for(int i = 0; i < 8; i++){
        board[i].resize(8);
    }

    //Initialize empty pieces
    for(int i = 0; i < 8; i++){
        for(int j = 2; j < 6; j++){
            board[i][j] = new Empty(i, j);
        }
    }
   
    //Initialize White Pawns
    for(int i = 0; i < 8; i++){
        board[1][i] = new Pawn(1, i, true);
    }


    //Initialize Black Pawns
    for(int i = 0; i < 8; i++){
        board[6][i] = new Pawn(6, i, false);
    }


    //Initialize White Rooks
    board[0][0] = new Rook(0, 0, true);
    board[7][0] = new Rook(7, 0, true);


    //Initialize Black Rooks
    board[0][7] = new Rook(0, 7, false);
    board[7][7] = new Rook(7, 7, false);


    //Initialize White Knights
    board[1][0] = new Knight(1, 0, true);
    board[6][0] = new Knight(6, 0, true);


    //Initialize Black Knights
    board[1][7] = new Knight(1, 7, false);
    board[6][7] = new Knight(6, 7, false);


    //Initialize White Bishops
    board[2][0] = new Bishop(2, 0, true);
    board[5][0] = new Bishop(5, 0, true);


    //Initialize Black Bishops
    board[2][7] = new Bishop(2, 7, false);
    board[5][7] = new Bishop(5, 7, false);


    //Initialize White Queen
    board[3][0] = new Queen(3, 0, true);


    //Initialize Black Queen
    board[3][7] = new Queen(3, 7, false);


    //Initialize White King
    board[4][0] = new King(4, 0, true);


    //Initialize Black King
    board[4][7] = new King(4, 7, false);

}


void Board::resetBoard() {

    //Initialize empty pieces
    for(int i = 0; i < 8; i++){
        for(int j = 2; j < 6; j++){
            board[i][j] = new Empty(i, j);
        }
    }
   
    //Initialize White Pawns
    for(int i = 0; i < 8; i++){
        board[1][i] = new Pawn(1, i, true);
    }


    //Initialize Black Pawns
    for(int i = 0; i < 8; i++){
        board[6][i] = new Pawn(6, i, false);
    }


    //Initialize White Rooks
    board[0][0] = new Rook(0, 0, true);
    board[7][0] = new Rook(7, 0, true);


    //Initialize Black Rooks
    board[0][7] = new Rook(0, 7, false);
    board[7][7] = new Rook(7, 7, false);


    //Initialize White Knights
    board[1][0] = new Knight(1, 0, true);
    board[6][0] = new Knight(6, 0, true);


    //Initialize Black Knights
    board[1][7] = new Knight(1, 7, false);
    board[6][7] = new Knight(6, 7, false);


    //Initialize White Bishops
    board[2][0] = new Bishop(2, 0, true);
    board[5][0] = new Bishop(5, 0, true);


    //Initialize Black Bishops
    board[2][7] = new Bishop(2, 7, false);
    board[5][7] = new Bishop(5, 7, false);


    //Initialize White Queen
    board[3][0] = new Queen(3, 0, true);


    //Initialize Black Queen
    board[3][7] = new Queen(3, 7, false);


    //Initialize White King
    board[4][0] = new King(4, 0, true);


    //Initialize Black King
    board[4][7] = new King(4, 7, false);
}


Board::~Board() {
    /*for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            delete board[i][j]; // Delete the individual piece
        }
        //delete[] board[i]; // Delete the row
    }
    //delete[] board; // Delete the board itself


    cout << "Destructor Called" << endl;
    */
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


/*void Board::updateBoard(){
    board[pw0.getPositionX()][pw0.getPositionY()] = pw0;
    board[pw1.getPositionX()][pw1.getPositionY()] = pw1;
    board[pw2.getPositionX()][pw2.getPositionY()] = pw2;
    board[pw3.getPositionX()][pw3.getPositionY()] = pw3;
    board[pw4.getPositionX()][pw4.getPositionY()] = pw4;
    board[pw5.getPositionX()][pw5.getPositionY()] = pw5;
    board[pw6.getPositionX()][pw6.getPositionY()] = pw6;
    board[pw7.getPositionX()][pw7.getPositionY()] = pw7;
    board[pb0.getPositionX()][pb0.getPositionY()] = pb0;
    board[pb1.getPositionX()][pb1.getPositionY()] = pb1;
    board[pb2.getPositionX()][pb2.getPositionY()] = pb2;
    board[pb3.getPositionX()][pb3.getPositionY()] = pb3;
    board[pb4.getPositionX()][pb4.getPositionY()] = pb4;
    board[pb5.getPositionX()][pb5.getPositionY()] = pb5;
    board[pb6.getPositionX()][pb6.getPositionY()] = pb6;
    board[pb7.getPositionX()][pb7.getPositionY()] = pb7;

    //Castle(Rooks)
    board[rw0.getPositionX()][rw0.getPositionY()] = rw0;
    board[rw1.getPositionX()][rw1.getPositionY()] = rw1;
    board[rb0.getPositionX()][rb0.getPositionY()] = rb0;
    board[rb1.getPositionX()][rb1.getPositionY()] = rb1;


    //Knights
    board[kw0.getPositionX()][kw0.getPositionY()] = kw0;
    board[kw1.getPositionX()][kw0.getPositionY()] = kw1;
    board[kb0.getPositionX()][kb0.getPositionY()] = kb0;
    board[kb1.getPositionX()][kb0.getPositionY()] = kb1;


    //Bishops
    board[bw0.getPositionX()][bw0.getPositionY()] = bw0;
    board[bw1.getPositionX()][bw1.getPositionY()] = bw1;
    board[bb0.getPositionX()][bb0.getPositionY()] = bb0;
    board[bb1.getPositionX()][bb1.getPositionY()] = bb1;


    //Queen
    board[qw.getPositionX()][qw.getPositionY()] = qw;
    board[qb.getPositionX()][qb.getPositionY()] = qb;


    //King
    board[kw.getPositionX()][kw.getPositionY()] = kw;
    board[kb.getPositionX()][kb.getPositionY()] = kb;
}*/


bool Board::takePiece(int newX, int newY){
    if(!(board[newX][newY]->isEmpty())){
        return true;
    }
    return false;
}


void Board::swap(int oldX, int oldY, int newX, int newY){
    if(!takePiece(newX, newY)){
        Piece temp = *board[oldX][oldY];


        board[oldX][oldY]->setPositionX(newX);
        board[oldX][oldY]->setPositionY(newY);


        board[newX][newY]->setPositionX(oldX);
        board[newX][newY]->setPositionY(oldY);


        board[oldX][oldY] = board[newX][newY];
        *board[newX][newY] = temp;
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
    //updateBoard();
    


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
