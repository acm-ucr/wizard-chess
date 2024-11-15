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

Board::Board(){
    //cout << "constructor called" << endl;
    board.resize(8);
    for(int i = 0; i < 8; i++){
        board[i].resize(8);
    }

    //Initialize empty pieces
    for(int i = 2; i < 6; i++){
        for(int j = 0; j < 8; j++){
            board[i][j] = new Empty(j, i);
        }
    }
   
    //Initialize White Pawns
    for(int i = 0; i < 8; i++){
        board[1][i] = new Pawn(i, 1, true);
    }


    //Initialize Black Pawns
    for(int i = 0; i < 8; i++){
        board[6][i] = new Pawn(i, 6, false);
    }


    //Initialize White Rooks
    board[0][0] = new Rook(0, 0, true);
    board[0][7] = new Rook(7, 0, true);


    //Initialize Black Rooks
    board[7][0] = new Rook(0, 7, false);
    board[7][7] = new Rook(7, 7, false);


    //Initialize White Knights
    board[0][1] = new Knight(1, 0, true);
    board[0][6] = new Knight(6, 0, true);


    //Initialize Black Knights
    board[7][1] = new Knight(1, 7, false);
    board[7][6] = new Knight(6, 7, false);


    //Initialize White Bishops
    board[0][2] = new Bishop(2, 0, true);
    board[0][5] = new Bishop(5, 0, true);


    //Initialize Black Bishops
    board[7][2] = new Bishop(2, 7, false);
    board[7][5] = new Bishop(5, 7, false);


    //Initialize White Queen
    board[0][3] = new Queen(3, 0, true);


    //Initialize Black Queen
    board[7][3] = new Queen(3, 7, false);


    //Initialize White King
    //King *kw = new King(4, 0, true);
    board[0][4] = kw;


    //Initialize Black King
    //King *kb = new King(4, 7, false);
    board[7][4] = kb;

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
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            delete board[i][j]; // Delete the individual piece
        }  
    }
    cout << "Destructor Called" << endl;   
}

void Board::printBoard() {
    for(int i = 0; i < 8; i++){
        cout << endl;
        for(int j = 0; j < 8; j++){
            cout << board[i][j]->getID() << ", ";
        }
    }

    cout << endl;

    //cout << board[4][1]->getID() << ", " << board[4][3]->getID() << endl;
}

bool Board::takePiece(int oldX, int oldY, int newX, int newY){
    if(!(board[newY][newX]->isEmpty()) && isOppositeColor(board[oldY][oldX], board[newY][newX])){
        return true;
    }
    return false;
}

void Board::swap(int oldX, int oldY, int newX, int newY){
    if(!takePiece(oldX, oldY, newX, newY)){
        Piece *temp = board[oldY][oldX];

        board[oldY][oldX]->setPositionX(newX);
        board[oldY][oldX]->setPositionY(newY);

        board[newY][newX]->setPositionX(oldX);
        board[newY][newX]->setPositionY(oldY);

        board[oldY][oldX] = board[newY][newX];
        board[newY][newX] = temp;
    }
    else{
        board[oldY][oldX]->setPositionX(newX);
        board[oldY][oldX]->setPositionY(newY);

        board[newY][newX] = board[oldX][oldY];
        board[oldY][oldX] = new Empty(oldX, oldY);
    }


}

void Board::promote(Pawn *p, Piece *piece){
    if(p->getPositionY() == 7 || p->getPositionY() == 0){
        board[p->getPositionY()][p->getPositionX()] = piece;
    }
}

bool Board::isOppositeColor(Piece *p1, Piece *p2){
    if((p1->white() && !p2->white()) || (!p1->white() && p2->white())){
        return true;
    }
    return false;
}

