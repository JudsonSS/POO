#include "Horario.h"

Horario::Horario(int h, int m)
{
	horas = h;
	minutos = m;
}

Horario operator-(const Horario& h1, const Horario& h2)
{
	int mins1 = h1.horas * 60 + h1.minutos;
	int mins2 = h2.horas * 60 + h2.minutos;
	int minutos = mins1 - mins2;
	return Horario(minutos/60, minutos%60);
}

ostream& operator<<(ostream& os, const Horario& h)
{
	os << h.horas << ":" << h.minutos;
	return os;
}
