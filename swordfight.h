/*
 * swordfight.h
 *
 *  Created on: Oct 12, 2020
 *      Author: jesse
 */

#ifndef SWORDFIGHT_H_
#define SWORDFIGHT_H_

#include <string>

using namespace std;

class Player {
	public:
		void setWeapon(std::string weapon);
		void setItem(std::string item);
		string getWeapon();
		string getItem();
		void setPlayerHP(int HP);
		int getPlayerHP();
		void printPlayerInfo(); // adding print statement to reduce code in main


	private:
		string weaponType;
		string itemType;
		int playerHP;

};

class Enemy: public Player {
	public:
		void setEnemyHP(int HP);
		int getEnemyHP();
		void printEnemyInfo(); // adding print statement to reduce code in main

	private:
		int enemyHP;

};






#endif /* SWORDFIGHT_H_ */
