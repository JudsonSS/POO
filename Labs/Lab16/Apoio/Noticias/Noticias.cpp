#include "String.h"
#include <iostream>
using std::cout;
using std::endl;

void Refer(String&);   // passa por referência
void Valor(String);    // passa por valor

int main()
{
	String atual{ "Torre Eiffel completa 137 anos" };
	String tecno{ "Gmail agora permite mudar endereço" };

	cout << endl;
	Refer(atual);
	cout << "Atual: " << atual << endl << endl;

	Valor(tecno);
	cout << "Tecno: " << tecno << endl << endl;

	String breaking = tecno;
	cout << "Break: " << breaking << endl << endl;
}

void Refer(String& s)
{
    cout << "Refer: " << s << "\n";
}

void Valor(String s)
{
    cout << "Valor: " << s << "\n";
}
