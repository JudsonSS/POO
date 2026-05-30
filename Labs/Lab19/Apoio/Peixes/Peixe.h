#ifndef PEIXE_H
#define PEIXE_H

#include "String.h"
#include <iostream>
using namespace std;

class Peixe
{
private:
	String nome;  // tipo do peixe
	float  peso;  // peso em quilos

public:
	Peixe(const char peixe[], float quilos);
	Peixe(const Peixe& p);
	Peixe& operator=(const Peixe& p);
	~Peixe();

	// entrada e saída
	friend ostream& operator<<(ostream& os, const Peixe& p);
	friend istream& operator>>(istream& is, Peixe& p);

	// comparação
	friend bool operator<(const Peixe& p1, const Peixe& p2);
	friend bool operator>(const Peixe& p1, const Peixe& p2);
	friend bool operator==(const Peixe& p1, const Peixe& p2);
};


#endif
