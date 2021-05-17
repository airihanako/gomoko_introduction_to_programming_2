#include "gamemaster.hpp"

GameMaster::GameMaster() {
    for (int i = 0; i < 15; ++i) {
        tableRepresentation[i] = std::vector<int>(15, 0);
    }

}

int GameMaster::checkWin() {
    for (int i = 0; i < tableRepresentation.size(); i++) {
        int rowCount = 0;
        int columnCount = 0;
        for (int j = 0; j < tableRepresentation.size(); j++) {
            rowCount += tableRepresentation[i][j];
            columnCount += tableRepresentation[j][i];
            if (rowCount == 5 || columnCount == 5) {
                return 1;
            } else if (rowCount == -5 || columnCount == -5) {
                return 2;
            }
        }
    }

    for (int i = 0; i < tableRepresentation.size(); i++) {
        int diagonalCount = 0;
        for (int j = 0; j <= i; j++) {
            diagonalCount += tableRepresentation[i][j];
            if (diagonalCount == 5) {
                return 1;
            } else if (diagonalCount == -5) {
                return 2;
            }
        }
        diagonalCount = 0;
        for (int j = i; j >= i; j--) {
            diagonalCount += tableRepresentation[i][j];
            if (diagonalCount == 5) {
                return 1;
            } else if (diagonalCount == -5) {
                return 2;
            }
        }
    }
    return 0;
}

void GameMaster::itemCheck(int x, int y, bool  player) {
    if (player){
        tableRepresentation.at(x).at(y) = 1;
    } else{
        tableRepresentation[x][y] = -1;
    }

}

void GameMaster::loadRepresentation(std::vector<std::vector<int>> repr) {
    for (int i = 0; i < tableRepresentation.size(); i++) {
        for (int j = 0; j < tableRepresentation.size(); j++) {

            if (tableRepresentation[i][j] == 0){
                tableRepresentation[i][j] = repr[i][j];
            }
        }
    }
}