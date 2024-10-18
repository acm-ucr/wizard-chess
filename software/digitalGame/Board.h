#ifndef BOARD_H 
#define BOARD_H 
//header guards

#include <iostream>
#include "header_pieces/Piece.h"
#include "header_pieces/Piece.h"
#include "header_pieces/Pawn.h"
#include "header_pieces/Bishop.h"
#include "header_pieces/Knight.h"
#include "header_pieces/Queen.h"
#include "header_pieces/King.h"
#include "header_pieces/Castle.h"


using namespace std;

class Board {
    private:
        Piece board[8][8];

        //Pawn white
        Pawn pw0;
        Pawn pw1;
        Pawn pw2;
        Pawn pw3;
        Pawn pw4;
        Pawn pw5;
        Pawn pw6;
        Pawn pw7;

        //Pawn Black
        Pawn pb0;
        Pawn pb1;
        Pawn pb2;
        Pawn pb3;
        Pawn pb4;
        Pawn pb5;
        Pawn pb6;
        Pawn pb7;

        //Castle(or Rook) white
        Castle cw0;
        Castle cw1;

        //Castle(or Rook) black
        Castle cb0;
        Castle cb1;

        //Knight white
        Knight kw0;
        Knight kw1;

        //Knight black
        Knight kb0;
        Knight kb1;

        //Bishop white
        Bishop bw0;
        Bishop bw1;

        //Bishop Black
        Bishop bb0;
        Bishop bb1;

        //Queen White
        Queen qw;

        //Queen Black
        Queen qb;

        //King White
        King kw;

        //King Black
        King kb;


    public:
        Board(); //Default COnstructor 
        ~Board();
        void resetBoard();
        Piece getPiece(int first, int second);
        //2D array to keep track of pieces and first index is for Letters and seoncd is for numbers
        //Possibly using XY coordinates to keep track of pieces with index

        
        void printBoard();
};

#endif