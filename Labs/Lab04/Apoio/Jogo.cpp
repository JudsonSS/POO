// definição da classe Jogo
#include "Jogo.h"
#include <iostream>
using namespace std;

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
    cout << nome << " R$" 
        << preco << " "
        << horas << "h = R$" 
        << custo << "/h\n";
}
