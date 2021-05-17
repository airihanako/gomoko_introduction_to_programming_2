#ifndef UNTITLED_BOARD_HPP
#define UNTITLED_BOARD_HPP

#include "graphics.hpp"
#include "checkbox.hpp"
#include "vector"

struct Board : Widget{

    Board(int x, int y, int sx, int sy);

    std::vector<std::vector<CheckBox>> grid = std::vector<std::vector<CheckBox>>();

    void draw() override;

    bool handle(genv::event ev, bool player);
};


#endif //UNTITLED_BOARD_HPP
