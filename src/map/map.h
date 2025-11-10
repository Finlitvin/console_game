#pragma once

#include "../game/game_const.h"
#include "../player/player.h"


class Map
{
private:
    char map_[game_const::height][game_const::width];
public:
    Map();
    void draw(const Player& player, const Player& enemy);
};

