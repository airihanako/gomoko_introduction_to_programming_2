#include "graphics.hpp"
#include "widget.hpp"

using namespace genv;

Widget :: Widget(int x, int y, int sx, int sy){
    _x = x;
    _y = y;
    _sx = sx;
    _sy = sy;
}

void Widget::handle(event ev){}

void Widget::draw() {}

bool Widget::is_selected(int mouse_x, int mouse_y) {
    return mouse_x > _x && mouse_x < _x + _sx && mouse_y > _y && mouse_y < _y + _sy;;
}

