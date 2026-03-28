#include "Notepad.h"
#include <iostream>
#include <fstream>
using std::ifstream;
using std::cout;
using std::endl;
using std::ios;

Notepad::Notepad(const char* arquivo) : 
	texto(nullptr),
	linhas(0), 
	caracteres(0)
{
	ifstream arq { arquivo };
	if (arq.is_open())
	{
		cout << "Anotação aberta" << endl;
		
		// pega tamanho do arquivo em bytes (caracteres)
		arq.seekg(0, ios::end);
		unsigned tam = (unsigned) arq.tellg();

		// alocação dinâmica
		texto = new char[tam+1];

		int i = 0;
		char ch;
		
		// lê arquivo do início
		arq.seekg(0, ios::beg);
		while (arq.get(ch))
		{
			texto[i++] = ch;
			if (ch == '\n')
				linhas++;
			else
				caracteres++;
		}
		linhas++;
		texto[i] = '\0';
	}
}

Notepad::~Notepad()
{
	if (texto)
	{
		delete[] texto;
		cout << "Anotação fechada!" << endl;
	}
}

void Notepad::Exibir()
{
	cout << "--------------------\n";
	cout << texto << "\n";
	cout << "--------------------\n";
}

void Notepad::Detalhar()
{
	cout << "Linhas: " << linhas << " Caracteres: " << caracteres << endl;
}
