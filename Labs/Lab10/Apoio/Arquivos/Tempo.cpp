// definição da classe Tempo
#include "Tempo.h"

//------------------------------------------------
// Construtor

Tempo::Tempo(int h, int m)
{
    horas = h;
    minutos = m;
}

//------------------------------------------------
// Funções Membro

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

Tempo Tempo::operator+(int num) const
{
    return { horas + num, minutos };
}

//------------------------------------------------
// Funções Amigas

Tempo operator+(int num, const Tempo& t)
{
    return { num + t.horas, t.minutos };
}

istream& operator>>(istream& is, Tempo& t)
{
    is >> t.horas >> t.minutos;
    return is;
}

ostream& operator<<(ostream& os, const Tempo& t)
{
    os << t.horas << " horas, " << t.minutos << " minutos";
    return os;
}
