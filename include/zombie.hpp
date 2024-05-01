#pragma once

#include "global.hpp"

class Zombie{
public:
    Zombie(Vector2f pos);
    ~Zombie();
    void render(RenderWindow &window);
    void update();
private:
    const float speed = 1.2;
    Texture texture;
    Sprite sprite;
    Vector2f pos;
};