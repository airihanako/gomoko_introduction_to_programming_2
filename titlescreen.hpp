#ifndef UNTITLED_TITLESCREEN_HPP
#define UNTITLED_TITLESCREEN_HPP

#include "textbox.hpp"
#include "button.hpp"

struct TitleScreen : public Widget{
    TitleScreen(int x, int y, int sx, int sy);
    bool playing = false;

    TextBox gameTitle =  TextBox(int(_sx/2 - 50), 10, 100, 45, "Gomoku game");
    Button gameStart =  Button(150,100,90,40,"start game");
    Button exitGame =  Button(150,200,90,40,"Exit game");
    TextBox createdBy =  TextBox(190,340,190,50,"Created by Orsi Szondi");


    void draw() override;

    void handle(genv::event ev);

};



#endif //UNTITLED_TITLESCREEN_HPP
