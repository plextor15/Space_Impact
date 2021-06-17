#include "TxT.h"

void TxT::Sterow(){
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

void TxT::View(){
	for (int i = 0; i < WysokoscWidok; i++){
		for (int j = 0; j < SzerokoscWidok; j++){
			std::cout << MapaWidoczna[i][j];
		}
		std::cout << "\n";
	}
	
	//std::cout << "\n\n  " << GraczWys << " , " << GraczSzer; //DEBUG ONLY!!
	Sleep(ileKlatka);
	system("CLS");
	return;
}

void TxT::WyswietlTekst(std::string tekst){
	int margines = (SzerokoscWidok / 2) - (tekst.length() / 2);
	
	for (int qw = 0; qw < margines; qw++){
		tekst = " " + tekst + " ";
	}
	for (int qw = 0; qw < WysokoscWidok / 2; qw++){
		std::cout << "\n";
	}
	std::cout << tekst;

	return;
}

//void TxT::Boom(){
//	return;
//}

void TxT::KoniecLevelu(bool CzyWygrana){
	system("CLS");

	if (CzyWygrana) {
		WyswietlTekst("Poziom ukonczony :)");
	}
	else{
		WyswietlTekst("Przegrana :(");
	}
	
	char uiop = 'q';
	uiop = _getch();

	std::string textPunkty = std::to_string(GetPunktyLevel());
	textPunkty = "Uzyskano punktow: " + textPunkty;

	//while (uiop != ' ') {
	//	uiop = _getch();
	//}

	WyswietlTekst(textPunkty);
	
	//uiop = 'q';
	//uiop = _getch();
	//while (uiop != ' ') {
	//	exit = true;
	//	uiop = _getch();
	//}
	
	uiop = _getch();
	exit = true;

	return;
}
