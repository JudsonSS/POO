#include <iostream>
#include "Pilha.h"
using namespace std; 

int main()
{
	Pilha pilha;

	pilha.Empilhar('A');
	pilha.Empilhar('H');
	pilha.Empilhar('L');
	pilha.Empilhar('I');
	pilha.Empilhar('P');

	while (!pilha.Vazia())
	{
		Item i; 
		pilha.Desempilhar(i);
		cout << i << endl;
	}
}