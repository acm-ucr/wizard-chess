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
#include <cstdlib>

using namespace std;

/*
 - Make the x-values chars, so that instead of x,y being
   1,2 (for example), i make it b,2 

 - make a string function that returns getPosition, so that
   it returns a string with both x and y position.

 - 
*/

Board::Board(){
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
   
    //Initialize Black Pawns
    for(int i = 0; i < 8; i++){
        board[6][i] = new Pawn(i, 6, false);
    }


    //Initialize White Pawns
    for(int i = 0; i < 8; i++){
        board[1][i] = new Pawn(i, 1, true);
    }


    //Initialize Black Rooks
    board[7][0] = new Rook(0, 7, false);
    board[7][7] = new Rook(7, 7, false);


    //Initialize White Rooks
    board[0][0] = new Rook(0, 0, true);
    board[0][7] = new Rook(7, 0, true);


    //Initialize Black Knights
    board[7][1] = new Knight(1, 7, false);
    board[7][6] = new Knight(6, 7, false);


    //Initialize White Knights
    board[0][1] = new Knight(1, 0, true);
    board[0][6] = new Knight(6, 0, true);


    //Initialize Black Bishops
    board[7][2] = new Bishop(2, 7, false);
    board[7][5] = new Bishop(5, 7, false);


    //Initialize White Bishops
    board[0][2] = new Bishop(2, 0, true);
    board[0][5] = new Bishop(5, 0, true);


    //Initialize Black Queen
    board[7][4] = new Queen(4, 7, false);


    //Initialize White Queen
    board[0][4] = new Queen(4, 0, true);


    //Initialize black King
    //King *kw = new King(4, 0, true);
    board[7][3] = kb;


    //Initialize White King
    //King *kb = new King(4, 7, false);
    board[0][3] = kw;
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
}

void Board::printBoard() {
    for(int i = 0; i < 8; i++){
        cout << endl << endl;
        for(int j = 0; j < 8; j++){
            if(board[i][j]->getID() == "empty"){
                cout << board[i][j]->getID() << "   ";
            }
            else if(board[i][j]->getID() == "pawn"){
                cout << board[i][j]->getID() << "    ";
            }
            else if(board[i][j]->getID() == "rook"){
                cout << board[i][j]->getID() << "    ";
            }
            else if(board[i][j]->getID() == "bishop"){
                cout << board[i][j]->getID() << "  ";
            }
            else if(board[i][j]->getID() == "knight"){
                cout << board[i][j]->getID() << "  ";
            }
            else if(board[i][j]->getID() == "queen"){
                cout << board[i][j]->getID() << "   ";
            }
            else if(board[i][j]->getID() == "king"){
                cout << board[i][j]->getID() << "    ";
            }
            //cout << board[i][j]->getID();
        }
    }
    cout << endl << endl;
}
 
bool Board::takePiece(int oldX, int oldY, int newX, int newY){
    if(!(board[newY][newX]->isEmpty()) && isOppositeColor(board[oldY][oldX], board[newY][newX])){
        return true;
    }
    return false;
}

void Board::swap(int oldX, int oldY, int newX, int newY){
    // Stockfish engine(stockfishPath);
    // engine.clearFiles(); //Clears files to make it easier to process info, program runs extremely slow if info is constantly being put into files
    
    // string position = "position startpos moves";
    // position += listMove;
    Piece p;
    
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

        board[newY][newX] = board[oldY][oldX];
        board[oldY][oldX] = new Empty(oldX, oldY);
    }

    // cout << "Your Move: ";
    // playerMove = board[oldY][oldX]->getPosition() + board[newY][newX]->getPosition();
    // cout << playerMove << endl;
    // position += " " + playerMove;
    // listMove += " " + playerMove;

    // cout << "List of current moves: " << listMove << endl; 
    // cout << position << endl;

    // //Stockfish move
    // // Send position and search commands
    // engine.sendCommand(position);

    // //Set depth to tell stockfish how far to search(the lower the depth, the lower the difficulty)
    // engine.sendCommand("go depth 100");

    // // Retrieve the best move
    // bestMove = engine.getBestMove();
    // cout << "Best Move: " << bestMove << endl;

    // // Update list of moves with the best move
    // listMove += " " + bestMove;
    // //a function to conver best move to be updated on your board
    // engine.clearFiles();
}

void Board::promote(Piece *p){
    string piece;
    Piece* newPiece;
    if(p->getPositionY() == 7){
        cout << "What piece would you like to promote to?" << endl;
        cin >> piece;

        if(piece == "queen"){
            newPiece = new Queen(p->getPositionX(), p->getPositionY(), true);
        }
        else if(piece == "rook"){
            newPiece = new Rook(p->getPositionX(), p->getPositionY(), true);
        }
        else if(piece == "bishop"){
            newPiece = new Bishop(p->getPositionX(), p->getPositionY(), true);
        }
        else if(piece == "knight"){
            newPiece = new Knight(p->getPositionX(), p->getPositionY(), true);
        }
        board[p->getPositionY()][p->getPositionX()] = newPiece;
    }
    else if(p->getPositionY() == 0){
        cout << "What piece would you like to promote to?" << endl;
        cin >> piece;

        if(piece == "queen"){
            newPiece = new Queen(p->getPositionX(), p->getPositionY(), false);
        }
        else if(piece == "rook"){
            newPiece = new Rook(p->getPositionX(), p->getPositionY(), false);
        }
        else if(piece == "bishop"){
            newPiece = new Bishop(p->getPositionX(), p->getPositionY(), false);
        }
        else if(piece == "knight"){
            newPiece = new Knight(p->getPositionX(), p->getPositionY(), false);
        }
        board[p->getPositionY()][p->getPositionX()] = newPiece;
    }
}

