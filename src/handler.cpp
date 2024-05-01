#include "handler.hpp"

Handler::Handler (Player* p){
    player = p;
}

Handler::~Handler(){
    for(auto p : projectiles){
        delete p;
    }
    for(auto z : zombies){
        delete z;
    }
}

void Handler::update(){
    Time elapsed = clock.getElapsedTime();
    if(elapsed.asMilliseconds() >= 600){
        clock.restart();
        add_projectile();
    }
    Time zelapsed = zombie_clock.getElapsedTime();
    if(zelapsed.asMilliseconds() >= 1200){
        zombie_clock.restart();
        add_zombie();
    }
    for(auto p : projectiles){
        p->update();
    }
    for(auto z : zombies){
        z->update();
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
    for(auto z : zombies){
        z->render(window);
    }
}

void Handler::add_projectile(){
    Projectile* p = new Projectile(player->get_projectile_pos());
    projectiles.push_back(p);
}   

void Handler::add_zombie(){
    Zombie* z = new Zombie(Vector2f(WIDTH, rng()%HEIGHT - 60));
    zombies.push_back(z);
}