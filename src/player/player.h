#pragma once

#include "../map/map_item.h"

class Player: public MapItem {
private:
    int health_;
    int damage_;
    int armor_;

public:
    Player(int x, int y, char name);
    
    void setHealth(int health);
    int getHealth() const;

    void setDamage(int damage);
    int getDamage() const;

    void setArmor(int armor);
    int getArmor() const;

    void info() const;
    void move(char key);
    void attack(Player& enemy);
    bool isEnemyAround(Player& enemy);
};
