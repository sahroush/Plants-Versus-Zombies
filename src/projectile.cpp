#include "projectile.hpp"

Projectile::Projectile(int x, int y){
    pos = Vector2f(x, y);
    if (!texture.loadFromFile(PICS_PATH + "tir.png")) {
        debug("failed to load player texture");
    }
    sprite.setTexture(texture);
    sprite.setScale(0.7, 0.7);
}

Projectile::~Projectile(){

}

void Projectile::render(RenderWindow &window){
    window.draw(sprite);
}

void Projectile::update(){
    pos.x += speed;
    sprite.setPosition(pos);
}