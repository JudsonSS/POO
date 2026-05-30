#include "Pescado.h"
#include <iostream>
using namespace std;


Pescado::Pescado(int quantidade):
	carga { nullptr },
	qtd { quantidade }
{
	carga = new Peixe[qtd];
	for (int i = 0; i < qtd; i++)
		cin >> carga[i];
}

Pescado::~Pescado()
{
	delete[] carga;
}
