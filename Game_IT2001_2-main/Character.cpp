#include "Character.h"
#include "Item.h"

int weaponCounter=0;

Character::Character() {
    name = "Player";
    maxHP = 40;
    HP = maxHP;
    atk = 2;
    level = 0;
    exp = 0;
}

Character::~Character() {}

string Character::getInfo(){
    string string1;
    string1 = "Name: "+name+ "\n"+"HP: "+ to_string(HP)+"/"+ to_string(maxHP)+"\n"
            +"atk: "+ to_string(atk)+"\n"+ "exp: " + to_string(exp)+"\n"+ "level: "+to_string(level)+ "\n" +
            "Item 1: " + items[0].getName() + " (" + to_string(items[0].getAtk()) + ")\n" +
            "Item 2: " + items[1].getName() + " (" + to_string(items[1].getAtk()) + ")\n" +
            "Item 3: " + items[2].getName() + " (" + to_string(items[2].getAtk()) + ")\n";
            return string1;
}

//exp
//level
void Character::fight(){ //function where character starts fighting with random enemy
    int enemyHP = rand() % 40 + 10;   //creation of enemy with random HP
  while(HP>0 || enemyHP>0){          //while our hero is alive
      enemyHP = enemyHP - atk - (rand() % 3); //decreasing the enemy HP
      HP = HP - (rand() % 10);                   //decreasing our hero`s HP
      if (HP<=0){
          cout<<"Your hero died!\n";
          break;
      }
      if (enemyHP<=0){
          cout << name + " won the battle!\n";
          gainExp(rand() % 150 + 50); //if hero wins, he gaines some experience and upgrades if needed
          Item tempItem;                    //creating the object of class Item to store weapon
          tempItem.getRandomItem();         //picking random weapon among 3 existing
          setItem(tempItem);           //giving to hero just randomly chosen weapon
          break;
      }
          cout << name + ": " << HP <<endl;          //logging the HP of HERO
          cout << "Enemy: " <<enemyHP;               //logging the HP of enemy
          cout << "\n";
  }

}
void Character::gainExp(int exp) {
    this->exp = this->exp + exp;
    if (exp>=level*100){
        level++;
        exp=0;
    }

    //TODO increase stats
}


const string &Character::getName() const {
    return name;
}

void Character::setName(const string &name) {
    Character::name = name;
}

int Character::getMaxHp() const {
    return maxHP;
}

void Character::setMaxHp(int maxHp) {
    maxHP = maxHp;
}

int Character::getHp() const {
    return HP;
}

void Character::setHp(int hp) {
    HP = hp;
}

int Character::getAtk() const {
    return atk;
}

void Character::setAtk(int atk) {
    Character::atk = atk;
}

int Character::getLevel() const {
    return level;
}

void Character::setLevel(int level) {
    Character::level = level;
}

int Character::getExp() const {
    return exp;
}

void Character::setExp(int exp) {
    Character::exp = exp;
}
void Character::setItem(Item item) {
    Character::items[weaponCounter] = item;
    weaponCounter++;
}