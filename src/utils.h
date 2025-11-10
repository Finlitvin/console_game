#pragma once
#include <termios.h>

class Utils {
private:
    static termios old_;
    static termios current_;

public:
    static int getch();
};
