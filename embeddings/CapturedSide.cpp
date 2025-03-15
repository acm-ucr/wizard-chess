#include "CapturedSide.h"

using namespace std;

CapturedSide::CapturedSide() {
    capturedColumn["queen1"] = new Queen(9, 0, true);
    capturedColumn["queen0"] = new Queen(9, 1, false);
    counter = 2;
    pawnCounter = 0;
}

void CapturedSide::capture(Piece* capturedPiece){
    string key = capturedPiece->getID() + to_string(capturedPiece->getIsWhite());
    if(capturedColumn.find(key) == capturedColumn.end()){
        key += "1";
    }
    if(capturedColumn.find(key) == capturedColumn.end()){
        key += to_string(pawnCounter);
        pawnCounter++;
    }

    if(capturedPiece->getID() == "queen"){
        if(capturedPiece->getIsWhite()){
            capturedColumn[key] = new Queen(9, counter, true);
        }
        else{
            capturedColumn[key] = new Queen(9, counter, false);
        }
    }
    else if(capturedPiece->getID() == "rook"){
        if(capturedPiece->getIsWhite()){
            capturedColumn[key] = new Rook(9, counter, true);
        }
        else{
            capturedColumn[key] = new Rook(9, counter, false);
        }
    }
    else if(capturedPiece->getID() == "knight"){
        if(capturedPiece->getIsWhite()){
            capturedColumn[key] = new Knight(9, counter, true);
        }
        else{
            capturedColumn[key] = new Knight(9, counter, false);
        }
    }
    else if(capturedPiece->getID() == "bishop"){
        if(capturedPiece->getIsWhite()){
            capturedColumn[key] = new Bishop(9, counter, true);
        }
        else{
            capturedColumn[key] = new Bishop(9, counter, false);
        }
    }
    else if(capturedPiece->getID() == "pawn"){
        if(capturedPiece->getIsWhite()){
            capturedColumn[key] = new Pawn(9, counter, true);
        }
        else{
            capturedColumn[key] = new Pawn(9, counter, false);
        }
    }
    else{
        return;
    }

    counter++;
}

int CapturedSide::retrievePiece(Piece* p){
    string key = p->getID() + to_string(p->getIsWhite());
    auto foundPiece = capturedColumn.find(key);
    if(foundPiece != capturedColumn.end()){
        return foundPiece->second->getPositionY();
    }
    else{
        key += "1";
        auto foundPiece2 = capturedColumn.find(key);
        if(foundPiece != capturedColumn.end()){
            return foundPiece->second->getPositionY();
        }
    }

    return -1;
}

void CapturedSide::print(){
    for(const auto& index : capturedColumn){
        cout << index.second->getID() << ", " << index.second->getIsWhite() << endl;
    }
}
