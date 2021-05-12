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
	Level();
	~Level();
	Level(const Level& drugi);

	const Level& operator=(const Level& drugi);
};

#endif // !LEVEL_H