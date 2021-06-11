#include "Engine.h"
#include <iostream>//DEBUG ONLY!!

Engine::Engine(){
	key = '`';
	Postep = 0;
}

Engine::~Engine(){
}

void Engine::ParserGameObject(char wyg, int i, int j) {
	switch (wyg) {
	case '.':
		Mapa[i][j] = new GameObject(' ', Typ::pusty, 1);	//pusta przestrzen
		break;
	case '>':
		Mapa[i][j] = new Gracz('>', Typ::gracz, 100);
		GraczWys = i;
		GraczSzer = j;
		break;
	case '<':
		Mapa[i][j] = new Wrogowie('<', Typ::wrog, 20, 2);
		break;
	case '#':
		Mapa[i][j] = new GameObject('#', Typ::statyczny, 999);	//niezniszczalne
		break;
	default:
		Mapa[i][j] = new GameObject(' ', Typ::pusty, 1);	//pusta przestrzen
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

void Engine::GraczWCosUderzyl(int cos){
	if (cos == 1){
		KoniecLevelu(false);
	}
	if (cos == 2){
		PunktyLevel += TWrog->Zdrowie;
	}

	return;
}

void Engine::Sterow() {
	if (_kbhit()) {
		key = _getch();
	}
	else {
		key = 'd';
	}

	int WcoUderzylGracz = 0;
	switch (key) {
	case 's':
		WcoUderzylGracz = GraczUderzylW(Kierunek::GORA);
		break;
	case 'w':
		WcoUderzylGracz = GraczUderzylW(Kierunek::DOL);
		break;
	case 'd':
		WcoUderzylGracz = GraczUderzylW(Kierunek::PRAWO);
		break;
	case 'a':
		WcoUderzylGracz = GraczUderzylW(Kierunek::LEWO);
		break;
	default:break;
	}

	GraczWCosUderzyl(WcoUderzylGracz);

	switch (key) {
		//sterowanie statkiem gracza
	case 's':
		PrzesunGracza(1, Kierunek::GORA);
		break;
	case 'w':
		PrzesunGracza(1, Kierunek::DOL);
		break;
	case 'd':
		PrzesunGracza(1, Kierunek::PRAWO);
		break;
	case 'a':
		if (Postep != GraczSzer) {
			PrzesunGracza(1, Kierunek::LEWO);
		}
		break;
	case 'q':	//wyjscie
		exit = true;
		break;

	case '.':
		ileKlatka += 50;	//spowolnienie czasu
		break;
	case ',':
		ileKlatka -= 50;	//przyspieszenie czasu
		break;
	default: break;

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
		inic >> SzerokoscWidok >> WysokoscWidok;	//rozmiary widocznej czesci poziomu
		WysokoscWidok = Wysokosc; //plansza tylko przesowa sie w poziomie
	}
		////DEBUG ONLY!!
		//std::cout << Szerokosc << "  " << Wysokosc << "   " << SzerokoscWidok;
		//char jkjkkjjkkjjkjkjk = _getch();


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
	for (int i = 0; i < Wysokosc; i++){
		//inic >> chartmp;
		for (int j = 0; j < Szerokosc; j++){
			inic >> chartmp;
			ParserGameObject(chartmp, i, j);
		}
	}
		////DEBUG ONLY!!
		//system("CLS");
		//for (int i = 0; i < Wysokosc; i++) {
		//	for (int j = 0; j < Szerokosc; j++) {
		//		std::cout << Mapa[i][j]->Wyglad;
		//	}
		//	std::cout << "\n";
		//}jkjkkjjkkjjkjkjk = _getch();

	
	//zapelnianie widoku
	Postep = 0;
	AktualizacjaWidocznejMapy(Postep);

	inic.close();
	return;
}

void Engine::GameLoop(){
	Initialize();
	while (!exit){//glowna petla
		Sterow();
		if (GraczSzer != Szerokosc - 1) {
			//if (key != 'a') {
			//	PrzesunGracza(1, Kierunek::PRAWO); //zeby nie uciekl z ekranu
			//}
			
			//PrzesunGracza(1, Kierunek::PRAWO); //zeby nie uciekl z ekranu
			//key = 'd';
			if (key != 'd'){
				GraczWCosUderzyl(GraczUderzylW(Kierunek::PRAWO));
				PrzesunGracza(1, Kierunek::PRAWO); //zeby nie uciekl z ekranu
			}
		} else {//koniec levelu
			KoniecLevelu(true);
		}
		
		//sprawdzenie kolizji


		Postep++;
		AktualizacjaWidocznejMapy(Postep);
		View();
		//Sleep(ileKlatka);	//jest w TxT
	}
	return;
}

