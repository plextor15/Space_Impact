//	22.05	wyswietlanie tekstu

#ifndef TXT_H
#define TXT_H

#include "Engine.h"
#include <iostream>
#include <windows.h> //do Sleep i CLS
#include <string>
#include <conio.h>

//class TxT : protected Engine
class TxT : public Engine
{
public:
	//int ileKlatka = 500;

	TxT() {};
	virtual ~TxT() {};
	TxT(const TxT& drugi);
	const TxT& operator=(const TxT& drugi);

	virtual void Sterow();
	virtual void View();
	void WyswietlTekst(std::string tekst);

	//virtual void Boom();
	virtual void KoniecLevelu(bool CzyWygrana);
};

#endif // !TXT_H