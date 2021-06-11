//	22.05	zmiana tagu na enum,
//			dodanie operatora =

#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

enum Typ
{
	pusty = 0,		// ' '
	statyczny = 1,	// '#'
	wrog = 2,		// '<'
	gracz = 3,		// '>'
	pocisk = 4		// '-' niewykorzystywany
};

class GameObject
{
public:
	char Wyglad;
	Typ Tag;		
	int Zdrowie;

	GameObject(char wyglad, Typ tag, int zdrowie);
	~GameObject();
	GameObject(const GameObject& drugi);
	const GameObject& operator=(const GameObject& drugi);
	bool CzyZyje();
};

#endif // !GAMEOBJECT_H