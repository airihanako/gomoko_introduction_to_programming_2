#include <iostream>
#include "graphics.hpp"
#include "endscreen.hpp"
using namespace genv;


EndScreen::EndScreen(int x, int y, int sx, int sy):Widget(x, y, sx, sy) {}

void EndScreen::draw() {
    tryAgain.draw();
    quitButton.draw();
    thanksMessage.draw();
    winnerIs.draw();
}

void EndScreen::handle(genv::event ev) {
    tryAgain.handle(ev);
    quitButton.handle(ev);
    thanksMessage.handle(ev);
}

void EndScreen::setWinner(std::string message) {
    winnerMessage = message;
}

