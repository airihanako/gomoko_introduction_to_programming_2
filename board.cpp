#include "board.hpp"

Board::Board(int x, int y, int sx, int sy) : Widget(x, y, sx, sy) {
    grid =  std::vector<std::vector<CheckBox>>() ;
    for(int i = 0; i < 15;i++){
        for(int j = 0; j < 15;j++){
            grid[i][j] = CheckBox(10*i, 10*j, 10,10);
        }
    }
}

void Board::draw() {
    for (auto & i : grid) {
        for (int j = 0; j < grid.size(); ++j) {
            i[j].draw();
        }
    }
}

void Board::handle(genv::event ev) {
    for (auto & i : grid) {
        for (int j = 0; j < grid.size(); ++j) {
            i[j].handle(ev);
        }
    }
}
