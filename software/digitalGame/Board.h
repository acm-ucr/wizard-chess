#ifndef BOARD_H
#define BOARD_H
//header guards


#include <vector>
#include <iostream>
#include "Piece.h"
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

        vector<vector<Piece*>> board;
        
        
        // //Pawn white
        // Pawn pw0;
        // Pawn pw1;
        // Pawn pw2;
        // Pawn pw3;
        // Pawn pw4;
        // Pawn pw5;
        // Pawn pw6;
        // Pawn pw7;


        // //Pawn Black
        // Pawn pb0;
        // Pawn pb1;
        // Pawn pb2;
        // Pawn pb3;
        // Pawn pb4;
        // Pawn pb5;
        // Pawn pb6;
        // Pawn pb7;


        // //Castle(or Rook) white
        // Rook rw0;
        // Rook rw1;


        // //Castle(or Rook) black
        // Rook rb0;
        // Rook rb1;


        // //Knight white
        // Knight kw0;
        // Knight kw1;


        // //Knight black
        // Knight kb0;
        // Knight kb1;


        // //Bishop white
        // Bishop bw0;
        // Bishop bw1;


        // //Bishop Black
        // Bishop bb0;
        // Bishop bb1;


        // //Queen White
        // Queen qw;


        // //Queen Black
        // Queen qb;


        // //King White
        // King kw;


        // //King Black
        // King kb;


        // //Empty Pieces
        // Empty e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16,
        //       e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31;

    protected:
        vector<Piece> emptyPieces;




    public:
        Board(); //Default COnstructor
        ~Board();
        void resetBoard();
        Piece getPiece(int first, int second);
        
        //2D array to keep track of pieces and first index is for Letters and seoncd is for numbers
        //Possibly using XY coordinates to keep track of pieces with index


        //void updateBoard();
        Board getUpdatedBoard();
        void swap(int oldX, int oldY, int newX, int newY);
        bool takePiece(int newX, int newY);
        void printBoard();
        void playGame();
        bool checkmate();
        void promote(Pawn *p, Piece *piece);



        int rangeMinX(Piece p);
        int rangeMaxX(Piece p);
        int rangeMinY(Piece p);
        int rangeMaxY(Piece p);
};


#endif
