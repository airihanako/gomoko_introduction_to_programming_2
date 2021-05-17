#include <iostream>
#include "graphics.hpp"
#include "titlescreen.hpp"
#include "gamescreen.hpp"

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
    if (gameStart._pressed){
        playing = true;
    }
    exitGame.handle(ev);
    if (exitGame._pressed){
        exit(0);
    }
    createdBy.handle(ev);
}
