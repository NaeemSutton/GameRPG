#pragma once
#pragma once
#include "hp.h"
#include "statblock.h"
class rogue : public hp, public StatBlock {
public:

	static const hptype HPGROWTH = static_cast<hptype>(13u);
	static const stattype BASESTR = static_cast<stattype>(3u);
	static const stattype BASEINT = static_cast<stattype>(2u);

	rogue() : hp(HPGROWTH, HPGROWTH), StatBlock(BASESTR, BASEINT) {}

private:

};
