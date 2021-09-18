//
// Created by Professional on 17.09.2021.
//
#include <iostream>
#include <string>
#include "Character.h"
using namespace std;
#ifndef RPG_GAME_GAME_H
#define RPG_GAME_GAME_H
class Game {
public:
    Game();
    virtual ~Game();

    void mainMenu();
    bool isPlaying() const;
    void setPlaying(bool playing);
    void createCharacter();

private:
    int choice;
    bool playing;
    Character character;

    void playMenu();
    void showStats();
};


#endif //RPG_GAME_GAME_H
