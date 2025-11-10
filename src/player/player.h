#pragma once

class Player 
{
private:
    int x_;
    int y_;
    char name_;
    int health_;
    int damage_;
    int armor_;

public:
    Player(int x, int y, char name);
    int getX() const;
    void setX(int x);

    int getY() const;
    void setY(int y);

    char getName() const;
    void setName(char name);

    void info() const;
    void move(char key);
};
