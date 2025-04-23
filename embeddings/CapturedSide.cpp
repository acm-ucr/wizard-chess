#include "CapturedSide.h"

using namespace std;

CapturedSide::CapturedSide() {
    capturedColumn["queen1"] = new Queen(9, 0, true);
    capturedColumn["queen0"] = new Queen(9, 31, false);
    counterWhite = 1;
    counterBlack = 30;
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
            capturedColumn[key] = new Queen(9, counterWhite, true);
            counterWhite++;
        }
        else{
            capturedColumn[key] = new Queen(9, counterBlack, false);
            counterBlack--;
        }
    }
    else if(capturedPiece->getID() == "rook"){
        if(capturedPiece->getIsWhite()){
            capturedColumn[key] = new Rook(9, counterWhite, true);
            counterWhite++;
        }
        else{
            capturedColumn[key] = new Rook(9, counterBlack, false);
            counterBlack--;
        }
    }
    else if(capturedPiece->getID() == "knight"){
        if(capturedPiece->getIsWhite()){
            capturedColumn[key] = new Knight(9, counterWhite, true);
            counterWhite++;
        }
        else{
            capturedColumn[key] = new Knight(9, counterBlack, false);
            counterBlack--;
        }
    }
    else if(capturedPiece->getID() == "bishop"){
        if(capturedPiece->getIsWhite()){
            capturedColumn[key] = new Bishop(9, counterWhite, true);
            counterWhite++;
        }
        else{
            capturedColumn[key] = new Bishop(9, counterBlack, false);
            counterBlack--;
        }
    }
    else if(capturedPiece->getID() == "pawn"){
        if(capturedPiece->getIsWhite()){
            capturedColumn[key] = new Pawn(9, counterWhite, true);
            counterWhite++;
        }
        else{
            capturedColumn[key] = new Pawn(9, counterBlack, false);
            counterBlack--;
        }
    }
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
