
#ifndef UNTITLED_TEXTBOX_HPP
#define UNTITLED_TEXTBOX_HPP

#include "widget.hpp"

struct TextBox : Widget {

    TextBox(int x, int y, int sx, int sy, std::string text);


    bool _active;
    std::string _text;

    void draw() override;

    void handle(genv::event ev) override;
};


#endif //UNTITLED_TEXTBOX_HPP
