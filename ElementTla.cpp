#include "ElementTla.h"

ElementTla::ElementTla(char wyglad) : ObjectStatic(true, true, wyglad)
{
}

ElementTla::~ElementTla()
{
}

//ElementTla::ElementTla(const ElementTla& drugi)
//{
//}

const ElementTla& ElementTla::operator=(const ElementTla& drugi)
{
	if (this == &drugi) {
		return *this;
	}

	return *this;
}
