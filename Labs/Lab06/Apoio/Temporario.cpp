#include "Jogo.h"
#include <iostream>
using namespace std;

int main()
{   
	cout << "Inicializa:\n";
	{
		// inicialização do objeto
		Jogo sackboy = Jogo("Sackboy", 150.0f);
	}

	cout << "\nCria e Atribui:\n";
	{
		// criação do objeto
		Jogo horizon;
		horizon = Jogo("Horizon", 199.0f);
	}
}
