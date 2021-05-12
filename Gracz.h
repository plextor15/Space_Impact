/*	Klasa: "Gracz"
*	Autor: Adam Porembinski
* 
*	12/05/2021	AP	utworzenie klasy
*/

#ifndef GRACZ_H
#define GRACZ_H

#include "ObjectPlayble.h"

class Gracz : private ObjectPlayble
{
private:
public:
	int Zdrowie = 4;

	Gracz(char wyglad, int zdrowie);
	~Gracz();
	Gracz(const Gracz& drugi);

	void Trafiony(int ileObrazen);

	const Gracz& operator=(const Gracz& drugi);
};

#endif // !GRACZ_H