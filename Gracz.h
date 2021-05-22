#ifndef GRACZ_H
#define GRACZ_H

#include "GameObject.h"

class Gracz : protected GameObject
{
public:
	Gracz(char wyglad, char tag, int zdrowie);
	~Gracz();
	Gracz(const Gracz& drugi);
	const Gracz& operator=(const Gracz& drugi);

	//void Strzal();
};

#endif // !GRACZ_H