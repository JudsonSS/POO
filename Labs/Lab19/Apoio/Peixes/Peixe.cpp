#include "Peixe.h"
#include <iostream>
#include <cmath>
using namespace std;

#define green   "\033[32m"
#define red     "\033[31m"
#define default "\033[m"

Peixe::Peixe(const char peixe[], float quilos) :
	nome{peixe},
	peso{quilos}
{
	cout << green << "Peixe criado: [" << *this << "]\n" << default;
}

Peixe::Peixe(const Peixe & p)
{
	nome = p.nome;
	peso = p.peso;
	cout << green << "Peixe copiado: [ " << p << " ]\n" << default;
}

Peixe& Peixe::operator=(const Peixe& p)
{
	nome = p.nome;
	peso = p.peso;
	cout << "Peixe atribuído: [ " << p << " ]\n";
	return *this;
}

Peixe::~Peixe()
{
	cout << red << "Peixe destruído: [ " << *this << " ]\n" << default;
}

ostream& operator<<(ostream& os, const Peixe& p)
{
	os << p.nome << ", " << p.peso << "Kg";
	return os;
}

istream& operator>>(istream& is, Peixe& p)
{
	is >> p.nome;
	is >> p.peso;
	return is;
}

bool operator<(const Peixe& p1, const Peixe& p2)
{
	return p1.peso < p2.peso;
}

bool operator>(const Peixe& p1, const Peixe& p2)
{
	return p1.peso > p2.peso;
}

bool operator==(const Peixe& p1, const Peixe& p2)
{
	const float epsilon = 0.00001f;
	return abs(p1.peso - p2.peso) < epsilon;
}