int Board::simulateUp(Piece *p){
    int counterY = 0;
    
    int currXPos = p->getPositionX();
    int currYPos = p->getPositionY();

    p->movePiece(0, 1);
    while((board[p->getPositionY()][p->getPositionX()]->getID() == "empty") && 
          (currXPos != p->getPositionX() && currYPos != p->getPositionY()))
        {
            currXPos = p->getPositionX();
            currYPos = p->getPositionY();

            p->movePiece(0, 1);
            counterY++;
        }
    if(isOppositeColor(board[p->getPositionY()][p->getPositionX()], p)){
        counterY++;
    }
    return counterY;
}

int Board::simulate45X(Piece *p){
    int counterX = 0;

    int currXPos = p->getPositionX();
    int currYPos = p->getPositionY();

    p->movePiece(1, 1);
    while((board[p->getPositionY()][p->getPositionX()]->getID() == "empty") && 
          (currXPos != p->getPositionX() && currYPos != p->getPositionY()))
        {
            currXPos = p->getPositionX();
            currYPos = p->getPositionY();

            p->movePiece(1, 1);
            counterX++;
        }
    if(isOppositeColor(board[p->getPositionY()][p->getPositionX()], p)){
        counterX++;
    }
    return counterX;
}

int Board::simulate45Y(Piece *p){
    int counterY = 0;

    int currXPos = p->getPositionX();
    int currYPos = p->getPositionY();

    p->movePiece(1, 1);
     while((board[p->getPositionY()][p->getPositionX()]->getID() == "empty") && 
          (currXPos != p->getPositionX() && currYPos != p->getPositionY()))
        {
            currXPos = p->getPositionX();
            currYPos = p->getPositionY();

            p->movePiece(1, 1);
            counterY++;
        }
    if(isOppositeColor(board[p->getPositionY()][p->getPositionX()], p)){
        counterY++;
    }
    return counterY;
}

int Board::simulateRight(Piece *p){
    int counterX = 0;

    int currXPos = p->getPositionX();
    int currYPos = p->getPositionY();

    p->movePiece(1, 0);
    while((board[p->getPositionY()][p->getPositionX()]->getID() == "empty") && 
          (currXPos != p->getPositionX() && currYPos != p->getPositionY()))
        {
            currXPos = p->getPositionX();
            currYPos = p->getPositionY();

            p->movePiece(1, 0);
            counterX++;
        }
    if(isOppositeColor(board[p->getPositionY()][p->getPositionX()], p)){
        counterX++;
    }
    return counterX;
}

int Board::simulate135X(Piece *p){
    int counterX = 0;

    int currXPos = p->getPositionX();
    int currYPos = p->getPositionY();

    p->movePiece(1, -1);
    while((board[p->getPositionY()][p->getPositionX()]->getID() == "empty") && 
          (currXPos != p->getPositionX() && currYPos != p->getPositionY()))
        {
            currXPos = p->getPositionX();
            currYPos = p->getPositionY();

            p->movePiece(1, -1);
            counterX++;
        }
    if(isOppositeColor(board[p->getPositionY()][p->getPositionX()], p)){
        counterX++;
    }
    return counterX;
}

int Board::simulate135Y(Piece *p){
    int counterY = 0;

    int currXPos = p->getPositionX();
    int currYPos = p->getPositionY();

    p->movePiece(1, -1);
    while((board[p->getPositionY()][p->getPositionX()]->getID() == "empty") && 
          (currXPos != p->getPositionX() && currYPos != p->getPositionY()))
        {
            currXPos = p->getPositionX();
            currYPos = p->getPositionY();

            p->movePiece(1, -1);
            counterY--;
        }
    if(isOppositeColor(board[p->getPositionY()][p->getPositionX()], p)){
        counterY--;
    }
    return counterY;
}

int Board::simulateDown(Piece *p){
    int counterY;

    int currXPos = p->getPositionX();
    int currYPos = p->getPositionY();

    p->movePiece(0, -1);
    while((board[p->getPositionY()][p->getPositionX()]->getID() == "empty") && 
          (currXPos != p->getPositionX() && currYPos != p->getPositionY()))
        {
            currXPos = p->getPositionX();
            currYPos = p->getPositionY();
            p->movePiece(0, -1);
            counterY--;
        }
    if(isOppositeColor(board[p->getPositionY()][p->getPositionX()], p)){
        counterY--;
    }
    return counterY;
}

