#include "Vetor.h"
#include <iostream>
using namespace std;

int main()
{
	Vetor A { 10, 10 };
	Vetor B { 20, 20 };
	
	cout << "Coordenadas Retangulares\n";
	cout << "------------------------\n";
	cout << A << '\n';
	cout << B << '\n';

	A.SetCoord(Vetor::POL);
	B.SetCoord(Vetor::POL);

	cout << "\nCoordenadas Polares\n";
	cout << "-------------------\n";
	cout << A << '\n';
	cout << B << '\n';

	cout << "\nOperacoes com Vetores\n";
	cout << "-----------------------\n";
	cout << "A + B = " << A + B << endl;
	cout << "A - B = " << A - B << endl;
	cout << "2 * A = " << 2 * A << endl;
	cout << "A * 2 = " << A * 2 << endl;
	cout << "   -A = " << -A << endl;
}