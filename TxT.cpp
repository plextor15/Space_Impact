#include "TxT.h"

void TxT::View(){
	for (int i = 0; i < WysokoscWidok; i++){
		for (int j = 0; j < SzerokoscWidok; j++){
			std::cout << MapaWidoczna[i][j];
		}
		std::cout << "\n";
	}
	
	std::cout << "\n\n  " << GraczWys << " , " << GraczSzer; //DEBUG ONLY!!
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

void TxT::Boom(){

	return;
}
