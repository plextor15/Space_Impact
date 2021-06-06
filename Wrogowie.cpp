#include "Wrogowie.h"

Wrogowie::Wrogowie(char wyglad, Typ tag, int zdrowie, int punkty) : GameObject(wyglad, tag, zdrowie)
{
	Punkty = punkty;
}

int Wrogowie::GetPunkty(){
	return Punkty;
}
