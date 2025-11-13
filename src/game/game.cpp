#include <iostream>
#include <termios.h>
#include <unistd.h>
#include <cstdio>

#include "game.h"
#include "../utils/utils.h"

Game::Game(): player_(Player{2, 2, 'R'}), enemy_(Player{5, 5, 'E'}), apple_(Apple{7, 7, '*'}) {}


void Game::run() {
    char command;

    map_.addMapItem(player_);
    map_.addMapItem(enemy_);
    map_.addMapItem(apple_);

    while (command != 'q') {
        system("clear");

        player_.info();
        enemy_.info();
        map_.draw();

        command = Utils::getch();
        if (command == 'r') {
            player_.attack(enemy_);
        } else {
            if (apple_.IsApply(player_)) {
                // delete apple
            }
            player_.move(command);
        }
    };
}
