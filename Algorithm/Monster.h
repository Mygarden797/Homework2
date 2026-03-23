#pragma once
#include <string>
class Player;

using namespace std;


class Monster {
public:
	Monster(string Monstername);
	void attack(Player* player);

	//getter
	string getName();
	int getHP();
	int getPower();
	int getDefence();
	int getSpeed();

	//setter
	void setName(string name);
	void setHP(int HP);
	void setPower(int power);
	void setDefence(int defence);
	void setSpeed(int speed);

private:
	string name;
	int HP;
	int power;
	int defence;
	int speed;

};