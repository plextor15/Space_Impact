#include "Engine.h"

Engine::Engine()
{
}

Engine::~Engine()
{
}

void Engine::Initialize()
{
	std::ifstream inic;
	inic.open("mapa.dat");

	if (inic.good())
	{
		inic >> Szerokosc >> Wysokosc;	//rozmiary poziomu
		inic >> Szerokosc >> Wysokosc;	//rozmiary widocznej czesci poziomu

	}

	//inicjalizacja glownej mapy
	Mapa = new char* [Wysokosc];
	for (int i = 0; i < Wysokosc; i++)
		Mapa[i] = new char[Szerokosc];
	
	//inicjalizacja tego co bedzie widzial gracz
	MapaWidoczna = new char* [WysokoscWidok];
	for (int i = 0; i < WysokoscWidok; i++)
		MapaWidoczna[i] = new char[SzerokoscWidok];

	//zapelnianie glownej mapy
	char chartmp;
	for (int i = 0; i < Wysokosc; i++)
	{
		for (int j = 0; j < Szerokosc; j++)
		{
			inic >> chartmp;
			Mapa[i][j] = chartmp;
		}
	}

	//zapelnianie widoku
	for (int i = 0; i < WysokoscWidok; i++)
	{
		for (int j = 0; j < SzerokoscWidok; j++)
		{
			inic >> chartmp;
			MapaWidoczna[i][j] = Mapa[i][j];
		}
	}

	inic.close();
	return;
}