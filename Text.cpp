#include "Text.h"

Text::Text(short ile_trwa_klatka, short szer, short wys){
	ileKlatka = ile_trwa_klatka;

	if (szer > 5 && wys > 5) {
		RozSzerokosc = szer;
		RozWysokosc = wys;
	}
}

Text::~Text(){
}

Text::Text(const Text& drugi){}

const Text& Text::operator=(const Text& drugi){
	if (this == &drugi) {
		return *this;
	}

	return *this;
}

void Text::View(){

	return;
}

void Text::SetRozdzielczosc(short szer, short wys)
{
	if (szer > 5 && wys > 5) {
		RozSzerokosc = szer;
		RozWysokosc = wys;
	}

	return;
}
