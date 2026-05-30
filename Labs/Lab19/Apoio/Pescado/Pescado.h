#ifndef PESCADO_H
#define PESCADO_H

#include "String.h"
#include "Peixe.h" 

class Pescado
{
private:
	Peixe * carga;
	int qtd;

public:
	Pescado(int quantidade);
	Pescado(const Pescado& s) = delete;
	Pescado& operator=(const Pescado& p) = delete;
	~Pescado();
};

#endif