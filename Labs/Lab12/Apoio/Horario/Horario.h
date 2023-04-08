// classe Horario

#ifndef _HORARIO_H_
#define _HORARIO_H_

#include "Tempo.h"
#include <iostream>
using std::ostream;

class Horario
{
private:
	int horas;
	int minutos;

public:
	Horario(int h = 0, int m = 0);

	friend Horario operator-(const Horario& h1, const Horario& h2);
	friend ostream& operator<<(ostream& os, const Horario& h);
};

#endif
