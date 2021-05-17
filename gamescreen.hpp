#ifndef UNTITLED_GAMESCREEN_HPP
#define UNTITLED_GAMESCREEN_HPP

#include "textbox.hpp"
#include "checkbox.hpp"
#include "board.hpp"

struct GameScreen : Widget{
    GameScreen(int x, int y, int sx, int sy);
    bool player = false;

    TextBox turnText = TextBox(0,0,100,50,"White");
    TextBox turnAnnounceText = TextBox(100,0,200,50,"'s turn");
    Board board = Board(0,50,400,350);


    void draw() override;

    void handle(genv::event ev) override;

};

#endif //UNTITLED_GAMESCREEN_HPP
