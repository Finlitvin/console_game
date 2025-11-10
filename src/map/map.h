#pragma once

#include <vector>

#include "../game/game_const.h"
#include "../player/player.h"


class Map
{
private:
    char map_[game_const::height][game_const::width];
    std::vector<Player> mapItems;
public:
    Map();
    void draw(const Player& player, const Player& enemy);
};

