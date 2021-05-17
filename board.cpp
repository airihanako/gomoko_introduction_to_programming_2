#include "board.hpp"

#include <utility>

Board::Board(int x, int y, int sx, int sy) : Widget(x, y, sx, sy) {
    for(int i = 0; i < 15;i++) {
        grid.emplace_back(std::vector<CheckBox>());
        for(int j = 0; j< 15;j++){
            grid.at(i).emplace_back(CheckBox(int(_sx/15)*i+_x, int(_sy/15)*j+_y, int(_sx/15),int(_sy/15)));
        }
    }

}

void Board::draw() {
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            grid.at(i).at(j).draw();
        }
    }
}

bool Board::handle(genv::event ev, bool player) {
    bool valid = false;
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            if(grid.at(i).at(j).handle(ev, player)){
                gameMaster.itemCheck(i, j ,player);
                valid = true;
            }
        }
    }
    return valid;
}

void Board::setGameMaster(GameMaster gameMaster1) {
    gameMaster = gameMaster1;
}

std::vector<std::vector<int>> Board::getGameMasterGrid() {
    return gameMaster.tableRepresentation;
}