int Board::simulate225X(Piece *p){
    int counterX = 0;

    int currXPos = p->getPositionX();
    int currYPos = p->getPositionY();

    p->movePiece(-1, -1);
    while((board[p->getPositionY()][p->getPositionX()]->getID() == "empty") && 
          (currXPos != p->getPositionX() && currYPos != p->getPositionY()))
        {
            currXPos = p->getPositionX();
            currYPos = p->getPositionY();
            p->movePiece(-1, -1);
            counterX--;
        }
    if(isOppositeColor(board[p->getPositionY()][p->getPositionX()], p)){
        counterX--;
    }
    return counterX;
}

int Board::simulate225Y(Piece *p){
    int counterY = 0;

    int currXPos = p->getPositionX();
    int currYPos = p->getPositionY();

    p->movePiece(-1, -1);
    while((board[p->getPositionY()][p->getPositionX()]->getID() == "empty") && 
          (currXPos != p->getPositionX() && currYPos != p->getPositionY()))
        {
            currXPos = p->getPositionX();
            currYPos = p->getPositionY();
            p->movePiece(-1, -1);
            counterY--;
        }
    if(isOppositeColor(board[p->getPositionY()][p->getPositionX()], p)){
        counterY--;
    }
    return counterY;
}

int Board::simulateLeft(Piece *p){
    int counterX = 0;

    int currXPos = p->getPositionX();
    int currYPos = p->getPositionY();

    p->movePiece(-1, 0);
    while((board[p->getPositionY()][p->getPositionX()]->getID() == "empty") && 
          (currXPos != p->getPositionX() && currYPos != p->getPositionY()))
        {
            currXPos = p->getPositionX();
            currYPos = p->getPositionY();
            p->movePiece(-1, 0);
            counterX--;
        }
    if(isOppositeColor(board[p->getPositionY()][p->getPositionX()], p)){
        counterX--;
    }
    return counterX;
}

int Board::simulate315X(Piece *p){
    int counterX = 0;

    int currXPos = p->getPositionX();
    int currYPos = p->getPositionY();

    p->movePiece(-1, 1);
    while((board[p->getPositionY()][p->getPositionX()]->getID() == "empty") && 
          (currXPos != p->getPositionX() && currYPos != p->getPositionY()))
        {
            currXPos = p->getPositionX();
            currYPos = p->getPositionY();
            p->movePiece(-1, 1);
            counterX--;
        }
    if(isOppositeColor(board[p->getPositionY()][p->getPositionX()], p)){
        counterX--;
    }
    return counterX;
}

int Board::simulate315Y(Piece *p){
    int counterY = 0;

    int currXPos = p->getPositionX();
    int currYPos = p->getPositionY();

    p->movePiece(-1, 1);
    while((board[p->getPositionY()][p->getPositionX()]->getID() == "empty") && 
          (currXPos != p->getPositionX() && currYPos != p->getPositionY()))
        {
            currXPos = p->getPositionX();
            currYPos = p->getPositionY();
            p->movePiece(-1, 1);
            counterY++;
        }
    if(isOppositeColor(board[p->getPositionY()][p->getPositionX()], p)){
        counterY++;
    }
    return counterY;
}

void Board::resetSimulation(Piece *p, int x, int y){
    p->setPositionX(x);
    p->setPositionY(y);
}

