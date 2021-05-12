/* Klasa: "ObjectPlayble"
* Autor: Adam Porembinski
* Opis:
*	Przy pomocy tej klasy tworzy sie obiekty, ktore beda kontrolowane.
* Najczesciej bedzie to gracz, sojusznicy lub przeciwnicy, ale tez pojazdy (teoretycznie rzeka tez)
* Przyklady: czolg, katapulta, elf
* 
* 18/04/2021 AP	utworzenie klasy
* 12/05/2021 AP parametry dla konstruktora
*/

#ifndef OBJECTPLAYBLE_H
#define OBJECTPLAYBLE_H

#include "ObjectDynamic.h"

class ObjectPlayble : protected ObjectDynamic
{
public:
	char RuchN = 'n';
	char RuchS = 's';
	char RuchW = 'a';
	char RuchE = 'd';

	ObjectPlayble(bool widzialny, bool przezroczysty, char wyglad);
	~ObjectPlayble();
	ObjectPlayble(const ObjectPlayble& drugi);

	const ObjectPlayble& operator=(const ObjectPlayble& drugi);
};

#endif // !OBJECTPLAYBLE_H