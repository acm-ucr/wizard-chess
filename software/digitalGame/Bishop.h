#pragma once
#include "Piece.h"

class Bishop : private Piece {
    void movePiece() { throw std::runtime_error("Not implemented"); }
};