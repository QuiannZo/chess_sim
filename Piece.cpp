#include <iostream>

#include "Piece.hpp"

Piece::Piece(int x, int y, bool isWhite) : x{x}, y{y}, isWhite{isWhite} {}

bool Piece::isValidPos(int x, int y, int boardSizeOnX, int boardSizeOnY) {
    // TODO: Implement
    return true;
}

bool Piece::isCapturable(int newX, int newY, Piece* board[MAX_BOARDSIZE][MAX_BOARDSIZE], bool isWhite) {
    // TODO: Implement
    return true;
}

char Piece::getPieceType() {
    return '\0';
}

void Piece::displayPiece() {
    std::cout << getPieceType();
}

inline int Piece::getX() {
    return x;
}

inline int Piece::getY() {
    return y;
}

inline void Piece::setX(int x) {
    this->x = x;
}

inline void Piece::setY(int y) {
    this->y = y;
}

// // KING

King::King(int x, int y, bool isWhite) : Piece(x, y, isWhite) {}

void King::move(int newX, int newY) {
    if ((newX - x) <= 1 && (newY - y) <= 1) {
        setX(newX);
        setY(newY);
    }
}

char King::getPieceType() {
    // TODO: Implement
    return '\0';
}

// // QUEEN

Queen::Queen(int x, int y, bool isWhite) : Piece(x, y, isWhite) {}

void Queen::move(int newX, int newY) {
    // TODO: Implement
}

char Queen::getPieceType() {
    // TODO: Implement
    return '\0';
}

// // ROOK

Rook::Rook(int x, int y, bool isWhite) : Piece(x, y, isWhite) {}

void Rook::move(int newX, int newY) {
    // TODO: Implement
}

char Rook::getPieceType() {
    // TODO: Implement
    return '\0';
}

// // KNIGHT

Knight::Knight(int x, int y, bool isWhite) : Piece(x, y, isWhite) {}

void Knight::move(int newX, int newY) {
    // TODO: Implement
}

char Knight::getPieceType() {
    // TODO: Implement
    return '\0';
}

// // BISHOP

Bishop::Bishop(int x, int y, bool isWhite) : Piece(x, y, isWhite) {}

void Bishop::move(int newX, int newY) {
    if ((newX - x) == (newY - y)) {
        x = newX;
        y = newY;
    }
}

char Bishop::getPieceType() {
    // TODO: Implement
    return '\0';
}

// // PAWN

Pawn::Pawn(int x, int y, bool isWhite) : Piece(x, y, isWhite) {}

void Pawn::move(int newX, int newY) {
    // TODO: Implement
}

char Pawn::getPieceType() {
    // TODO: Implement
    return '\0';
}