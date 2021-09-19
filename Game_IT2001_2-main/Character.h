#ifndef IT2001_2002_L1_CHARACTER_H
#define IT2001_2002_L1_CHARACTER_H
#include "iostream"
#include <string>
#include "Item.h"
#include <cstdlib>
using namespace std;

class Character {
public:

    Character();

    virtual ~Character();

    const string &getName() const;

    void setName(const string &name);

    int getMaxHp() const;

    void setMaxHp(int maxHp);

    int getHp() const;

    void setHp(int hp);

    int getAtk() const;

    void setAtk(int atk);

    int getLevel() const;

    void setLevel(int level);

    int getExp() const;

    void setExp(int exp);
    string getInfo();
    void gainExp(int exp);      //defining the function to increase the hero`s experience and level
    void setItem(Item item);    //defining the function to add item to inventory
    void fight();               //defining the function that logs the process of fighting with enemy

private:
    string name;
    int maxHP;
    int HP;
    int atk;
    int level;
    int exp;
    Item items[3]; // array that stores 3 items of hero

};


#endif //IT2001_2002_L1_CHARACTER_H
