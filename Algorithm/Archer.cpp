#include <iostream>
#include "Archer.h"


Archer::Archer(string nickname) : Player(nickname) {
	job_name = "Archer";
    seriesAttack = 3;
}

void Archer::attack()
{
	cout << "활을 쏩니다.\n";
}

Archer::~Archer()
{

}


void Archer::attack(Monster* monster) {
    int Damage = getPower() - monster->getDefence();
    if (Damage <= 0)
    {
        Damage = 1;
    }
    int ArcherDamage = Damage / 3;
    if (ArcherDamage <= 0)
    {
        ArcherDamage = 1;
    }

    for (int i = 0; i < seriesAttack; i++)
    {
        monster->setHP(monster->getHP() - ArcherDamage);
        if (monster->getHP() > 0)
        {
            cout << "활을 쏩니다.\n";
            cout << monster->getName() << "는 " << getJobName() << "의 공격을 맞아 체력이 " << monster->getHP() << "로 감소했다.\n";
        }
        else
        {
            cout << monster->getName() << "은 죽었다. " << getJobName() << " " << getNickname() << "이 이겼다!\n";
            break;
        }
    }


}

int Archer::getseriesAttack()
{
    return seriesAttack;
}

void Archer::setseriesAttack(int seriesAttack)
{
    Archer::seriesAttack = seriesAttack;
}
