#pragma once

#include "../player/player.h"
#include "../map/map.h"


class Game {
private:
    Player player_;
    Player enemy_;
    Map map_;

public:
    Game();
    void run();
};