int Board::rangeLeft(Piece *p){
    Piece *tempPiece = p;

    int originalXPos = tempPiece->getPositionX();
    int originalYPos = tempPiece->getPositionY();

    int counterX7 = 0;
   
    if(tempPiece->getID() == "queen"){
        
        counterX7 = simulateLeft(tempPiece);

        resetSimulation(tempPiece, originalXPos, originalYPos);

    }
    else if(tempPiece->getID() == "rook"){

        counterX7 = simulateLeft(tempPiece);
        
    }
    else if(tempPiece->getID() == "king"){

        tempPiece->movePiece(-1, 0);
        if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
            counterX7--;
        }
        else if(isOppositeColor(board[tempPiece->getPositionY()][tempPiece->getPositionX()], tempPiece)){
            counterX7--;
        }
        resetSimulation(tempPiece, originalXPos, originalYPos);

    }
    else if(tempPiece->getID() == "knight"){
       
        tempPiece->movePiece(-2, 1);
        if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
            counterX7 = counterX7 - 2;
        }
        else if(isOppositeColor(board[tempPiece->getPositionY()][tempPiece->getPositionX()], tempPiece)){
            counterX7 = counterX7 - 2;
        }
        resetSimulation(tempPiece, originalXPos, originalYPos);

    }

    return counterX7;
}

int Board::rangeRight(Piece *p){
    int counterX3 = 0;
    Piece *tempPiece = p;

    int originalXPos = tempPiece->getPositionX();
    int originalYPos = tempPiece->getPositionY();

    if(tempPiece->getID() == "queen"){

        counterX3 = simulateRight(tempPiece);

        resetSimulation(tempPiece, originalXPos, originalYPos);

    }
    if(tempPiece->getID() == "rook"){

        counterX3 = simulateRight(tempPiece);

        resetSimulation(tempPiece, originalXPos, originalYPos);
        
    }
    if(tempPiece->getID() == "king"){

        tempPiece->movePiece(1, 0);
        if(board[tempPiece->getPositionY()][tempPiece->getPositionYX()]->getID() == "empty"){
            counterX3++;
        }
        else if(isOppositeColor(board[tempPiece->getPositionY()][tempPiece->getPositionX()], tempPiece)){
            counterX3++;
        }
        resetSimulation(tempPiece, originalXPos, originalYPos);

    }
    if(tempPiece->getID() == "knight"){

        tempPiece->movePiece(2, -1);
        if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
            counterX3 = counterX3 + 2;
        }
        else if(isOppositeColor(board[tempPiece->getPositionY()][tempPiece->getPositionX()], tempPiece)){
            counterX3 = counterX3 + 2;
        }
        resetSimulation(tempPiece, originalXPos, originalYPos);

    }

    return counterX3;
}

int Board::rangeDown(Piece *p){
    int counterY5 = 0;
    Piece *tempPiece = p;

    int originalXPos = tempPiece->getPositionX();
    int originalYPos = tempPiece->getPositionY();

    if(tempPiece->getID() == "queen"){

        counterY5 = simulateDown(tempPiece);

        resetSimulation(tempPiece, originalXPos, originalYPos);

    }
    if(tempPiece->getID() == "rook"){

        counterY5 = simulateDown(tempPiece);

        resetSimulation(tempPiece, originalXPos, originalYPos);
    }
    if(tempPiece->getID() == "king"){

        tempPiece->movePiece(0, -1);
        if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
            counterY5--;
        }
        else if(isOppositeColor(board[tempPiece->getPositionY()][tempPiece->getPositionX()], tempPiece)){
            counterY5--;
        }
        resetSimulation(tempPiece, originalXPos, originalYPos);

    }
    if(tempPiece->getID() == "knight"){
        
        tempPiece->movePiece(-1, -2);
        if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
            counterY5 = counterY5 - 2;
        }
        else if(isOppositeColor(board[tempPiece->getPositionY()][tempPiece->getPositionX()], tempPiece)){
            counterY5 = counterY5 - 2;
        }
        resetSimulation(tempPiece, originalXPos, originalYPos);
    }

    return counterY5;
}

