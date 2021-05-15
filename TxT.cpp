#include "TxT.h"

void TxT::View()
{
	for (int i = 0; i < WysokoscWidok; i++)
	{
		for (int j = 0; j < SzerokoscWidok; j++)
		{
			std::cout << MapaWidoczna[i][j];
		}
		std::cout << "\n";
	}
	
	Sleep(ileKlatka);
	system("CLS");
	return;
}
