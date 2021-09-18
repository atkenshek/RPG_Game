//
// Created by Professional on 17.09.2021.
//
#include "Game.h"

int main() {

    Game game; //Game initialized
    while (game.isPlaying()) {
        game.mainMenu();
    }

    return 0;
}