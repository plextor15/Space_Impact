#include "Engine.h"

Engine::Engine(){
}

Engine::~Engine(){
}

Engine::Engine(const Engine& drugi) {}


void Engine::Initialize(){
	//zaladowanie planszy
	std::ifstream inic;
	inic.open("mapa.dat");

	inic.close();
	return;
}

void Engine::GameLoop(){

	return;
}
