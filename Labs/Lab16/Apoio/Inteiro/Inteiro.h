#pragma once

#include <iostream>
using std::ostream;

class Inteiro
{
private:
	int num;

public:
	Inteiro();
	Inteiro(int val);
	Inteiro(const Inteiro& n);
	~Inteiro();

	friend ostream& operator<<(ostream& os, Inteiro& n);
	friend Inteiro operator+(Inteiro a, Inteiro b);
};