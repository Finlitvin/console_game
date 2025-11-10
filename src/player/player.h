#pragma once

#include "../map/map_item.h"

class Player: public MapItem {
private:
    int health_;
    int damage_;
    int armor_;

public:
    Player(int x, int y, char name);

    void info() const;
    void move(char key);
};
