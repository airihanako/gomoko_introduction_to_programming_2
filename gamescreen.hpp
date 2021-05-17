#ifndef UNTITLED_GAMESCREEN_HPP
#define UNTITLED_GAMESCREEN_HPP

#include "textbox.hpp"
#include "checkbox.hpp"

struct GameScreen : Widget{
    GameScreen(int x, int y, int sx, int sy);

    TextBox turnText = TextBox(0,0,100,50,"White");
    TextBox turnAnnounceText = TextBox(150,0,250,100,"'s turn");


    void draw() override;

    void handle(genv::event ev) override;

};

#endif //UNTITLED_GAMESCREEN_HPP
