#include "player.hpp"

const int v = 5;

Player::Player(int x, int y){
    pos = Vector2f(x, y);
    circle.setRadius(50);
    circle.setPosition(pos);
    circle.setFillColor(Color::Yellow);
}

Player::~Player(){

}

void Player::go_left(){
    pos.x -= v;
}

void Player::go_right(){
    pos.x += v;
}

void Player::go_up(){
    pos.y -= v;
}

void Player::go_down(){
    pos.y += v;
}

void Player::render(RenderWindow &window){
    window.draw(circle);
}

void Player::update(){
    circle.setPosition(pos);
}

void Player::handle_key_down(Keyboard::Key key){
    switch (key) {
    case (Keyboard::Up):
        go_up();
        break;
    case (Keyboard::Down):
        go_down();
        break;
    case (Keyboard::Left):
        go_left();
        break;
    case (Keyboard::Right):
        go_right();
        break;
    default:
        break;
    }

}