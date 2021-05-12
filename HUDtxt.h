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

#include "Gracz.h"
#include <iostream>

class HUDtxt
{
public:
	int Punkty;
	char CharPunkty;
	char CharZdrowie;

	char** Wyglad; //ASCII art wygladu

	HUDtxt(char zdrowie, char punkty);
	~HUDtxt();
	HUDtxt(const HUDtxt& H);

	void AktualizacjaRozdzielczosci(int szer, int wys);

	const HUDtxt& operator=(const HUDtxt&);
};

#endif // !HUDTXT_H