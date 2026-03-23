#pragma once
#include <string>
#include "Player.h"
class Monster;

using namespace std;

class Warrior : public Player {
public:
	Warrior(string nickname);
	~Warrior();
	void attack();
	void attack(Monster* monster);
};
