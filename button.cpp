#include "button.hpp"


using namespace genv;

Button::Button(int x, int y, int sx, int sy, std::string _text) : TextBox(x, y, sx, sy, std::move(_text)) {
    _pressed = false;
}

void Button::handle(genv::event ev) {
    press(ev);
}

void Button::press(const genv::event &ev) {
    if (is_selected(ev.pos_x, ev.pos_y) && ev.button == btn_left){
        _pressed = true;
    } else{
        _pressed = false;
    }
}
