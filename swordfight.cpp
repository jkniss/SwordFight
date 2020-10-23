/*
 * swordfight.cpp
 *
 *  Created on: Oct 12, 2020
 *      Author: jesse
 */

#include <string>
#include <iostream>

#include "swordfight.h"

using namespace std;

string Player::getWeapon() {
	return weaponType;
}

string Player::getItem() {
	return itemType;
}

int Player::getPlayerHP() {
	return playerHP;
}


void Player::setWeapon(string weapon) {
	weaponType = weapon;
}

void Player::setItem(string item) {
	itemType = item;
}

void Player::setPlayerHP(int HP) {
	playerHP = HP;
}

void Player::printPlayerInfo() {
	cout << "You have " << getPlayerHP() << " left" << endl;
}

int Enemy::getEnemyHP() {
	return enemyHP;
}

void Enemy::setEnemyHP(int HP) {
	enemyHP = HP;
}

void Enemy::printEnemyInfo() {
	cout << "Enemy has " << getEnemyHP() << " left" << endl;
}
