#include "Engine.h"

Engine::Engine(){
	//key = '`';
}

Engine::~Engine(){
}

void Engine::ParserGameObject(char wyg, int i, int j) {
	switch (wyg) {
	case '>':
		Mapa[i][j] = new Gracz('>', Typ::gracz, 100);
		break;
	case '<':
		Mapa[i][j] = new Wrogowie('<', Typ::wrog, 20, 2);
		break;
	case '#':
		Mapa[i][j] = new GameObject('#', Typ::statyczny, 999);	//niezniszczalne
		break;
	default:
		Mapa[i][j] = new GameObject('#', Typ::pusty, 1);	//pusta przestrzen
		break;
	}

	return;
}

void Engine::AktualizacjaWidocznejMapy(int odkad){
	if (Szerokosc - odkad <= SzerokoscWidok){
		odkad = Szerokosc - SzerokoscWidok;
	}

	for (int i = 0; i < WysokoscWidok; i++) {
		for (int j = 0; j < SzerokoscWidok; j++) {
			MapaWidoczna[i][j] = Mapa[i][j + odkad]->Wyglad;
		}
	}

	return;
}

void Engine::Sterow(){
	if (_kbhit()) {
		key = _getch();

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

	////zapelnianie glownej mapy
	//GameObject* TMPgameObject;
	//char chartmp;
	//for (int i = 0; i < Wysokosc; i++)
	//{
	//	for (int j = 0; j < Szerokosc; j++)
	//	{
	//		inic >> chartmp;
	//		Mapa[i][j] = TMPgameObject;
	//	}
	//}

	//zapelnianie glownej mapy
	char chartmp;
	for (int i = 0; i < Wysokosc; i++){
		for (int j = 0; j < Szerokosc; j++){
			inic >> chartmp;
			ParserGameObject(chartmp, i, j);
		}
	}

	////zapelnianie widoku
	//for (int i = 0; i < WysokoscWidok; i++)
	//{
	//	for (int j = 0; j < SzerokoscWidok; j++)
	//	{
	//		inic >> chartmp;
	//		MapaWidoczna[i][j] = Mapa[i][j]->Wyglad;
	//	}
	//}

	//zapelnianie widoku
	Postep = 0;
	AktualizacjaWidocznejMapy(Postep);

	inic.close();
	return;
}

void Engine::GameLoop(){
	Initialize();
	while (!exit){//glowna petla
		Postep++;
		AktualizacjaWidocznejMapy(Postep);

		Sleep(ileKlatka);
	}
	return;
}


