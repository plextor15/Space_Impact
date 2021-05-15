#ifndef LEVEL_H
#define LEVEL_H

#include "GameObject.h"

class Level
{
protected:
	char** Mapa;			//caly poziom
	char** MapaWidoczna;	//czesc widoczna na ekranie
	int Wysokosc;
	int Szerokosc;
	int WysokoscWidok;		//wysokosc widoczna
	int SzerokoscWidok;		//szerokosc widoczna

public:
	Level();
	~Level();
	Level(const Level& drugi);
	const Level& operator=(const Level& drugi);

	void SetWidocznyRozmiar(int wys, int szer);
};
#endif // !LEVEL_H