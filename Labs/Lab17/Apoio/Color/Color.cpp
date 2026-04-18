#include "Color.h"
#include <iostream>
using std::ostream;
using std::cout;

Color::Color() : r(0), g(0), b(0)
{
	cout << "Color (" << r << ',' << g << ',' << b << ") criada.\n";
}

Color::Color(int R, int G, int B) : r(R), g(G), b(B)
{
	cout << "Color (" << r << ',' << g << ',' << b << ") criada.\n";
}

Color::Color(const Color & c)
{
	r = c.r;
	g = c.g;
	b = c.b;

	cout << "Color (" << r << ',' << g << ',' << b << ") copiada.\n";
}

Color& Color::operator=(const Color& c)
{
	r = c.r;
	g = c.g;
	b = c.b;

	cout << "Color (" << r << ',' << g << ',' << b << ") atribuida.\n";
	return *this;
}

Color::~Color()
{
	cout << "Color (" << r << ',' << g << ',' << b << ") destruida.\n";
}

ostream& operator<<(ostream& os, Color& c)
{
	os << c.r << ',' << c.g << ',' << c.b << ")\n";
	return os;
}
