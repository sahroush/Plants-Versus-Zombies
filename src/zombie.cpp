#include "zombie.hpp"

Zombie::Zombie(Vector2f p){
    pos = p;
    if (!texture.loadFromFile(PICS_PATH + "zombie.png")) {
        debug("failed to load zombie texture");
    }
    sprite.setTexture(texture);
}
       
Zombie::~Zombie(){

}

void Zombie::render(RenderWindow &window){
    window.draw(sprite);
}

void Zombie::update(){

}