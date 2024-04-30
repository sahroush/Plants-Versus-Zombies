#pragma once

#include "global.hpp"

class Projectile{
public:
    Projectile(int x, int y);
    ~Projectile();
    void render(RenderWindow &window);
    void update();
    
private:
    const int speed = 4;
    Texture texture;
    Sprite sprite;
    Vector2f pos;
};