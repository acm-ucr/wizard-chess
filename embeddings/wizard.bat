@echo off
rem Compile Chess C++ program
g++ Board.cpp Queen.cpp Rook.cpp Knight.cpp King.cpp Pawn.cpp Bishop.cpp EmptyPiece.cpp Piece.cpp stockfish.cpp main.cpp -o a.exe

rem Start both programs (Chess and voice recognition)
start a.exe
start python voicerecognition.py