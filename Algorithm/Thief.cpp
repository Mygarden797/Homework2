#include <iostream>
#include "Thief.h"


Thief::Thief(string nickname) : Player(nickname) {
	job_name = "Thief";
    seriesAttack = 5;
}

void Thief::attack()
{
	cout << "암기를 던집니다.\n";
}

Thief::~Thief()
{

}

void Thief::attack(Monster* monster) {
    int Damage = getPower() - monster->getDefence();
    if (Damage <= 0)
    {
        Damage = 1;
    }
    int ThiefDamage = Damage / getseriesAttack();
    if (ThiefDamage <= 0)
    {
        ThiefDamage = 1;
    }

    for (int i = 0; i < seriesAttack; i++)
    {
        monster->setHP(monster->getHP() - ThiefDamage);
        if (monster->getHP() > 0)
        {
            cout << "암기를 던집니다.\n";
            cout << monster->getName() << "는 " << getJobName() << "의 공격을 맞아 체력이 " << monster->getHP() << "로 감소했다.\n";
        }
        else
        {
            cout << monster->getName() << "은 죽었다. " << getJobName() << " " << getNickname() << "이 이겼다!\n";
            break;
        }
    }


}

int Thief::getseriesAttack()
{
    return seriesAttack;
}

void Thief::setseriesAttack(int seriesAttack)
{
    Thief::seriesAttack = seriesAttack;
}
