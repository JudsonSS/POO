#ifndef JOGADOR_H
#define JOGADOR_H

#include <string>
using std::string;

class Jogador
{
private:
	string nome;
	int jogos;
	int* gols;

public:
	Jogador(string nome, int jogos);
	~Jogador();

	void Gol(int jogo, int quant);
	void Resumo();
};

#endif
