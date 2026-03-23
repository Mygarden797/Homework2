#pragma once

#include <string>
#include "Player.h"

using namespace std;
class Monster;

class Archer : public Player {
public:
	Archer(string nickname);
	~Archer();
	void attack();
	void attack(Monster* monster);
	int getseriesAttack();
	void setseriesAttack(int seriesAttack);

private:
	int seriesAttack;
};

