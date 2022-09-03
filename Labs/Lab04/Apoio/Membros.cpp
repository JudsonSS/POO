#include "Jogo.h"
#include <iostream>
using namespace std;

int main()
{
	// objeto da classe Jogo
	Jogo gta;		

	// chamando métodos
	gta.adquirir("Grand Theft Auto", 90);
	gta.jogar(5);
	gta.jogar(2);
	gta.exibir();
}