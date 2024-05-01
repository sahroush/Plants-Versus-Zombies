#pragma once

#include "global.hpp"

class Zombie
public:
    Zombie(Vector2f pos);
    ~Zombie();
    void render(RenderWindow &window);
    void update();
private:
    const int speed = 3;
    Texture texture;
    Sprite sprite;
    Vector2f pos;
};