bool Board::isOppositeColor(Piece *p1, Piece *p2){
    if(p2->getID() != "empty"){
        if((p1->white() != p2->white())){
            return true;
        }
    }
    return false;
}

int Board::simulateDown(Piece *p){
    int counterY = 0;
    
    //int currXPos = 9;
    int currYPos = 9;

    if(p->getPositionY() < 7){
        while((board[p->getPositionY() + 1][p->getPositionX()]->getID() == "empty") && 
              (currYPos != p->getPositionY()))
            {

                //currXPos = p->getPositionX();
                currYPos = p->getPositionY();

                p->movePiece(0, 1);
                counterY++;
                if(p->getPositionY() == 7){
                    break;
                }
            }
    }

    if(p->getPositionY() < 7){
        if(isOppositeColor(board[p->getPositionY() + 1][p->getPositionX()], p)){
            counterY++;
        }
    }
    
    return counterY;
}

int Board::simulate135X(Piece *p){
    int counterX = 0;

    int currXPos = 9;
    int currYPos = 9;

    if(p->getPositionY() < 7 && p->getPositionX() < 7){
        while((board[p->getPositionY() + 1][p->getPositionX() + 1]->getID() == "empty") && 
              (currXPos != p->getPositionX() && currYPos != p->getPositionY()))
            {
                currXPos = p->getPositionX();
                currYPos = p->getPositionY();

                p->movePiece(1, 1);
                counterX++;

                if(p->getPositionY() == 7 || p->getPositionX() == 7){
                    break;
                }
            }
    }
    if(p->getPositionY() < 7 && p->getPositionX() < 7){
        if(isOppositeColor(board[p->getPositionY() + 1][p->getPositionX() + 1], p)){
            counterX++;
        }
    }
    return counterX;
}

int Board::simulate135Y(Piece *p){
    int counterY = 0;

    int currXPos = 9;
    int currYPos = 9;

    if(p->getPositionY() < 7 && p->getPositionX() < 7){
        while((board[p->getPositionY() + 1][p->getPositionX() + 1]->getID() == "empty") && 
              (currXPos != p->getPositionX() && currYPos != p->getPositionY()))
            {
                currXPos = p->getPositionX();
                currYPos = p->getPositionY();

                p->movePiece(1, 1);
                counterY++;

                if(p->getPositionY() == 7 || p->getPositionX() == 7){
                    break;
                }
            }
    }
    if(p->getPositionY() < 7 && p->getPositionX() < 7){
        if(isOppositeColor(board[p->getPositionY() + 1][p->getPositionX() + 1], p)){
            counterY++;
        }
    }
    return counterY;
}

int Board::simulateRight(Piece *p){
    int counterX = 0;

    int currXPos = 9;
    //int currYPos = 9;

    if(p->getPositionX() < 7){
        while((board[p->getPositionY()][p->getPositionX() + 1]->getID() == "empty") && 
              (currXPos != p->getPositionX()))
            {
                currXPos = p->getPositionX();
                //currYPos = p->getPositionY();

                p->movePiece(1, 0);
                counterX++;

                if(p->getPositionX() == 7){
                    break;
                }
            }
    }
    if(p->getPositionX() < 7){
        if(isOppositeColor(board[p->getPositionY()][p->getPositionX() + 1], p)){
            counterX++;
        }
    }
    return counterX;
}

int Board::simulate45X(Piece *p){
    int counterX = 0;

    int currXPos = 9;
    int currYPos = 9;

    if(p->getPositionY() > 0 && p->getPositionX() < 7){
        while((board[p->getPositionY() - 1][p->getPositionX() + 1]->getID() == "empty") && 
              (currXPos != p->getPositionX() && currYPos != p->getPositionY()))
            {

                currXPos = p->getPositionX();
                currYPos = p->getPositionY();

                p->movePiece(1, -1);
                counterX++;

                if(p->getPositionY() == 0 || p->getPositionX() == 7){
                    break;
                }
            }
    }
    if(p->getPositionY() > 0 && p->getPositionX() < 7){
        if(isOppositeColor(board[p->getPositionY() - 1][p->getPositionX() + 1], p)){
            counterX++;
        }
    }
    return counterX;
}

int Board::simulate45Y(Piece *p){
    int counterY = 0;

    int currXPos = 9;
    int currYPos = 9;

    if(p->getPositionY() > 0 && p->getPositionX() < 7){
        while((board[p->getPositionY() - 1][p->getPositionX() + 1]->getID() == "empty") && 
              (currXPos != p->getPositionX() && currYPos != p->getPositionY()))
            {
                currXPos = p->getPositionX();
                currYPos = p->getPositionY();

                p->movePiece(1, -1);
                counterY--;

                if(p->getPositionY() == 0 || p->getPositionX() == 7){
                    break;
                }
            }
    }
    if(p->getPositionY() > 0 && p->getPositionX() < 7){
        if(isOppositeColor(board[p->getPositionY() - 1][p->getPositionX() + 1], p)){
            counterY--;
        }
    }
    return counterY;
}

