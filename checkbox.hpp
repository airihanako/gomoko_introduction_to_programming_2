#ifndef UNTITLED_CHECKBOX_HPP
#define UNTITLED_CHECKBOX_HPP

#include "widget.hpp"

struct CheckBox : Widget{
    bool _checked;
    int r = 255;
    int g = 255;
    int b = 255;
    CheckBox(int x, int y, int sx, int sy);
    void draw() ;
    bool handle(genv::event ev,bool player);
    void check(bool player);
};

#endif //UNTITLED_CHECKBOX_HPP
