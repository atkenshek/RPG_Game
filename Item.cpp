//
// Created by Professional on 17.09.2021.
//
#include "Item.h"
Item::Item(string name, int atk) {
    this->name = name;
    this->atk = atk;
}

const string &Item::getName() const {
    return name;
}

void Item::setName(const string &name) {
    Item::name = name;
}

int Item::getAtk() const {
    return atk;
}

void Item::setAtk(int atk) {
    Item::atk = atk;
}

Item::Item() {
    this->name = "";
    this->atk = 0;
}
void Item::getRandomItem(){
    int temp = 1;
//    Item weapon;
    if (temp==1){
//        weapon.setName("Sword");
//        weapon.setAtk(rand()%3 + 1);
//        return Item();
        name = "Sword";
        atk = rand()%3+1;
    }
//    if (temp==2){
//        weapon.setName("Blade");
//        weapon.setAtk(rand()%3 + 1);
//    }
//    if (temp==3){
//        weapon.setName("Hammer");
//        weapon.setAtk(rand()%3 + 1);
//        return Item();
//    }
//    return Item();
}