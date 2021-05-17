#include "graphics.hpp"
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
    if (ev.pos_x > 1){
        _x++;
    }
    gameTitle.handle(ev);
    gameStart.handle(ev);
    if (gameStart._pressed){

    }
    exitGame.handle(ev);
    createdBy.handle(ev);
}
