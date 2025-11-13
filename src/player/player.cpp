#include <iostream>

#include "player.h"
#include "../game/game_const.h"


Player::Player(int x, int y, char symbol)
: MapItem(x, y, symbol), health_(100), damage_(30), armor_(50) {}

void Player::setHealth(int health) {
    if (health_ == 0) {
        return;
    }

    if ((health_ - health) < 0) {
        health_ = 0;
        return;
    }

    health_ = health;
}

int Player::getHealth() const {
    return health_;
}

void Player::setDamage(int damage) {
    damage_ = damage;
}

int Player::getDamage() const {
    return damage_;
}

void Player::setArmor(int armor) {
    armor_ = armor;
}

int Player::getArmor() const {
    return armor_;
}

void Player::info() const {
    std::cout << "********* Player info *********" << std::endl;
    std::cout << "X: " << x_ << std::endl;
    std::cout << "Y: " << y_ << std::endl;
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

void Player::attack(Player &enemy) {
    if (!isEnemyAround(enemy)) {
        return;
    }

    float health = enemy.getHealth();
    float damage_cf = static_cast<float>(damage_) * 40 / 100;
    float armor_cf = static_cast<float>(enemy.getArmor()) * 20 / 100;

    float decrease_health = damage_cf - armor_cf;

    if (decrease_health <= 0) {
        decrease_health = 1;
    }

    health -= decrease_health;
    enemy.setHealth(health);
}

bool Player::isEnemyAround(Player &enemy) {
    if (
        (enemy.getX() == x_ + 1 || enemy.getX() == x_ || enemy.getX() == x_ - 1) &&
        (enemy.getY() == y_ + 1 || enemy.getY() == y_ || enemy.getY() == y_ - 1)
    ) {
        return true;
    }
    return false;
}
