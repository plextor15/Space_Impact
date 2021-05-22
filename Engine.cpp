#include "Engine.h"

Engine::Engine(){
	//key = '`';
}

Engine::~Engine(){
}

void Engine::Sterow(){
	if (_kbhit()) {
		key = getch();

		switch (key){
		//sterowanie statkiem gracza
		case 'w':
			PrzesunGracza(1, Kierunek::GORA);
			break;
		case 's':
			PrzesunGracza(1, Kierunek::DOL);
			break;
		case 'd':
			PrzesunGracza(1, Kierunek::PRAWO);
			break;
		case 'a':
			PrzesunGracza(1, Kierunek::LEWO);
			break;
		//strzal
		case ' ':

			break;

		//cheaty
		case '`':

			break;
		case '.':
			ileKlatka += 50;	//spowolnienie czasu
			break;
		case ',':
			ileKlatka -= 50;	//przyspieszenie czasu
			break;

		default:
			break;
		}
		
		
	}
	return;
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
	Mapa = new GameObject** [Wysokosc];
	for (int i = 0; i < Wysokosc; i++)
		Mapa[i] = new GameObject*[Szerokosc];
	
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

void Engine::GameLoop(){
	Initialize();
	while (!exit){
		//glowna petla
	}
	return;
}
