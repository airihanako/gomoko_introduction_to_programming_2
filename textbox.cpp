#include "graphics.hpp"
#include "textbox.hpp"

#include "algorithm"

using namespace genv;

TextBox::TextBox(int x, int y, int sx, int sy, std::string text) : Widget(x, y, sx, sy), _text(std::move(text)) {
_active = false;
}

void TextBox::draw() {
    int colour =  150;
    gout << color(255,255,colour-255) << move_to(_x, _y) << box(_sx, _sy);
    gout << color(0,0,0) << move_to(_x + 2, _y + 2) << box(_sx -4, _sy - 4);
    gout << color(240,240,240) << move_to(_x + 5, _y + (_sy / 2) + 5) << text(_text) << refresh;
}

void TextBox::handle(event ev) {
    if (ev.button == btn_left) {
        _active = is_selected(ev.pos_x, ev.pos_y);
    }
    if (ev.keycode >= 32 && ev.keycode <= 127){
        _text.erase(std::remove(_text.begin(), _text.end(), '|'), _text.end());
        std::string new_text = _text + (char) ev.keycode + '|';
        if(gout.twidth(new_text) < _sx - 10){
            _text = new_text;
        }
    }
    if (ev.keycode == key_backspace){
        _text.erase(std::remove(_text.begin(), _text.end(), '|'), _text.end());
        _text = _text.substr(0, _text.size() - 1);
    }
}


