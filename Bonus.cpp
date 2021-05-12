#include "Bonus.h"

Bonus::Bonus(char wyglad) : ObjectStatic(true, false, wyglad)
{
	
}

Bonus::~Bonus()
{
}

//Bonus::Bonus(const Bonus& drugi)
//{
//}

const Bonus& Bonus::operator=(const Bonus& drugi)
{
	if (this == &drugi) {
		return *this;
	}

	return *this;
}
