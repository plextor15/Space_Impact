//	22.05 dodanie sterowania

#ifndef ENGINE_H
#define ENGINE_H

#include "Level.h"
#include "GameObject.h"
#include <fstream>
#include <windows.h>
#include <conio.h>

class Engine : protected Level
{
//protected:
public:
	bool exit = false;
	char key = '`';
	int ileKlatka = 300;
	int Postep;

public:
	Engine();
	virtual ~Engine();
	Engine(const Engine& drugi);
	const Engine& operator=(const Engine& drugi);
	
	void Sterow();
	void Initialize();
	void GameLoop();
	virtual void View() = 0;
	//virtual void Boom() = 0;	//efekt po zniszczeniu obiektu
	virtual void KoniecLevelu(bool CzyWygrana) = 0;

	void ParserGameObject(char wyg, int i, int j);
	void AktualizacjaWidocznejMapy(int odkad);
	
	void GraczWCosUderzyl(int cos);
};

#endif // !ENGINE_H