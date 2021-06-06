#include "GameObject.h"

GameObject::GameObject(char wyglad, Typ tag, int zdrowie)
{
	Wyglad = wyglad;
	Tag = tag;
	Zdrowie = zdrowie;
}

GameObject::~GameObject()
{
}

const GameObject& GameObject::operator=(const GameObject& drugi)
{
	if (this == &drugi)	{//sprawdzenie czy ten drugi to nie jest ten
		return *this;
	}

	Wyglad = drugi.Wyglad;
	Tag = drugi.Tag;
	Zdrowie = drugi.Zdrowie;

	return *this;
}

bool GameObject::CzyZyje(){
	if (Zdrowie > 0) {
		return true;
	}
	else {
		return false;
	}
}
