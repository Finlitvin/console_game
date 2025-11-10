#include <iostream>
#include <termios.h>
#include <unistd.h>
#include <cstdio>

#include "game.h"
#include "../utils/utils.h"

Game::Game(): player_(Player{2, 2, 'R'}), enemy_(Player{5, 5, 'E'}), map_(Map{}) {}


void Game::run() {
    char direction;

    while (direction != 'q') {
        system("clear");

        player_.info();
        map_.draw(player_, enemy_);

        direction = Utils::getch();
        player_.move(direction);
    };
}
