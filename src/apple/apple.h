#pragma once

#include "../map/map_item.h"
#include "../player/player.h"

class Apple: public MapItem {
    private:
        float health_;
    
        public:
            Apple(int x, int y, char symbol);
            
            int GetHealth();
            
            bool IsApply(Player& player);
};