//
// Created by Professional on 17.09.2021.
//

#ifndef RPG_GAME_ENEMY_H
#define RPG_GAME_ENEMY_H
class Enemy {
public:
    Enemy(int HP, int maxHP, int atk, int level);

    int getHp() const;

    int getMaxHp() const;

    int getAtk() const;

    int getLevel() const;

private:
    int HP;
public:
    void setHp(int hp);

private:
    int maxHP;
    int atk;
    int level;

};

#endif //RPG_GAME_ENEMY_H
