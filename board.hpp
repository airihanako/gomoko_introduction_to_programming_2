#ifndef UNTITLED_BOARD_HPP
#define UNTITLED_BOARD_HPP

#include "graphics.hpp"
#include "checkbox.hpp"
#include "vector"

struct Board : Widget{
    Board(int x1, int y1, int sx1, int sy1, int x, int y, int sx, int sy) : Widget(x, y, sx, sy) {}

    Board(int x, int y, int sx, int sy);

    std::vector<std::vector<CheckBox>> grid;

    void draw() override;

    void handle(genv::event ev) override;
};


#endif //UNTITLED_BOARD_HPP
