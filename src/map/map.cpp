#include <iostream>

#include "map.h"
#include "../player/player.h"


Map::Map() {
    for (int x = 0; x < game_const::height; x++) {
        for (int y = 0; y < game_const::width; y++) {
            if (x == 0 || y == 0 || y == game_const::width - 1 || x == game_const::height - 1) {
                map_[x][y] = '#';
            } else {
                map_[x][y] = ' ';
            }
        }
    }
}

void Map::addMapItem(MapItem& item) {
    items.push_back(item);
}

void Map::draw() {
    for (int x = 0; x < game_const::height; x++) {
        for (int y = 0; y < game_const::width; y++) {
            bool isDraw = false;
            for (int i = 0; i < items.size(); i++) {
                if (!isDraw && items[i].getX() == x && items[i].getY() == y) {
                    std::cout << items[i].getSymbol();
                    isDraw = true;
                }
            }
            if (!isDraw) {
                std::cout << map_[x][y];
            }
        }
        std::cout << std::endl;
    }
}
