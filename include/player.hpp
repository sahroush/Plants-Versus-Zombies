#pragma once

#include "global.hpp"


class Player{
public:
    Player(int x, int y);
    ~Player();
    void render(RenderWindow &window);
    void update();
    void handle_key_down(Keyboard::Key key);
    
private:
    CircleShape circle;
    Vector2f pos;
    void go_left();
    void go_right();
    void go_up();
    void go_down();
};