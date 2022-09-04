#include "Point.h"
#include <iostream>
using namespace std;

int main()
{
	Point p;

	p.MoveTo(10, 20);
	//cout << "(" << p.x << "," << p.y << ")" << endl;

	p.Translate(2, 5);
	//cout << "(" << p.x << "," << p.y << ")" << endl;
}