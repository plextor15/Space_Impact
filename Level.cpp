#include "Level.h"

Level::Level(){
}

Level::~Level(){
}

Level::Level(const Level& drugi){
}

const Level& Level::operator=(const Level& drugi){
	if (this == &drugi) {
		return *this;
	}

	return *this;
}
