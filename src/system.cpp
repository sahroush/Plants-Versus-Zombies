#include "system.hpp"

System::System(int width, int height) {
  window.create(VideoMode(width, height), "PVZ Mola", Style::Close);
  window.setFramerateLimit(FRAME_RATE);
  state = MAIN_MENU;
}

System::~System() {
  
}

void System::run() {
  
}