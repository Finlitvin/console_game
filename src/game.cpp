#include <iostream>
#include <termios.h>
#include <unistd.h>
#include <cstdio>
#include "game.h"
#include "utils.h"

Game::Game(): player_(Player{'R'}), map_(Map{}) {}


void Game::run() {
    char direction;

    while (direction != 'q') {
        system("clear");

        player_.info();
        map_.draw(player_);

        direction = Utils::getch();
        player_.move(direction);
    };
}
