#include <iostream>
#include <cmath>
#include "Vetor.h"
using std::ostream;

const double GrausPorRad = 45.0 / atan(1.0);

// Métodos Privados
// ---------------------------------------------------------------------------

void Vetor::SetMag()
{
    mag = sqrt(x * x + y * y);
}

void Vetor::SetAng()
{
    ang = atan2(y, x);
}

void Vetor::SetX()
{
    x = mag * cos(ang);
}

void Vetor::SetY()
{
    y = mag * sin(ang);
}

// Construtores
// ---------------------------------------------------------------------------

Vetor::Vetor()
{
    x = y = ang = mag = 0;
    rep = RET;
}

Vetor::Vetor(double n1, double n2, Coord modo)
{
    rep = modo;
    if (rep == RET)
    {
        x = n1; y = n2;
        SetMag();       // ajusta magnitude
        SetAng();       // ajusta ângulo
    }
    else
    {
        mag = n1;
        ang = n2 / GrausPorRad;
        SetX();
        SetY();
    }
}

// Sobrecarga de Operadores
// ---------------------------------------------------------------------------

Vetor Vetor::operator+(const Vetor& v) const
{
    return Vetor(x + v.x, y + v.y);
}

Vetor Vetor::operator*(double n) const
{
    return Vetor(n * x, n * y);
}

Vetor Vetor::operator-(const Vetor& v) const
{
    return Vetor(x - v.x, y - v.y);
}

Vetor Vetor::operator-() const
{
    return Vetor(-x, -y);
}

// Funções Amigas
// ---------------------------------------------------------------------------

Vetor operator*(double n, const Vetor& v)
{
    return Vetor(n * v.x, n * v.y);
}

ostream& operator<<(ostream& os, const Vetor& v)
{
    if (v.rep == Vetor::RET)
    {
        os << "(x,y) = (" << v.x << ", " << v.y << ")";
    }
    else
    {
        os << "(m,a) = (" << v.mag << ", " << v.ang * GrausPorRad << ")";
    }
    return os;
}

// ---------------------------------------------------------------------------