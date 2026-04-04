#include "Jogador.h"
#include <iostream>
using namespace std;

#define red    "\033[38;5;160m"
#define green  "\033[38;5;10m"
#define lime   "\033[38;5;118m"
#define yellow "\033[38;5;220m"
#define normal "\033[0m"

Jogador::Jogador() :
	nome {"Novato"},
	jogos{ 0 },
	gols { nullptr}
{
	cout << lime << "[Construtor padrão] " << normal;
	cout << nome << " criado\n";
}

Jogador::Jogador(const char nome[], int jogos) :
	nome{ nome },
	jogos{jogos},
	gols {nullptr}
{
	gols = new int[jogos];
	cout << green << "[Construtor] " << normal;
	cout << nome << " criado\n";
}

Jogador::Jogador(const Jogador & j)
{
	// copia membros
	nome = j.nome;
	jogos = j.jogos;
	
	// aloca novo bloco de memória
	gols = new int[jogos];
	
	// copia gols para novo bloco
	for (int i = 0; i < jogos; i++)
		gols[i] = j.gols[i];

	cout << yellow << "[Construtor de cópia] " << normal;
	cout << nome << " criado\n";
}

Jogador::~Jogador()
{
	delete[] gols;
	cout << red << "[Destrutor] " << normal;
	cout << nome << " destruído\n";
}
