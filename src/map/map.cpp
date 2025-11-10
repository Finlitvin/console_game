#include <iostream>

#include "map.h"
#include "../player/player.h"


Map::Map() {
    for (int i = 0; i < game_const::height; i++) {
        for (int j = 0; j < game_const::width; j++) {
            if (i == 0 || j == 0 || j == game_const::width - 1 || i == game_const::height - 1) {
                map_[i][j] = '#';
            } else {
                map_[i][j] = ' ';
            }
        }
    }
}

void Map::draw(const Player& player, const Player& enemy) {
    for (int i = 0; i < game_const::height; i++) {
        for (int j = 0; j < game_const::width; j++) {
            if (player.getX() == i && player.getY() == j) {
                std::cout << player.getSymbol();
            } else if (enemy.getX() == i && enemy.getY() == j) {
                std::cout << enemy.getSymbol();
            } else {
                std::cout << map_[i][j];
            }
        }
        std::cout << std::endl;
    }
}
