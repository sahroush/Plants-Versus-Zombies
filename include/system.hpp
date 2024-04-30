#pragma once

#include "global.hpp"
#include "player.hpp"

enum State {
  IN_GAME,
  PAUSE_MENU,
  MAIN_MENU,
  VICTORY_SCREEN,
  GAMEOVER_SCREEN,
  EXIT
};

class System {
public:
  System(int width, int height);
  void run();
  ~System();
  RenderWindow window;

private:
  State state;
  Player* player;
  Texture backgroundTexture;
  Sprite backgroundSprite;
  Music music;
  void update();
  void render();
  void handle_events();
  void handle_key_up(Keyboard::Key key);
  void handle_key_down(Keyboard::Key key);
  void handle_mouse_press(Event ev);
  void handle_mouse_release(Event ev);
};