#ifndef TXT_H
#define TXT_H

#include "Engine.h"
#include <iostream>
#include <windows.h> //do Sleep i CLS

class TxT : public Engine
{
public:
	int ileKlatka = 500;

	TxT();
	virtual ~TxT();
	TxT(const TxT& drugi);
	const TxT& operator=(const TxT& drugi);

	virtual void View();
};

#endif // !TXT_H