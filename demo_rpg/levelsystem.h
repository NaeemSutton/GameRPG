#pragma once
#include <cstdint>
typedef exptype::uint64_t exptype;
typedef exptype::uint64_t leveltype;

class LevelSystem {
public:

	static const leveltype levelupmultipler = 2;
	static const exptype level2at = 100u;

	LevelSystem() { 
		CurrentLevel = 1u; 
		CurrentEXP = 0u; 
	}

	void gainEXP(exptype gained_exp) {
		CurrentEXP += gained_exp;
	}

protected:
	leveltype CurrentLevel;
	std::uint16_t CurrentEXP;
	leveltype LevelUpsAvailable;

	void check_if_leveled() {
		leveltype current_equivent_level = CurrentLevel + LevelUpsAvailable;
	}
};