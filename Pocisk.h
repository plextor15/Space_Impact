/*	Klasa: "Pocisk"
*	Autor: Adam Porembinski
* 
*	12/05/2021	AP utworzenie klasy
*/

#ifndef POCISK_H
#define POCISK_H

#include "ObjectDynamic.h"

class Pocisk : private ObjectDynamic
{
public:
	int Obrazenia = 1;

	Pocisk(char wyglad, int obrazenia);
	~Pocisk();
	Pocisk(const Pocisk& drugi);

	const Pocisk& operator=(const Pocisk& drugi);
};

#endif // !POCISK_H
