#pragma once
#include "Piece.h"

class Castle : private Piece {
    void movePiece() { throw std::runtime_error("Not implemented"); }
};