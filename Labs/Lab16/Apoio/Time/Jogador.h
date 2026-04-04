#pragma once

#include <string>
using std::string;

class Jogador
{
private:
    string nome;                                // nome do jogador
    int jogos;                                  // número de jogos
    int* gols;                                  // gols por partida

public:
    Jogador();                                  // construtor padrão
    Jogador(const char nome[], int jogos = 0);  // construtor
    Jogador(const Jogador& j);                  // construtor de cópia
    ~Jogador();                                 // destrutor
};