int Board::rangeUp(Piece *p){
    int counterY1 = 0;
    Piece *tempPiece = p;

    int originalXPos = tempPiece->getPositionX();
    int originalYPos = tempPiece->getPositionY();

    if(tempPiece->getID() == "queen"){
        counterY1 = simulateUp(tempPiece);

        resetSimulation(tempPiece, originalXPos, originalYPos);
    }
    if(tempPiece->getID() == "rook"){

        counterY1 = simulateUp(tempPiece);

        resetSimulation(tempPiece, originalXPos, originalYPos);
    }
    if(tempPiece->getID() == "king"){

        tempPiece->movePiece(0, 1);
        if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
            counterY1++;
        }
        else if(isOppositeColor(board[tempPiece->getPositionY()][tempPiece->getPositionX()], tempPiece)){
            counterY1++;
        }
        resetSimulation(tempPiece, originalXPos, originalYPos);

    }
    if(tempPiece->getID() == "knight"){
        tempPiece->movePiece(1, 2);
        if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
            counterY1 = counterY1 + 2;
        }
        else if(isOppositeColor(board[tempPiece->getPositionY()][tempPiece->getPositionX()], tempPiece)){
            counterY1 = counterY1 + 2;
        }
        resetSimulation(tempPiece, originalXPos, originalYPos);

    }

    if(tempPiece->getID() == "pawn"){
        tempPiece->movePiece(0, 1);
        if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
            counterY1++;
        }     
    }

    return counterY1;
}

int Board::rangeMaxXDiag45(Piece *p){   
    int counterX2 = 0;
    Piece *tempPiece = p;

    int originalXPos = tempPiece->getPositionX();
    int originalYPos = tempPiece->getPositionY();

    if(tempPiece->getID() == "queen"){

        counterX2 = simulate45X(tempPiece);

        resetSimulation(tempPiece, originalXPos, originalYPos);
    }
    if(tempPiece->getID() == "king"){

        tempPiece->movePiece(1, 1);
        if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
            counterX2++;
        }
        else if(isOppositeColor(board[tempPiece->getPositionY()][tempPiece->getPositionX()], tempPiece)){
            counterX2++;
        }
        resetSimulation(tempPiece, originalXPos, originalYPos);

    }
    if(tempPiece->getID() == "knight"){

        tempPiece->movePiece(2, 1);
        if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
            counterX2 = counterX2 + 2;
        }
        else if(isOppositeColor(board[tempPiece->getPositionY()][tempPiece->getPositionX()], tempPiece)){
            counterX2 = counterX2 + 2;
        }
        resetSimulation(tempPiece, originalXPos, originalYPos);
    }
    if(tempPiece->getID() == "bishop"){

        counterX2 = simulate45X(tempPiece);

        resetSimulation(tempPiece, originalXPos, originalYPos);
    }

    return counterX2;
}

int Board::rangeMinXDiag135(Piece *p){    
    int counterX4 = 0;
    Piece *tempPiece = p;

    int originalXPos = tempPiece->getPositionX();
    int originalYPos = tempPiece->getPositionY();

    if(tempPiece->getID() == "queen"){
        counterX4 = simulate135X(tempPiece);

        resetSimulation(tempPiece, originalXPos, originalYPos);
    }
    if(tempPiece->getID() == "king"){

        tempPiece->movePiece(1, -1);
        if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
            counterX4++;
        }
        else if(isOppositeColor(board[tempPiece->getPositionY()][tempPiece->getPositionX()], tempPiece)){
            counterX4++;
        }
        resetSimulation(tempPiece, originalXPos, originalYPos);

    }
    if(tempPiece->getID() == "knight"){

        tempPiece->movePiece(1, -2);
        if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
            counterX4++;
        }
        else if(isOppositeColor(board[tempPiece->getPositionY()][tempPiece->getPositionX()], tempPiece)){
            counterX4++;
        }
        resetSimulation(tempPiece, originalXPos, originalYPos);

    }
    if(tempPiece->getID() == "bishop"){

        counterX4 = simulate135X(tempPiece);

        resetSimulation(tempPiece, originalXPos, originalYPos);

    }

    return counterX4;
}

