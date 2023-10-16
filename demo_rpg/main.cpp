#include <iostream>


#include "rogue.h"
#include "cleric.h"
#include "warrior.h"
#include "wizard.h"

int main() {

	warrior warr1;
	wizard wiz1;
	cleric cler1;
	rogue rog1;

	std::cout << "Warrior\n"
		<< "-MaxHP: " << warr1.getMaxHp() << '\n'
		<< "-Stength: " << warr1.getStrength() << '\n'
		<< "-Intellect: " << warr1.getIntellect() << '\n' << std::endl;

	std::cout << "Wizard\n"
		<< "-MaxHP: " << wiz1.getMaxHp() << '\n'
		<< "-Stength: " << wiz1.getStrength() << '\n'
		<< "-Intellect: " << wiz1.getIntellect() << '\n' << std::endl;

	std::cout << "Cleric\n"
		<< "-MaxHP: " << cler1.getMaxHp() << '\n'
		<< "-Stength: " << cler1.getStrength() << '\n'
		<< "-Intellect: " << cler1.getIntellect() << '\n' << std::endl;

	std::cout << "Rogue\n"
		<< "-MaxHP: " << rog1.getMaxHp() << '\n'
		<< "-Stength: " << rog1.getStrength() << '\n'
		<< "-Intellect: " << rog1.getIntellect() << '\n';


	return 0;
}