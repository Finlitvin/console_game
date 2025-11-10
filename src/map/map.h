#pragma once

#include <vector>

#include "../game/game_const.h"
#include "../player/player.h"


class Map {
private:
    char map_[game_const::height][game_const::width];
    std::vector<MapItem> items;

public:
    Map();
    void addMapItem(MapItem& item);
    void draw();
};

