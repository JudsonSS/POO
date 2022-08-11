// definição da classe Jogo
#include <iostream>
#include "Jogo.h"

void Jogo::adquirir(const string& titulo, float valor) 
{
    nome = titulo;
    preco = valor;
    horas = 0;
    custo = preco;
}

void Jogo::atualizar(float valor) 
{
    preco = valor;
    calcular();
}

void Jogo::jogar(int tempo) 
{
    horas = horas + tempo;
    calcular();
}

void Jogo::exibir() 
{
    std::cout << nome << ": R$" 
        << preco << " "
        << horas << " hora(s) R$" 
        << custo << "/hora\n";
}
