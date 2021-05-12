/* Klasa: "ObjectStatic"
*  Autor: Adam Porembinski
*  Opis: 
*    Jest to klasa za pomoca ktorej beda tworzone obiekty statyczne nieporuszajace sie
*  i niemogace byc kontrolowane w zaden sposob.
*  Przyklady: drzewo, dom, gora, portal
*  Do klasy tej naleza tez roznego typu wyzwalacze i przedmioty do podniesienia.
* 
* 18/04/2021 AP	utworzenie klasy
* 25/04/2021 AP	dodanie wygladu i zmodyfikowanie konstruktora
*/

#ifndef OBJECTSTATIC_H
#define OBJECTSTATIC_H

class ObjectStatic
{
protected:
	bool Widzialny = true;
	bool Przezroczysty = false;
	char Wyglad = '?';

public:
	ObjectStatic(bool widzialny, bool przezroczysty, char wyglad);
	~ObjectStatic();
	ObjectStatic(const ObjectStatic& drugi);

	void SetPropeties(bool widzialny, bool przezroczysty, char wyglad);

	const ObjectStatic& operator=(const ObjectStatic& drugi);
};

#endif // !OBJECTSTATIC_H