int Board::rangeMaxXDiag225(Piece *p){   
    int counterX6 = 0;
    Piece *tempPiece = p;

    int originalXPos = tempPiece->getPositionX();
    int originalYPos = tempPiece->getPositionY();

    if(tempPiece->getID() == "queen"){

        counterX6 = simulate225X(tempPiece);

        resetSimulation(tempPiece, originalXPos, originalYPos);

    }
    if(tempPiece->getID() == "king"){

        tempPiece->movePiece(-1, -1);
        if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
            counterX6--;
        }
        else if(isOppositeColor(board[tempPiece->getPositionY()][tempPiece->getPositionX()], tempPiece)){
            counterX6--;
        }
        resetSimulation(tempPiece, originalXPos, originalYPos);

    }
    if(tempPiece->getID() == "knight"){
        
        tempPiece->movePiece(-2, -1);
        if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
            counterX6 = counterX6 - 2;
        }
        else if(isOppositeColor(board[tempPiece->getPositionY()][tempPiece->getPositionX()], tempPiece)){
            counterX6 = counterX6 - 2;
        }
        resetSimulation(tempPiece, originalXPos, originalYPos);

    }
    if(tempPiece->getID() == "bishop"){

        counterX6 = simulate225X(tempPiece);

        resetSimulation(tempPiece, originalXPos, originalYPos);

    }

    return counterX6;
}

int Board::rangeMinXDiag315(Piece *p){   
    int counterX8 = 0;
    Piece *tempPiece = p;

    int originalXPos = tempPiece->getPositionX();
    int originalYPos = tempPiece->getPositionY();

    if(tempPiece->getID() == "queen"){

        counterX8 = simulate315X(tempPiece);

    }
    if(tempPiece->getID() == "king"){

        tempPiece->movePiece(-1, 1);
        if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
            counterX8--;
        }
        else if(isOppositeColor(board[tempPiece->getPositionY()][tempPiece->getPositionX()], tempPiece)){
            counterX8--;
        }

    }
    if(tempPiece->getID() == "knight"){
        
        tempPiece->movePiece(-1, 2);
        if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
            counterX8--;
        }
        else if(isOppositeColor(board[tempPiece->getPositionY()][tempPiece->getPositionX()], tempPiece)){
            counterX8--;
        }

    }
    if(tempPiece->getID() == "bishop"){

        counterX8 = simulate315X(tempPiece);

    }

    return counterX8;
}

bool Board::isQueenMoveValid(Piece *p, int xT, int yT){
    if(xT == 0){
        if(yT < rangeUp(p) || yT > rangeDown(p)){
            return true;
        }
    }
    else if(yT == 0){
        if(xT < rangeRight(p) || xT > rangeLeft(p)){
            return true;
        }
    }
    else if(xT < rangeMaxXDiag45(p) && yT == xT){
            return true;
    }
    else if(xT < rangeMinXDiag135(p) && yT == -xT){
            return true;
    }
    else if(xT < rangeMaxXDiag225(p) && yT == xT){
            return true;
    }
    else if(xT < rangeMinXDiag315(p) && yT == -xT){
            return true;
    }
    return false;
}

bool Board::isRookMoveValid(Piece *p, int xT, int yT){
    if(xT == 0){
        if(yT < rangeUp(p) || yT > rangeDown(p)){
            return true;
        }
    }
    else if(yT == 0){
        if(xT < rangeRight(p) || xT > rangeLeft(p)){
            return true;
        }
    }

    return false;
}

bool Board::isBishopMoveValid(Piece *p, int xT, int yT){
    if(xT < rangeMaxXDiag45(p) && yT == xT){
            return true;
    }
    else if(xT < rangeMinXDiag135(p) && yT == -xT){
            return true;
    }
    else if(xT < rangeMaxXDiag225(p) && yT == xT){
            return true;
    }
    else if(xT < rangeMinXDiag315(p) && yT == -xT){
            return true;
    }
    return false;
}

