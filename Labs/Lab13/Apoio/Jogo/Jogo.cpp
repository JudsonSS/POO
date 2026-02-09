#include "Jogo.h"
#include <iostream>
using std::cout;

Jogo::Jogo(string nome, float preco, int horas) :
    nome_(nome), 
    preco_(preco), 
    horas_(horas)
{
}

void Jogo::Exibir()
{
    cout << nome_ << " R$"
         << preco_ << " "
         << horas_ << "h\n\n";
}
