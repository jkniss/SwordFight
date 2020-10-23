/*
 * main.cpp
 *
 *  Created on: Oct 12, 2020
 *      Author: Jesse
 *  Sword Fight Game.
 *
 *
 *
 *
 */

#include <iostream>
#include <string>

#include "swordfight.h"

int main() {


	Player player1; // create instance of player object
	Enemy enemy1; // create instance of enemy object


	std::string weaponChoice;
	std::string enemyChoice;
	std::string attackChoice;
	std::string currentWeapon;

	// setting starting hit points for player and enemy
	int startingHP = 200;
	int startingEnemyHP = 75;
	int currentEnemyHP;
	int currentPlayerHP;


	std::cout << "Please choose a weapon: Sword, Axe, Mace, Spear\n";
	std::cin >> weaponChoice;

	player1.setWeapon(weaponChoice);
	player1.setPlayerHP(startingHP);
	enemy1.setEnemyHP(startingEnemyHP);

	if (weaponChoice == "Sword") {
		enemyChoice = "Spear";
		enemy1.setWeapon(enemyChoice);
	}
	else if (weaponChoice == "Axe") {
		enemyChoice = "Mace";
		enemy1.setWeapon(enemyChoice);
	}
	else if (weaponChoice == "Mace") {
		enemyChoice = "Axe";
		enemy1.setWeapon(enemyChoice);
	} else {
		enemyChoice = "Sword";
		enemy1.setWeapon(enemyChoice);
	}

	while (player1.getPlayerHP() != 0) {
		std::cout << "Type Attack to fight, Defense to block, or Switch to change weapons\n";
		std::cin >> attackChoice;
		currentWeapon = player1.getWeapon();

		if (attackChoice == "Attack" && currentWeapon == "Sword") {
			currentEnemyHP = enemy1.getEnemyHP();
			currentEnemyHP = currentEnemyHP - 2;
			enemy1.setEnemyHP(currentEnemyHP);

			currentPlayerHP = player1.getPlayerHP();
			currentPlayerHP = currentPlayerHP - 3;
			player1.setPlayerHP(currentPlayerHP);

			player1.printPlayerInfo();
			enemy1.printEnemyInfo();
		}
		else if (attackChoice == "Attack" && currentWeapon == "Axe") {
			currentEnemyHP = enemy1.getEnemyHP();
			currentEnemyHP = currentEnemyHP - 5;
			enemy1.setEnemyHP(currentEnemyHP);

			currentPlayerHP = player1.getPlayerHP();
			currentPlayerHP = currentPlayerHP - 7;
			player1.setPlayerHP(currentPlayerHP);

			player1.printPlayerInfo();
			enemy1.printEnemyInfo();
		}
		else if (attackChoice == "Attack" && currentWeapon == "Mace") {
			currentEnemyHP = enemy1.getEnemyHP();
			currentEnemyHP = currentEnemyHP - 7;
			enemy1.setEnemyHP(currentEnemyHP);

			currentPlayerHP = player1.getPlayerHP();
			currentPlayerHP = currentPlayerHP - 5;
			player1.setPlayerHP(currentPlayerHP);

			player1.printPlayerInfo();
			enemy1.printEnemyInfo();
		}
		else if (attackChoice == "Attack" && currentWeapon == "Spear") {
			currentEnemyHP = enemy1.getEnemyHP();
			currentEnemyHP = currentEnemyHP - 3;
			enemy1.setEnemyHP(currentEnemyHP);

			currentPlayerHP = player1.getPlayerHP();
			currentPlayerHP = currentPlayerHP - 2;
			player1.setPlayerHP(currentPlayerHP);

			player1.printPlayerInfo();
			enemy1.printEnemyInfo();
		}
		else if (attackChoice == "Defense") {
			currentEnemyHP = enemy1.getEnemyHP();
			std::cout << "The enemy has used an item to heal some HP!" << std::endl;
			currentEnemyHP = currentEnemyHP + 10;
			enemy1.setEnemyHP(currentEnemyHP);

			currentPlayerHP = player1.getPlayerHP();
			currentPlayerHP = currentPlayerHP - 0;
			player1.setPlayerHP(currentPlayerHP);

			player1.printPlayerInfo();
			enemy1.printEnemyInfo();
		}
		else if (attackChoice == "Switch") {
			std::cout << "Please choose a weapon: Sword, Axe, Mace, Spear\n";
			std::cin >> weaponChoice;

			player1.setWeapon(weaponChoice);

			if (weaponChoice == "Sword") {
				enemyChoice = "Spear";
				enemy1.setWeapon(enemyChoice);
			}
			else if (weaponChoice == "Axe") {
				enemyChoice = "Mace";
				enemy1.setWeapon(enemyChoice);
			}
			else if (weaponChoice == "Mace") {
				enemyChoice = "Axe";
				enemy1.setWeapon(enemyChoice);
			} else {
				enemyChoice = "Sword";
				enemy1.setWeapon(enemyChoice);
			}
		}
		if (player1.getPlayerHP() == 0) {
				std::cout << "Game over!!" << std::endl;
				break;
		}
		else if(enemy1.getEnemyHP() == 0) {
				std::cout << "Congratulations, you've defeated your enemy!!" << std::endl;
				break;
		}
	}




}







