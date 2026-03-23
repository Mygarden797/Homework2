#include <iostream>
#include "Warrior.h"


Warrior::Warrior(string nickname) : Player(nickname) {
	job_name = "Warrior";
}

Warrior::~Warrior()
{

}

void Warrior::attack()
{
	cout << "검을 휘두릅니다.\n";
}

void Warrior::attack(Monster* monster) {
	int Damage = getPower() - monster->getDefence();
    if (Damage <= 0)
    {
        Damage = 1;
    }

    monster->setHP(monster->getHP() - Damage);
    if (monster->getHP() > 0)
    {
        cout << "검을 휘두릅니다.\n";
        cout << monster->getName() << "는 " << getJobName() << "의 공격을 맞아 체력이 " << monster->getHP() << "로 감소했다.\n";
    }
    else
    {
        cout << monster->getName() << "은 죽었다. " << getJobName() << " " << getNickname() << "이 이겼다!\n";
    }
    
}
