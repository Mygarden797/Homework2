#include <iostream>
#include "Magician.h"


Magician::Magician(string nickname) : Player(nickname) {
	job_name = "Magician";
}

void Magician::attack()
{
	cout << "마법 화살을 쏩니다.\n";
}

Magician::~Magician()
{

}

void Magician::attack(Monster* monster) {
    int Damage = getPower() - monster->getDefence();
    if (Damage <= 0)
    {
        Damage = 1;
    }

    monster->setHP(monster->getHP() - Damage);
    if (monster->getHP() > 0)
    {
        cout << "마법 화살을 쏩니다.\n";
        cout << monster->getName() << "는 " << getJobName() << "의 공격을 맞아 체력이 " << monster->getHP() << "로 감소했다.\n";
    }
    else
    {
        cout << monster->getName() << "은 죽었다. " << getJobName() << " " << getNickname() << "이 이겼다!\n";
    }

}