#include "ObjectPlayble.h"

ObjectPlayble::ObjectPlayble(bool widzialny, bool przezroczysty, char wyglad) : ObjectDynamic(widzialny, przezroczysty, wyglad)
{
	
}

ObjectPlayble::~ObjectPlayble(){
}

//ObjectPlayble::ObjectPlayble(const ObjectPlayble& drugi){
//}

const ObjectPlayble& ObjectPlayble::operator=(const ObjectPlayble& drugi){
	if (this == &drugi) {
		return *this;
	}

	return *this;
}