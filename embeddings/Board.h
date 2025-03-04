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
#include "stockfish.h"

using namespace std;


class Board {
    private:
        int gameMode = 0;
    protected:
        vector<Piece> emptyPieces;
    public:
        Board(); //Default Constructor
        ~Board();
        void resetBoard();
        void setGamemode(int num) {gameMode = num;}
        int whiteMoves = 0;
        int blackMoves = 0;
        bool whiteWin = false;
        bool blackWin = false; 
       
        int justinIm(char charOldX, int oldY, char charNewX, int newY);

        vector<vector<Piece*>> board;

        //STOCKFISH STUFF --------------------------------------------------------------
        //FOR STOCKFISH 
        //To use it, every person has a specific path they must input into the stockfishPath variable
        //Ex: \"C:\\Users\\leaus\\OneDrive\\Important DOcs\\Wizard-Chess\\Wizard-Chess\\software\\stockfish\\stockfish-windows-x86-64-avx2.exe\"
        //All of them have the same end of \\stockfish\\stockfish-windows-x86-64-avx2.exe\ , but each person has a different beginnign of the path
        //If you look at your terminal, the beginning of the path is listed as with C: and the everything after is listed under which files path you are in for the project
        //Its called hardcoded absolute path and I'm sorry if its a litte confusing :(
        string playerMove = ""; 
        string bestMove = "";
        string listMove = "";
        const char* stockfishPath = "\"C:\\Users\\vigne\\.vscode\\Wizard-Chess\\embeddings\\stockfish\\stockfish-windows-x86-64-avx2.exe\""; //This should be the stockfish path to your file
        // const char* stockfishPath = "\"C:\\Users\\leaus\\OneDrive\\Important DOcs\\Wizard-Chess\\Wizard-Chess\\embeddings\\stockfish\\stockfish-windows-x86-64-avx2.exe\""; //This should be the stockfish path to your file

        King *kw = new King(3, 0, true);
        King *kb = new King(3, 7, false);

        //2D array to keep track of pieces and first index is for Letters and seoncd is for numbers
        //Possibly using XY coordinates to keep track of pieces with index


        //void updateBoard();
        Board getUpdatedBoard();
        void swap(int oldX, int oldY, int newX, int newY);
        bool takePiece(int oldX, int oldY, int newX, int newY);
        void printBoard();
        void playMenu();
        void playGamePVP();
        void playGamePVAIWhitePlayer();
        void playGamePVAIBlackPlayer();
        void playGameAIVAI();
        bool convertBestMove(string bestMove);
        bool isCheck(King *k);
        bool checkmate(string moveList);

        void outputQTFile(bool isPieceTaken);

        bool isCheck();

        bool promote(Piece *p, char promoPiece);

        void updateBoard();

        bool isOppositeColor(Piece *p1, Piece *p2);

        void undoMove(int oldX, int oldY, int newX, int newY, Piece *oldPiece);

        int convertToInt(char x);

        bool castleKingSide(Piece *p);
        bool castleQueenSide(Piece *p);

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
        int rangeYDiag45(Piece *p);
        int rangeMinXDiag135(Piece *p);
        int rangeMaxXDiag225(Piece *p);
        int rangeYDiag225(Piece *p);
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
