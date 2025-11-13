#include "apple.h"

Apple::Apple(int x, int y, char symbol)
: MapItem(x, y, symbol) , health_(5){}

int Apple::GetHealth() {
    return health_;
}

bool Apple::IsApply(Player &player) {
    if (player.getX() == x_ && player.getY() == y_) {
        int new_health = player.getHealth() + GetHealth();
        player.setHealth(new_health);
        return true;
    }
    return false;
}
