#include "board.hpp"

Board::Board(int x, int y, int sx, int sy) : Widget(x, y, sx, sy) {
    for(int i = 0; i < 15;i++) {
        grid.emplace_back(std::vector<CheckBox>());
        for(int j = 0; j< 15;j++){
            grid.at(i).emplace_back(CheckBox(10*i, 10*j, 10,10));
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

void Board::handle(genv::event ev) {
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            grid.at(i).at(j).handle(ev);
        }
    }
}
