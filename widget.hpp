#ifndef UNTITLED_WIDGET_HPP
#define UNTITLED_WIDGET_HPP


struct Widget{
    int _x;
    int _y;
    int _sx;
    int _sy;
    Widget(int x, int y, int sx, int sy);

    bool is_selected(int mouse_x, int mouse_y);

    virtual void draw();
    virtual void handle(genv::event ev);

};

#endif
