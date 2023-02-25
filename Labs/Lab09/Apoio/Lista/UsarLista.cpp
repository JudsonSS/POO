#include "Lista.h"
#include <iostream>
using namespace std;

int main()
{
	Lista lista { 5 };
	
	lista.Adicionar(2); 
	lista.Adicionar(3); 
	lista.Adicionar(6);

	for (int i = 0; i < 5; ++i)
	{
		cout << lista[i] << endl;
	}
}