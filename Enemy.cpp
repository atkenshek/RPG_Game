//
// Created by Professional on 17.09.2021.
//

#include "Enemy.h"

Enemy::Enemy(int HP, int maxHP, int atk, int level) {
    this->HP = HP;
    this->maxHP = maxHP;
    this->atk = atk;
    this->level = level;
}

int Enemy::getHp() const {
    return HP;
}

int Enemy::getMaxHp() const {
    return maxHP;
}

int Enemy::getAtk() const {
    return atk;
}

int Enemy::getLevel() const {
    return level;
}

void Enemy::setHp(int hp) {
    HP = hp;
}
