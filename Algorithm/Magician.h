#pragma once
#include <string>
#include "Player.h"
class Monster;

using namespace std;

class Magician : public Player {
public:
	Magician(string nickname);
	~Magician();
	void attack();
	void attack(Monster* monster);
};
