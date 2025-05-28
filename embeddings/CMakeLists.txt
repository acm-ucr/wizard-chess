CMAKE_MINIMUM_REQUIRED(VERSION 3.10)

project(WizardChess)

add_executable( play_game main.cpp Board.cpp CapturedSide.cpp EmptyPiece.cpp Queen.cpp Bishop.cpp Knight.cpp Pawn.cpp Piece.cpp Rook.cpp King.cpp
)