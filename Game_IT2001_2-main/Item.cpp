//
// Created by GooseMane on 17.09.2021.
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