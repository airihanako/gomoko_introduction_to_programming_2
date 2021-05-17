#ifndef UNTITLED_BOARD_HPP
#define UNTITLED_BOARD_HPP

#include "graphics.hpp"
#include "checkbox.hpp"
#include "vector"
#include "gamemaster.hpp"

struct Board : Widget{
    Board(int x, int y, int sx, int sy);
    GameMaster gameMaster;

    std::vector<std::vector<CheckBox>> grid = std::vector<std::vector<CheckBox>>();

    void draw() override;

    bool handle(genv::event ev, bool player);

    void setGameMaster(GameMaster gameMaster1);

    std::vector<std::vector<int>> getGameMasterGrid();
};


#endif //UNTITLED_BOARD_HPP
