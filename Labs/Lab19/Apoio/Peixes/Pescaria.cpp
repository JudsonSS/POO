#include "Peixe.h"

int main()
{
	cout << "Pescando um peixe:\n";
	Peixe* p = new Peixe{ "Tilápia", 1.0f };
	delete p;

	cout << "\nPescando 3 peixes:\n";
	Peixe * vet = new Peixe[3]
	{
		{ "Pacu", 1.5f },
		{ "Tambaqui", 2.5f },
		{ "Surubim", 3.0f }
	};
	delete [] vet;
}