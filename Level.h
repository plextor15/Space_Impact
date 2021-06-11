//	22.05	dodanie koordynatow gracza jako zmiennych,
//			dodanie mozliwosci przesuwania obiektow i gracza,
//			Mapa przechowuje teraz GameObjecty,
//			detekcja kolizji i wyjscia poza plansze,
//			dodanie analizy planszy

#ifndef LEVEL_H
#define LEVEL_H

#include "GameObject.h"
#include "Gracz.h"
#include "Wrogowie.h"

enum Kierunek
{
	GORA = 0,
	DOL = 1,
	PRAWO = 2,
	LEWO = 3
};

class Level
{
private:
	bool Noclip(int wys);	//sprawdza czy nie wyszlismy poza plansze
	//void Analiza();
	void PrzesunGracza(int wysCel, int szerCel);

protected:
	GameObject*** Mapa;			//caly poziom
	char** MapaWidoczna;	//czesc widoczna na ekranie
	int Wysokosc;
	int Szerokosc;
	int WysokoscWidok;		//wysokosc widoczna
	int SzerokoscWidok;		//szerokosc widoczna
	
	//koordynaty gracza
	int GraczWys;
	int GraczSzer;

	

	//obiekty do ktore beda na mapie
	GameObject* TPustka;
	GameObject* TStatyczny;
	GameObject* TWrog;
	GameObject* TGracz;
	//GameObject* TPociskWroga;
	//GameObject* TPociskGracza;

public:
	int PunktyLevel;	//punkty naliczane na levelu

	Level();
	~Level();
	Level(const Level& drugi);
	const Level& operator=(const Level& drugi);

	void SetWidocznyRozmiar(int wys, int szer);
	int GetPunktyLevel() { return PunktyLevel; }

	void PrzesunObjekt(int wysOb, int szerOb, int wysCel, int szerCel);
	void PrzesunGracza(int oIle, Kierunek wKtoraStrone);
	Typ Kolizja(int wys, int szer); //sprawdza czy bedzie kolizja
	int GraczUderzylW(Kierunek A);
	void ZniszczenieObiektu(int wysCel, int szerCel);

	int GetPunktyZaWroga() { return TWrog->Zdrowie; }
};
#endif // !LEVEL_H