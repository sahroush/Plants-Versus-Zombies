#pragma once

#include "global.hpp"

enum State {
  IN_GAME,
  PAUSE_MENU,
  MAIN_MENU,
  LEVEL_SELECT,
  VICTORY_SCREEN,
  GAMEOVER_SCREEN,
  CREDITS,
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
  
};