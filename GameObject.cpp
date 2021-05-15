#include "GameObject.h"

GameObject::GameObject(char wyglad, char tag, int zdrowie)
{
	Wyglad = wyglad;
	Tag = tag;
	Zdrowie = zdrowie;
}

GameObject::~GameObject()
{
}
