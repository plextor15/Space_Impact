/* Klasa: "Engine" abstrakcyjna
* Autor: Adam Porembinski
* Opis:
*	Jest to glowny silnik gry.
* Przyklad: Unreal Engine, Spurce
* 
* 18/04/2021 AP	utworzenie klasy, dodanie podstawowych metod
*/

#ifndef ENGINE_H
#define ENGINE_H

#include "Level.h"
#include <fstream>
#include <string>

class Engine
{
public:
	Engine();
	virtual ~Engine();
	Engine(const Engine& drugi); //singleton

	const Engine& operator=(const Engine& drugi); //singleton

	void Initialize();
	void GameLoop();
	virtual void View() = 0;
};

#endif // !ENGINE_H