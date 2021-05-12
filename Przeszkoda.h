/*	Klasa: "Przeszkoda"
*	Autor: Adam Porembinski
* 
*	12/05/2021	AP	utworzenie klasy
*/

#ifndef PRZESZKODA_H
#define PRZESZKODA_H

#include "ObjectStatic.h"

class Przeszkoda : private ObjectStatic
{
public:
	Przeszkoda(char wyglad);
	~Przeszkoda();
	Przeszkoda(const Przeszkoda &drugi);

	const Przeszkoda& operator=(const Przeszkoda& drugi);
};

#endif // !PRZESZKODA_H