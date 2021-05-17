#include "graphics.hpp"
#include "checkbox.hpp"

using namespace genv;

CheckBox::CheckBox(int x, int y, int sx, int sy) : Widget(x, y, sx, sy) {
    _checked = false;
}

void CheckBox::draw() {
    int colour = 150;
    gout << color(65, 65, 130) << move_to(_x, _y) << box(_sx, _sy);
    gout << color(0, 0, 0) << move_to(_x + 2, _y + 2) << box(_sx - 4, _sy - 4);
    if (_checked) {
        gout << color(r, g, b);
        gout << move_to(_x + 4, _y + 4) << line(_sx - 8, _sy - 8);
        gout << move_to(_x + 5, _y + 4) << line(_sx - 8, _sy - 8);
        gout << move_to(_x + _sx - 4, _y + 4) << line(-_sx + 8, _sy - 8);
        gout << move_to(_x + _sx - 5, _y + 4) << line(-_sx + 8, _sy - 8);
    }
}

bool CheckBox::handle(genv::event ev, bool player) {
    if (ev.type == ev_mouse && is_selected(ev.pos_x, ev.pos_y) && ev.button == btn_left && !_checked) {
        CheckBox::check(player);
        return true;
    }
    return false
}

void CheckBox::check(bool player) {
        if (player) {
            r = 255;
            g = 255;
            b = 255;
        } else {
            r = 222;
            g = 78;
            b = 106;
        }
    _checked = true;
}