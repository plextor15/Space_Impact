#ifndef ENGINE_H
#define ENGINE_H

#include "Level.h"
#include <fstream>

class Engine : protected Level
{
public:
	Engine();
	virtual ~Engine();
	Engine(const Engine& drugi);
	const Engine& operator=(const Engine& drugi);

	void Initialize();
	void GameLoop();
	virtual void View() = 0;
};

#endif // !ENGINE_H