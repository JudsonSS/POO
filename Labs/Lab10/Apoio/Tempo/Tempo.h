#include <iostream>
using std::ostream;
using std::istream;

class Tempo
{
private:
    int horas;                                                 // quantidade de horas
    int minutos;                                               // quantidade de minutos

public:
    Tempo(int h = 0, int m = 0);                               // construtor

    Tempo operator+(const Tempo& t) const;                     // t + t : soma tempos
    Tempo operator+(int num) const;                            // t + n : soma tempo e número

    // n + t : soma número e tempo
    // is >> t : leitura com cin
    // os << t : escrita com cout
};


