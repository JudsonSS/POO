#include "Jogador.h"
#include <iostream>
using std::cout;

Jogador::Jogador(string nome, int jogos) : 
	nome(nome), 
	jogos(jogos)
{
	cout << "--> Jogador criado\n";
	gols = new int[jogos] {0};
}

Jogador::~Jogador()
{
	delete[] gols;
	cout << "--> Jogador destruído\n";
}

void Jogador::Gol(int jogo, int quant)
{
	if (jogo > 1 && jogo <= jogos)
		gols[jogo-1] = quant;
}

void Jogador::Resumo()
{
	cout << "Nome: " << nome << "\n";
	cout << "Jogo: ";

	for (int i = 0; i < jogos; i++)
		cout << "[" << i + 1 << "] ";
	cout << "\n";

	cout << "Gols: ";
	for (int i = 0; i < jogos; i++)
		cout << " " << gols[i] << "  ";
	cout << "\n";
}
