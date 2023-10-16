#pragma once
#include "hp.h"
#include "statblock.h"

class wizard : public hp, public StatBlock {
public:

	static const hptype HPGROWTH = static_cast<hptype>(9u);
	static const stattype BASESTR = static_cast<stattype>(1u);
	static const stattype BASEINT = static_cast<stattype>(4u);
	wizard() : hp(HPGROWTH, HPGROWTH), StatBlock(BASESTR, BASEINT) {}

private:

};
