#include "board.hpp"

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
    bool invalid = false;
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            if(grid.at(i).at(j).handle(ev, player)){
                invalid = true;
            }
        }
    }
    return invalid;
}
