#include "ObjectDynamic.h"

ObjectDynamic::ObjectDynamic(bool widzialny, bool przezroczysty, char wyglad) : ObjectStatic(widzialny, przezroczysty, wyglad)
{	

}

ObjectDynamic::~ObjectDynamic(){
}

//ObjectDynamic::ObjectDynamic(const ObjectDynamic& drugi){
//}

const ObjectDynamic& ObjectDynamic::operator=(const ObjectDynamic& drugi){
	if (this == &drugi) {
		return *this;
	}

	return *this;
}
