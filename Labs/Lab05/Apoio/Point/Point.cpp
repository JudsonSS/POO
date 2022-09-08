#include "Point.h"
#include <iostream>

// -----------------------------------------------
// Definição da Classe Point
// -----------------------------------------------

void Point::MoveTo(int px, int py)
{
	x = px;
	y = py;
}

void Point::Translate(int dx, int dy)
{
	x += dx;
	y += dy;
}

// -----------------------------------------------