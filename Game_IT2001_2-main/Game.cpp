#include "Game.h"

Game::Game() {
    choice = 0;
    playing = true;
}

Game::~Game() {

}

void Game::mainMenu() {             //main menu function
    cout<<"Main Menu"<<endl<<endl;
    cout<<"1: Start"<<endl;
    cout<<"0: Quit"<<endl;

    cout<<endl<<"Choice: ";
    cin>>choice;                    //getting user input from console, that decides
    switch (choice) {               //switch that checks the user`s input
        case 0: playing = false;    //if user inputs '0' then
            break;                  //the game exits
        case 1: {                   //if user inputs '1' then
            createCharacter();      //the new character is created
            playMenu();             //will call function with infinite loop
            break;                  //if playMenu finishes, the game exits
        }
        default: break;
    }
}

void Game::playMenu() {             //the function that gives decisions to hero
    while (choice!=0) {             //infinite loop, that continues until we input 0 to concole
        cout << "Play Menu" << endl << endl;
        cout << "1: Explore" << endl;
        cout << "2: Show stats" << endl;
        cout << "0: Go back" << endl;

        cout << endl << "Choice: ";
        cin >> choice;              //getting user input from console to determine users choice
        switch (choice) {
            case 0:                 //if user inputs '0'
                break;              //the loop breaks
            case 1: {               //if user decides to explore
                cout<<character.getName() + " faced the enemy!\n";  //hero meets the enemy
                character.fight();  //the logging of fight of hero with enemy
                break;
            }
            case 2:
                cout<<character.getInfo()<<endl;    //to output all data about hero`s name, HP, equipments and etc.
                break;
            default:
                break;
        }
    }
}

void Game::createCharacter(){   //function that creates character with name that user inputted
    cout<<"Enter the name: ";
    string name;
    cin>> name;                 //getting inputted name by user
    character.setName(name);    //setting the name of created character with user`s inputted name
};

bool Game::isPlaying() const{   //boolean function that check whether is game is on process
    return playing;
}

void Game::setPlaying(bool playing) {   //function that changes the value of playing variable. Used to terminate the game ot vice versa.
    Game::playing = playing;
}
