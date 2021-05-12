/* Klasa: "HUDtxt"
* Autor: Adam Porembinski
* Opis:
*	Klasa bedaca wyswietlana najwyzej - nic jej nie zaslania na ekranie.
* Wyswietla informacje o punktacji i zyciu gracza
* Przyklad: pasek zycia gracza
*
* 25/04/2021 AP	utworzenie klasy
*/

#ifndef HUDTXT_H
#define HUDTXT_H



class HUDtxt
{
public:
	HUDtxt();
	~HUDtxt();
	HUDtxt(const HUDtxt& H);
	const HUDtxt& operator=(const HUDtxt&);
};

#endif // !HUDTXT_H