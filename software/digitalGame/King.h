#pragma once
#include "Piece.h"

class King : private Piece {
    void movePiece() { throw std::runtime_error("Not implemented"); }
};