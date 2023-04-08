#include <iostream>
using std::ostream;

class Tempo
{
private:
	int horas;
	int minutos;

public:
	Tempo(int h = 0, int m = 0);
	operator double();
	operator int();

	Tempo operator+(const Tempo& t) const;		
	friend Tempo operator+(const Tempo& t, int h);
	friend Tempo operator+(int h, const Tempo& t);
	friend ostream& operator<<(ostream& os, const Tempo& t);
};