#include <iostream>
#include "Player.h"


Player::Player(string name) : nickname(name) {
    level =1 ;
    HP = 50;
    MP = 10;
    power = 20;
    defence = 1;
    accuracy = 60;
    speed = 5;


}

void Player::printPlayerStatus() {
    cout << "------------------------------------" << endl;
    cout << "* 현재 능력치" << endl;
    cout << "닉네임: " << nickname << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "공격력: " << power << endl;
    cout << "방어력: " << defence << endl;
    cout << "정확도: " << accuracy << endl;
    cout << "속도: " << speed << endl;
    cout << "------------------------------------" << endl;
}

//getter
string Player::getJobName() {
    return job_name;
}

string Player::getNickname() {
    return nickname;
}

int Player::getHP() {
    return HP;
}

int Player::getMP() {
    return MP;
}

int Player::getLevel() {
    return level;
}

int Player::getPower() {
    return power;
}

int Player::getDefence() {
    return defence;
}

int Player::getAccuracy() {
    return accuracy;
}

int Player::getSpeed() {
    return speed;
}


//setter

void Player::setNickname(string nickname) {
    Player::nickname =  nickname;
}

void Player::setHP(int HP) {
    Player::HP = HP;
}

void Player::setMP(int MP) {
    Player::MP = MP;
}

void Player::setLevel(int level) {
    Player::level = level;
}

void Player::setPower(int power) {
    Player::power = power;
}

void Player::setDefence(int defence) {
    Player::defence = defence;
}

void Player::setAccuracy(int Accuracy) {
    Player::accuracy = accuracy;
}

void Player::setSpeed(int Speed) {
    Player::speed = speed;
}

