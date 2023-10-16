#pragma once
#include "stattypes.h"

class StatBlock {
	
	stattype Strength; // 0xFF
	stattype Intellect; // oxFF

public:
	StatBlock() {
		Strength = static_cast<stattype>(1u);
		Intellect = static_cast<stattype>(1u);
	}

	explicit StatBlock(stattype s, stattype i) {
		Strength = s;
		Intellect = i;
	}

	stattype getStrength() { return Strength; }
	stattype getIntellect() { return Intellect; }

	
};
