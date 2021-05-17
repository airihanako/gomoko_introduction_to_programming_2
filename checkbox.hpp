#ifndef UNTITLED_CHECKBOX_HPP
#define UNTITLED_CHECKBOX_HPP

#include "widget.hpp"

struct CheckBox : Widget{
    bool _checked;
    CheckBox(int x, int y, int sx, int sy);
    void draw() ;
    void handle(genv::event ev);
    void check();
};

#endif //UNTITLED_CHECKBOX_HPP
