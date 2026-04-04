#include "String.h"
#include <iostream>
using std::cout;
using std::endl;

void Valor(String);    

int main()
{
	String lang{ "C++" };
	Valor(lang);
	cout << lang << endl;
}

void Valor(String s)
{
    cout << "Valor: " << s << "\n";
}