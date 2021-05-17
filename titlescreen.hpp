#ifndef UNTITLED_TITLESCREEN_HPP
#define UNTITLED_TITLESCREEN_HPP
#include "widget.hpp"
#include "textbox.hpp"
#include "button.hpp"

struct TitleScreen : Widget{
    TitleScreen(int x, int y, int sx, int sy);

    TextBox gameTitle =  TextBox(int(_sx/2 + 50), int(_sy*0.3), 50, 100, "Gomoku game");
    Button gameStart =  Button(50,50,50,50,"start game");
    Button exitGame =  Button(100,100,100,100,"Exit game");
    TextBox createdBy =  TextBox(400,400,50,50,"Created by Orsi Szondi");

    void draw() override;

    void handle(genv::event ev) override;

};



#endif //UNTITLED_TITLESCREEN_HPP
