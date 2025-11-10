#include <iostream>

#include "player.h"
#include "../game/game_const.h"


Player::Player(int x, int y, char name)
: x_(x), y_(y), name_(name), health_(10), damage_(3), armor_(1){}

int Player::getX() const{
    return this->x_;
}

void Player::setX(int x) {
    this->x_ = x;
}

int Player::getY() const{
    return this->y_;
}

void Player::setY(int y) {
    this->y_ = y;
}

char Player::getName() const {
    return this->name_;
}

void Player::setName(char name) {
    this->name_ = name;
}

void Player::info() const {
    std::cout << "********* Player info *********" << std::endl;
    std::cout << "Name: " << name_ << std::endl;
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

