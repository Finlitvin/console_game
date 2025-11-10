#include <iostream>
#include <termios.h>
#include <unistd.h>
#include <cstdio>
#include "game.h"

Game::Game(): player_(Player{'R'}), map_(Map{}) {}

int Game::getch() {
    struct termios oldt, newt;
    int ch;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}

void Game::run() {
    char direction;

    while (direction != 'q') {
        system("clear");

        player_.info();
        map_.draw(player_);

        direction = getch();
        player_.move(direction);
    };
}
