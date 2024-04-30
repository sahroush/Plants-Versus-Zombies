#include "player.hpp"

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

void Player::render(RenderWindow &window){
    window.draw(sprite);
}

void Player::update(Vector2i pos){
    if(is_tagged){
        Vector2f target(static_cast<float>(pos.x) - sprite.getTextureRect().width, static_cast<float>(pos.y) - sprite.getTextureRect().height);
        sprite.setPosition(target);
    }
}

void Player::handle_mouse_press(Vector2i mousePos){
    Vector2f spritePos = sprite.getPosition();
    Vector2f spriteSize = {sprite.getTextureRect().width * 2, sprite.getTextureRect().height * 2};
    if (mousePos.x >= spritePos.x && mousePos.x <= spritePos.x + spriteSize.x &&
        mousePos.y >= spritePos.y && mousePos.y <= spritePos.y + spriteSize.y)
    {
        is_tagged = true;
    }
}

void Player::handle_mouse_release(Vector2i mousePos){
    is_tagged = false;
    return;
}