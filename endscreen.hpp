#ifndef MAIN_CPP_ENDSCREEN_HPP
#define MAIN_CPP_ENDSCREEN_HPP
#include "textbox.hpp"
#include "button.hpp"

struct EndScreen : public Widget{
    EndScreen(int x, int y, int sx, int sy);
    std::string winnerMessage;

    TextBox tryAgain =  TextBox(int(_sx/2 - 50), 100, 100, 45, "GAME OVER");
    TextBox winnerIs = TextBox(0,0,0,0, winnerMessage);
    Button quitButton = Button (165, 155, 50, 40, "quit");
    TextBox thanksMessage =  TextBox(45,210,330,50,"Thank You for playing my Gomoku game :)");

    void draw() override;

    void setWinner(std::string message);

    void handle(genv::event ev);

};

#endif //MAIN_CPP_ENDSCREEN_HPP
