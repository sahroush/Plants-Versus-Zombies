#pragma once

#include "global.hpp"
#include "player.hpp"
#include "projectile.hpp"

class Handler{
public:
    Handler (Player* player);
    ~Handler();
    void update();
    void render(RenderWindow &window);
private:
    Clock clock;
    Player* player;
    vector < Projectile* > projectiles;
    void add_projectile();
    void delete_out_of_bounds();
};