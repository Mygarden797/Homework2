#pragma once

#include <string>
#include "Player.h"
class Monster;

using namespace std;

class Thief : public Player {
public:
	Thief(string nickname);
	~Thief();
	void attack();
	void attack(Monster* monster);
	int getseriesAttack();
	void setseriesAttack(int seriesAttack);

private:
	int seriesAttack;
};
