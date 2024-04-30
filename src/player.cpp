#include "player.hpp"

const int v = 5;

Player::Player(int x, int y){
    pos = Vector2f(x, y);
    if (!texture.loadFromFile(PICS_PATH + "peashooter.png")) {
        debug("failed to load player texture");
    }
    rect.top = 2;
    rect.left = 0;
    rect.width = 30;
    rect.height = 32;
    sprite.setTexture(texture);
    sprite.setTextureRect(rect);
    sprite.setScale(2, 2);
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
    window.draw(sprite);
}

void Player::update(){
    sprite.setPosition(pos);
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