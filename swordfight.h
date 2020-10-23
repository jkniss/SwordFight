/*
 * swordfight.h
 *
 *  Created on: Oct 12, 2020
 *      Author: jesse
 */

#ifndef SWORDFIGHT_H_
#define SWORDFIGHT_H_

#include <string>



class Player {
	public:
		void setWeapon(std::string weapon);
		void setItem(std::string item);
		std::string getWeapon();
		std::string getItem();
		void setPlayerHP(int HP);
		int getPlayerHP();

	private:
		std::string weaponType;
		std::string itemType;
		int playerHP;

};

class Enemy: public Player {
};





#endif /* SWORDFIGHT_H_ */
