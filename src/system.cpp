#include "system.hpp"

System::System(int width, int height) {
  window.create(VideoMode(width, height), "PVZ Mola", Style::Close);
  window.setFramerateLimit(FRAME_RATE);
  state = MAIN_MENU;
}

System::~System() {}

void System::run() {
  while (window.isOpen() and state != EXIT) {
    update();
    render();
    handle_events();
  }
  exit(0);
}

void System::handle_events() {
  Event event;
  while (window.pollEvent(event)) {
    switch (event.type) {
    case (Event::Closed):
      window.close();
      state = EXIT;
      break;
    case (Event::KeyPressed):
      handle_key_down(event.key.code);
      break;
    case (Event::KeyReleased):
      handle_key_up(event.key.code);
      break;
    case (Event::MouseButtonPressed):
      handle_mouse_press(event);
      break;
    case (Event::MouseButtonReleased):
      handle_mouse_release(event);
      break;
    default:
      break;
    }
  }
}

void System::update() {
  switch (state) {
  case (IN_GAME):
    break;
  case (PAUSE_MENU):
    break;
  case (MAIN_MENU):
    break;
  case (LEVEL_SELECT):
    break;
  case (VICTORY_SCREEN):
    break;
  case (GAMEOVER_SCREEN):
    break;
  case (CREDITS):
    break;
  }
}

void System::render() {
  switch (state) {
  case (IN_GAME):
    break;
  case (PAUSE_MENU):
    break;
  case (MAIN_MENU):
    break;
  case (LEVEL_SELECT):
    break;
  case (VICTORY_SCREEN):
    break;
  case (GAMEOVER_SCREEN):
    break;
  case (CREDITS):
    break;
  }
  window.display();
}

void System::handle_key_up(Keyboard::Key key) {
  switch (state) {
  case (IN_GAME):
    break;
  case (PAUSE_MENU):
    break;
  case (MAIN_MENU):
    break;
  case (LEVEL_SELECT):
    break;
  case (VICTORY_SCREEN):
    break;
  case (GAMEOVER_SCREEN):
    break;
  case (CREDITS):
    break;
  }
}

void System::handle_key_down(Keyboard::Key key) {
  switch (state) {
  case (IN_GAME):
    break;
  case (PAUSE_MENU):
    break;
  case (MAIN_MENU):
    break;
  case (LEVEL_SELECT):
    break;
  case (VICTORY_SCREEN):
    break;
  case (GAMEOVER_SCREEN):
    break;
  case (CREDITS):
    break;
  }
}

void System::handle_mouse_press(Event ev) {
  if (ev.mouseButton.button == Mouse::Right)
    return;
  Vector2f pos = {ev.mouseButton.x, ev.mouseButton.y};
  switch (state) {
  case (IN_GAME):
    break;
  case (PAUSE_MENU):
    break;
  case (MAIN_MENU):
    break;
  case (LEVEL_SELECT):
    break;
  case (VICTORY_SCREEN):
    break;
  case (GAMEOVER_SCREEN):
    break;
  case (CREDITS):
    break;
  }
}

void System::handle_mouse_release(Event ev) {
  if (ev.mouseButton.button == Mouse::Right)
    return;
  Vector2f pos = {ev.mouseButton.x, ev.mouseButton.y};
  switch (state) {
  case (IN_GAME):
    break;
  case (PAUSE_MENU):
    break;
  case (MAIN_MENU):
    break;
  case (LEVEL_SELECT):
    break;
  case (VICTORY_SCREEN):
    break;
  case (GAMEOVER_SCREEN):
    break;
  case (CREDITS):
    break;
  }
}