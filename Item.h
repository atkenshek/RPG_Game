//
// Created by Professional on 17.09.2021.
//

#ifndef RPG_GAME_ITEM_H
#define RPG_GAME_ITEM_H
#include <string>
using namespace std;

class Item {
public:
    Item(string name, int atk);

    Item();

    const string &getName() const;

    void setName(const string &name);

    int getAtk() const;

    void setAtk(int atk);

    void getRandomItem();

private:
    string name;
    int atk;

};

#endif //RPG_GAME_ITEM_H
