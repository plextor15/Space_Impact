#include "Level.h"

Level::Level()
{
}

Level::~Level()
{
	if (Mapa) {
		for (long i = 0; i < Wysokosc; i++) {
			delete[] Mapa[i];
		}
		delete[] Mapa;
	}

	if (MapaWidoczna) {
		for (long i = 0; i < Wysokosc; i++) {
			delete[] MapaWidoczna[i];
		}
		delete[] MapaWidoczna;
	}

}

void Level::SetWidocznyRozmiar(int wys, int szer)
{
	if (wys < Wysokosc && szer < Szerokosc) 
	{
		WysokoscWidok = wys;
		SzerokoscWidok = szer;
	}
	return;
}
