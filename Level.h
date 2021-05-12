/* Klasa: "Level"
* Autor: Adam Porembinski
* Opis:
*	Jest to klasa do stworzenia planszy na ktorej bedzie sie dziala cala akcja gry.
* Oprocz widocznych obiektow, beda tez niewidzialne obiekty zwiazane z logika gry.
* Przyklad: szeroka gama mozliwosci
* 
* 18/04/2021 AP	utworzenie klasy
*/

#ifndef LEVEL_H
#define LEVEL_H

#include "ObjectStatic.h"
#include "ObjectDynamic.h"
#include "ObjectPlayble.h"

class Level
{
public:
	char** Mapa;	//caly poziom
	char** MapaWidoczna;	//czesc widoczna na ekranie

	Level();
	~Level();
	Level(const Level& drugi);

	void UsuniecieObiektu(int x, int y); //usuwa obiekt z tablicy
	void Widok();

	const Level& operator=(const Level& drugi);
};

#endif // !LEVEL_H