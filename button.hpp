#ifndef BUTTON_HPP_INCLUDED
#define BUTTON_HPP_INCLUDED

#include "graphics.hpp"
#include "textbox.hpp"
#include "widget.hpp"

struct Button : public TextBox {
    bool _pressed;
    std::string _text;
    Button(int x, int y, int sx, int sy, std::string _text);


    void handle(genv::event ev) override;
    virtual void press(const genv::event &ev);

};

#endif // BUTTON_HPP_INCLUDED