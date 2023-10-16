#pragma once
#include "hitpointtypes.h"

class hp {
public:

	//return true if set successfully
	bool setMaxHP(hptype new_max_hp) { //changes maxHP to new maxHP

		if (new_max_hp < 1) { //returns if new_max_hp is less than 1, not allowed
			return;
		}
		else {
			MaxHP = new_max_hp; //sets maxhp to the newmaxhp
		}

		if (CurrentHP > MaxHP) { //checks to see if your entitys current hp is greater than your maxhp
			CurrentHP = MaxHP; // sets currentHP to MaxHP if this condition is met
		}

		return true; //returns if setMaxHP runs properly
	}

	hptype getMaxHp() {
		return MaxHP;
	}

	hptype getCurrentHp() {
		return CurrentHP;
	}


	void takeDamage(hptype damage) { //decreases hp based of ammount of damage
		if (damage > CurrentHP) { // if damage is larger than current hp, set current hp to 0 which would mean death, or a revive, etc...
			CurrentHP = 0;
			return;
		}

		CurrentHP -= damage; //subtracts your current hp based on damage

	}

	void heal(hptype amount) { //heals your entity
		if (amount + CurrentHP > MaxHP) { // if the heal exceeds your currenthp, heal only up to your maxhp
			CurrentHP = MaxHP;
			return;
		}

		CurrentHP += amount; //heals your current hp based on amount of heal
	}


	

private:
	hptype CurrentHP; //an entitys current hp that could increase or decrease
	hptype MaxHP; //the maximum amount of hp an entity could have
};