int Board::simulateUp(Piece *p){
    int counterY = 0;

    //int currXPos = 9;
    int currYPos = 9;

    if(p->getPositionY() > 0){
        while((board[p->getPositionY() - 1][p->getPositionX()]->getID() == "empty") && 
              (currYPos != p->getPositionY()))
            {
                //currXPos = p->getPositionX();
                currYPos = p->getPositionY();
                p->movePiece(0, -1);
                counterY--;
                //cout << currYPos << ' ' << p->getPositionY() << endl;
                //cout << board[p->getPositionY() - 1][p->getPositionX()]->getID() << endl;

                if(p->getPositionY() == 0){
                    break;
                }
            }
    }
    if(p->getPositionY() > 0){
        if(isOppositeColor(board[p->getPositionY() - 1][p->getPositionX()], p)){
            counterY--;
        }
    }
    return counterY;
}

int Board::simulate315X(Piece *p){
    int counterX = 0;

    int currXPos = 9;
    int currYPos = 9;


    if(p->getPositionY() > 0 && p->getPositionX() > 0){
        while((board[p->getPositionY() - 1][p->getPositionX() - 1]->getID() == "empty") &&
              (currXPos != p->getPositionX() && currYPos != p->getPositionY()))
            {   
                currXPos = p->getPositionX();
                currYPos = p->getPositionY();
                p->movePiece(-1, -1);
                counterX--;
                if(p->getPositionY() == 0 || p->getPositionX() == 0){
                    break;
                }
            }
    }
    if(p->getPositionY() != 0 && p->getPositionX() != 0){
        if(isOppositeColor(board[p->getPositionY() - 1][p->getPositionX() - 1], p)){
            counterX--;
        }
    }
    return counterX;
}

int Board::simulate315Y(Piece *p){
    int counterY = 0;

    int currXPos = 9;
    int currYPos = 9;


    if(p->getPositionY() > 0 && p->getPositionX() > 0){
        while((board[p->getPositionY() - 1][p->getPositionX() - 1]->getID() == "empty") && 
              (currXPos != p->getPositionX() && currYPos != p->getPositionY()))
            {
                currXPos = p->getPositionX();
                currYPos = p->getPositionY();
                p->movePiece(-1, -1);
                counterY--;
                if(p->getPositionY() == 0 || p->getPositionX() == 0){
                    break;
                }
            }
    }
    if(p->getPositionY() > 0 && p->getPositionX() > 0){
        if(isOppositeColor(board[p->getPositionY() - 1][p->getPositionX() - 1], p)){
            counterY--;
        }
    }
    return counterY;
}

int Board::simulateLeft(Piece *p){
    int counterX = 0;

    int currXPos = 9;
    //int currYPos = 9;

    if(p->getPositionX() > 0){
        while((board[p->getPositionY()][p->getPositionX() - 1]->getID() == "empty") && 
              (currXPos != p->getPositionX()))
            {
                currXPos = p->getPositionX();
                //currYPos = p->getPositionY();
                p->movePiece(-1, 0);
                counterX--;

                if(p->getPositionX() == 0){
                    break;
                }
            }
    }
    if(p->getPositionX() > 0){
        if(isOppositeColor(board[p->getPositionY()][p->getPositionX() - 1], p)){
            counterX--;
        }
    }
    return counterX;
}

int Board::simulate225X(Piece *p){
    int counterX = 0;

    int currXPos = 9;
    int currYPos = 9;

    if(p->getPositionY() < 7 && p->getPositionX() > 0){
        while((board[p->getPositionY() + 1][p->getPositionX() - 1]->getID() == "empty") && 
              (currXPos != p->getPositionX() && currYPos != p->getPositionY()))
            {

                currXPos = p->getPositionX();
                currYPos = p->getPositionY();
                p->movePiece(-1, 1);
                counterX--;
                if(p->getPositionY() == 7 || p->getPositionX() == 0){
                    break;
                }
            }
    }
    if(p->getPositionY() < 7 && p->getPositionX() > 0){
        if(isOppositeColor(board[p->getPositionY() + 1][p->getPositionX() - 1], p)){
            counterX--;
        }
    }
    return counterX;
}