bool Board::isKnightMoveValid(Piece *p, int xT, int yT){
    if(xT == 1 && rangeUp(p) == 1){
        if(yT == 2){
            return true;
        }
    }
    else if(xT == 2 && rangeMaxXDiag45(p) == 2){
        if(yT == 1){
            return true;
        }
    }
    else if(xT == 2 && rangeRight(p) == 2){
        if(yT == -1){
            return true;
        }
    }
    else if(xT == 1 && rangeMinXDiag135(p) == 1){
        if(yT == -2){
            return true;
        }
    }
    else if(xT == -1 && rangeDown(p) == -1){
        if(yT == -2){
            return true;
        }
    }
    else if(xT == -2 && rangeMaxXDiag225(p) == -2){
        if(yT == -1){
            return true;
        }
    }
    else if(xT == -2 && rangeLeft(p) == -2){
        if(yT == 1){
            return true;
        }
    }
    else if(xT == -1 && rangeMinXDiag315(p) == -1){
        if(yT == 2){
            return true;
        }
    }

    return false;
}

bool Board::isKingMoveValid(Piece *p, int xT, int yT){
    if(xT == 0){
        if(yT < rangeUp(p) || yT > rangeDown(p)){
            return true;
        }
    }
    else if(yT == 0){
        if(xT < rangeRight(p) || xT > rangeLeft(p)){
            return true;
        }
    }
    else if(xT < rangeMaxXDiag45(p) && yT == xT){
            return true;
    }
    else if(xT < rangeMinXDiag135(p) && yT == -xT){
            return true;
    }
    else if(xT < rangeMaxXDiag225(p) && yT == xT){
            return true;
    }
    else if(xT < rangeMinXDiag315(p) && yT == -xT){
            return true;
    }
    return false;
}

bool Board::isPawnMoveValid(Piece *p, int xT, int yT){
    if(xT == 1 || xT == -1){
        if(board[p->getPositionX() + 1][p->getPositionY() + 1]->getID() != "empty"){
            return true;
        }
        else if(board[p->getPositionX() - 1][p->getPositionY() + 1]->getID() != "empty"){
            return true;
        }
    }
    if(p->pawnCounter == 0){
        if((yT == 1 && rangeUp(p) == 1)|| (yT == 2 && rangeUp(p) == 2)){
            p->pawnCounter++;
            return true;
        }
        else{
            return false;
        } 
    }
    else{
        if(yT == 1 && rangeUp(p) == 1){
            return true;
        }
        else{
            return false;
        }
    }

    return false;
}

bool Board::isValidMove(Piece *p, int xT, int yT){
    if(p->getID() == "queen"){
        return isQueenMoveValid(p, xT, yT);
    }
    else if(p->getID() == "rook"){
        return isRookMoveValid(p, xT, yT);
    }
    else if(p->getID() == "king"){
        return isKingMoveValid(p, xT, yT);
    }
    else if(p->getID() == "knight"){
        return isKingMoveValid(p, xT, yT);
    }
    else if(p->getID() == "bishop"){
        return isBishopMoveValid(p, xT, yT);
    }
    else if(p->getID() == "pawn"){
        return isPawnMoveValid(p, xT, yT);
    }
}

