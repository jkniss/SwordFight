/*
 * swordfight.cpp
 *
 *  Created on: Oct 12, 2020
 *      Author: jesse
 */

#include <string>

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

