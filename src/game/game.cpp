#include <iostream>
#include <termios.h>
#include <unistd.h>
#include <cstdio>

#include "game.h"
#include "../utils/utils.h"

Game::Game(): player_(Player{2, 2, 'R'}), enemy_(Player{5, 5, 'E'}) {}


void Game::run() {
    char direction;

    map_.addMapItem(player_);
    map_.addMapItem(enemy_);

    while (direction != 'q') {
        system("clear");

        player_.info();
        enemy_.info();
        map_.draw();

        direction = Utils::getch();
        player_.move(direction);
    };
}
