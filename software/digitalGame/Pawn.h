#pragma once
#include "Piece.h"

class Pawn : private Piece {
    void movePiece() { throw std::runtime_error("Not implemented"); }
};