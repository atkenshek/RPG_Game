#include <iostream>
#include <string>
#include "Character.h"
using namespace std;

#ifndef IT2001_2002_L1_GAME_H
#define IT2001_2002_L1_GAME_H

class Game {
public:
    Game();
    virtual ~Game();

    void mainMenu();    //defining main menu function, that will be inside infinite loop
    bool isPlaying() const; //defining function that checks whether the game is running
    void setPlaying(bool playing);  //defining function that changes the value of boolean isPlaying
    void createCharacter();  //defining the function that creates character with inputted name in main menu

private:
    int choice;             //defining tha variable that receives user input
    bool playing;           //defining tha variable that shows condition of the game
    Character character;    //defining the field that will contain future character`s data

    void playMenu();        //defining the function that returns to the main menu of the game
    void showStats();       //defining the function that shows data about our hero, weapon, HP and etc.
};


#endif //IT2001_2002_L1_GAME_H
