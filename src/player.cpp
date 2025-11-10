#include <iostream>
#include "player.h"
#include "game_const.h"

Player::Player(char name)
: x_(2), y_(2), name_(name), health_(10), damage_(3), armor_(1){}

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
    std::cout << "Name: " << this->name_ << std::endl;
    std::cout << "Health: " << this->health_ << std::endl;
    std::cout << "Damage: " << this->damage_ << std::endl;
    std::cout << "Armor: " << this->armor_ << std::endl;
}

void Player::move(char key) {
    if (key == 'w' && this->x_ > 1) {
        this->x_--;
    } else if (key == 's' && this->x_ < (game_const::height - 2)) {
        this->x_++;
    } else if (key == 'a' && this->y_ > 1) {
        this->y_--;
    } else if (key == 'd' && this->y_ < (game_const::width - 2)) {
        this->y_++;
    }
}

