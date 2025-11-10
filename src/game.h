#pragma once

#include "player.h"
#include "map.h"


class Game
{
private:
    Player player_;
    Map map_;
public:
    Game();

    int getch();
    void run();
};
