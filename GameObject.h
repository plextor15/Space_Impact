#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

class GameObject
{
public:
	char Wyglad;
	char Tag;		//  ">" - gracz, "<" - wrog, "#" - statyczny obiekt
	int Zdrowie;

	GameObject(char wyglad, char tag, int zdrowie);
	~GameObject();
	GameObject(const GameObject& drugi);
	const GameObject& operator=(const GameObject& drugi);
};

#endif // !GAMEOBJECT_H