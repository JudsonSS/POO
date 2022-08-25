#include "Jogo.h"
#include <iostream>
using namespace std;

int main()
{
	Jogo gears;		// objeto da classe Jogo
	Jogo doom;		// objeto da classe Jogo

	gears.adquirir("Gears", 75);
	gears.jogar(5);
	gears.exibir();
	cout << "Mem. : " << &gears << "\n";

	cout << "-----------------------\n";

	doom.adquirir("Doom ", 90);
	doom.jogar(3);
	doom.exibir();
	cout << "Mem. : " << &doom << "\n";
}