int Board::simulate225Y(Piece *p){
    int counterY = 0;

    int currXPos = 9;
    int currYPos = 9;

    if(p->getPositionY() < 7 && p->getPositionX() > 0){
        while((board[p->getPositionY() + 1][p->getPositionX() - 1]->getID() == "empty") && 
              (currXPos != p->getPositionX() && currYPos != p->getPositionY()))
            {

                currXPos = p->getPositionX();
                currYPos = p->getPositionY();
                p->movePiece(-1, 1);
                counterY++;
                if(p->getPositionY() == 7 || p->getPositionX() == 0){
                    break;
                }
            }
    }
    if(p->getPositionY() < 7 && p->getPositionX() > 0){
        if(isOppositeColor(board[p->getPositionY() + 1][p->getPositionX() - 1], p)){
            counterY++;
        }
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
        if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
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
    else if(tempPiece->getID() == "rook"){
        counterY5 = simulateDown(tempPiece);
        resetSimulation(tempPiece, originalXPos, originalYPos);
    }
    else if(tempPiece->getID() == "king"){
        tempPiece->movePiece(0, 1);
        if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
            counterY5++;
        }
        else if(isOppositeColor(board[tempPiece->getPositionY()][tempPiece->getPositionX()], tempPiece)){
            counterY5++;
        }
        resetSimulation(tempPiece, originalXPos, originalYPos);
    }
    else if(tempPiece->getID() == "knight"){ 
        tempPiece->movePiece(-1, 2);
        if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
            counterY5--;
        }
        else if(isOppositeColor(board[tempPiece->getPositionY()][tempPiece->getPositionX()], tempPiece)){
            counterY5--;
        }
        resetSimulation(tempPiece, originalXPos, originalYPos);
    }
    else if(tempPiece->getID() == "pawn"){
        tempPiece->movePiece(0, 1);
        if(tempPiece->getMoveCounter() == 0){
            if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
                counterY5++;
                tempPiece->movePiece(0, 1);
                if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
                    counterY5++;
                }
            }
        }
        else{
            if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
                counterY5++;
            }
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
    else if(tempPiece->getID() == "rook"){
        counterY1 = simulateUp(tempPiece);
        resetSimulation(tempPiece, originalXPos, originalYPos);
    }
    else if(tempPiece->getID() == "king"){
        tempPiece->movePiece(0, -1);
        if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
            counterY1--;
        }
        else if(isOppositeColor(board[tempPiece->getPositionY()][tempPiece->getPositionX()], tempPiece)){
            counterY1--;
        }
        resetSimulation(tempPiece, originalXPos, originalYPos);
    }
    else if(tempPiece->getID() == "knight"){
        tempPiece->movePiece(1, -2);
        if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
            counterY1++;
        }
        else if(isOppositeColor(board[tempPiece->getPositionY()][tempPiece->getPositionX()], tempPiece)){
            counterY1++;
        }
        resetSimulation(tempPiece, originalXPos, originalYPos);
    }
    else if(tempPiece->getID() == "pawn"){
        tempPiece->movePiece(0, -1);
        if(tempPiece->getMoveCounter() == 0){
            if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
                counterY1--;
                tempPiece->movePiece(0, -1);
                if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
                    counterY1--;
                }
            }
        }
        else{
            if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
                counterY1--;
            }
        }
        resetSimulation(tempPiece, originalXPos, originalYPos);
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

        tempPiece->movePiece(1, -1);
        if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
            counterX2++;
        }
        else if(isOppositeColor(board[tempPiece->getPositionY()][tempPiece->getPositionX()], tempPiece)){
            counterX2++;
        }
        resetSimulation(tempPiece, originalXPos, originalYPos);

    }
    if(tempPiece->getID() == "knight"){

        tempPiece->movePiece(2, -1);
        if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
            counterX2 += 2;
        }
        else if(isOppositeColor(board[tempPiece->getPositionY()][tempPiece->getPositionX()], tempPiece)){
            counterX2 += 2;
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

        tempPiece->movePiece(1, 1);
        if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
            counterX4++;
        }
        else if(isOppositeColor(board[tempPiece->getPositionY()][tempPiece->getPositionX()], tempPiece)){
            counterX4++;
        }
        resetSimulation(tempPiece, originalXPos, originalYPos);

    }
    if(tempPiece->getID() == "knight"){

        tempPiece->movePiece(1, 2);
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

        tempPiece->movePiece(-1, 1);
        if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
            counterX6--;
        }
        else if(isOppositeColor(board[tempPiece->getPositionY()][tempPiece->getPositionX()], tempPiece)){
            counterX6--;
        }
        resetSimulation(tempPiece, originalXPos, originalYPos);

    }
    if(tempPiece->getID() == "knight"){
        
        tempPiece->movePiece(-2, 1);
        if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
            counterX6 -= 2;
        }
        else if(isOppositeColor(board[tempPiece->getPositionY()][tempPiece->getPositionX()], tempPiece)){
            counterX6 -= 2;
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
        resetSimulation(tempPiece, originalXPos, originalYPos);

    }
    if(tempPiece->getID() == "king"){

        tempPiece->movePiece(-1, -1);
        if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
            counterX8--;
        }
        else if(isOppositeColor(board[tempPiece->getPositionY()][tempPiece->getPositionX()], tempPiece)){
            counterX8--;
        }
        resetSimulation(tempPiece, originalXPos, originalYPos);
    }
    if(tempPiece->getID() == "knight"){
        
        tempPiece->movePiece(-1, -2);
        if(board[tempPiece->getPositionY()][tempPiece->getPositionX()]->getID() == "empty"){
            counterX8--;
        }
        else if(isOppositeColor(board[tempPiece->getPositionY()][tempPiece->getPositionX()], tempPiece)){
            counterX8--;
        }
        resetSimulation(tempPiece, originalXPos, originalYPos);
    }
    if(tempPiece->getID() == "bishop"){

        counterX8 = simulate315X(tempPiece);
        resetSimulation(tempPiece, originalXPos, originalYPos);
    }

    return counterX8;
}

bool Board::isQueenMoveValid(Piece *p, int xT, int yT){
    if(xT == 0){
        if(yT >= rangeUp(p) && yT <= rangeDown(p)){
            return true;
        }
    }
    else if(yT == 0){
        if(xT <= rangeRight(p) && xT >= rangeLeft(p)){
            return true;
        }
    }
    else if(xT > 0){
        if(xT <= rangeMaxXDiag45(p) && yT == -xT){
                return true;
        }
        else if(xT <= rangeMinXDiag135(p) && yT == xT){
                return true;
        }
    }
    else{
        if(xT >= rangeMaxXDiag225(p) && yT == -xT){
                return true;
        }
        else if(xT >= rangeMinXDiag315(p) && yT == xT){
                return true;
        }
        return false;
    }
    return false;
}

