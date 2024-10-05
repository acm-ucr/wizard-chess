#pragma once
#include "Piece.h"

class Queen : private Piece {
    void movePiece() { throw std::runtime_error("Not implemented"); }
};