bool Board::isCheck(King *k){

        Queen *q;
        
        if(k->white()){
            q = new Queen(k->getPositionX(), k->getPositionY(), true);
        }
        else{
            q = new Queen(k->getPositionX(), k->getPositionY(), false);
        }

        if(board[k->getPositionX() + 1][k->getPositionY() + 2]->getID() == "knight"){
            return true;
        }
        else if(board[k->getPositionX() + 2][k->getPositionY() + 1]->getID() == "knight"){
            return true;
        }
        else if(board[k->getPositionX() + 2][k->getPositionY() - 1]->getID() == "knight"){
            return true;
        }
        else if(board[k->getPositionX() + 1][k->getPositionY() - 2]->getID() == "knight"){
            return true;
        }
        else if(board[k->getPositionX() - 1][k->getPositionY() - 2]->getID() == "knight"){
            return true;
        }
        else if(board[k->getPositionX() - 2][k->getPositionY() - 1]->getID() == "knight"){
            return true;
        }
        else if(board[k->getPositionX() - 2][k->getPositionY() + 1]->getID() == "knight"){
            return true;
        }
        else if(board[k->getPositionX() - 1][k->getPositionY() + 2]->getID() == "knight"){
            return true;
        }
        else if(board[k->getPositionX() + 1][k->getPositionY() + 1]->getID() == "pawn"){
            return true;
        }
        else if(board[k->getPositionX() - 1][k->getPositionY() + 1]->getID() == "pawn"){
            return true;
        }
        else if(board[k->getPositionX()][k->getPositionY() + rangeUp(q)]->getID() == "queen" ||
                board[k->getPositionX()][k->getPositionY() + rangeUp(q)]->getID() == "rook" ){
            return true;
        }
        else if(board[k->getPositionX()][k->getPositionY() - rangeDown(q)]->getID() == "queen" ||
                board[k->getPositionX()][k->getPositionY() - rangeDown(q)]->getID() == "rook" ){
            return true;
        }
        else if(board[k->getPositionX() + rangeRight(q)][k->getPositionY()]->getID() == "queen" ||
                board[k->getPositionX() + rangeRight(q)][k->getPositionY()]->getID() == "rook" ){
            return true;
        }
        else if(board[k->getPositionX() - rangeLeft(q)][k->getPositionY()]->getID() == "queen" ||
                board[k->getPositionX() - rangeLeft(q)][k->getPositionY()]->getID() == "rook" ){
            return true;
        }
        else if(board[k->getPositionX() + rangeMaxXDiag45(q)][k->getPositionY() + rangeMaxXDiag45(q)]->getID() == "queen" ||
                board[k->getPositionX() + rangeMaxXDiag45(q)][k->getPositionY() + rangeMaxXDiag45(q)]->getID() == "bishop"){
            return true;
        }
        else if(board[k->getPositionX() + rangeMinXDiag135(q)][k->getPositionY() - rangeMinXDiag135(q)]->getID() == "queen" ||
                board[k->getPositionX() + rangeMinXDiag135(q)][k->getPositionY() - rangeMinXDiag135(q)]->getID() == "bishop"){
            return true;
        }
        else if(board[k->getPositionX() - rangeMaxXDiag225(q)][k->getPositionY() - rangeMaxXDiag225(q)]->getID() == "queen" ||
                board[k->getPositionX() - rangeMaxXDiag225(q)][k->getPositionY() - rangeMaxXDiag225(q)]->getID() == "bishop" ){
            return true;
        }
        else if(board[k->getPositionX() - rangeMinXDiag315(q)][k->getPositionY() + rangeMinXDiag315(q)]->getID() == "queen" ||
                board[k->getPositionX() - rangeMinXDiag315(q)][k->getPositionY() + rangeMinXDiag315(q)]->getID() == "bishop" ){
            return true;
        }
        else{
            return false;
        }

}

bool Board::checkmate(King *k){
    if(isCheck(k)){
        return true;
    }

    return false;
}

 void Board::playGame(){
    int whiteMoves = 0;
    int blackMoves = 0;

    while(!checkmate(kw) || !checkmate(kb)){
        int oldX;
        int oldY;
        int newX;
        int newY;

        if(isCheck(kw) || isCheck(kb)){

        }
        else{
            if(whiteMoves == blackMoves){
                cin >> oldX;
                cin >> oldY;
                cin >> newX;
                cin >> newY;

                if(board[oldX][oldY]->white()){
                    if(isValidMove(board[oldX][oldY], newX, newY)){
                        swap(oldX, oldY, newX, newY);
                        whiteMoves++;
                    }
                }
            }
            else{
                cin >> oldX;
                cin >> oldY;
                cin >> newX;
                cin >> newY;

                if(!board[oldX][oldY]->white()){
                    if(isValidMove(board[oldX][oldY], newX, newY)){
                        swap(oldX, oldY, newX, newY);
                        blackMoves++;
                    }
                }
            }
        }
    }
 }