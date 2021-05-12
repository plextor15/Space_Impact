/* Klasa: "HUD"
* Autor: Adam Porembinski
* Opis:
*	Klasa bedaca wyswietlana najwyzej - nic jej nie zaslania na ekranie.
* Wyswietla informacje o punktacji i zyciu gracza
* Przyklad: pasek zycia gracza
*
* 25/04/2021 AP	utworzenie klasy
*/

#ifndef HUD_H
#define HUD_H

class HUD
{
public:
	HUD();
	~HUD();
	HUD(const HUD& H);
	const HUD& operator=(const HUD&);
};

#endif // !HUD_H