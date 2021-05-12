#include "Pocisk.h"

Pocisk::Pocisk(char wyglad, int obrazenia) : ObjectDynamic(true, false, wyglad)
{
	Obrazenia = obrazenia;
}

Pocisk::~Pocisk()
{
}

//Pocisk::Pocisk(const Pocisk& drugi)
//{
//}

const Pocisk& Pocisk::operator=(const Pocisk& drugi)
{
	if (this == &drugi) {
		return *this;
	}

	return *this;
}
