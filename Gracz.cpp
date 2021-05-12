#include "Gracz.h"

Gracz::Gracz()
{
}

Gracz::~Gracz()
{
}

Gracz::Gracz(const Gracz& drugi)
{
}

const Gracz& Gracz::operator=(const Gracz& drugi)
{
	if (this == &drugi) {
		return *this;
	}

	return *this;
}
