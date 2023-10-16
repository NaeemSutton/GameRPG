#pragma once
#include "stattypes.h"

struct StatBlock {

	stattype Strength; // 0xFF
	stattype Intellect; // oxFF

	StatBlock() {
		Strength = static_cast<stattype>(1u);
		Intellect = static_cast<stattype>(1u);
	}

	explicit StatBlock(stattype s, stattype i) {
		Strength = s;
		Intellect = i;
	}
	
};
