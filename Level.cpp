#include "Level.h"

Level::Level()
{
	//zeby nie bylo warningow
	Szerokosc = 0;
	Wysokosc = 0;
	SzerokoscWidok = 0;
	WysokoscWidok = 0;
	GraczSzer = 0;
	GraczWys = 0;
	PunktyLevel = 0;

	TPustka = new GameObject(' ', Typ::pusty, 0);
	TStatyczny = new GameObject('#', Typ::statyczny, 1000);
	//TWrog = new GameObject('<', Typ::wrog, 1);
	TWrog = new Wrogowie('<', Typ::wrog, 1, 10);
	TGracz = new GameObject('>', Typ::pocisk, 4);
	//TPociskWroga = new GameObject('-', Typ::pocisk, 1);
	//TPociskGracza = new GameObject('-', Typ::pocisk, 1);
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

bool Level::Noclip(int wys)
{
	if (wys > Wysokosc || wys < 0) {
		return true;
	}
	else{
		return false;
	}
}

//void Level::Analiza()
//{
//
//	return;
//}

void Level::SetWidocznyRozmiar(int wys, int szer)
{
	if (wys < Wysokosc && szer < Szerokosc) 
	{
		WysokoscWidok = wys;
		SzerokoscWidok = szer;
	}
	return;
}


void Level::PrzesunObjekt(int wysOb, int szerOb, int wysCel, int szerCel)
{
	Mapa[wysCel][szerCel] = Mapa[wysOb][szerOb];
	Mapa[wysOb][szerOb] = TPustka;
	return;
}

void Level::PrzesunGracza(int wysCel, int szerCel){
	if (wysCel < 0 || wysCel > Wysokosc-1){
		return;
	}
	if (szerCel < 0 || szerCel > Szerokosc - 1) {
		return;
	}

	Mapa[wysCel][szerCel] = Mapa[GraczWys][GraczSzer];
	Mapa[GraczWys][GraczSzer] = TPustka;

	GraczWys = wysCel;
	GraczSzer = szerCel;

	return;
}

void Level::PrzesunGracza(int oIle, Kierunek wKtoraStrone){
	switch (wKtoraStrone){
	case 0:	//GORA
		PrzesunGracza(GraczWys + oIle,GraczSzer);
		break;
	case 1:	//DOL
		PrzesunGracza(GraczWys - oIle, GraczSzer);
		break;
	case 2:	//PRAWO
		PrzesunGracza(GraczWys, GraczSzer + oIle);
		break;
	case 3:	//LEWO
		PrzesunGracza(GraczWys, GraczSzer - oIle);
		break;

	default:
		break;
	}
	return;
}

Typ Level::Kolizja(int wys, int szer)
{
	Typ co = Mapa[wys][szer]->Tag;

	switch (co)
	{
	case pusty: return co;
	case statyczny: return co;
	case wrog: return co;
	case gracz: return co;
	case pocisk: return co;

	default:
		co = Typ::pusty;
		return co;
	}
}

int Level::GraczUderzylW(Kierunek A) { // 1-zgon gracza, 2-zgon wroga
	int wCo = 0;
	int x = 0, y = 0;

	Typ UderzylW;
	switch (A)
	{
	case GORA: y = 1;
		break;
	case DOL: y = -1;
		break;
	case PRAWO: x = 1;
		break;
	case LEWO: x = -1;
		break;
	default:
		break;
	}
	UderzylW = Kolizja(GraczWys + y, GraczSzer + x);

	if (UderzylW == Typ::statyczny){
		wCo = 1;
	}
	if (UderzylW == Typ::wrog) {
		wCo = 2;
	}

	return wCo;
}

void Level::ZniszczenieObiektu(int wysCel, int szerCel){
	if (Kolizja(wysCel, szerCel) == Typ::wrog){
		PunktyLevel += 10;
	}
	
	//Mapa[wysCel][szerCel] = TPustka;
	return;
}