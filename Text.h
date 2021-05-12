/* Klasa: "Text"
* Autor: Adam Porembinski
* Opis:
*	Klasa bedaca caloscia z silnikiem. Wypisuje/rysuje obraz na ekran w konsoli za pomoca znakow ASCII.
* Mozliwe ze beda wspierane kolory.
* Przyklad: cos jak klasyczny Dwarf Fortress
* 
* 18/04/2021 AP	utworzenie klasy
* 12/05/2021 AP	dodanie czasu trwania klatki
*/

#ifndef TEXT_H
#define TEXT_H

#include "HUDtxt.h"
#include "Engine.h"
#include <iostream>
#include <windows.h>

class Text : public Engine
{
public:
	short ileKlatka;

	Text(short ile_trwa_klatka);
	virtual ~Text();
	Text(const Text& drugi);  //singleton

	const Text& operator=(const Text& drugi); //singleton

	virtual void View();
};

#endif // !TEXT_H