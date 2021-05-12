/* main
* Autor: Adam Porembinski
* Opis:
*	TUTAJ ZNAJDUJE SIE MAIN() DO GRY
* Teoretycznie powinno byc tutaj jak najmniej kodu.
* Aby gra dzialala trzeba zaincludowac klase wyswietlajaca z silnika.
*
* 12/05/2021 AP utworzenie main()
*/

#include "Text.h"

int main() {
	Engine* SpaceImpact = new Text(1000, 50, 15);
	SpaceImpact->GameLoop();

	return 0;
}