#include "Gracz.h"

Gracz::Gracz(char wyglad, int zdrowie) : ObjectPlayble(true, false, wyglad)
{
	Zdrowie = zdrowie;
}

Gracz::~Gracz()
{
}

//Gracz::Gracz(const Gracz& drugi)
//{
//}

const Gracz& Gracz::operator=(const Gracz& drugi)
{
	if (this == &drugi) {
		return *this;
	}

	return *this;
}
