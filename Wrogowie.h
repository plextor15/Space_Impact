#ifndef WROGOWIE_H
#define WROGOWIE_H

#include "GameObject.h"

class Wrogowie : public GameObject
{
protected:
	int Punkty;		//punkty za zabicie

public:
	Wrogowie(char wyglad, Typ tag, int zdrowie, int punkty);
	~Wrogowie();
	Wrogowie(const Wrogowie& drugi);
	const Wrogowie& operator=(const Wrogowie& drugi);
	int GetPunkty();
};


#endif // !WROGOWIE_H