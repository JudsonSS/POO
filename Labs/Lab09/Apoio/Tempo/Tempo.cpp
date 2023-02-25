// definição da classe Tempo
#include <iostream>
#include "Tempo.h"
using namespace std;

Tempo::Tempo()
{
    horas = 0;
    minutos = 0;
}

Tempo::Tempo(int h, int m)
{
    horas = h;
    minutos = m;
}

void Tempo::Exibir() const
{
    cout << horas << " horas, "
         << minutos << " minutos";
}

Tempo Tempo::operator+(const Tempo& t) const
{
    Tempo soma;
    soma.minutos = minutos + t.minutos;
    soma.horas = horas + t.horas;
    
    // minutos excedentes viram horas
    soma.horas += soma.minutos / 60;
    soma.minutos %= 60;
    return soma;
}
