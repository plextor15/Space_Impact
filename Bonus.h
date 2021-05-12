/*	Klasa: "Bonus"
*	Autor: Adam Porembinski
*
*	12/05/2021	AP	utworzenie klasy
*/

#ifndef BONUS_H
#define BONUS_H

#include "ObjectStatic.h"

class Bonus : protected ObjectStatic
{
public:
	Bonus();
	~Bonus();
	Bonus(const Bonus& drugi);

	const Bonus& operator=(const Bonus& drugi);
};

#endif // !BONUS_H