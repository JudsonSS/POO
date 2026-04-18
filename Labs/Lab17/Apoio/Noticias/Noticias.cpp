#include "String.h"
#include <iostream>
using std::cout;
using std::endl;

void Valor(String);

int main()
{
    String atual{ "Artemis II retorna à Terra" };
    String tecno{ "YouTube agora permite desativar Shorts" };

    // construtor de cópia
    Valor(atual);                             
    cout << "Atual: " << atual << endl << endl;

    // construtor de cópia
    String urgente = atual;                   
    cout << "Urgente: " << urgente << endl;

    // operador de atribuição
    urgente = tecno;                          
    cout << "Mais urgente: " << urgente << endl; 
}

void Valor(String s)
{
    cout << "Valor: " << s << "\n";
}