bool Board::isRookMoveValid(Piece *p, int xT, int yT){
    if(xT == 0){
        if(yT >= rangeUp(p) && yT <= rangeDown(p)){
            p->setMoveCounter(1);
            return true;
        }
    }
    else if(yT == 0){
        if(xT <= rangeRight(p) && xT >= rangeLeft(p)){
            p->setMoveCounter(1);
            return true;
        }
    }
    return false;
}

bool Board::isBishopMoveValid(Piece *p, int xT, int yT){
    if(xT > 0){
        if(xT <= rangeMaxXDiag45(p) && yT == -xT){
                return true;
        }
        else if(xT <= rangeMinXDiag135(p) && yT == xT){
                return true;
        }
    }
    else{
        if(xT >= rangeMaxXDiag225(p) && yT == -xT){
                return true;
        }
        else if(xT >= rangeMinXDiag315(p) && yT == xT){
                return true;
        }
        return false;
    }
}

bool Board::isKnightMoveValid(Piece *p, int xT, int yT){
    if(xT == 1 && rangeUp(p) == 1){
        if(yT == -2){
            return true;
        }
    }
    if(xT == 2 && rangeMaxXDiag45(p) == 2){
        if(yT == -1){
            return true;
        }
    }
    if(xT == 2 && rangeRight(p) == 2){
        if(yT == 1){
            return true;
        }
    }
    if(xT == 1 && rangeMinXDiag135(p) == 1){
        if(yT == 2){
            return true;
        }
    }
    if(xT == -1 && rangeDown(p) == -1){
        if(yT == 2){
            return true;
        }
    }
    if(xT == -2 && rangeMaxXDiag225(p) == -2){
        if(yT == 1){
            return true;
        }
    }
    if(xT == -2 && rangeLeft(p) == -2){
        if(yT == -1){
            return true;
        }
    }
    if(xT == -1 && rangeMinXDiag315(p) == -1){
        if(yT == -2){
            return true;
        }
    }

    return false;
}

bool Board::isKingMoveValid(Piece *p, int xT, int yT){
    if(xT == -2){
        return castleKingSide(p);
    }
    else if(xT == 2){
        return castleQueenSide(p);
    }

    if(xT == 0){
        if(yT >= rangeUp(p) && yT <= rangeDown(p)){
            p->setMoveCounter(1);
            return true;
        }
    }
    else if(yT == 0){
        if(xT <= rangeRight(p) && xT >= rangeLeft(p)){
            p->setMoveCounter(1);
            return true;
        }
    }
    else if(xT > 0){
        if(xT <= rangeMaxXDiag45(p) && yT == -xT){
            p->setMoveCounter(1);
            return true;
        }
        else if(xT <= rangeMinXDiag135(p) && yT == xT){
            p->setMoveCounter(1);
            return true;
        }
    }
    else{
        if(xT >= rangeMaxXDiag225(p) && yT == -xT){
            p->setMoveCounter(1);
            return true;
        }
        else if(xT >= rangeMinXDiag315(p) && yT == xT){
            p->setMoveCounter(1);
            return true;
        }
        return false;
    }
    return false;
}

bool Board::isPawnMoveValid(Piece *p, int xT, int yT){
    if(xT == 1){
        if(p->getPositionX() < 7){
            
            if(takePiece(p->getPositionX(), p->getPositionY(), p->getPositionX() + 1, p->getPositionY() + 1)){
                p->setMoveCounter(1);
                return true;
            }     
            else if(takePiece(p->getPositionX(), p->getPositionY(), p->getPositionX() + 1, p->getPositionY() - 1)){
                p->setMoveCounter(1);
                return true;
            }
            cout << p->getPositionX() << p->getPositionY() << p->getPositionY() - 1 << p->getPositionX() + 1 << endl;
        }
        return false;
    }
    else if(xT == -1){
        if(p->getPositionX() > 0){
            if(takePiece(p->getPositionX(), p->getPositionY(), p->getPositionX() - 1, p->getPositionY() + 1)){
                p->setMoveCounter(1);
                return true;
            }
            else if(takePiece(p->getPositionX(), p->getPositionY(), p->getPositionX() - 1, p->getPositionY() - 1)){
                p->setMoveCounter(1);
                return true;
            }
        }
        return false;
    }
    if(p->getMoveCounter() == 0){
        if(!p->white()){
            if((yT >= rangeUp(p))){
                p->setMoveCounter(1);
                return true;
            }
            else{
                return false;
            }
        } 
        else{
            if((yT <= rangeDown(p))){
                cout << "wtf" << endl;
                cout << rangeDown(p) << endl;
                p->setMoveCounter(1);
                return true;
            }
            else{
                return false;
            }
        }
    }
    else{
        cout << rangeUp(p) << endl;
        if(yT == rangeUp(p)){
            return true;
        }
        else if(yT == rangeDown(p)){
            return true;
        }
        else{
            return false;
        }
    }
    cout << "huh" << endl;
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
        return isKnightMoveValid(p, xT, yT);
    }
    else if(p->getID() == "bishop"){
        return isBishopMoveValid(p, xT, yT);
    }
    else if(p->getID() == "pawn"){
        return isPawnMoveValid(p, xT, yT);
    }
    return false;
}

