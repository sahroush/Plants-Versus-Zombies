#include "handler.hpp"

Handler::Handler (Player* p){
    player = p;
}

Handler::~Handler(){
    for(auto p : projectiles){
        delete p;
    }
}

void Handler::update(){
    Time elapsed = clock.getElapsedTime();
    if(elapsed.asMilliseconds() >= 500){
        clock.restart();
        add_projectile();
    }
    for(auto p : projectiles){
        p->update();
    }
    delete_out_of_bounds();
}

void Handler::delete_out_of_bounds(){
    vector <Projectile*> trash;
    for(auto p : projectiles){
        if(p->is_out()){
            trash.push_back(p);
        }
    }
    projectiles.erase(remove_if(projectiles.begin(), projectiles.end(), 
        [](auto p){ return p->is_out(); }), projectiles.end());
    for (auto p : trash){
        delete p;
    }
}

void Handler::render(RenderWindow &window){
    for(auto p : projectiles){
        p->render(window);
    }
}

void Handler::add_projectile(){
    Projectile* p = new Projectile(player->get_projectile_pos());
    projectiles.push_back(p);
}   