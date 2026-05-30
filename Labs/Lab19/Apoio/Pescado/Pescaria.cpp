#include "Pescado.h"

int main()
{
	// questão a
	{
		cout << "Pescado:\n";
		Pescado	pescado { 2 };
	}

	// questão b
	{
		cout << "\nPescado alocado dinamicamente:\n";
		Pescado* ptr = new Pescado{ 2 };
		delete ptr;
	}

	// questão c
	{
		cout << "\nVetor de pescados:\n";
		Pescado vet[2] { 1, 3 };
	}

	// questão d
	{
		cout << "\nVetor de pescados alocado dinâmicamente:\n";
		Pescado* ptr = new Pescado[2]{ 2, 2 };
		delete[] ptr;
	}
}