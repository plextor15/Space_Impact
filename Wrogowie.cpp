#include "Wrogowie.h"

Wrogowie::Wrogowie(char wyglad, int zdrowie) : ObjectDynamic(true, false, wyglad)
{
	Zdrowie = zdrowie;
}

Wrogowie::~Wrogowie()
{
}

//Wrogowie::Wrogowie(const Wrogowie& drugi)
//{
//}

const Wrogowie& Wrogowie::operator=(const Wrogowie& drugi)
{
	if (this == &drugi) {
		return *this;
	}

	return *this;
}
