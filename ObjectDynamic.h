/* Klasa: "ObjectDynamic"
* Autor: Adam Porembinski
* Opis:
*	Za pomoca tej klasy beda tworzone obiekty ruszajace sie, ale ktorych nie mozna kontrolowac.
* Gdy taki poruszajacy obiekt natrafi na przeszkode cos sie stanie.
* Przyklady: wystrzelona strzala, kloda plynaca na wodzie
* 
* 18/04/2021 AP	utworzenie klasy
* 12/05/2021 AP parametry dla konstruktora
*/

#ifndef OBJECTDYNAMIC_H
#define OBJECTDYNAMIC_H

#include "ObjectStatic.h"

class ObjectDynamic : protected ObjectStatic
{
public:
	int predkosc = 0; //w kratkach na klatke
	char kierunek = 'N'; // N,S,W,E

	ObjectDynamic(bool widzialny, bool przezroczysty, char wyglad);
	~ObjectDynamic();
	ObjectDynamic(const ObjectDynamic& drugi);

	const ObjectDynamic& operator=(const ObjectDynamic& drugi);
};

#endif // !OBJECTDYNAMIC_H