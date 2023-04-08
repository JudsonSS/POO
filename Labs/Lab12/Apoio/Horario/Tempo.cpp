#include "Tempo.h"

Tempo::Tempo(int h, int m)
{
    horas = h;
    minutos = m;
}

Tempo operator+(const Tempo& t1, const Tempo& t2)
{
    Tempo soma;
    soma.horas = t1.horas + t2.horas;
    soma.minutos = t1.minutos + t2.minutos;
    
    // minutos excedentes viram horas
    soma.horas += soma.minutos / 60;
    soma.minutos %= 60;
    return soma;
}

ostream& operator<<(ostream& os, const Tempo& t)
{
    os << t.horas << " horas, " << t.minutos << " minutos";
    return os;
}