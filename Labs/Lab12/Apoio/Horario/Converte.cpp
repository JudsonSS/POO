#include <iostream>
#include "Tempo.h"
#include "Horario.h"
using namespace std;

int main() 
{
	Horario inicio { 18, 30 };
	Horario fim { 21, 00 };
	
	// Horario convertido para Tempo
	Tempo duracao = fim - inicio;
	cout << duracao << endl;
}