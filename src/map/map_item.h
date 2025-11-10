#pragma once


class MapItem {
protected:
    int x_;
    int y_;
    char symbol_;
    
public:
    MapItem(int x, int y, char symbol);

    int getX() const;
    void setX(int x);

    int getY() const;
    void setY(int y);

    char getSymbol() const;
    void setSymbol(char symbol);
};
