#include "Game.h"

int main() {

    Game game; //Game initialized
    while (game.isPlaying()) {  //while the game is in action
        game.mainMenu();        //displaying to console main menu buttons
    }

    return 0;
}
