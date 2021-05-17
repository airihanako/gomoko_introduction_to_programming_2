#include "titlescreen.hpp"
using namespace genv;


TitleScreen::TitleScreen(int x, int y, int sx, int sy):Widget(x, y, sx, sy) {}

void TitleScreen::draw() {
    gameTitle.draw();
    gameStart.draw();
    exitGame.draw();
    createdBy.draw();
}

void TitleScreen::handle(genv::event ev) {
    gameTitle.handle(ev);
    gameStart.handle(ev);
    exitGame.handle(ev);
    createdBy.handle(ev);
}
