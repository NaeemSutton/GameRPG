#pragma once
#pragma once
#include "hp.h"
#include "statblock.h"
class cleric : public hp, public StatBlock {
public:

	static const hptype HPGROWTH = static_cast<hptype>(14u);
	static const stattype BASESTR = static_cast<stattype>(2u);
	static const stattype BASEINT = static_cast<stattype>(3u);

	cleric() : hp(HPGROWTH, HPGROWTH), StatBlock(BASESTR, BASEINT) {}

private:

};
