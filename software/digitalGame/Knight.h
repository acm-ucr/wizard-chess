#pragma once
#include "Piece.h"

class Knight : private Piece {
    void movePiece() { throw std::runtime_error("Not implemented"); }
};