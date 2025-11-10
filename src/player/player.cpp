#include <iostream>

#include "player.h"
#include "../game/game_const.h"


Player::Player(int x, int y, char symbol)
: MapItem(x, y, symbol), health_(10), damage_(3), armor_(1) {}


void Player::info() const {
    std::cout << "********* Player info *********" << std::endl;
    std::cout << "Name: " << symbol_ << std::endl;
    std::cout << "Health: " << health_ << std::endl;
    std::cout << "Damage: " << damage_ << std::endl;
    std::cout << "Armor: " << armor_ << std::endl;
}

void Player::move(char key) {
    if (key == 'w' && x_ > 1) {
        x_--;
    } else if (key == 's' && x_ < (game_const::height - 2)) {
        x_++;
    } else if (key == 'a' && y_ > 1) {
        y_--;
    } else if (key == 'd' && y_ < (game_const::width - 2)) {
        y_++;
    }
}

