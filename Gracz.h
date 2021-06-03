#ifndef GRACZ_H
#define GRACZ_H

#include "GameObject.h"

class Gracz : public GameObject
{
public:
	Gracz(char wyglad, Typ tag, int zdrowie);
	~Gracz();
	Gracz(const Gracz& drugi);
	const Gracz& operator=(const Gracz& drugi);

	//void Strzal();
};

#endif // !GRACZ_H