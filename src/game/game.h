#pragma once

#include "../player/player.h"
#include "../map/map.h"
#include "../apple/apple.h"


class Game {
private:
    Player player_;
    Player enemy_;
    Apple apple_;
    Map map_;

public:
    Game();
    void run();
};
