/*	Klasa: "Wrogowie"
*	Autor: Adam Porembinski
* 
*	12/05/2021	AP utworzenie klasy
*/

#ifndef WROGOWIE_H
#define WROGOWIE_H

#include "ObjectDynamic.h"

class Wrogowie : private ObjectDynamic
{
public:
	int Zdrowie = 1;

	Wrogowie(char wyglad, int zdrowie);
	~Wrogowie();
	Wrogowie(const Wrogowie& drugi);

	const Wrogowie& operator=(const Wrogowie& drugi);
};

#endif // !WROGOWIE_H