bool Board::castleKingSide(Piece *p){
    if(p->getMoveCounter() == 0){
        Queen *tempQueen;
        if(p->white()){
            tempQueen = new Queen(p->getPositionX(), p->getPositionY(), true);  
        }
        else{
            tempQueen = new Queen(p->getPositionX(), p->getPositionY(), false);
        }

        if(board[p->getPositionY()][p->getPositionX() + rangeLeft(tempQueen) - 1]->getID() == "rook"){
            if(board[p->getPositionY()][p->getPositionX() + rangeLeft(tempQueen) - 1]->getMoveCounter() == 0){
                swap(p->getPositionX(), p->getPositionY(), p->getPositionX() - 1, p->getPositionY());
                if(isCheck(kw)){
                    swap(p->getPositionX(), p->getPositionY(), p->getPositionX() + 1, p->getPositionY());
                    cout << "King is in check, can't castle" << endl;
                    return false;
                }
                else{
                    swap(p->getPositionX(), p->getPositionY(), p->getPositionX() - 1, p->getPositionY());
                    if(isCheck(kw)){
                        swap(p->getPositionX(), p->getPositionY(), p->getPositionX() + 2, p->getPositionY());
                        cout << "King is in check, can't castle" << endl;
                        return false;
                    }
                    else{
                        swap(p->getPositionX() - 1, p->getPositionY(), p->getPositionX() + 1, p->getPositionY());
                        printBoard();
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

bool Board::castleQueenSide(Piece *p){
    if(p->getMoveCounter() == 0){
        Queen *tempQueen;
        if(p->white()){
            tempQueen = new Queen(p->getPositionX(), p->getPositionY(), true);  
        }
        else{
            tempQueen = new Queen(p->getPositionX(), p->getPositionY(), false);
        }

        if(board[p->getPositionY()][p->getPositionX() + rangeRight(tempQueen) + 1]->getID() == "rook"){
            if(board[p->getPositionY()][p->getPositionX() + rangeRight(tempQueen) + 1]->getMoveCounter() == 0){
                swap(p->getPositionX(), p->getPositionY(), p->getPositionX() + 1, p->getPositionY());
                if(isCheck(kw)){
                    swap(p->getPositionX(), p->getPositionY(), p->getPositionX() - 1, p->getPositionY());
                    cout << "King is in check, can't castle" << endl;
                    return false;
                }
                else{
                    swap(p->getPositionX(), p->getPositionY(), p->getPositionX() + 1, p->getPositionY());
                    if(isCheck(kw)){
                        swap(p->getPositionX(), p->getPositionY(), p->getPositionX() - 2, p->getPositionY());
                        cout << "King is in check, can't castle" << endl;
                        return false;
                    }
                    else{
                        swap(p->getPositionX() + 2, p->getPositionY(), p->getPositionX() - 1, p->getPositionY());
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

bool Board::isCheck(King *k){
        Queen *q;
        
        if(k->white()){
            q = new Queen(k->getPositionX(), k->getPositionY(), true);
        }
        else{
            q = new Queen(k->getPositionX(), k->getPositionY(), false);
        }

        if(k->getPositionX() < 6 && k->getPositionY() < 7){
            if(board[k->getPositionY() + 1][k->getPositionX() + 2]->getID() == "knight"){
                if(isOppositeColor(k, board[k->getPositionY() + 1][k->getPositionX() + 2])){
                    //cout << "a" << endl;
                    return true;
                }
            }
        }
        if(k->getPositionX() < 7 && k->getPositionY() < 6){
            if(board[k->getPositionY() + 2][k->getPositionX() + 1]->getID() == "knight"){
                if(isOppositeColor(k, board[k->getPositionY() + 2][k->getPositionX() + 1])){
                    //cout << "b" << endl;
                    return true;
                }
            }
        }
        if(k->getPositionX() > 0 && k->getPositionY() < 6){
            if(board[k->getPositionY() + 2][k->getPositionX() - 1]->getID() == "knight"){
                if(isOppositeColor(k, board[k->getPositionY() + 2][k->getPositionX() - 1])){
                    //cout << 'c' << endl;
                    return true;
                }
            }
        }
        if(k->getPositionX() > 1 && k->getPositionY() < 7){
            if(board[k->getPositionY() + 1][k->getPositionX() - 2]->getID() == "knight"){
                if(isOppositeColor(k, board[k->getPositionY() + 1][k->getPositionX() - 2])){
                    //cout << 'd' << endl;
                    return true;
                }
            }
        }
        if(k->getPositionX() > 1 && k->getPositionY() > 0){
            if(board[k->getPositionY() - 1][k->getPositionX() - 2]->getID() == "knight"){
                if(isOppositeColor(k, board[k->getPositionY() - 1][k->getPositionX() - 2])){
                    //cout << 'e' << endl;
                    return true;
                }
            }
        }
        if(k->getPositionX() > 0 && k->getPositionY() > 1){
            if(board[k->getPositionY() - 2][k->getPositionX() - 1]->getID() == "knight"){
                if(isOppositeColor(k, board[k->getPositionY() - 2][k->getPositionX() - 1])){
                    //cout << 'f' << endl;
                    return true;
                }
            }
        }
        if(k->getPositionX() < 7 && k->getPositionY() > 1){
            if(board[k->getPositionY() - 2][k->getPositionX() + 1]->getID() == "knight"){
                if(isOppositeColor(k, board[k->getPositionY() - 2][k->getPositionX() + 1])){
                    //cout << 'g' << endl;
                    return true;
                }
            }
        }
        if(k->getPositionX() < 6 && k->getPositionY() > 0){
            if(board[k->getPositionY() - 1][k->getPositionX() + 2]->getID() == "knight"){
                if(isOppositeColor(k, board[k->getPositionY() - 1][k->getPositionX() + 2])){
                    //cout << 'h' << endl;
                    return true;
                }
            }
        }
        if(k->getPositionX() < 7 && k->getPositionY() < 7){
            if(board[k->getPositionY() + 1][k->getPositionX() + 1]->getID() == "pawn"){
                if(isOppositeColor(k, board[k->getPositionY() + 1][k->getPositionX() + 1])){
                    //cout << 'i' << endl;
                    return true;
                }
            }
        }
        if(k->getPositionX() > 0 && k->getPositionY() < 7){
            if(board[k->getPositionY() + 1][k->getPositionX() - 1]->getID() == "pawn"){
                if(isOppositeColor(k, board[k->getPositionY() + 1][k->getPositionX() - 1])){
                    //cout << 'j' << endl;
                    return true;
                }
            }
        }
        if(k->getPositionX() < 7 && k->getPositionY() > 0){
            if(board[k->getPositionY() - 1][k->getPositionX() + 1]->getID() == "pawn"){
                if(isOppositeColor(k, board[k->getPositionY() - 1][k->getPositionX() + 1])){
                    // cout << 'k' << endl;
                    // cout << k->white() << ", " << board[k->getPositionY() - 1][k->getPositionX() + 1]->white() << endl;
                    // cout << k->getPositionX() << ", " << k->getPositionY() << endl;
                    // cout << board[k->getPositionY() - 1][k->getPositionX() + 1]->getID() << endl;
                    return true;
                }
            }
        }
        if(k->getPositionX() > 0 && k->getPositionY() > 0){
            if(board[k->getPositionY() - 1][k->getPositionX() - 1]->getID() == "pawn"){
                if(isOppositeColor(k, board[k->getPositionY() - 1][k->getPositionX() - 1])){
                    //cout << 'l' << endl;
                    return true;
                }
            }
        }
        if(board[k->getPositionY() + rangeUp(q)][k->getPositionX()]->getID() == "queen" ||
            board[k->getPositionY() + rangeUp(q)][k->getPositionX()]->getID() == "rook" ){

            if(isOppositeColor(k, board[k->getPositionY() + rangeUp(q)][k->getPositionX()])){
                //cout << 'm' << endl;
                return true;
            }
        }
        if(board[k->getPositionY() + rangeDown(q)][k->getPositionX()]->getID() == "queen" ||
            board[k->getPositionY() + rangeDown(q)][k->getPositionX()]->getID() == "rook" ){
            if(isOppositeColor(k, board[k->getPositionY() + rangeDown(q)][k->getPositionX()])){
                //cout << 'n' << endl;
                return true;
            }
        }
        if(board[k->getPositionY()][k->getPositionX() + rangeRight(q)]->getID() == "queen" ||
            board[k->getPositionY()][k->getPositionX() + rangeRight(q)]->getID() == "rook" ){

            if(isOppositeColor(k, board[k->getPositionY()][k->getPositionX() + rangeRight(q)])){
                //cout << 'o' << endl;
                return true;
            }
        }
        if(board[k->getPositionY()][k->getPositionX() + rangeLeft(q)]->getID() == "queen" ||
            board[k->getPositionY()][k->getPositionX() + rangeLeft(q)]->getID() == "rook" ){

            if(isOppositeColor(k, board[k->getPositionY()][k->getPositionX() + rangeLeft(q)])){
                //cout << 'p' << endl;
                return true;
            }
        }
        if(board[k->getPositionY() - rangeMaxXDiag45(q)][k->getPositionX() + rangeMaxXDiag45(q)]->getID() == "queen" ||
           board[k->getPositionY() - rangeMaxXDiag45(q)][k->getPositionX() + rangeMaxXDiag45(q)]->getID() == "bishop"){
            if(isOppositeColor(k, board[k->getPositionY() - rangeMaxXDiag45(q)][k->getPositionX() + rangeMaxXDiag45(q)])){
                //cout << 'q' << endl;
                return true;
            }
        }
        if(board[k->getPositionY() + rangeMinXDiag135(q)][k->getPositionX() + rangeMinXDiag135(q)]->getID() == "queen" ||
            board[k->getPositionY() + rangeMinXDiag135(q)][k->getPositionX() + rangeMinXDiag135(q)]->getID() == "bishop"){

            if(isOppositeColor(k, board[k->getPositionY() + rangeMinXDiag135(q)][k->getPositionX() + rangeMinXDiag135(q)])){
                //cout << 'r' << endl;
                return true;
            }
        }
        if(board[k->getPositionY() - rangeMaxXDiag225(q)][k->getPositionX() + rangeMaxXDiag225(q)]->getID() == "queen" ||
            board[k->getPositionY() - rangeMaxXDiag225(q)][k->getPositionX() + rangeMaxXDiag225(q)]->getID() == "bishop" ){

            if(isOppositeColor(k, board[k->getPositionY() - rangeMaxXDiag225(q)][k->getPositionX() + rangeMaxXDiag225(q)])){
                //cout << 's' << endl;
                return true;
            }
        }
        if(board[k->getPositionY() + rangeMinXDiag315(q)][k->getPositionX() + rangeMinXDiag315(q)]->getID() == "queen" ||
            board[k->getPositionY() + rangeMinXDiag315(q)][k->getPositionX() + rangeMinXDiag315(q)]->getID() == "bishop" ){

            if(isOppositeColor(k, board[k->getPositionY() + rangeMinXDiag315(q)][k->getPositionX() + rangeMinXDiag315(q)])){
                //cout << 't' << endl;
                return true;
            }
        }
        
        return false;
}

bool Board::isCheck(){
    if(isCheck(kw)){
        return true;
    }
    if(isCheck(kb)){
        return true;
    }
    return false;
}

void Board::undoMove(Piece *p, int x, int y){
    swap(p->getPositionX(), p->getPositionY(), x, y);
}

bool Board::checkmate(King *k){
    if(/*bestMove == "none"*/ isCheck()){
        return true;
    }
    return false;
}
 
int Board::convertToInt(char x){
    if(int(x) > 96){
        return 104 - int(x);
    }
    else{
        return int(x) - 49;
    }

    return -1;
}

int Board::justinLim(char charOldX, int oldY, char charNewX, int newY){

    int oldX = convertToInt(charOldX);
    int newX = convertToInt(charNewX);
    
    if(isValidMove(board[oldY][oldX], newX, newY)){
        if(takePiece(oldX, oldY, newX, newY)){
            return 2;
        }  
        swap(oldX, oldY, newX, newY);
        if(isCheck()){
            swap(oldX, oldY, newX, newY);
            return 3;
        }
        swap(oldX, oldY, newX, newY);
        return 1;
    }

    return 0;

}
 

void Board::playGame(){

    while(!checkmate(kw) || !checkmate(kb)){
        engine.clearFiles(); //Clears files to make it easier to process info, program runs extremely slow if info is constantly being put into files
        
        string position = "position startpos moves";
        position += listMove;

        char charOldX;
        char charOldY;
        char charNewX;
        char charNewY;

        int oldX;
        int newX;
        int oldY;
        int newY;

        bool madeMove = false;

        if(whiteMoves == blackMoves){
            cout << "White move: " << endl;
            while(!madeMove){
                cout << "Input Move(White): ";
                cin >> playerMove;

                charOldX = playerMove[0];
                charOldY = playerMove[1];
                charNewX = playerMove[2];
                charNewY = playerMove[3];

                oldX = convertToInt(charOldX);
                newX = convertToInt(charNewX);
                oldY = convertToInt(charOldY);
                newY = convertToInt(charNewY);

                if((board[oldY][oldX]->getID() != "empty") && (board[oldY][oldX]->white())){
                    if(isValidMove(board[oldY][oldX], newX - oldX, newY - oldY)){
                        if(board[oldY][oldX]->getID() == "empty"){
                            madeMove = true;
                            whiteMoves++;
                        }
                        else{
                            swap(oldX, oldY, newX, newY);
                            if(isCheck(kw)){
                                swap(newX, newY, oldX, oldY);
                                cout << "King is still in check, try again" << endl;
                            }
                            else{
                                if(board[newY][newX]->getID() == "pawn" && newY == 8){
                                    promote(board[newY][newX]);
                                }
                                madeMove = true;
                                whiteMoves++;
                            }
                        }
                    }

                    else{
                        cout << "Invalid move, try again" << endl;
                    }
                }
                else{
                    cout << "Invalid move, try again" << endl;
                }
            }
        }
        else{
            cout << "Black move: " << endl;
            while(!madeMove){
                cout << "Input Move(Black): ";
                cin >> playerMove;

                charOldX = playerMove[0];
                charOldY = playerMove[1];
                charNewX = playerMove[2];
                charNewY = playerMove[3];

                oldX = convertToInt(charOldX);
                newX = convertToInt(charNewX);
                oldY = convertToInt(charOldY);
                newY = convertToInt(charNewY);

                if((board[oldY][oldX]->getID() != "empty") && (!board[oldY][oldX]->white())){
                    if(isValidMove(board[oldY][oldX], newX - oldX, newY - oldY)){
                        if(board[oldY][oldX]->getID() == "empty"){
                            madeMove = true;
                            whiteMoves++;
                        }
                        else{
                            swap(oldX, oldY, newX, newY);
                            if(isCheck(kb)){
                                swap(newX, newY, oldX, oldY);
                                cout << "King is in check, try again" << endl;
                            }
                            else{
                                if(board[newY][newX]->getID() == "pawn" && newY == 1){
                                    promote(board[newY][newX]);
                                }
                                madeMove = true;
                                blackMoves++;
                            }
                        }
                    }
                    else{
                        cout << "Invalid move, try again bruh" << endl;
                    }
                }
                else{
                    cout << "Invalid move, try again wtf" << endl;
                }
            }
        }

        cout << "Your Move: ";
        cout << playerMove << endl;

        position += " " + playerMove;
        listMove += " " + playerMove;

        cout << "List of current moves: " << listMove << endl; 

        //Stockfish move
        // Send position and search commands
        engine.sendCommand(position);

        //Set depth to tell stockfish how far to search(the lower the depth, the lower the difficulty)
        engine.sendCommand("go depth 100");

        // Retrieve the best move
        bestMove = engine.getBestMove();
        cout << "Best Move: " << bestMove << endl;

        // Update list of moves with the best move
        listMove += " " + bestMove;
        //a function to conver best move to be updated on your board
        engine.clearFiles();


        //Now update the board with stockfish move
        charOldX = bestMove[0];
        charOldY = bestMove[1];
        charNewX = bestMove[2];
        charNewY = bestMove[3];

        oldX = convertToInt(charOldX);
        newX = convertToInt(charNewX);
        oldY = convertToInt(charOldY);
        newY = convertToInt(charNewY);
        swap(oldX, oldY, newX, newY);
        ++blackMoves;
      
        printBoard();
    }
 }
