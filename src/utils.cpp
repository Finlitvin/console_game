#include <unistd.h>
#include <cstdio>
#include "utils.h"

termios Utils::old_;
termios Utils::current_;

int Utils::getch() {
    int ch;
    tcgetattr(STDIN_FILENO, &old_);
    current_ = old_;
    current_.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &current_);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &old_);

    return ch;
}
