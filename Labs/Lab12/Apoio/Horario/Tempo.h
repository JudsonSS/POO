// classe Tempo

#ifndef _TEMPO_H_
#define _TEMPO_H_

#include <iostream>
using std::ostream;

class Tempo
{
private:
	int horas;
	int minutos;

public:
	Tempo(int h = 0, int m = 0);

	friend Tempo operator+(const Tempo& t1, const Tempo& t2);
	friend ostream& operator<<(ostream& os, const Tempo& t);
};

#endif