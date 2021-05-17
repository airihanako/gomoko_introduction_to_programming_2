#ifndef UNTITLED_GAMEMASTER_HPP
#define UNTITLED_GAMEMASTER_HPP
#include "vector"

struct GameMaster{
    std::vector<std::vector<int>> tableRepresentation = std::vector<std::vector<int>>(15);
    GameMaster();

    int checkWin();

    void itemCheck(int x, int y, bool player);

    void loadRepresentation(std::vector<std::vector<int>> repr);

};

#endif //UNTITLED_GAMEMASTER_HPP
