#ifndef BOARD_H
#define BOARD_H
//header guards


#include <vector>
#include <iostream>
#include "Piece.h"
#include "Pawn.h"
#include "Bishop.h"
#include "Knight.h"
#include "Queen.h"
#include "King.h"
#include "Rook.h"
#include "EmptyPiece.h"


using namespace std;


class Board {
    private:

    protected:
        vector<Piece> emptyPieces;




    public:
        Board(); //Default COnstructor
        ~Board();
        void resetBoard();
       

        vector<vector<Piece*>> board;

        King *kw = new King(4, 7, true);
        King *kb = new King(4, 0, false);

        //2D array to keep track of pieces and first index is for Letters and seoncd is for numbers
        //Possibly using XY coordinates to keep track of pieces with index


        //void updateBoard();
        Board getUpdatedBoard();
        void swap(int oldX, int oldY, int newX, int newY);
        bool takePiece(int oldX, int oldY, int newX, int newY);
        void printBoard();
        void playGame();
        bool checkmate(King *k);
        bool isCheck(King *k);
        void promote(Pawn *p, Piece *piece);

        void updateBoard();

        bool isOppositeColor(Piece *p1, Piece *p2);


        void undoMove(Piece *p, int x, int y);

        int convertToInt(char x);


        int simulateUp(Piece *p);
        int simulate45X(Piece *p);
        int simulate45Y(Piece *p);
        int simulateRight(Piece *p);
        int simulate135X(Piece *p);
        int simulate135Y(Piece *p);
        int simulateDown(Piece *p);
        int simulate225X(Piece *p);
        int simulate225Y(Piece *p);
        int simulateLeft(Piece *p);
        int simulate315X(Piece *p);
        int simulate315Y(Piece *p);

        void resetSimulation(Piece *p, int x, int y);

        int rangeUp(Piece *p);
        int rangeDown(Piece *p);
        int rangeLeft(Piece *p);
        int rangeRight(Piece *p);

        int rangeMaxXDiag45(Piece *p);
        int rangeMinXDiag135(Piece *p);
        int rangeMaxXDiag225(Piece *p);
        int rangeMinXDiag315(Piece *p);

        bool isQueenMoveValid(Piece *p, int xT, int yT);
        bool isRookMoveValid(Piece *p, int xT, int yT);
        bool isBishopMoveValid(Piece *p, int xT, int yT);
        bool isKnightMoveValid(Piece *p, int xT, int yT);
        bool isKingMoveValid(Piece *p, int xT, int yT);
        bool isPawnMoveValid(Piece *p, int xT, int yT);

        bool isValidMove(Piece *p, int xT, int yT);

        bool isMoving();

        int legalMoves();

};


#endif
