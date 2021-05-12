/*	Klasa: "ElementTla"
*	Autor: Adam Porembinski
* 
*	12/05/2021	AP	utworzenie klasy
*/

#ifndef ELEMENTTLA_H
#define ELEMENTTLA_H

#include "ObjectStatic.h"

class ElementTla : protected ObjectStatic
{
public:
	ElementTla();
	~ElementTla();
	ElementTla(const ElementTla& drugi);

	const ElementTla& operator=(const ElementTla& drugi);
};

#endif // !ELEMENTTLA_H