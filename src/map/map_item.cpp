#include "map_item.h"

MapItem::MapItem(int x, int y, char symbol)
: x_(x), y_(y), symbol_(symbol) {}

int MapItem::getX() const{
    return x_;
}

void MapItem::setX(int x) {
    x_ = x;
}

int MapItem::getY() const{
    return y_;
}

void MapItem::setY(int y) {
    y_ = y;
}

char MapItem::getSymbol() const {
    return symbol_;
}

void MapItem::setSymbol(char symbol) {
    symbol_ = symbol;
}