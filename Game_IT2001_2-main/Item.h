//
// Created by GooseMane on 17.09.2021.
//

#ifndef IT2001_2002_L1_ITEM_H
#define IT2001_2002_L1_ITEM_H
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

    void getRandomItem(); //defining the function that gives to hero random item among 3 existing

private:
    string name;
    int atk;

};

#endif //IT2001_2002_L1_ITEM_H
