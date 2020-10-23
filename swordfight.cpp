/*
 * swordfight.cpp
 *
 *  Created on: Oct 12, 2020
 *      Author: jesse
 */

#include <string>
#include <iostream>

#include "swordfight.h"

std::string Player::getWeapon() {
	return weaponType;
}

std::string Player::getItem() {
	return itemType;
}

int Player::getPlayerHP() {
	return playerHP;
}


void Player::setWeapon(std::string weapon) {
	weaponType = weapon;
}

void Player::setItem(std::string item) {
	itemType = item;
}

void Player::setPlayerHP(int HP) {
	playerHP = HP;
}

void Player::printPlayerInfo() {
	std::cout << "You have " << getPlayerHP() << " left" << std::endl;
}

int Enemy::getEnemyHP() {
	return enemyHP;
}

void Enemy::setEnemyHP(int HP) {
	enemyHP = HP;
}

void Enemy::printEnemyInfo() {
	std::cout << "Enemy has " << getEnemyHP() << " left" << std::endl;
}
