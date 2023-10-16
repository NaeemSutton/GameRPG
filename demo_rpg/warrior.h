#pragma once
#include "hp.h"
#include "statblock.h"
class warrior : public hp, public StatBlock {
public:

	static const hptype HPGROWTH = static_cast<hptype>(19u);
	static const stattype BASESTR = static_cast<stattype>(10u);
	static const stattype BASEINT = static_cast<stattype>(1u);
	warrior() : hp(HPGROWTH, HPGROWTH) , StatBlock(BASESTR, BASEINT) {}

private:

};
