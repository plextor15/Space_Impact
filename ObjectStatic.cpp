#include "ObjectStatic.h"

ObjectStatic::ObjectStatic(bool widzialny, bool przezroczysty, char wyglad){
	Widzialny = widzialny;
	Przezroczysty = przezroczysty;
	Wyglad = wyglad;
}

ObjectStatic::~ObjectStatic(){
}

ObjectStatic::ObjectStatic(const ObjectStatic& drugi){
}

const ObjectStatic& ObjectStatic::operator=(const ObjectStatic& drugi){
	if (this == &drugi) {
		return *this;
	}
	
	return *this;
}