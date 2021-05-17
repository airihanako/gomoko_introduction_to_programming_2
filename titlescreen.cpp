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
    if (ev.pos_x > 1){
        _x++;
    }
    gameTitle.handle(ev);
    gameStart.handle(ev);
    if (gameStart._pressed){
        GameScreen gameScreen = GameScreen(_x,_y,_sx,_sy);
        playing = true;
        while (playing){
            gameScreen.draw();
            gameScreen.handle(ev);
        }
    }
    exitGame.handle(ev);
    createdBy.handle(ev);
}
