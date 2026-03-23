#include "Monster.h"
#include "Player.h"
#include <iostream>



Monster::Monster(string Monstername) : name(Monstername)
{
    HP = 10;
    power = 30;
    defence = 10;
    speed = 10;
}

void Monster::attack(Player* player)
{
    int Damage = getPower() - player->getDefence();
    if (Damage <= 0)
    {
        Damage = 1;
    }

    player->setHP(player->getHP() - Damage);
    cout << player->getJobName() << " " << player->getNickname() << "는 공격을 맞아 체력이 " << player->getHP() << "로 감소했다.\n";
}





//getter


string Monster::getName() {
    return name;
}

int Monster::getHP() {
    return HP;
}


int Monster::getPower() {
    return power;
}

int Monster::getDefence() {
    return defence;
}


int Monster::getSpeed() {
    return speed;
}


//setter

void Monster::setName(string name) {
    Monster::name = name;
}

void Monster::setHP(int HP) {
    Monster::HP = HP;
}


void Monster::setPower(int power) {
    Monster::power = power;
}

void Monster::setDefence(int defence) {
    Monster::defence = defence;
}

void Monster::setSpeed(int Speed) {
    Monster::speed = speed;
}