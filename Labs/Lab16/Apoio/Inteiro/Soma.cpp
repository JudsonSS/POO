#include "Inteiro.h"
#include <iostream>
using namespace std;

int main()
{
	Inteiro a{ 10 };
	Inteiro b{ 20 };
	Inteiro c{ 30 };
	Inteiro d = a + b + c;

	cout << "Valor A: " << a << endl;
	cout << "Valor B: " << b << endl;
	cout << "Valor C: " << c << endl;
	cout << "   Soma: " << d << endl;
}