#include "Inteiro.h"
#include <cstring>
#include <iostream>
using namespace std;

Inteiro::Inteiro() : num{0}
{
	cout << "--------| Construtor Padrão: Inteiro " << num << " criado\n";
}

Inteiro::Inteiro(int val) : num{val}
{
	cout << "--------| Construtor: Inteiro " << num << " criado\n";
}

Inteiro::Inteiro(const Inteiro& n)
{
	num = n.num;
	cout << "--------| Construtor de Cópia: Inteiro " << num << " criado\n";
}

Inteiro::~Inteiro()
{
	cout << "--------| Destrutor: Inteiro " << num << " destruído\n";
}

ostream& operator<<(ostream& os, Inteiro& v)
{
	cout << v.num;
	return os;
}

Inteiro operator+(Inteiro a, Inteiro b)
{
	cout << "\n--------| Somando " << a.num << " com " << b.num << "\n";
	Inteiro r { a.num + b.num };
	cout << "--------| Retornando soma igual a " << r.num << "\n";
	return r;
}

