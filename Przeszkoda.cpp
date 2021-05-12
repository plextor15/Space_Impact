#include "Przeszkoda.h"

Przeszkoda::Przeszkoda(char wyglad) : ObjectStatic(true, true, wyglad)
{
}

Przeszkoda::~Przeszkoda()
{
}

//Przeszkoda::Przeszkoda(const Przeszkoda& drugi)
//{
//}

const Przeszkoda& Przeszkoda::operator=(const Przeszkoda& drugi)
{
	if (this == &drugi) {
		return *this;
	}

	return *this;
}
